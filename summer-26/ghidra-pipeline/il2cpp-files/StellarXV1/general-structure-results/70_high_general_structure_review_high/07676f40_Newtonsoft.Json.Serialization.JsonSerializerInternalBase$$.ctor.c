/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$.ctor
ENTRY_POINT: 07676f40
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase___ctor(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long unaff_x19;
  long unaff_x20;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xc88));
  *(undefined1 *)(unaff_x20 + 0xe54) = 1;
  puVar1 = PTR_DAT_092d6630;
  if (unaff_x19 == 0) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_074e3264();
    uVar4 = *(undefined4 *)(unaff_x19 + 0x10);
  }
  uVar3 = FUN_075f50fc(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)puVar1);
  }
  FUN_07675f90(uVar2,uVar4,7,uVar3);
  return;
}


