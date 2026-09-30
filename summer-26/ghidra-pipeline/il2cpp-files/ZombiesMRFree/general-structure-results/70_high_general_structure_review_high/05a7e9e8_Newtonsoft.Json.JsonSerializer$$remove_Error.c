/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$remove_Error
ENTRY_POINT: 05a7e9e8
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


void Newtonsoft_Json_JsonSerializer__remove_Error(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  int unaff_w19;
  int unaff_w20;
  undefined2 *unaff_x22;
  long lVar11;
  undefined8 uVar12;
  long *unaff_x24;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  uVar1 = *unaff_x22;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar6 = FUN_05a3d9e8(uVar1,0);
  puVar2 = PTR_DAT_06faa1c8;
  puVar3 = PTR_DAT_06faa1c0;
  uVar7 = FUN_03cf8674();
  uVar8 = FUN_03cf8674();
  uVar7 = FUN_05b3c254(uVar7,0);
  uVar8 = FUN_05b3c254(uVar8,0);
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  FUN_04eaf5c8(&stack0x00000040,uVar7,unaff_w20,uVar8,unaff_w19,uVar6 & 1,*(undefined8 *)puVar2);
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar9 = *(long *)puVar3;
  }
  uVar5 = in_stack_00000058;
  uVar4 = in_stack_00000050;
  uVar8 = in_stack_00000048;
  uVar7 = in_stack_00000040;
  puVar2 = PTR_DAT_06faa1b0;
  lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar9 = *(long *)puVar3;
    }
    uVar12 = **(undefined8 **)(lVar9 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06faa1a8);
    FUN_04ba4b84(lVar11,uVar12,*(undefined8 *)PTR_DAT_06faa1b8,0);
    plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar10 = lVar11;
    thunk_FUN_03048534(plVar10,lVar11);
  }
  in_stack_00000040 = uVar7;
  in_stack_00000048 = uVar8;
  in_stack_00000050 = uVar4;
  in_stack_00000058 = uVar5;
  System_Array__IndexOf<InputControlLayout_ControlItem>
            (unaff_w19 + unaff_w20 + (~uVar6 & 1),&stack0x00000040,lVar11,*(undefined8 *)puVar2);
  return;
}


