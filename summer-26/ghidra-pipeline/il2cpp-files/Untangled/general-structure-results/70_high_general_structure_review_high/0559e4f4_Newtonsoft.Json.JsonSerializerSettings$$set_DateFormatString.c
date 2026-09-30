/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DateFormatString
ENTRY_POINT: 0559e4f4
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(void)

{
  uint uVar1;
  int unaff_w19;
  uint unaff_w20;
  long unaff_x22;
  long unaff_x29;
  
  if (*(long *)(unaff_x29 + 0x10) != 0) {
    if (*(int *)(*(long *)(unaff_x29 + 0x10) + 0x10) < *(int *)(unaff_x22 + 0x10)) {
      FUN_0559f88c();
    }
    else {
      uVar1 = *(uint *)(unaff_x29 + 0x18);
      if (((((unaff_w20 & 0xff) != 0) && ((uVar1 & 0xff) == 0)) ||
          (((unaff_w20 & 0xff00) != 0 && ((uVar1 & 0xff00) == 0)))) &&
         (*(uint *)(unaff_x29 + 0x18) = uVar1 | unaff_w20, unaff_w19 != 0)) {
        *(int *)(unaff_x29 + 0x1c) = unaff_w19;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


