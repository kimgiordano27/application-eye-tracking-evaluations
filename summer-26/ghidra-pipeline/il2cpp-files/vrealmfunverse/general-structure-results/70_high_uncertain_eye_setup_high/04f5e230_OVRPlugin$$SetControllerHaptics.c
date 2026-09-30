/*
FUNCTION_NAME: OVRPlugin$$SetControllerHaptics
ENTRY_POINT: 04f5e230
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__SetControllerHaptics(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long in_x9;
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
  
  piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar11 + -2) == param_3) {
      puVar7 = (undefined8 *)(param_1 + (long)(*piVar11 + 4) * 0x10 + 0x138);
      goto LAB_04f5e270;
    }
    in_x9 = in_x9 + -1;
    piVar11 = piVar11 + 4;
  } while (in_x9 != 0);
  puVar7 = (undefined8 *)FUN_02b7654c();
LAB_04f5e270:
  lVar8 = (*(code *)*puVar7)();
  if (lVar8 == 0) {
LAB_04f5e71c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar3 = FUN_04f7e608(lVar8,0);
  uVar4 = FUN_04f7e6e8(lVar8,0);
  puVar2 = System_Runtime_Serialization_IObjectReference_var;
  if (unaff_x20 == (long *)0x0) goto LAB_04f5e71c;
  lVar9 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)System_Runtime_Serialization_IObjectReference_var) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
        goto LAB_04f5e2fc;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_02b7654c();
LAB_04f5e2fc:
  iVar5 = (*(code *)*puVar7)();
  puVar1 = System_IOSelectorJob_var;
  if (iVar5 == 0) {
    if (*(int *)(*(long *)System_IOSelectorJob_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066c9bcc == '\0') {
      FUN_02b3c81c(System_IOSelectorJob_var);
      DAT_066c9bcc = '\x01';
    }
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar9 = *(long *)puVar1;
    }
    lVar9 = *(long *)(lVar9 + 0xb8);
    in_stack_00000048 = *(undefined8 *)(lVar9 + 0x38);
    in_stack_00000040 = *(undefined8 *)(lVar9 + 0x30);
    in_stack_00000050 = *(undefined8 *)(lVar9 + 0x40);
    uVar10 = FUN_04f7e714(lVar8,&stack0x00000040,uVar3,0);
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (DAT_066c9bcc == '\0') {
        FUN_02b3c81c(System_IOSelectorJob_var);
        DAT_066c9bcc = '\x01';
      }
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar9 = *(long *)puVar1;
      }
      lVar9 = *(long *)(lVar9 + 0xb8);
      in_stack_00000028 = *(undefined8 *)(lVar9 + 0x38);
      in_stack_00000020 = *(undefined8 *)(lVar9 + 0x30);
      in_stack_00000030 = *(undefined8 *)(lVar9 + 0x40);
      uVar10 = FUN_04f7e714(lVar8,&stack0x00000020,uVar4,0);
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
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
        goto LAB_04f5e448;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_02b7654c();
LAB_04f5e448:
  (*(code *)*puVar7)();
  uVar10 = FUN_04f5e720();
  if ((uVar10 & 1) != 0) {
    lVar9 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_04f5e4b4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02b7654c();
LAB_04f5e4b4:
    (*(code *)*puVar7)(&stack0x00000008);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar10 = FUN_04f7e714(lVar8,&stack0x00000040,uVar3,0);
    if ((uVar10 & 1) == 0) {
      lVar9 = *unaff_x20;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
            goto LAB_04f5e54c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_02b7654c();
LAB_04f5e54c:
      (*(code *)*puVar7)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar6 = FUN_04f7ec0c(lVar8,&stack0x00000020,0);
      uVar6 = uVar6 & 1;
      goto LAB_04f5e580;
    }
  }
  uVar6 = 0;
LAB_04f5e580:
  lVar9 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
        goto LAB_04f5e5d0;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_02b7654c();
LAB_04f5e5d0:
  (*(code *)*puVar7)();
  uVar10 = FUN_04f5e7d0();
  uVar12 = uVar6;
  if ((uVar10 & 1) != 0) {
    lVar9 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 9) * 0x10 + 0x138);
          goto LAB_04f5e63c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02b7654c();
LAB_04f5e63c:
    (*(code *)*puVar7)(&stack0x00000008);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar10 = FUN_04f7e714(lVar8,&stack0x00000040,uVar4,0);
    if ((uVar10 & 1) == 0) {
      lVar9 = *unaff_x20;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 9) * 0x10 + 0x138);
            goto LAB_04f5e6c4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_02b7654c();
LAB_04f5e6c4:
      (*(code *)*puVar7)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar10 = FUN_04f7efe0(lVar8,&stack0x00000020,0);
      uVar12 = uVar6 | 2;
      if ((uVar10 & 1) == 0) {
        uVar12 = uVar6;
      }
    }
  }
  return uVar12;
}


