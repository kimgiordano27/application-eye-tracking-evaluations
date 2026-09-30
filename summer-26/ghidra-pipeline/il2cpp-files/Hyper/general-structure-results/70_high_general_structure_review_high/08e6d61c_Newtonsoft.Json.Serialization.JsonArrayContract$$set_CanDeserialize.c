/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$set_CanDeserialize
ENTRY_POINT: 08e6d61c
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonArrayContract__set_CanDeserialize(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 *unaff_x19;
  long *unaff_x27;
  
  uVar3 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
  uVar3 = FUN_05c7e4a8(uVar3,*(undefined8 *)PTR_DAT_0ac6d6d0);
  puVar2 = PTR_DAT_0ac6d6c8;
  iVar1 = *(int *)(*unaff_x27 + 0xe4);
  *unaff_x19 = 0xfffffffe;
  if (iVar1 == 0) {
    thunk_FUN_049a583c();
  }
  FUN_07b6c5d8(unaff_x19 + 2,uVar3,*(undefined8 *)puVar2);
  return;
}


