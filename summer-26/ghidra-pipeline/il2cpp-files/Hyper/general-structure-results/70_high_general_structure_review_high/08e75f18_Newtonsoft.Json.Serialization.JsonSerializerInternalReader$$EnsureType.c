/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureType
ENTRY_POINT: 08e75f18
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000028;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0x260));
  FUN_04947ee4(PTR_DAT_0ac0e268);
  FUN_04947ee4(PTR_DAT_0ac12198);
  FUN_04947ee4(PTR_DAT_0ac09aa0);
  FUN_04947ee4(PTR_DAT_0ac6da30);
  FUN_04947ee4(PTR_DAT_0ac10e80);
  FUN_04947ee4(PTR_DAT_0ac6da38);
  FUN_04947ee4(PTR_DAT_0ac6da40);
  FUN_04947ee4(PTR_DAT_0ac6da48);
  FUN_04947ee4(PTR_DAT_0ac10648);
  FUN_04947ee4(PTR_DAT_0ac121f0);
  FUN_04947ee4(PTR_DAT_0ac6d6f0);
  FUN_04947ee4(PTR_DAT_0ac16e20);
  FUN_04947ee4(PTR_DAT_0ac09810);
  FUN_04947ee4(PTR_DAT_0ac6d6f8);
  FUN_04947ee4(PTR_DAT_0ac6da50);
  *(undefined1 *)(unaff_x20 + 0xf2b) = 1;
  puVar1 = PTR_DAT_0ac6c978;
  in_stack_00000028 = 0;
  if (*unaff_x19 != 0) {
    FUN_0a562368(PTR_DAT_0ac6da48);
    return;
  }
  in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x1c);
  unaff_x19[0x1c] = 0;
  unaff_x19[0x1d] = 0;
  *unaff_x19 = -1;
  uVar3 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
  uVar3 = FUN_05c7e4a8(uVar3,*(undefined8 *)PTR_DAT_0ac6da28);
  *unaff_x19 = -2;
  puVar2 = PTR_DAT_0ac6da20;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_07b6c5d8(unaff_x19 + 2,uVar3,*(undefined8 *)puVar2);
  return;
}


