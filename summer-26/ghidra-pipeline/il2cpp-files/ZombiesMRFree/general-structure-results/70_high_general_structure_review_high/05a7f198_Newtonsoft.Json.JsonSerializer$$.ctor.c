/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$.ctor
ENTRY_POINT: 05a7f198
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  uint uVar4;
  undefined4 unaff_w22;
  undefined8 *unaff_x23;
  uint unaff_w24;
  long lVar5;
  long unaff_x25;
  long unaff_x26;
  long in_stack_00000000;
  int in_stack_00000028;
  
  puVar2 = PTR_DAT_06f6dce0;
  lVar3 = *(long *)PTR_DAT_06f6dce0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar3 = *(long *)puVar2;
  }
  *(undefined2 *)(unaff_x20 + unaff_x26 * 2) = *(undefined2 *)(*(long *)(lVar3 + 0xb8) + 10);
  lVar3 = 0;
  if (unaff_w24 == 0) {
    lVar3 = unaff_x25;
  }
  uVar4 = *(uint *)(lVar3 + 8);
  uVar1 = in_stack_00000028 + (unaff_w24 ^ 1);
  lVar5 = *(long *)PTR_DAT_06fa3c88;
  if (uVar4 < uVar1) {
    FUN_05b0fafc(0);
    uVar4 = *(uint *)(lVar3 + 8);
  }
  if ((*(byte *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  FUN_04b2f994(&stack0x00000010,in_stack_00000000 + (long)(int)uVar1 * 2,uVar4 - uVar1,*unaff_x23);
  *unaff_x19 = unaff_w22;
  return 1;
}


