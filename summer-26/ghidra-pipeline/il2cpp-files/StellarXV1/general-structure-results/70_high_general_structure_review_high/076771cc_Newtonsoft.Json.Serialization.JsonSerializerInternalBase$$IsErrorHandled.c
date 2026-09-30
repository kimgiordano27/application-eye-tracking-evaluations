/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$IsErrorHandled
ENTRY_POINT: 076771cc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__IsErrorHandled(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 in_w8;
  undefined4 unaff_w19;
  undefined4 uVar4;
  long unaff_x21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xe54) = in_w8;
  puVar1 = PTR_DAT_092d6630;
  if (unaff_x21 == 0) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_074e3264();
    uVar4 = *(undefined4 *)(unaff_x21 + 0x10);
  }
  uVar3 = FUN_075f4f5c();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)puVar1);
  }
  FUN_07675f90(uVar2,uVar4,unaff_w19,uVar3);
  return;
}


