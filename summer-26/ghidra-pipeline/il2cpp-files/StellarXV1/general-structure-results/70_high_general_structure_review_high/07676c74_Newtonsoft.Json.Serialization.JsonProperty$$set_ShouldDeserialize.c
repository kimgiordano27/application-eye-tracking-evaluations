/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$set_ShouldDeserialize
ENTRY_POINT: 07676c74
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


void Newtonsoft_Json_Serialization_JsonProperty__set_ShouldDeserialize(ulong param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 *unaff_x19;
  undefined4 uVar4;
  long unaff_x20;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_092d6630);
    *(undefined1 *)(unaff_x21 + 0x1be) = 1;
  }
  uVar1 = *unaff_x19;
  if (DAT_0988ae54 == '\0') {
    FUN_04077588(PTR_DAT_092b9c88);
    DAT_0988ae54 = '\x01';
  }
  puVar2 = PTR_DAT_092d6630;
  if (unaff_x20 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_074e3264();
    uVar4 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_07674d4c(uVar1,uVar3,uVar4,0);
  return;
}


