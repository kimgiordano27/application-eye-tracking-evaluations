/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 05e1d530
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  long lVar1;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x29;
  
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar1 = FUN_05e1d5a0(unaff_x29 + -0x38);
  if (lVar1 == 0) {
    FUN_05cb1d58(unaff_x29 + -0x38,0);
  }
  if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


