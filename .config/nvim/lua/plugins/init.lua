return {
  { 
    "xiyaowong/transparent.nvim", 
    lazy = false,
    opts = {
      extra_groups = {
        "NormalFloat",
        "NvimTreeNormal",
      },
    } 
  },

  {
    "folke/tokyonight.nvim",
    lazy = false,
    priority = 1000,
    opts = {
      style = "night",
      transparent = vim.g.transparent_enabled,
    },
    config = function()
      vim.cmd.colorscheme("tokyonight")
    end,
  },

  { 
    'nvim-treesitter/nvim-treesitter',
    build = ':TSUpdate',
  },

  {
    "dstein64/vim-startuptime",
    cmd = "StartupTime",
    init = function()
      vim.g.startuptime_tries = 10
    end,
  },

  {
    "nvim-telescope/telescope.nvim",
    branch = "0.1.x",
    dependencies = {
      "nvim-lua/plenary.nvim",
      "nvim-tree/nvim-web-devicons",
    },
  },

  {
    "nvim-telescope/telescope-fzf-native.nvim",
    build = "make",
  },

  { "nvim-tree/nvim-web-devicons" },
}
