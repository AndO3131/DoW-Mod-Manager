﻿namespace DoW_Mod_Manager
{
    partial class ModManagerForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(ModManagerForm));
            this.currentDirTextBox = new System.Windows.Forms.TextBox();
            this.currentDirectoryLabel = new System.Windows.Forms.Label();
            this.installedModsLabel = new System.Windows.Forms.Label();
            this.requiredModsLabel = new System.Windows.Forms.Label();
            this.InstalledModsList = new System.Windows.Forms.ListBox();
            this.RequiredModsList = new System.Windows.Forms.ListBox();
            this.startModButton = new System.Windows.Forms.Button();
            this.pictureBox = new System.Windows.Forms.PictureBox();
            this.authorLabel = new System.Windows.Forms.Label();
            this.AdvancedStartOptionsLabel = new System.Windows.Forms.Label();
            this.devCheckBox = new System.Windows.Forms.CheckBox();
            this.nomoviesCheckBox = new System.Windows.Forms.CheckBox();
            this.highpolyCheckBox = new System.Windows.Forms.CheckBox();
            this.MergeButton = new System.Windows.Forms.Button();
            this.startVanillaButton = new System.Windows.Forms.Button();
            this.SoulstormLAAStatusLabel = new System.Windows.Forms.Label();
            this.GraphicsConfigLAAStatusLabel = new System.Windows.Forms.Label();
            this.panel1 = new System.Windows.Forms.Panel();
            this.splitContainer1 = new System.Windows.Forms.SplitContainer();
            this.toggleLAAButton = new System.Windows.Forms.Button();
            this.fileSystemWatcher1 = new System.IO.FileSystemWatcher();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox)).BeginInit();
            this.panel1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer1)).BeginInit();
            this.splitContainer1.Panel1.SuspendLayout();
            this.splitContainer1.Panel2.SuspendLayout();
            this.splitContainer1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.fileSystemWatcher1)).BeginInit();
            this.SuspendLayout();
            // 
            // currentDirTextBox
            // 
            this.currentDirTextBox.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.currentDirTextBox.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(40)))), ((int)(((byte)(40)))), ((int)(((byte)(40)))));
            this.currentDirTextBox.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(200)))), ((int)(((byte)(200)))), ((int)(((byte)(200)))));
            this.currentDirTextBox.Location = new System.Drawing.Point(179, 6);
            this.currentDirTextBox.Name = "currentDirTextBox";
            this.currentDirTextBox.ReadOnly = true;
            this.currentDirTextBox.Size = new System.Drawing.Size(627, 20);
            this.currentDirTextBox.TabIndex = 0;
            // 
            // currentDirectoryLabel
            // 
            this.currentDirectoryLabel.AutoSize = true;
            this.currentDirectoryLabel.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(200)))), ((int)(((byte)(200)))), ((int)(((byte)(200)))));
            this.currentDirectoryLabel.Location = new System.Drawing.Point(16, 9);
            this.currentDirectoryLabel.Name = "currentDirectoryLabel";
            this.currentDirectoryLabel.Size = new System.Drawing.Size(157, 13);
            this.currentDirectoryLabel.TabIndex = 1;
            this.currentDirectoryLabel.Text = "Your current Soulstorm directory";
            // 
            // installedModsLabel
            // 
            this.installedModsLabel.AutoSize = true;
            this.installedModsLabel.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(200)))), ((int)(((byte)(200)))), ((int)(((byte)(200)))));
            this.installedModsLabel.Location = new System.Drawing.Point(3, 0);
            this.installedModsLabel.Name = "installedModsLabel";
            this.installedModsLabel.Size = new System.Drawing.Size(119, 13);
            this.installedModsLabel.TabIndex = 5;
            this.installedModsLabel.Text = "Currently Installed Mods";
            // 
            // requiredModsLabel
            // 
            this.requiredModsLabel.AutoSize = true;
            this.requiredModsLabel.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(200)))), ((int)(((byte)(200)))), ((int)(((byte)(200)))));
            this.requiredModsLabel.Location = new System.Drawing.Point(7, 0);
            this.requiredModsLabel.Name = "requiredModsLabel";
            this.requiredModsLabel.Size = new System.Drawing.Size(79, 13);
            this.requiredModsLabel.TabIndex = 7;
            this.requiredModsLabel.Text = "Required Mods";
            // 
            // InstalledModsList
            // 
            this.InstalledModsList.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.InstalledModsList.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(40)))), ((int)(((byte)(40)))), ((int)(((byte)(40)))));
            this.InstalledModsList.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(200)))), ((int)(((byte)(200)))), ((int)(((byte)(200)))));
            this.InstalledModsList.FormattingEnabled = true;
            this.InstalledModsList.Location = new System.Drawing.Point(6, 23);
            this.InstalledModsList.Margin = new System.Windows.Forms.Padding(10);
            this.InstalledModsList.Name = "InstalledModsList";
            this.InstalledModsList.ScrollAlwaysVisible = true;
            this.InstalledModsList.Size = new System.Drawing.Size(380, 381);
            this.InstalledModsList.TabIndex = 10;
            this.InstalledModsList.SelectedIndexChanged += new System.EventHandler(this.InstalledModsList_SelectedIndexChanged);
            // 
            // RequiredModsList
            // 
            this.RequiredModsList.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.RequiredModsList.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(40)))), ((int)(((byte)(40)))), ((int)(((byte)(40)))));
            this.RequiredModsList.DrawMode = System.Windows.Forms.DrawMode.OwnerDrawFixed;
            this.RequiredModsList.FormattingEnabled = true;
            this.RequiredModsList.Location = new System.Drawing.Point(8, 23);
            this.RequiredModsList.Margin = new System.Windows.Forms.Padding(10);
            this.RequiredModsList.Name = "RequiredModsList";
            this.RequiredModsList.ScrollAlwaysVisible = true;
            this.RequiredModsList.Size = new System.Drawing.Size(388, 381);
            this.RequiredModsList.TabIndex = 10;
            this.RequiredModsList.DrawItem += new System.Windows.Forms.DrawItemEventHandler(this.RequiredModsList_DrawItem);
            // 
            // startModButton
            // 
            this.startModButton.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.startModButton.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(90)))), ((int)(((byte)(90)))), ((int)(((byte)(90)))));
            this.startModButton.Enabled = false;
            this.startModButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.startModButton.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(200)))), ((int)(((byte)(200)))), ((int)(((byte)(200)))));
            this.startModButton.Location = new System.Drawing.Point(632, 32);
            this.startModButton.Name = "startModButton";
            this.startModButton.Size = new System.Drawing.Size(121, 48);
            this.startModButton.TabIndex = 11;
            this.startModButton.Text = "START MOD";
            this.startModButton.UseVisualStyleBackColor = false;
            this.startModButton.Click += new System.EventHandler(this.StartButton_Click);
            // 
            // pictureBox
            // 
            this.pictureBox.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.pictureBox.ErrorImage = null;
            this.pictureBox.InitialImage = null;
            this.pictureBox.Location = new System.Drawing.Point(759, 32);
            this.pictureBox.Name = "pictureBox";
            this.pictureBox.Size = new System.Drawing.Size(50, 50);
            this.pictureBox.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox.TabIndex = 12;
            this.pictureBox.TabStop = false;
            // 
            // authorLabel
            // 
            this.authorLabel.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.authorLabel.AutoSize = true;
            this.authorLabel.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(200)))), ((int)(((byte)(200)))), ((int)(((byte)(200)))));
            this.authorLabel.Location = new System.Drawing.Point(16, 544);
            this.authorLabel.Name = "authorLabel";
            this.authorLabel.Size = new System.Drawing.Size(111, 13);
            this.authorLabel.TabIndex = 13;
            this.authorLabel.Text = "Written by FragJacker";
            // 
            // AdvancedStartOptionsLabel
            // 
            this.AdvancedStartOptionsLabel.AutoSize = true;
            this.AdvancedStartOptionsLabel.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(200)))), ((int)(((byte)(200)))), ((int)(((byte)(200)))));
            this.AdvancedStartOptionsLabel.Location = new System.Drawing.Point(18, 48);
            this.AdvancedStartOptionsLabel.Name = "AdvancedStartOptionsLabel";
            this.AdvancedStartOptionsLabel.Size = new System.Drawing.Size(123, 13);
            this.AdvancedStartOptionsLabel.TabIndex = 14;
            this.AdvancedStartOptionsLabel.Text = "Advanced Start Options:";
            // 
            // devCheckBox
            // 
            this.devCheckBox.AutoSize = true;
            this.devCheckBox.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(200)))), ((int)(((byte)(200)))), ((int)(((byte)(200)))));
            this.devCheckBox.Location = new System.Drawing.Point(18, 69);
            this.devCheckBox.Name = "devCheckBox";
            this.devCheckBox.Size = new System.Drawing.Size(137, 17);
            this.devCheckBox.TabIndex = 15;
            this.devCheckBox.Text = "-dev: Developers Mode";
            this.devCheckBox.UseVisualStyleBackColor = true;
            this.devCheckBox.CheckedChanged += new System.EventHandler(this.DevCheckBox_CheckedChanged);
            // 
            // nomoviesCheckBox
            // 
            this.nomoviesCheckBox.AutoSize = true;
            this.nomoviesCheckBox.Checked = true;
            this.nomoviesCheckBox.CheckState = System.Windows.Forms.CheckState.Checked;
            this.nomoviesCheckBox.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(200)))), ((int)(((byte)(200)))), ((int)(((byte)(200)))));
            this.nomoviesCheckBox.Location = new System.Drawing.Point(18, 83);
            this.nomoviesCheckBox.Name = "nomoviesCheckBox";
            this.nomoviesCheckBox.Size = new System.Drawing.Size(155, 17);
            this.nomoviesCheckBox.TabIndex = 16;
            this.nomoviesCheckBox.Text = "-nomovies: No Intro Movies";
            this.nomoviesCheckBox.UseVisualStyleBackColor = true;
            this.nomoviesCheckBox.CheckedChanged += new System.EventHandler(this.NomoviesCheckBox_CheckedChanged);
            // 
            // highpolyCheckBox
            // 
            this.highpolyCheckBox.AutoSize = true;
            this.highpolyCheckBox.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(200)))), ((int)(((byte)(200)))), ((int)(((byte)(200)))));
            this.highpolyCheckBox.Location = new System.Drawing.Point(18, 97);
            this.highpolyCheckBox.Name = "highpolyCheckBox";
            this.highpolyCheckBox.Size = new System.Drawing.Size(256, 17);
            this.highpolyCheckBox.TabIndex = 17;
            this.highpolyCheckBox.Text = "-forcehighpoly: High Poly models at any Distance";
            this.highpolyCheckBox.UseVisualStyleBackColor = true;
            this.highpolyCheckBox.CheckedChanged += new System.EventHandler(this.HighpolyCheckBox_CheckedChanged);
            // 
            // MergeButton
            // 
            this.MergeButton.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.MergeButton.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(90)))), ((int)(((byte)(90)))), ((int)(((byte)(90)))));
            this.MergeButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.MergeButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F);
            this.MergeButton.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(200)))), ((int)(((byte)(200)))), ((int)(((byte)(200)))));
            this.MergeButton.Location = new System.Drawing.Point(568, 82);
            this.MergeButton.Name = "MergeButton";
            this.MergeButton.Size = new System.Drawing.Size(121, 43);
            this.MergeButton.TabIndex = 18;
            this.MergeButton.Text = "Merge Mods...";
            this.MergeButton.UseVisualStyleBackColor = false;
            this.MergeButton.Click += new System.EventHandler(this.ModMergeButton_Click);
            // 
            // startVanillaButton
            // 
            this.startVanillaButton.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.startVanillaButton.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(90)))), ((int)(((byte)(90)))), ((int)(((byte)(90)))));
            this.startVanillaButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.startVanillaButton.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(200)))), ((int)(((byte)(200)))), ((int)(((byte)(200)))));
            this.startVanillaButton.Location = new System.Drawing.Point(505, 32);
            this.startVanillaButton.Name = "startVanillaButton";
            this.startVanillaButton.Size = new System.Drawing.Size(121, 48);
            this.startVanillaButton.TabIndex = 19;
            this.startVanillaButton.Text = "START BASE GAME";
            this.startVanillaButton.UseVisualStyleBackColor = false;
            this.startVanillaButton.Click += new System.EventHandler(this.StartVanillaGameButton_Click);
            // 
            // SoulstormLAAStatusLabel
            // 
            this.SoulstormLAAStatusLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.SoulstormLAAStatusLabel.Location = new System.Drawing.Point(315, 82);
            this.SoulstormLAAStatusLabel.Margin = new System.Windows.Forms.Padding(3);
            this.SoulstormLAAStatusLabel.Name = "SoulstormLAAStatusLabel";
            this.SoulstormLAAStatusLabel.Size = new System.Drawing.Size(210, 15);
            this.SoulstormLAAStatusLabel.TabIndex = 20;
            this.SoulstormLAAStatusLabel.Text = "Soulstorm.exe: LAA Active";
            // 
            // GraphicsConfigLAAStatusLabel
            // 
            this.GraphicsConfigLAAStatusLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.GraphicsConfigLAAStatusLabel.Location = new System.Drawing.Point(315, 96);
            this.GraphicsConfigLAAStatusLabel.Margin = new System.Windows.Forms.Padding(3);
            this.GraphicsConfigLAAStatusLabel.Name = "GraphicsConfigLAAStatusLabel";
            this.GraphicsConfigLAAStatusLabel.Size = new System.Drawing.Size(210, 15);
            this.GraphicsConfigLAAStatusLabel.TabIndex = 21;
            this.GraphicsConfigLAAStatusLabel.Text = "GraphicsConfig.exe: LAA Active";
            // 
            // panel1
            // 
            this.panel1.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.panel1.Controls.Add(this.splitContainer1);
            this.panel1.Location = new System.Drawing.Point(12, 131);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(804, 413);
            this.panel1.TabIndex = 22;
            // 
            // splitContainer1
            // 
            this.splitContainer1.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.splitContainer1.Location = new System.Drawing.Point(0, 3);
            this.splitContainer1.Name = "splitContainer1";
            // 
            // splitContainer1.Panel1
            // 
            this.splitContainer1.Panel1.Controls.Add(this.installedModsLabel);
            this.splitContainer1.Panel1.Controls.Add(this.InstalledModsList);
            // 
            // splitContainer1.Panel2
            // 
            this.splitContainer1.Panel2.Controls.Add(this.requiredModsLabel);
            this.splitContainer1.Panel2.Controls.Add(this.RequiredModsList);
            this.splitContainer1.Size = new System.Drawing.Size(801, 407);
            this.splitContainer1.SplitterDistance = 394;
            this.splitContainer1.TabIndex = 23;
            // 
            // toggleLAAButton
            // 
            this.toggleLAAButton.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(90)))), ((int)(((byte)(90)))), ((int)(((byte)(90)))));
            this.toggleLAAButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.toggleLAAButton.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(200)))), ((int)(((byte)(200)))), ((int)(((byte)(200)))));
            this.toggleLAAButton.Location = new System.Drawing.Point(318, 42);
            this.toggleLAAButton.Name = "toggleLAAButton";
            this.toggleLAAButton.Size = new System.Drawing.Size(104, 31);
            this.toggleLAAButton.TabIndex = 23;
            this.toggleLAAButton.Text = "TOGGLE LAA";
            this.toggleLAAButton.UseVisualStyleBackColor = false;
            this.toggleLAAButton.Click += new System.EventHandler(this.ButtonToggleLAA_Click);
            // 
            // fileSystemWatcher1
            // 
            this.fileSystemWatcher1.EnableRaisingEvents = true;
            this.fileSystemWatcher1.SynchronizingObject = this;
            // 
            // ModManagerForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(60)))), ((int)(((byte)(60)))), ((int)(((byte)(60)))));
            this.ClientSize = new System.Drawing.Size(828, 561);
            this.Controls.Add(this.toggleLAAButton);
            this.Controls.Add(this.panel1);
            this.Controls.Add(this.SoulstormLAAStatusLabel);
            this.Controls.Add(this.GraphicsConfigLAAStatusLabel);
            this.Controls.Add(this.startVanillaButton);
            this.Controls.Add(this.MergeButton);
            this.Controls.Add(this.highpolyCheckBox);
            this.Controls.Add(this.nomoviesCheckBox);
            this.Controls.Add(this.devCheckBox);
            this.Controls.Add(this.AdvancedStartOptionsLabel);
            this.Controls.Add(this.authorLabel);
            this.Controls.Add(this.pictureBox);
            this.Controls.Add(this.startModButton);
            this.Controls.Add(this.currentDirectoryLabel);
            this.Controls.Add(this.currentDirTextBox);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MinimumSize = new System.Drawing.Size(800, 600);
            this.Name = "ModManagerForm";
            this.Text = "DoW Mod Manager v1.57";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.ModManagerForm_Closing);
            this.Load += new System.EventHandler(this.ModManagerForm_Load);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox)).EndInit();
            this.panel1.ResumeLayout(false);
            this.splitContainer1.Panel1.ResumeLayout(false);
            this.splitContainer1.Panel1.PerformLayout();
            this.splitContainer1.Panel2.ResumeLayout(false);
            this.splitContainer1.Panel2.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.splitContainer1)).EndInit();
            this.splitContainer1.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.fileSystemWatcher1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();
        }

        #endregion

        private System.Windows.Forms.TextBox currentDirTextBox;
        private System.Windows.Forms.Label currentDirectoryLabel;
        private System.Windows.Forms.Label installedModsLabel;
        private System.Windows.Forms.Label requiredModsLabel;
        private System.Windows.Forms.ListBox RequiredModsList;
        private System.Windows.Forms.Button startModButton;
        private System.Windows.Forms.PictureBox pictureBox;
        private System.Windows.Forms.Label authorLabel;
        private System.Windows.Forms.Label AdvancedStartOptionsLabel;
        private System.Windows.Forms.CheckBox devCheckBox;
        private System.Windows.Forms.CheckBox nomoviesCheckBox;
        private System.Windows.Forms.CheckBox highpolyCheckBox;
        private System.Windows.Forms.Button MergeButton;
        private System.Windows.Forms.ListBox InstalledModsList;
        private System.Windows.Forms.Button startVanillaButton;
        private System.Windows.Forms.Label SoulstormLAAStatusLabel;
        private System.Windows.Forms.Label GraphicsConfigLAAStatusLabel;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.SplitContainer splitContainer1;
        private System.Windows.Forms.Button toggleLAAButton;
        private System.IO.FileSystemWatcher fileSystemWatcher1;
    }
}

