import os

    from cs50 import SQL
    from flask import Flask, flash, jsonify, redirect, render_template, request, session

    app = Flask(__name__)

    app.config["TEMPLATES_AUTO_RELOAD"] = True

    db = SQL("sqlite:///birthdays.db")

    @app.route("/", methods=["GET", "POST"])
    def index():
        if request.method == "POST":

            # TODO: Add the user's entry into the database
            user_name = request.form.get("name")
            user_day = request.form.get("day")
            user_month = request.form.get("month")

            db.execute(" INSERT INTO birthdays (name, day, month) VALUES (?, ?, ?)", name, day, month,)
            return redirect("/")

        else:

            # TODO: Display the entries in the database on index.html
            entries = db.execute("SELECT * FROM birthdays")
            return render_template("index.html", entries=entries)