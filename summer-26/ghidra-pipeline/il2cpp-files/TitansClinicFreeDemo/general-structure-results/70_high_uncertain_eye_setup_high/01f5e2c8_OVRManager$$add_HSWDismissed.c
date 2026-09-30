/*
FUNCTION_NAME: OVRManager$$add_HSWDismissed
ENTRY_POINT: 01f5e2c8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__add_HSWDismissed(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  long in_x9;
  long lVar24;
  code *pcVar25;
  undefined4 *unaff_x19;
  long unaff_x20;
  uint uVar26;
  undefined4 unaff_w23;
  long unaff_x26;
  long unaff_x29;
  double dVar27;
  double dVar28;
  
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(unaff_x29 + -0x5c) = 0xffffffff;
  *(undefined8 *)(unaff_x29 + -100) = 0xffffffffffffffff;
  *(undefined8 *)(unaff_x29 + -0x6c) = 0xffffffffffffffff;
  *(undefined8 *)(unaff_x29 + -0x58) = 0xbff0000000000000;
  *(long *)(unaff_x29 + -0x78) = in_x9;
  if (unaff_x20 == 0) goto LAB_01f5e9b4;
  lVar16 = FUN_01f1a868();
  if ((*(long *)(unaff_x29 + -0x28) == 0) ||
     (uVar17 = FUN_01f1afd0(*(long *)(unaff_x29 + -0x28),0), lVar16 == 0)) goto LAB_01f5e9b4;
  bVar12 = FUN_01e68140(lVar16,uVar17,4,0);
  *(byte *)(unaff_x29 + -0x50) = bVar12 & 1;
  puVar11 = PTR_DAT_027be7f0;
  if (*(long *)(unaff_x29 + -0x28) == 0) goto LAB_01f5e9b4;
  plVar20 = (long *)(unaff_x19 + 0xc);
  *plVar20 = *(long *)(*(long *)(unaff_x29 + -0x28) + 0x78);
  unaff_x19[8] = 0;
  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  puVar9 = PTR_DAT_027ba9b8;
  FUN_01f5eb94(unaff_x29 + -0xa0);
  FUN_01f59330(unaff_x29 + -0xa0);
  uVar23 = *(undefined4 *)(unaff_x29 + -0x2c);
  bVar8 = false;
  uVar15 = 0;
  do {
    do {
      uVar22 = unaff_w23;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar18 = FUN_01f59c20(uVar15,unaff_x29 + -0xa0,unaff_x29 + -0x48,unaff_x29 + -0x78);
      if ((uVar18 & 1) == 0) goto LAB_01f5e82c;
      uVar13 = *(uint *)(unaff_x29 + -0x48);
      unaff_w23 = uVar23;
    } while (uVar13 == 0x12);
    if (*(int *)(unaff_x29 + -0x44) != 0x100) {
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar18 = FUN_01f5dc08();
      if ((uVar18 & 1) == 0) goto LAB_01f5e868;
      uVar13 = *(uint *)(unaff_x29 + -0x48);
      *(undefined4 *)(unaff_x29 + -0x44) = 0x100;
    }
    if (uVar13 == 0x13) {
      if ((uVar15 & 0xfffffffe) != 0xc) goto LAB_01f5e868;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar15 = FUN_01f5ec58(unaff_x29 + -0x78,unaff_x29 + -0xa0,uVar22);
      goto LAB_01f5e830;
    }
    if ((*(byte *)(unaff_x29 + -0x50) & 1) == 0) {
      lVar16 = *(long *)puVar9;
      uVar26 = uVar15;
      goto LAB_01f5e534;
    }
    uVar1 = 3;
    if (uVar15 != 0x12) {
      uVar1 = uVar15;
    }
    uVar26 = 5;
    if (uVar1 != 0x13) {
      uVar26 = uVar1;
    }
    if ((uVar13 & 0xfffffffd) != 0xc && uVar13 != 0xd) {
      uVar26 = uVar15;
    }
    if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    bVar12 = FUN_01f5f230(unaff_x29 + -0xa0);
    lVar16 = *(long *)puVar9;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01220628(lVar16);
      lVar16 = *(long *)puVar9;
    }
    lVar24 = **(long **)(lVar16 + 0xb8);
    if (lVar24 == 0) goto LAB_01f5e9b4;
    if (*(uint *)(lVar24 + 0x18) <= uVar26) goto LAB_01f5e9b8;
    lVar24 = *(long *)(lVar24 + (long)(int)uVar26 * 8 + 0x20);
    if (lVar24 == 0) goto LAB_01f5e9b4;
    uVar15 = *(uint *)(unaff_x29 + -0x48);
    if (*(uint *)(lVar24 + 0x18) <= uVar15) goto LAB_01f5e9b8;
    if ((*(int *)(lVar24 + (long)(int)uVar15 * 4 + 0x20) != 0x14 & (bVar12 ^ 0xff)) == 0) {
      switch(uVar15) {
      case 4:
      case 5:
        uVar22 = 3;
        if ((bVar12 & 1) != 0) {
          uVar22 = 1;
        }
        break;
      default:
        goto LAB_01f5e534;
      case 8:
        uVar22 = 6;
        if ((bVar12 & 1) == 0) {
          uVar22 = 7;
        }
        break;
      case 0xd:
        uVar22 = 0xe;
        if ((bVar12 & 1) == 0) {
          uVar22 = 0xc;
        }
      }
      *(undefined4 *)(unaff_x29 + -0x48) = uVar22;
    }
LAB_01f5e534:
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01220628(lVar16);
      lVar16 = *(long *)puVar9;
    }
    lVar16 = **(long **)(lVar16 + 0xb8);
    if (lVar16 == 0) goto LAB_01f5e9b4;
    if (*(uint *)(lVar16 + 0x18) <= uVar26) {
LAB_01f5e9b8:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    lVar16 = *(long *)(lVar16 + (long)(int)uVar26 * 8 + 0x20);
    if (lVar16 == 0) goto LAB_01f5e9b4;
    if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x29 + -0x48)) goto LAB_01f5e9b8;
    uVar15 = *(uint *)(lVar16 + (long)(int)*(uint *)(unaff_x29 + -0x48) * 4 + 0x20);
    if (uVar15 == 0x14) goto LAB_01f5e868;
    if (0x14 < (int)uVar15) {
      if (*(long *)(unaff_x29 + -0x28) == 0) goto LAB_01f5e9b4;
      uVar13 = FUN_01f1b33c(*(long *)(unaff_x29 + -0x28),0);
      puVar10 = PTR_DAT_027be4d0;
      if ((uVar13 >> 3 & 1) == 0) {
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar18 = FUN_01f5aedc(uVar15);
joined_r0x01f5e660:
        if ((uVar18 & 1) == 0) goto LAB_01f5e82c;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_027be4d0 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        if (DAT_0293daf8 == '\0') {
          thunk_FUN_01279b34(puVar10);
          DAT_0293daf8 = '\x01';
        }
        lVar16 = *(long *)puVar10;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01220628();
          lVar16 = *(long *)puVar10;
        }
        if (**(char **)(lVar16 + 0xb8) == '\0') {
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar18 = FUN_01f5dd00(uVar15);
          goto joined_r0x01f5e660;
        }
      }
      uVar15 = 0;
      bVar8 = true;
    }
  } while ((6 < *(uint *)(unaff_x29 + -0x48)) ||
          ((1 << (ulong)(*(uint *)(unaff_x29 + -0x48) & 0x1f) & 0x43U) == 0));
  if (!bVar8) goto LAB_01f5e868;
  uVar17 = *(undefined8 *)(unaff_x29 + -0x28);
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f5d558(uVar17,unaff_x29 + -0x78);
  if (*(int *)(unaff_x29 + -0x5c) == -1) {
LAB_01f5e748:
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar18 = FUN_01f5f2b0();
    if ((uVar18 & 1) == 0) {
LAB_01f5e82c:
      uVar15 = 0;
      goto LAB_01f5e830;
    }
    plVar19 = (long *)*plVar20;
    if (plVar19 == (long *)0x0) goto LAB_01f5e9b4;
    uVar6 = unaff_x19[8];
    uVar23 = unaff_x19[4];
    uVar3 = unaff_x19[5];
    uVar22 = unaff_x19[2];
    uVar4 = unaff_x19[3];
    uVar2 = *unaff_x19;
    uVar5 = unaff_x19[1];
    pcVar25 = *(code **)(*plVar19 + 0x2a8);
    uVar17 = *(undefined8 *)(*plVar19 + 0x2b0);
    *(long *)(in_x9 + -0x18) = unaff_x29 + -0x38;
    *(undefined8 *)(in_x9 + -0x10) = uVar17;
    *(undefined4 *)(in_x9 + -0x20) = uVar6;
    uVar18 = (*pcVar25)(plVar19,uVar2,uVar5,uVar22,uVar4,uVar23,uVar3,0);
    if ((uVar18 & 1) != 0) {
      dVar28 = *(double *)(unaff_x29 + -0x58);
      if (0.0 < dVar28) {
        if (*(int *)(*(long *)PTR_DAT_027b1af0 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        dVar28 = dVar28 * DAT_00745958;
        dVar27 = modf(dVar28,(double *)(unaff_x29 + -0x20));
        if (0.0 <= dVar28) {
          if (dVar27 == 0.5) {
            dVar28 = *(double *)(unaff_x29 + -0x20);
            dVar27 = 1.0;
            goto LAB_01f5e8dc;
          }
          dVar28 = (double)(long)(dVar28 + 0.5);
        }
        else if (dVar27 == -0.5) {
          dVar28 = *(double *)(unaff_x29 + -0x20);
          dVar27 = -1.0;
LAB_01f5e8dc:
          if (((long)dVar28 & 1U) != 0) {
            dVar28 = dVar28 + dVar27;
          }
        }
        else {
          dVar28 = (double)(long)(dVar28 + -0.5);
        }
        if (*(int *)(*(long *)PTR_DAT_027b4b30 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar16 = -0x8000000000000000;
        if (dVar28 != INFINITY) {
          lVar16 = (long)dVar28;
        }
        uVar17 = FUN_01e727dc(unaff_x29 + -0x38,lVar16,0);
        *(undefined8 *)(unaff_x29 + -0x38) = uVar17;
      }
      iVar7 = *(int *)(unaff_x29 + -100);
      if (iVar7 != -1) {
        plVar20 = (long *)*plVar20;
        if (plVar20 == (long *)0x0) {
LAB_01f5e9b4:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        iVar14 = (**(code **)(*plVar20 + 0x1f8))
                           (plVar20,*(undefined8 *)(unaff_x29 + -0x38),
                            *(undefined8 *)(*plVar20 + 0x200));
        if (iVar7 != iVar14) {
          uVar23 = 4;
          puVar21 = (undefined8 *)PTR_DAT_027c0ab8;
          goto LAB_01f5e6f4;
        }
      }
      *(undefined8 *)(unaff_x19 + 0xe) = *(undefined8 *)(unaff_x29 + -0x38);
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar15 = FUN_01f5f534(unaff_x29 + -0xa0);
      goto LAB_01f5e830;
    }
    uVar23 = 7;
    puVar21 = (undefined8 *)PTR_DAT_027c0aa8;
LAB_01f5e6f4:
    uVar17 = *puVar21;
    unaff_x19[0x10] = uVar23;
  }
  else {
    uVar15 = unaff_x19[3];
    if (*(int *)(unaff_x29 + -0x5c) == 0) {
      if (uVar15 < 0xd) {
        uVar13 = 0;
        if (uVar15 != 0xc) {
          uVar13 = uVar15;
        }
LAB_01f5e744:
        unaff_x19[3] = uVar13;
        goto LAB_01f5e748;
      }
    }
    else if (uVar15 < 0x18) {
      if ((int)uVar15 < 0xc) {
        uVar13 = uVar15 + 0xc;
        goto LAB_01f5e744;
      }
      goto LAB_01f5e748;
    }
LAB_01f5e868:
    if ((DAT_0293dcc4 & 1) == 0) {
      thunk_FUN_01279b34(PTR_DAT_027c0a78);
      DAT_0293dcc4 = 1;
    }
    puVar11 = PTR_DAT_027c0a78;
    unaff_x19[0x10] = 4;
    uVar17 = *(undefined8 *)puVar11;
  }
  uVar15 = 0;
  *(undefined8 *)(unaff_x19 + 0x12) = uVar17;
  *(undefined8 *)(unaff_x19 + 0x14) = 0;
LAB_01f5e830:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return uVar15 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


