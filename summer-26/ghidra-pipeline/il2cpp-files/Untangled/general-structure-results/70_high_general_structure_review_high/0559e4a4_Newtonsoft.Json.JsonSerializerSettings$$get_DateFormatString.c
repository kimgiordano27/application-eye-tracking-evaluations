/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateFormatString
ENTRY_POINT: 0559e4a4
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_DateFormatString(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x21;
  long unaff_x23;
  uint unaff_w24;
  long *unaff_x27;
  
  if ((unaff_x23 != 0) && (lVar1 = thunk_FUN_02ef170c(), lVar1 == 0)) {
    uVar2 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar2,0);
  }
  if (unaff_w24 < *(uint *)(unaff_x21 + 0x18)) {
    *unaff_x27 = unaff_x23;
    thunk_FUN_02f411dc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


