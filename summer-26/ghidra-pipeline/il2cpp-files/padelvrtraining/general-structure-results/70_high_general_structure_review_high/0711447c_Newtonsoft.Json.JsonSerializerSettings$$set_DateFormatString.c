/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DateFormatString
ENTRY_POINT: 0711447c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined8 unaff_x23;
  uint unaff_w24;
  undefined8 *unaff_x27;
  
  lVar1 = thunk_FUN_03d2ee44();
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar2,0);
  }
  if (unaff_w24 < *(uint *)(unaff_x21 + 0x18)) {
    *unaff_x27 = unaff_x23;
    thunk_FUN_03d1023c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


