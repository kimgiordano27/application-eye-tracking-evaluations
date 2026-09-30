/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TypeNameAssemblyFormatHandling
ENTRY_POINT: 07a4f9ac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TypeNameAssemblyFormatHandling(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long unaff_x20;
  long unaff_x21;
  char unaff_w22;
  long *unaff_x23;
  
  FUN_04447ba8();
  *(undefined1 *)(unaff_x21 + 0x28) = 1;
  if (unaff_x20 == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_078b1c78();
    uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_07a39b44((int)unaff_w22,uVar1,uVar2);
  return;
}


