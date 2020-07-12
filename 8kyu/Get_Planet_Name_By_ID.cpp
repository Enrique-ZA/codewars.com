std::string get_planet_name(int id)
{
  switch(id) {
    case 1:
      return "Mercury";
      break;
    case 2:
      return "Venus";
      break;
    case 3:
      return "Earth";
      break;
    case 4:
      return "Mars";
      break;
    case 5:
      return "Jupiter";
    case 6:
      return "Saturn";
    case 7:
      return "Uranus";
    case 8:
      return "Neptune";
      break;
    default:
      break;
  }
}
