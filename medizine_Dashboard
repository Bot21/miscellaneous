import 'package:flutter/material.dart';

void main() => runApp(MaterialApp(
      home: InfoList(),
    ));

class InfoList extends StatefulWidget {
  const InfoList({Key? key}) : super(key: key);

  @override
  _InfoListState createState() => _InfoListState();
}

class _InfoListState extends State<InfoList> {
  List info = [
    Info("New Cases Today", 12366),
    Info("New Recoveries Today", 7567),
    Info("New Deaths Today", 93),
    Info("Total Active Cases", 133703),
  ];

  Widget infoCard(info) {
    return new InfoSource(info);
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.grey[900],
      appBar: AppBar(
        title: Text(
          "Covid-19 Dashboard",
          style: TextStyle(
            color: Colors.black,
          ),
        ),
        centerTitle: true,
        backgroundColor: Colors.amberAccent,
      ),
      body: Container(
        decoration: BoxDecoration(
          image: DecorationImage(
            image: NetworkImage("https://wallpapercave.com/wp/wp8108444.jpg"),
            fit: BoxFit.cover,
          ),
        ),
        child: ListView(children: [
          Picto(),
          Column(
            children: info.map((info) {
              return infoCard(info);
            }).toList(),
          ),
        ]),
      ),
    );
  }
}

class InfoSource extends StatefulWidget {
  final Info info;

  InfoSource(this.info);

  @override
  _InfoSourceState createState() => _InfoSourceState(info);
}

class _InfoSourceState extends State<InfoSource> {
  final Info info;

  _InfoSourceState(this.info);

  @override
  Widget build(BuildContext context) {
    return Card(
      color: Colors.black.withOpacity(0.6),
      margin: EdgeInsets.fromLTRB(16.0, 16.0, 16.0, 0.0),
      child: Padding(
        padding: EdgeInsets.all(10.0),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.stretch,
          children: [
            Text(
              "${info.text}",
              style: TextStyle(
                letterSpacing: 1.5,
                fontSize: 20.0,
                color: Colors.white,
              ),
            ),
            SizedBox(height: 5.0),
            Text(
              "${info.stats}",
              style: TextStyle(
                fontSize: 30.0,
                color: Colors.pinkAccent,
                fontWeight: FontWeight.bold,
              ),
            ),
            SizedBox(height: 5.0),
            Row(mainAxisAlignment: MainAxisAlignment.end, children: [
              Text(
                " = ${info.results}",
                style: TextStyle(
                  fontSize: 25.0,
                  fontWeight: FontWeight.bold,
                  color: Colors.amberAccent,
                ),
              ),
              SizedBox(width: 5.0),
              Icon(
                Icons.house,
                size: 50.0,
                color: Colors.amberAccent,
              ),
            ]),
          ],
        ),
      ),
    );
  }
}

class Picto extends StatefulWidget {
  @override
  _PictoState createState() => _PictoState();
}

class _PictoState extends State<Picto> {
  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: EdgeInsets.fromLTRB(10.0, 10.0, 10.0, 0.0),
      child: Row(children: [
        Icon(
          Icons.house,
          color: Colors.amberAccent,
          size: 50.0,
        ),
        Text(
          "= 4",
          style: TextStyle(
            color: Colors.amberAccent,
            fontSize: 25.0,
          ),
        ),
        Icon(
          Icons.person,
          color: Colors.amberAccent,
          size: 40.0,
        ),
      ]),
    );
  }
}

class Info {
  String text = "John";
  dynamic stats;
  dynamic results;

  Info(String text, dynamic stats) {
    this.text = text;
    this.stats = stats;

    results = stats / 4.03;
    results = results.toStringAsFixed(0);
  }
}
