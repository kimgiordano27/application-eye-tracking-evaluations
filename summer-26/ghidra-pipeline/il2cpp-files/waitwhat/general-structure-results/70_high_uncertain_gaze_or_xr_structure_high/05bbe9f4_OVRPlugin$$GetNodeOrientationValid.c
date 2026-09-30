/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationValid
ENTRY_POINT: 05bbe9f4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetNodeOrientationValid(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 in_w8;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x21;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  *(undefined1 *)(unaff_x21 + 0xa99) = in_w8;
  lVar5 = *unaff_x20;
  uVar9 = *(undefined8 *)(unaff_x19 + 0xd0);
  *(undefined1 *)(unaff_x19 + 0x169) = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar6 = FUN_069d8404(uVar9,0,0);
  if ((uVar6 & 1) != 0) {
LAB_05bbeb74:
    *(undefined1 *)(unaff_x19 + 0x169) = 1;
    return;
  }
  FUN_05bbeb90();
  FUN_05bc2454(&stack0x00000020 + 4);
  uVar9 = in_stack_00000038;
  uVar2 = uStack0000000000000030;
  puVar1 = PTR_DAT_07113d48;
  plVar10 = *(long **)(unaff_x19 + 0x180);
  if (plVar10 != (long *)0x0) {
    lVar5 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07113d48) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_05bbeab0;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)PTR_DAT_07113d48,3);
LAB_05bbeab0:
    uStack0000000000000048 = in_stack_00000020._12_4_;
    in_stack_00000040 = in_stack_00000020._4_8_;
    uStack0000000000000054 = uVar9;
    uStack000000000000004c = uVar2;
    uStack0000000000000050 = uStack0000000000000034;
    (*(code *)*puVar7)(plVar10,&stack0x00000040,puVar7[1]);
    plVar10 = *(long **)(unaff_x19 + 0x180);
    if (plVar10 != (long *)0x0) {
      lVar5 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_05bbeb2c;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar1,5);
LAB_05bbeb2c:
      (*(code *)*puVar7)(plVar10,puVar7[1]);
      uVar3 = FUN_05bc3020();
      uVar4 = FUN_05bc3250();
      uVar3 = (*(uint *)(unaff_x19 + 0x178) | uVar3) & (uVar4 ^ 0xffffffff);
      *(uint *)(unaff_x19 + 0x178) = uVar3;
      if (uVar4 == 0) {
        return;
      }
      if (uVar3 != 0) {
        return;
      }
      goto LAB_05bbeb74;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


