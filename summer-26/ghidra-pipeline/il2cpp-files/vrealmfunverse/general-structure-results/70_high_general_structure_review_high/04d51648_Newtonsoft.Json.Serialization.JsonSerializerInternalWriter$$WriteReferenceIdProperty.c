/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReferenceIdProperty
ENTRY_POINT: 04d51648
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReferenceIdProperty
               (ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 unaff_x21;
  long *plVar4;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631eae0);
    FUN_02b3c81c(PTR_DAT_06332a90);
    FUN_02b3c81c(PTR_DAT_0631e7a0);
    *(undefined1 *)(unaff_x22 + 0x705) = 1;
  }
  puVar1 = PTR_DAT_0631e7a0;
  FUN_04dbdb8c(param_2,0);
  *(undefined8 *)(param_2 + 0x10) = unaff_x21;
  thunk_FUN_02bb0e9c();
  plVar4 = (long *)(param_2 + 0x40);
  *plVar4 = unaff_x20;
  thunk_FUN_02bb0e9c(plVar4);
  puVar2 = PTR_DAT_06332a90;
  if (*plVar4 != 0) {
    uVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631eae0);
    FUN_04cf65d0(uVar3,0,*(undefined8 *)puVar2,0);
    *(undefined8 *)(param_2 + 0x28) = uVar3;
    thunk_FUN_02bb0e9c((undefined8 *)(param_2 + 0x28),uVar3);
  }
  uVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_04ddd420(uVar3,0,0);
  *(undefined8 *)(param_2 + 0x20) = uVar3;
  thunk_FUN_02bb0e9c((undefined8 *)(param_2 + 0x20),uVar3);
  return;
}


