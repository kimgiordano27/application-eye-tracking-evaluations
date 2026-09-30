/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DateTimeZoneHandling
ENTRY_POINT: 0501631c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DateTimeZoneHandling(void)

{
  undefined8 uVar1;
  int unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_02d6084c(PTR_DAT_06771080);
  *(undefined1 *)(unaff_x21 + 0x241) = 1;
  if (unaff_w19 != 0) {
    if (*(int *)(*(long *)PTR_DAT_06771080 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar1 = FUN_05016370();
    return uVar1;
  }
  return *unaff_x20;
}


