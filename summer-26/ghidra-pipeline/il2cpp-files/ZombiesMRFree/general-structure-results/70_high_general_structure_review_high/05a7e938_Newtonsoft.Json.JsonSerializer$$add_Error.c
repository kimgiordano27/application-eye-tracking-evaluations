/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$add_Error
ENTRY_POINT: 05a7e938
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__add_Error(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  int unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  undefined2 *unaff_x22;
  long lVar12;
  long unaff_x23;
  undefined8 uVar13;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_02fe925c(PTR_DAT_06f9d050);
  FUN_02fe925c(PTR_DAT_06fa3b28);
  FUN_02fe925c(PTR_DAT_06faa1a8);
  FUN_02fe925c(PTR_DAT_06faa1b0);
  FUN_02fe925c(PTR_DAT_06faa1b8);
  FUN_02fe925c(PTR_DAT_06faa1c0);
  FUN_02fe925c(PTR_DAT_06faa1c8);
  *(undefined1 *)(unaff_x21 + 0xeaf) = 1;
  puVar2 = PTR_DAT_06f9d050;
  if (unaff_w20 == 0) {
LAB_05a7eb6c:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
  uVar1 = *(undefined2 *)(unaff_x23 + ((long)(((ulong)unaff_w20 << 0x20) + -0x100000000) >> 0x1f));
  if (*(int *)(*(long *)PTR_DAT_06f9d050 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar7 = FUN_05a3d9e8(uVar1,0);
  if ((uVar7 & 1) == 0) {
    if (unaff_w19 == 0) goto LAB_05a7eb6c;
    uVar1 = *unaff_x22;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar6 = FUN_05a3d9e8(uVar1,0);
  }
  else {
    uVar6 = 1;
  }
  puVar3 = PTR_DAT_06faa1c8;
  puVar2 = PTR_DAT_06faa1c0;
  uVar8 = FUN_03cf8674();
  uVar9 = FUN_03cf8674();
  uVar8 = FUN_05b3c254(uVar8,0);
  uVar9 = FUN_05b3c254(uVar9,0);
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  FUN_04eaf5c8(&stack0x00000040,uVar8,unaff_w20,uVar9,unaff_w19,uVar6 & 1,*(undefined8 *)puVar3);
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar10 = *(long *)puVar2;
  }
  uVar5 = in_stack_00000058;
  uVar4 = in_stack_00000050;
  uVar9 = in_stack_00000048;
  uVar8 = in_stack_00000040;
  puVar3 = PTR_DAT_06faa1b0;
  lVar12 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
  if (lVar12 == 0) {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar10 = *(long *)puVar2;
    }
    uVar13 = **(undefined8 **)(lVar10 + 0xb8);
    lVar12 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06faa1a8);
    FUN_04ba4b84(lVar12,uVar13,*(undefined8 *)PTR_DAT_06faa1b8,0);
    plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar11 = lVar12;
    thunk_FUN_03048534(plVar11,lVar12);
  }
  in_stack_00000040 = uVar8;
  in_stack_00000048 = uVar9;
  in_stack_00000050 = uVar4;
  in_stack_00000058 = uVar5;
  System_Array__IndexOf<InputControlLayout_ControlItem>
            (unaff_w19 + unaff_w20 + (~uVar6 & 1),&stack0x00000040,lVar12,*(undefined8 *)puVar3);
  return;
}


