/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ObjectCreationHandling
ENTRY_POINT: 05a7ee48
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_ObjectCreationHandling(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  uint unaff_w22;
  long lVar10;
  undefined8 uVar11;
  uint unaff_w26;
  long *unaff_x27;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  uVar5 = FUN_03cf8674();
  uVar6 = FUN_03cf8674();
  uVar7 = FUN_05b3c254();
  uVar5 = FUN_05b3c254(uVar5,0);
  uVar6 = FUN_05b3c254(uVar6,0);
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  FUN_04ec6c60(&stack0x00000080,uVar7,unaff_w21,uVar5,unaff_w20,uVar6,unaff_w19,unaff_w22 & 1);
  lVar8 = *unaff_x27;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar8 = *unaff_x27;
  }
  uVar4 = in_stack_000000a8;
  uVar3 = in_stack_000000a0;
  uVar2 = in_stack_00000098;
  uVar7 = in_stack_00000090;
  uVar6 = in_stack_00000088;
  uVar5 = in_stack_00000080;
  puVar1 = PTR_DAT_06faa1d8;
  lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar8 = *unaff_x27;
    }
    uVar11 = **(undefined8 **)(lVar8 + 0xb8);
    lVar10 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06faa1d0);
    FUN_04ba4c58(lVar10,uVar11,*(undefined8 *)PTR_DAT_06faa1e0,0);
    plVar9 = (long *)(*(long *)(*unaff_x27 + 0xb8) + 0x10);
    *plVar9 = lVar10;
    thunk_FUN_03048534(plVar9,lVar10);
  }
  in_stack_00000080 = uVar5;
  in_stack_00000088 = uVar6;
  in_stack_00000090 = uVar7;
  in_stack_00000098 = uVar2;
  in_stack_000000a0 = uVar3;
  in_stack_000000a8 = uVar4;
  FUN_03db211c(unaff_w20 + unaff_w21 + unaff_w19 + (~unaff_w22 & 1) + (~unaff_w26 & 1),
               &stack0x00000080,lVar10,*(undefined8 *)puVar1);
  return;
}


