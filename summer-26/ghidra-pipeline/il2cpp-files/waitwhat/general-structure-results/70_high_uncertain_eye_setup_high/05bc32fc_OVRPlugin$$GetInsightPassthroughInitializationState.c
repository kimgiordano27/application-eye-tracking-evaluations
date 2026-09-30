/*
FUNCTION_NAME: OVRPlugin$$GetInsightPassthroughInitializationState
ENTRY_POINT: 05bc32fc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetInsightPassthroughInitializationState(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x20;
  uint uVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  lVar7 = (*(code *)*param_1)();
  if (lVar7 == 0) {
LAB_05bc37bc:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar3 = FUN_05be2c1c(lVar7,0);
  uVar4 = FUN_05be2cfc(lVar7,0);
  puVar2 = PTR_DAT_07112248;
  if (unaff_x20 == (long *)0x0) goto LAB_05bc37bc;
  lVar9 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07112248) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
        goto LAB_05bc339c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_031c0d08();
LAB_05bc339c:
  iVar5 = (*(code *)*puVar8)();
  puVar1 = PTR_DAT_07112240;
  if (iVar5 == 0) {
    if (*(int *)(*(long *)PTR_DAT_07112240 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    if (DAT_0754ebd6 == '\0') {
      FUN_03188a78(PTR_DAT_07112240);
      DAT_0754ebd6 = '\x01';
    }
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar9 = *(long *)puVar1;
    }
    lVar9 = *(long *)(lVar9 + 0xb8);
    in_stack_00000048 = *(undefined8 *)(lVar9 + 0x38);
    in_stack_00000040 = *(undefined8 *)(lVar9 + 0x30);
    in_stack_00000050 = *(undefined8 *)(lVar9 + 0x40);
    uVar10 = FUN_05be2d28(lVar7,&stack0x00000040,uVar3,0);
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      if (DAT_0754ebd6 == '\0') {
        FUN_03188a78(PTR_DAT_07112240);
        DAT_0754ebd6 = '\x01';
      }
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar9 = *(long *)puVar1;
      }
      lVar9 = *(long *)(lVar9 + 0xb8);
      in_stack_00000028 = *(undefined8 *)(lVar9 + 0x38);
      in_stack_00000020 = *(undefined8 *)(lVar9 + 0x30);
      in_stack_00000030 = *(undefined8 *)(lVar9 + 0x40);
      uVar10 = FUN_05be2d28(lVar7,&stack0x00000020,uVar4,0);
      if ((uVar10 & 1) == 0) {
        return 3;
      }
    }
    return 0;
  }
  lVar9 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
        goto LAB_05bc34e8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_031c0d08();
LAB_05bc34e8:
  (*(code *)*puVar8)();
  uVar10 = FUN_05bc37c0();
  if ((uVar10 & 1) != 0) {
    lVar9 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_05bc3554;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_031c0d08();
LAB_05bc3554:
    (*(code *)*puVar8)(&stack0x00000008);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar10 = FUN_05be2d28(lVar7,&stack0x00000040,uVar3,0);
    if ((uVar10 & 1) == 0) {
      lVar9 = *unaff_x20;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
            goto LAB_05bc35ec;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_031c0d08();
LAB_05bc35ec:
      (*(code *)*puVar8)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar6 = FUN_05be3220(lVar7,&stack0x00000020,0);
      uVar6 = uVar6 & 1;
      goto LAB_05bc3620;
    }
  }
  uVar6 = 0;
LAB_05bc3620:
  lVar9 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
        goto LAB_05bc3670;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_031c0d08();
LAB_05bc3670:
  (*(code *)*puVar8)();
  uVar10 = FUN_05bc3870();
  uVar12 = uVar6;
  if ((uVar10 & 1) != 0) {
    lVar9 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 9) * 0x10 + 0x138);
          goto LAB_05bc36dc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_031c0d08();
LAB_05bc36dc:
    (*(code *)*puVar8)(&stack0x00000008);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar10 = FUN_05be2d28(lVar7,&stack0x00000040,uVar4,0);
    if ((uVar10 & 1) == 0) {
      lVar9 = *unaff_x20;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 9) * 0x10 + 0x138);
            goto LAB_05bc3764;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_031c0d08();
LAB_05bc3764:
      (*(code *)*puVar8)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar10 = FUN_05be35f4(lVar7,&stack0x00000020,0);
      uVar12 = uVar6 | 2;
      if ((uVar10 & 1) == 0) {
        uVar12 = uVar6;
      }
    }
  }
  return uVar12;
}


