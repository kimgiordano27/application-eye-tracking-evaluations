/*
FUNCTION_NAME: OVRPlugin$$TryLocateSpace
ENTRY_POINT: 06acf26c
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__TryLocateSpace(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  undefined1 unaff_w21;
  long *unaff_x22;
  uint uVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_0335b6c8(param_1 + 0xa38,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cca40,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x19 + 0x2e2) = unaff_w21;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (unaff_x22 == (long *)0x0) {
LAB_06acf7a4:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar6 = *unaff_x22;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_083cca40) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 4) * 0x10 + 0x138);
        goto LAB_06acf2fc;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_0338f71c();
LAB_06acf2fc:
  lVar6 = (*(code *)*puVar4)();
  if (lVar6 == 0) goto LAB_06acf7a4;
  uVar8 = FUN_06aea184(lVar6,*(undefined8 *)(lVar6 + 0x40));
  uVar1 = FUN_06aea184(uVar8,*(undefined8 *)(lVar6 + 0x48));
  if (unaff_x20 == (long *)0x0) goto LAB_06acf7a4;
  lVar7 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_083cca38) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 7) * 0x10 + 0x138);
        goto LAB_06acf380;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_0338f71c();
LAB_06acf380:
  iVar2 = (*(code *)*puVar4)();
  if (iVar2 == 0) {
    if (*(int *)(DAT_083cbd40 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (DAT_086e2323 == '\0') {
      FUN_0335b6c8(&DAT_083cbd40,1);
      DataMemoryBarrier(2,3);
      DAT_086e2323 = '\x01';
    }
    if (*(int *)(DAT_083cbd40 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar7 = *(long *)(DAT_083cbd40 + 0xb8);
    in_stack_00000050 = *(undefined8 *)(lVar7 + 0x40);
    in_stack_00000048 = *(undefined8 *)(lVar7 + 0x38);
    in_stack_00000040 = *(undefined8 *)(lVar7 + 0x30);
    uVar8 = FUN_06aea28c(lVar6,&stack0x00000040,uVar8 & 0xffffffff,0);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(DAT_083cbd40 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (DAT_086e2323 == '\0') {
        FUN_0335b6c8(&DAT_083cbd40,1);
        DataMemoryBarrier(2,3);
        DAT_086e2323 = '\x01';
      }
      if (*(int *)(DAT_083cbd40 + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar7 = *(long *)(DAT_083cbd40 + 0xb8);
      in_stack_00000030 = *(undefined8 *)(lVar7 + 0x40);
      in_stack_00000028 = *(undefined8 *)(lVar7 + 0x38);
      in_stack_00000020 = *(undefined8 *)(lVar7 + 0x30);
      uVar8 = FUN_06aea28c(lVar6,&stack0x00000020,uVar1,0);
      if ((uVar8 & 1) == 0) {
        return 3;
      }
    }
    return 0;
  }
  lVar7 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_083cca38) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 7) * 0x10 + 0x138);
        goto LAB_06acf4d8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_0338f71c();
LAB_06acf4d8:
  (*(code *)*puVar4)();
  uVar9 = FUN_06ad4370();
  if ((uVar9 & 1) != 0) {
    lVar7 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_083cca38) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 8) * 0x10 + 0x138);
          goto LAB_06acf544;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0338f71c();
LAB_06acf544:
    (*(code *)*puVar4)(&stack0x00000008);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar8 = FUN_06aea28c(lVar6,&stack0x00000040,uVar8 & 0xffffffff,0);
    if ((uVar8 & 1) == 0) {
      lVar7 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_083cca38) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 8) * 0x10 + 0x138);
            goto LAB_06acf5dc;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_0338f71c();
LAB_06acf5dc:
      uVar5 = (*(code *)*puVar4)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar3 = FUN_06aea7b4(uVar5,&stack0x00000020,*(undefined8 *)(lVar6 + 0x40));
      uVar3 = uVar3 & 1;
      goto LAB_06acf60c;
    }
  }
  uVar3 = 0;
LAB_06acf60c:
  lVar7 = *unaff_x20;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_083cca38) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 7) * 0x10 + 0x138);
        goto LAB_06acf65c;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_0338f71c();
LAB_06acf65c:
  (*(code *)*puVar4)();
  uVar8 = FUN_06ad442c();
  uVar11 = uVar3;
  if ((uVar8 & 1) != 0) {
    lVar7 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_083cca38) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 9) * 0x10 + 0x138);
          goto LAB_06acf6c8;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0338f71c();
LAB_06acf6c8:
    (*(code *)*puVar4)(&stack0x00000008);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar8 = FUN_06aea28c(lVar6,&stack0x00000040,uVar1,0);
    if ((uVar8 & 1) == 0) {
      lVar7 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_083cca38) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 9) * 0x10 + 0x138);
            goto LAB_06acf750;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_0338f71c();
LAB_06acf750:
      uVar5 = (*(code *)*puVar4)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar8 = FUN_06aea7b4(uVar5,&stack0x00000020,*(undefined8 *)(lVar6 + 0x48));
      uVar11 = uVar3 | 2;
      if ((uVar8 & 1) == 0) {
        uVar11 = uVar3;
      }
    }
  }
  return uVar11;
}


