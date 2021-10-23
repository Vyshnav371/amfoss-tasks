
![Screenshot from 2021-10-15 14-59-10](https://user-images.githubusercontent.com/92287455/138560466-1d40612c-f976-4ec0-9927-e8adcbea1129.png)
## Commands
cd Desktop

mkdir Coordinates-Location

cd Coordinates-Location

mkdir North

cd North

ls > NDegree.txt

echo "9°" > NDegree.txt

ls > Nminutes.txt

echo "5'" > Nminutes.txt

ls > NSeconds.txt

echo '38.1"' > Nseconds.txt

cat N* > NorthCoordinate.txt

cd ..

cp North/NorthCoordinate.txt Coordinates-Location

mv Coordinates-Location North.txt

mkdir East

cd East

ls > EDegree.txt

echo "76°" > EDegree.txt

ls > EMinutes.txt

echo "29'" > EMinutes.txt

ls > ESeconds.txt

echo '30.8"' > ESeconds.txt

cat E* > EastCoordinate.txt

cd ..

cp East/EastCoordinate.txt Coordinates-Location

mv Coordinates-Location East.txt

cat  North.txt East.txt > Location-Coordinate.txt
