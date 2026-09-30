/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$.ctor
ENTRY_POINT: 05e27d50
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializer___ctor(ulong param_1)

{
  ushort uVar1;
  undefined1 in_ZR;
  ulong uVar2;
  uint in_w8;
  ulong in_x9;
  long in_x10;
  ushort *in_x11;
  long in_x12;
  uint uVar3;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  
  while( true ) {
    *unaff_x19 = in_w8;
    if ((bool)in_ZR) {
      return param_1;
    }
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
          return param_1;
        }
        uVar3 = uVar3 - 0x57;
      }
    }
    if (unaff_w21 <= (int)uVar3) break;
    if ((in_x9 < param_1) || (uVar2 = param_1 * in_x10 + (ulong)uVar3, uVar2 < param_1)) {
      FUN_05e28aa0();
      uVar2 = FUN_05e27da0();
      return uVar2;
    }
    in_w8 = in_w8 + 1;
    in_x12 = in_x12 + -1;
    in_ZR = in_x12 == 0;
    in_x11 = in_x11 + 1;
    param_1 = uVar2;
  }
  return param_1;
}


