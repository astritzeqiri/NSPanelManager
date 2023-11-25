# Generated by Django 4.2.6 on 2023-11-25 20:27

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('web', '0037_remove_relaygroup_relay_group_bindings_and_more'),
    ]

    operations = [
        migrations.AddField(
            model_name='nspanel',
            name='register_relay1_as_light',
            field=models.BooleanField(default=False),
        ),
        migrations.AddField(
            model_name='nspanel',
            name='register_relay2_as_light',
            field=models.BooleanField(default=False),
        ),
        migrations.AddField(
            model_name='relaygroup',
            name='register_as_light',
            field=models.BooleanField(default=False),
        ),
    ]
