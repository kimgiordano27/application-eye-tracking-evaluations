/*
FUNCTION_NAME: OVRManager$$remove_HSWDismissed
ENTRY_POINT: 01f5e3a4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__remove_HSWDismissed(void)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  int in_w8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  long lVar12;
  undefined4 *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 uVar13;
  uint unaff_w22;
  uint uVar14;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  double dVar15;
  double dVar16;
  
  do {
    if (in_w8 == 0) {
      thunk_FUN_01220628();
    }
    uVar7 = FUN_01f59c20(unaff_w22,unaff_x29 + -0xa0,unaff_x29 + -0x48,unaff_x29 + -0x78);
    if ((uVar7 & 1) == 0) goto LAB_01f5e82c;
    uVar5 = *(uint *)(unaff_x29 + -0x48);
    if (uVar5 != 0x12) {
      if (*(int *)(unaff_x29 + -0x44) != 0x100) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar7 = FUN_01f5dc08();
        if ((uVar7 & 1) == 0) goto LAB_01f5e868;
        uVar5 = *(uint *)(unaff_x29 + -0x48);
        *(undefined4 *)(unaff_x29 + -0x44) = 0x100;
      }
      if (uVar5 == 0x13) {
        if ((unaff_w22 & 0xfffffffe) != 0xc) goto LAB_01f5e868;
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar5 = FUN_01f5ec58(unaff_x29 + -0x78,unaff_x29 + -0xa0,unaff_w24);
        goto LAB_01f5e830;
      }
      if ((*(byte *)(unaff_x29 + -0x50) & 1) == 0) {
        lVar9 = *unaff_x27;
        uVar14 = unaff_w22;
        goto LAB_01f5e534;
      }
      uVar1 = 3;
      if (unaff_w22 != 0x12) {
        uVar1 = unaff_w22;
      }
      uVar14 = 5;
      if (uVar1 != 0x13) {
        uVar14 = uVar1;
      }
      if ((uVar5 & 0xfffffffd) != 0xc && uVar5 != 0xd) {
        uVar14 = unaff_w22;
      }
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      bVar4 = FUN_01f5f230(unaff_x29 + -0xa0);
      lVar9 = *unaff_x27;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01220628(lVar9);
        lVar9 = *unaff_x27;
      }
      lVar12 = **(long **)(lVar9 + 0xb8);
      if (lVar12 == 0) goto LAB_01f5e9b4;
      if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_01f5e9b8;
      lVar12 = *(long *)(lVar12 + (long)(int)uVar14 * 8 + 0x20);
      if (lVar12 == 0) goto LAB_01f5e9b4;
      uVar5 = *(uint *)(unaff_x29 + -0x48);
      if (*(uint *)(lVar12 + 0x18) <= uVar5) goto LAB_01f5e9b8;
      if ((*(int *)(lVar12 + (long)(int)uVar5 * 4 + 0x20) != 0x14 & (bVar4 ^ 0xff)) == 0) {
        switch(uVar5) {
        case 4:
        case 5:
          uVar11 = 3;
          if ((bVar4 & 1) != 0) {
            uVar11 = 1;
          }
          break;
        default:
          goto LAB_01f5e534;
        case 8:
          uVar11 = 6;
          if ((bVar4 & 1) == 0) {
            uVar11 = 7;
          }
          break;
        case 0xd:
          uVar11 = 0xe;
          if ((bVar4 & 1) == 0) {
            uVar11 = 0xc;
          }
        }
        *(undefined4 *)(unaff_x29 + -0x48) = uVar11;
      }
LAB_01f5e534:
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01220628(lVar9);
        lVar9 = *unaff_x27;
      }
      lVar9 = **(long **)(lVar9 + 0xb8);
      if (lVar9 == 0) goto LAB_01f5e9b4;
      if (*(uint *)(lVar9 + 0x18) <= uVar14) {
LAB_01f5e9b8:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      lVar9 = *(long *)(lVar9 + (long)(int)uVar14 * 8 + 0x20);
      if (lVar9 == 0) goto LAB_01f5e9b4;
      if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x29 + -0x48)) goto LAB_01f5e9b8;
      unaff_w22 = *(uint *)(lVar9 + (long)(int)*(uint *)(unaff_x29 + -0x48) * 4 + 0x20);
      if (unaff_w22 == 0x14) goto LAB_01f5e868;
      if (0x14 < (int)unaff_w22) {
        if (*(long *)(unaff_x29 + -0x28) == 0) goto LAB_01f5e9b4;
        uVar5 = FUN_01f1b33c(*(long *)(unaff_x29 + -0x28),0);
        puVar3 = PTR_DAT_027be4d0;
        if ((uVar5 >> 3 & 1) == 0) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar7 = FUN_01f5aedc(unaff_w22);
joined_r0x01f5e660:
          if ((uVar7 & 1) == 0) goto LAB_01f5e82c;
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_027be4d0 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          if (DAT_0293daf8 == '\0') {
            thunk_FUN_01279b34(puVar3);
            DAT_0293daf8 = '\x01';
          }
          lVar9 = *(long *)puVar3;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01220628();
            lVar9 = *(long *)puVar3;
          }
          if (**(char **)(lVar9 + 0xb8) == '\0') {
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar7 = FUN_01f5dd00(unaff_w22);
            goto joined_r0x01f5e660;
          }
        }
        unaff_w22 = 0;
        unaff_x21 = 1;
      }
      if ((*(uint *)(unaff_x29 + -0x48) < 7) &&
         ((1 << (ulong)(*(uint *)(unaff_x29 + -0x48) & 0x1f) & 0x43U) != 0)) break;
    }
    in_w8 = *(int *)(*unaff_x27 + 0xe0);
    unaff_w24 = unaff_w25;
  } while( true );
  if ((unaff_x21 & 1) == 0) goto LAB_01f5e868;
  uVar13 = *(undefined8 *)(unaff_x29 + -0x28);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f5d558(uVar13,unaff_x29 + -0x78);
  if (*(int *)(unaff_x29 + -0x5c) == -1) {
LAB_01f5e748:
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar7 = FUN_01f5f2b0();
    if ((uVar7 & 1) == 0) {
LAB_01f5e82c:
      uVar5 = 0;
      goto LAB_01f5e830;
    }
    plVar8 = (long *)*unaff_x20;
    if (plVar8 == (long *)0x0) goto LAB_01f5e9b4;
    uVar7 = (**(code **)(*plVar8 + 0x2a8))
                      (plVar8,*unaff_x19,unaff_x19[1],unaff_x19[2],unaff_x19[3],unaff_x19[4],
                       unaff_x19[5],0,unaff_x19[8],unaff_x29 + -0x38,
                       *(undefined8 *)(*plVar8 + 0x2b0));
    if ((uVar7 & 1) != 0) {
      dVar16 = *(double *)(unaff_x29 + -0x58);
      if (0.0 < dVar16) {
        if (*(int *)(*(long *)PTR_DAT_027b1af0 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        dVar16 = dVar16 * DAT_00745958;
        dVar15 = modf(dVar16,(double *)(unaff_x29 + -0x20));
        if (0.0 <= dVar16) {
          if (dVar15 == 0.5) {
            dVar16 = *(double *)(unaff_x29 + -0x20);
            dVar15 = 1.0;
            goto LAB_01f5e8dc;
          }
          dVar16 = (double)(long)(dVar16 + 0.5);
        }
        else if (dVar15 == -0.5) {
          dVar16 = *(double *)(unaff_x29 + -0x20);
          dVar15 = -1.0;
LAB_01f5e8dc:
          if (((long)dVar16 & 1U) != 0) {
            dVar16 = dVar16 + dVar15;
          }
        }
        else {
          dVar16 = (double)(long)(dVar16 + -0.5);
        }
        if (*(int *)(*(long *)PTR_DAT_027b4b30 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar9 = -0x8000000000000000;
        if (dVar16 != INFINITY) {
          lVar9 = (long)dVar16;
        }
        uVar13 = FUN_01e727dc(unaff_x29 + -0x38,lVar9,0);
        *(undefined8 *)(unaff_x29 + -0x38) = uVar13;
      }
      iVar2 = *(int *)(unaff_x29 + -100);
      if (iVar2 != -1) {
        plVar8 = (long *)*unaff_x20;
        if (plVar8 == (long *)0x0) {
LAB_01f5e9b4:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        iVar6 = (**(code **)(*plVar8 + 0x1f8))
                          (plVar8,*(undefined8 *)(unaff_x29 + -0x38),
                           *(undefined8 *)(*plVar8 + 0x200));
        if (iVar2 != iVar6) {
          uVar11 = 4;
          puVar10 = (undefined8 *)PTR_DAT_027c0ab8;
          goto LAB_01f5e6f4;
        }
      }
      *(undefined8 *)(unaff_x19 + 0xe) = *(undefined8 *)(unaff_x29 + -0x38);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar5 = FUN_01f5f534(unaff_x29 + -0xa0);
      goto LAB_01f5e830;
    }
    uVar11 = 7;
    puVar10 = (undefined8 *)PTR_DAT_027c0aa8;
LAB_01f5e6f4:
    uVar13 = *puVar10;
    unaff_x19[0x10] = uVar11;
  }
  else {
    uVar5 = unaff_x19[3];
    if (*(int *)(unaff_x29 + -0x5c) == 0) {
      if (uVar5 < 0xd) {
        uVar14 = 0;
        if (uVar5 != 0xc) {
          uVar14 = uVar5;
        }
LAB_01f5e744:
        unaff_x19[3] = uVar14;
        goto LAB_01f5e748;
      }
    }
    else if (uVar5 < 0x18) {
      if ((int)uVar5 < 0xc) {
        uVar14 = uVar5 + 0xc;
        goto LAB_01f5e744;
      }
      goto LAB_01f5e748;
    }
LAB_01f5e868:
    if ((DAT_0293dcc4 & 1) == 0) {
      thunk_FUN_01279b34(PTR_DAT_027c0a78);
      DAT_0293dcc4 = 1;
    }
    puVar3 = PTR_DAT_027c0a78;
    unaff_x19[0x10] = 4;
    uVar13 = *(undefined8 *)puVar3;
  }
  uVar5 = 0;
  *(undefined8 *)(unaff_x19 + 0x12) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x14) = 0;
LAB_01f5e830:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return uVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


