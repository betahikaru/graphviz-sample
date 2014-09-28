guard 'shell' do
  watch(%r{(.+)\.dot$}) do |s|
    `echo #{s[0]} && dot -Tpng -o #{s[1]}.png #{s[1]}.dot`
  end
end
