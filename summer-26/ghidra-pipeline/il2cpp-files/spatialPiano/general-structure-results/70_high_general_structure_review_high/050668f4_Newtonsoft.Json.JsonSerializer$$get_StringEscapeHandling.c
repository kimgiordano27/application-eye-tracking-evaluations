/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_StringEscapeHandling
ENTRY_POINT: 050668f4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Newtonsoft_Json_JsonSerializer__get_StringEscapeHandling(void)

{
  undefined4 uVar1;
  int in_w8;
  int in_w9;
  int in_w10;
  byte *in_x11;
  byte *in_x12;
  int in_w13;
  int iVar2;
  
  iVar2 = in_w9;
  do {
    if ((in_w13 == 0) || (iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*in_x11 != *in_x12) {
      if (*in_x12 <= *in_x11) {
        return 1;
      }
      return 0xffffffff;
    }
    in_x11 = in_x11 + 1;
    in_w10 = in_w10 + -1;
    in_x12 = in_x12 + 1;
    iVar2 = iVar2 + -1;
    in_w13 = in_w13 + -1;
  } while (in_w10 != 0);
  if (in_w8 == in_w9) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    if (in_w8 < in_w9) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


