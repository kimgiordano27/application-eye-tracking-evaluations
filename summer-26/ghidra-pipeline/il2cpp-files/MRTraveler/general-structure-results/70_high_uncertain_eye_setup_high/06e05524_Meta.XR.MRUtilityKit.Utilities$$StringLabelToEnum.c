/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Utilities$$StringLabelToEnum
ENTRY_POINT: 06e05524
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_Utilities__StringLabelToEnum(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_03c8f898(PTR_DAT_08e90eb0);
  FUN_03c8f898(PTR_DAT_08e90eb8);
  FUN_03c8f898(PTR_DAT_08e90ec0);
  FUN_03c8f898(PTR_DAT_08e90ec8);
  FUN_03c8f898(PTR_DAT_08e92728);
  FUN_03c8f898(PTR_DAT_08e90ed0);
  FUN_03c8f898(PTR_DAT_08e781a8);
  FUN_03c8f898(PTR_DAT_08e92690);
  FUN_03c8f898(PTR_DAT_08e92688);
  FUN_03c8f898(PTR_DAT_08e92730);
  *(undefined1 *)(unaff_x24 + 0xf18) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  lVar3 = thunk_FUN_03cf5234(*unaff_x20);
  FUN_08824190();
  if (unaff_x21 != 0) {
    lVar4 = FUN_06a4e060();
    puVar2 = PTR_DAT_08e90ec0;
    puVar1 = PTR_DAT_08e90eb8;
    if (lVar4 == 0) goto LAB_06e0586c;
    FUN_05012e28(&stack0x00000008,lVar4,*(undefined8 *)PTR_DAT_08e90ed0);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar5 = FUN_04aa6868(&stack0x00000020,*(undefined8 *)puVar2), uVar8 = in_stack_00000030,
          (uVar5 & 1) != 0) {
      uVar6 = FUN_06a4e300();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_088253a8(lVar3,uVar8,uVar6,0);
    }
    FUN_04aa6864(&stack0x00000020,*(undefined8 *)puVar1);
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    if (lVar3 == 0) goto LAB_06e0586c;
    FUN_0882453c(lVar3,*(long *)(unaff_x19 + 0x40),0);
    *(undefined1 *)(lVar3 + 0x3a) = 1;
  }
  puVar1 = PTR_DAT_08e92728;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    if (lVar3 == 0) {
LAB_06e0586c:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_08824430(lVar3,*(long *)(unaff_x19 + 0x38),0);
    *(undefined1 *)(lVar3 + 0x39) = 1;
    plVar7 = (long *)thunk_FUN_03cf5138(*(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)puVar1);
    puVar2 = PTR_DAT_08e92688;
    if (plVar7 != (long *)0x0) {
      uVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e92688);
      FUN_06e04674();
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06e05738;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar1,0);
LAB_06e05738:
      (*(code *)*puVar9)(plVar7,uVar8,puVar9[1]);
      uVar8 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
      FUN_06e04674();
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar4 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_06e057b8;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar1,2);
LAB_06e057b8:
      (*(code *)*puVar9)(plVar7,uVar8,puVar9[1]);
      uVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e92690);
      FUN_06e04530();
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar4 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_06e0583c;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar1,4);
LAB_06e0583c:
      (*(code *)*puVar9)(plVar7,uVar8,puVar9[1]);
    }
  }
  return lVar3;
}


