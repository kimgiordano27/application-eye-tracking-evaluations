/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Formatting
ENTRY_POINT: 0747c6b4
PROGRAM: m3ar-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializerSettings__get_Formatting(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x21;
  
  if (unaff_x19 == 0) {
    if (*(int *)(*(long *)PTR_DAT_08f656c8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar1 = FUN_074752e8(0);
    if (lVar1 == 0) {
      unaff_x19 = 0;
    }
    else {
      unaff_x19 = thunk_FUN_0406deb8(*unaff_x21);
      FUN_0747c730(unaff_x19,lVar1);
    }
    lVar1 = FUN_0406a6bc(*(undefined8 *)(*unaff_x21 + 0xb8),unaff_x19,0);
    if (lVar1 != 0) {
      unaff_x19 = **(long **)(*unaff_x21 + 0xb8);
    }
  }
  return unaff_x19;
}


