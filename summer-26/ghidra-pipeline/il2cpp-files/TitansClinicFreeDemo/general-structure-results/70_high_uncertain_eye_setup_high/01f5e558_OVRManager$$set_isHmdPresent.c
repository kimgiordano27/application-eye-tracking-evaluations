/*
FUNCTION_NAME: OVRManager$$set_isHmdPresent
ENTRY_POINT: 01f5e558
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__set_isHmdPresent(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  uint in_w9;
  long lVar13;
  undefined4 *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 uVar14;
  uint unaff_w22;
  undefined4 unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  double dVar15;
  double dVar16;
  
  while (unaff_w22 < in_w9) {
    lVar10 = *(long *)(param_1 + (long)(int)unaff_w22 * 8 + 0x20);
    if (lVar10 == 0) goto LAB_01f5e9b4;
    if (*(uint *)(lVar10 + 0x18) <= *(uint *)(unaff_x29 + -0x48)) break;
    uVar7 = *(uint *)(lVar10 + (long)(int)*(uint *)(unaff_x29 + -0x48) * 4 + 0x20);
    if (uVar7 == 0x14) goto LAB_01f5e868;
    if (0x14 < (int)uVar7) {
      if (*(long *)(unaff_x29 + -0x28) == 0) goto LAB_01f5e9b4;
      uVar5 = FUN_01f1b33c(*(long *)(unaff_x29 + -0x28),0);
      puVar3 = PTR_DAT_027be4d0;
      if ((uVar5 >> 3 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_027be4d0 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        if (DAT_0293daf8 == '\0') {
          thunk_FUN_01279b34(puVar3);
          DAT_0293daf8 = '\x01';
        }
        lVar10 = *(long *)puVar3;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01220628();
          lVar10 = *(long *)puVar3;
        }
        if (**(char **)(lVar10 + 0xb8) == '\0') {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar8 = FUN_01f5dd00(uVar7);
          if ((uVar8 & 1) == 0) goto LAB_01f5e82c;
        }
LAB_01f5e664:
        uVar7 = 0;
        unaff_x21 = 1;
        goto LAB_01f5e66c;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar8 = FUN_01f5aedc(uVar7);
      if ((uVar8 & 1) != 0) goto LAB_01f5e664;
LAB_01f5e82c:
      uVar7 = 0;
      goto LAB_01f5e830;
    }
LAB_01f5e66c:
    if ((*(uint *)(unaff_x29 + -0x48) < 7) &&
       ((1 << (ulong)(*(uint *)(unaff_x29 + -0x48) & 0x1f) & 0x43U) != 0)) {
      if ((unaff_x21 & 1) == 0) {
LAB_01f5e868:
        if ((DAT_0293dcc4 & 1) == 0) {
          thunk_FUN_01279b34(PTR_DAT_027c0a78);
          DAT_0293dcc4 = 1;
        }
        puVar3 = PTR_DAT_027c0a78;
        unaff_x19[0x10] = 4;
        uVar14 = *(undefined8 *)puVar3;
      }
      else {
        uVar14 = *(undefined8 *)(unaff_x29 + -0x28);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        FUN_01f5d558(uVar14,unaff_x29 + -0x78);
        if (*(int *)(unaff_x29 + -0x5c) != -1) {
          uVar7 = unaff_x19[3];
          if (*(int *)(unaff_x29 + -0x5c) == 0) {
            if (uVar7 < 0xd) {
              uVar5 = 0;
              if (uVar7 != 0xc) {
                uVar5 = uVar7;
              }
LAB_01f5e744:
              unaff_x19[3] = uVar5;
              goto LAB_01f5e748;
            }
          }
          else if (uVar7 < 0x18) {
            if ((int)uVar7 < 0xc) {
              uVar5 = uVar7 + 0xc;
              goto LAB_01f5e744;
            }
            goto LAB_01f5e748;
          }
          goto LAB_01f5e868;
        }
LAB_01f5e748:
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar8 = FUN_01f5f2b0();
        if ((uVar8 & 1) == 0) goto LAB_01f5e82c;
        plVar9 = (long *)*unaff_x20;
        if (plVar9 == (long *)0x0) goto LAB_01f5e9b4;
        uVar8 = (**(code **)(*plVar9 + 0x2a8))
                          (plVar9,*unaff_x19,unaff_x19[1],unaff_x19[2],unaff_x19[3],unaff_x19[4],
                           unaff_x19[5],0,unaff_x19[8],unaff_x29 + -0x38,
                           *(undefined8 *)(*plVar9 + 0x2b0));
        if ((uVar8 & 1) != 0) {
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
            lVar10 = -0x8000000000000000;
            if (dVar16 != INFINITY) {
              lVar10 = (long)dVar16;
            }
            uVar14 = FUN_01e727dc(unaff_x29 + -0x38,lVar10,0);
            *(undefined8 *)(unaff_x29 + -0x38) = uVar14;
          }
          iVar2 = *(int *)(unaff_x29 + -100);
          if (iVar2 != -1) {
            plVar9 = (long *)*unaff_x20;
            if (plVar9 == (long *)0x0) goto LAB_01f5e9b4;
            iVar6 = (**(code **)(*plVar9 + 0x1f8))
                              (plVar9,*(undefined8 *)(unaff_x29 + -0x38),
                               *(undefined8 *)(*plVar9 + 0x200));
            if (iVar2 != iVar6) {
              uVar12 = 4;
              puVar11 = (undefined8 *)PTR_DAT_027c0ab8;
              goto LAB_01f5e6f4;
            }
          }
          *(undefined8 *)(unaff_x19 + 0xe) = *(undefined8 *)(unaff_x29 + -0x38);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar7 = FUN_01f5f534(unaff_x29 + -0xa0);
          goto LAB_01f5e830;
        }
        uVar12 = 7;
        puVar11 = (undefined8 *)PTR_DAT_027c0aa8;
LAB_01f5e6f4:
        uVar14 = *puVar11;
        unaff_x19[0x10] = uVar12;
      }
      uVar7 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = uVar14;
      *(undefined8 *)(unaff_x19 + 0x14) = 0;
LAB_01f5e830:
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        return uVar7 & 1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    do {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar8 = FUN_01f59c20(uVar7,unaff_x29 + -0xa0,unaff_x29 + -0x48,unaff_x29 + -0x78);
      if ((uVar8 & 1) == 0) goto LAB_01f5e82c;
      uVar5 = *(uint *)(unaff_x29 + -0x48);
    } while (uVar5 == 0x12);
    if (*(int *)(unaff_x29 + -0x44) != 0x100) {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar8 = FUN_01f5dc08();
      if ((uVar8 & 1) == 0) goto LAB_01f5e868;
      uVar5 = *(uint *)(unaff_x29 + -0x48);
      *(undefined4 *)(unaff_x29 + -0x44) = 0x100;
    }
    if (uVar5 == 0x13) {
      if ((uVar7 & 0xfffffffe) == 0xc) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar7 = FUN_01f5ec58(unaff_x29 + -0x78,unaff_x29 + -0xa0,unaff_w25);
        goto LAB_01f5e830;
      }
      goto LAB_01f5e868;
    }
    if ((*(byte *)(unaff_x29 + -0x50) & 1) == 0) {
      lVar10 = *unaff_x27;
      unaff_w22 = uVar7;
      goto LAB_01f5e534;
    }
    uVar1 = 3;
    if (uVar7 != 0x12) {
      uVar1 = uVar7;
    }
    unaff_w22 = 5;
    if (uVar1 != 0x13) {
      unaff_w22 = uVar1;
    }
    if ((uVar5 & 0xfffffffd) != 0xc && uVar5 != 0xd) {
      unaff_w22 = uVar7;
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    bVar4 = FUN_01f5f230(unaff_x29 + -0xa0);
    lVar10 = *unaff_x27;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01220628(lVar10);
      lVar10 = *unaff_x27;
    }
    lVar13 = **(long **)(lVar10 + 0xb8);
    if (lVar13 == 0) goto LAB_01f5e9b4;
    if (*(uint *)(lVar13 + 0x18) <= unaff_w22) break;
    lVar13 = *(long *)(lVar13 + (long)(int)unaff_w22 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_01f5e9b4;
    uVar7 = *(uint *)(unaff_x29 + -0x48);
    if (*(uint *)(lVar13 + 0x18) <= uVar7) break;
    if ((*(int *)(lVar13 + (long)(int)uVar7 * 4 + 0x20) != 0x14 & (bVar4 ^ 0xff)) == 0) {
      switch(uVar7) {
      case 4:
      case 5:
        uVar12 = 3;
        if ((bVar4 & 1) != 0) {
          uVar12 = 1;
        }
        break;
      default:
        goto LAB_01f5e534;
      case 8:
        uVar12 = 6;
        if ((bVar4 & 1) == 0) {
          uVar12 = 7;
        }
        break;
      case 0xd:
        uVar12 = 0xe;
        if ((bVar4 & 1) == 0) {
          uVar12 = 0xc;
        }
      }
      *(undefined4 *)(unaff_x29 + -0x48) = uVar12;
    }
LAB_01f5e534:
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01220628(lVar10);
      lVar10 = *unaff_x27;
    }
    param_1 = **(long **)(lVar10 + 0xb8);
    if (param_1 == 0) {
LAB_01f5e9b4:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    in_w9 = *(uint *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


