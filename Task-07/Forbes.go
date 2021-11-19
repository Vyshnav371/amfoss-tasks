package main

import (
	"encoding/csv"
	"fmt"
	"log"
	"os"

	"github.com/gocolly/colly"
)

func main() {
	fName := "richest1.csv"
	file, err := os.Create(fName)
	if err != nil {
		log.Fatalf("Could not create,err :%q", err)
		return
	}
	defer file.Close()

	writer := csv.NewWriter(file)
	defer writer.Flush()

	c := colly.NewCollector()

	c.OnError(func(_ *colly.Response, err error) {
		fmt.Println("Error:", err.Error())
	})

	c.OnResponse(func(r *colly.Response) {
		fmt.Println(r.Request.URL)
	})

	c.OnHTML("tbody tr", func(e *colly.HTMLElement) {
		writer.Write([]string{
			e.ChildText("a"),
			e.ChildText("span"),
		})
		fmt.Println(string(e.Text))
	})

	c.Visit("https://www.forbes.com/real-time-billionaires/#1ea2e2cd3d78")

	log.Printf("Scraping Complete")
	log.Println(c)

}
