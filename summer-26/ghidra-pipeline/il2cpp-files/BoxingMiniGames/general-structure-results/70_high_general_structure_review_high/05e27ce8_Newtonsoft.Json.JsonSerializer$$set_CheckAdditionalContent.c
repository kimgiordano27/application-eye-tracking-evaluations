/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_CheckAdditionalContent
ENTRY_POINT: 05e27ce8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializer__set_CheckAdditionalContent(void)

{
  ushort uVar1;
  ulong uVar2;
  uint in_w8;
  ulong in_x9;
  long in_x10;
  ushort *in_x11;
  long in_x12;
  ulong in_x13;
  uint uVar3;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  
  while( true ) {
    if (unaff_w20 <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    uVar1 = *in_x11;
    uVar3 = uVar1 - 0x30;
    if (9 < uVar3) {
      uVar3 = (uint)uVar1;
      if (uVar1 - 0x41 < 0x1a) {
        uVar3 = uVar3 - 0x37;
      }
      else {
        if (0x19 < uVar3 - 0x61) {
          return in_x13;
        }
        uVar3 = uVar3 - 0x57;
      }
    }
    if (unaff_w21 <= (int)uVar3) break;
    if ((in_x9 < in_x13) || (uVar2 = in_x13 * in_x10 + (ulong)uVar3, uVar2 < in_x13)) {
      FUN_05e28aa0();
      uVar2 = FUN_05e27da0();
      return uVar2;
    }
    in_w8 = in_w8 + 1;
    in_x12 = in_x12 + -1;
    in_x11 = in_x11 + 1;
    *unaff_x19 = in_w8;
    in_x13 = uVar2;
    if (in_x12 == 0) {
      return uVar2;
    }
  }
  return in_x13;
}


