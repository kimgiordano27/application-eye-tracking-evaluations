/*
FUNCTION_NAME: OVRManager$$get_isHmdPresent
ENTRY_POINT: 01f5e480
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__get_isHmdPresent(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  int in_w9;
  undefined4 uVar10;
  long lVar11;
  undefined4 *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 uVar12;
  uint unaff_w22;
  byte unaff_w23;
  undefined4 unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  double dVar13;
  double dVar14;
  
code_r0x01f5e480:
  if (in_w9 == 0) {
    thunk_FUN_01220628(param_1);
    param_1 = *unaff_x27;
  }
  lVar11 = **(long **)(param_1 + 0xb8);
  if (lVar11 == 0) {
LAB_01f5e9b4:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  if (*(uint *)(lVar11 + 0x18) <= unaff_w22) {
LAB_01f5e9b8:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
  lVar11 = *(long *)(lVar11 + (long)(int)unaff_w22 * 8 + 0x20);
  if (lVar11 == 0) goto LAB_01f5e9b4;
  uVar4 = *(uint *)(unaff_x29 + -0x48);
  if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_01f5e9b8;
  if ((*(int *)(lVar11 + (long)(int)uVar4 * 4 + 0x20) != 0x14 & (unaff_w23 ^ 0xff)) == 0) {
    switch(uVar4) {
    case 4:
    case 5:
      uVar10 = 3;
      if ((unaff_w23 & 1) != 0) {
        uVar10 = 1;
      }
      break;
    default:
      goto LAB_01f5e534;
    case 8:
      uVar10 = 6;
      if ((unaff_w23 & 1) == 0) {
        uVar10 = 7;
      }
      break;
    case 0xd:
      uVar10 = 0xe;
      if ((unaff_w23 & 1) == 0) {
        uVar10 = 0xc;
      }
    }
    *(undefined4 *)(unaff_x29 + -0x48) = uVar10;
  }
LAB_01f5e534:
  do {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01220628(param_1);
      param_1 = *unaff_x27;
    }
    lVar11 = **(long **)(param_1 + 0xb8);
    if (lVar11 == 0) goto LAB_01f5e9b4;
    if (*(uint *)(lVar11 + 0x18) <= unaff_w22) goto LAB_01f5e9b8;
    lVar11 = *(long *)(lVar11 + (long)(int)unaff_w22 * 8 + 0x20);
    if (lVar11 == 0) goto LAB_01f5e9b4;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x29 + -0x48)) goto LAB_01f5e9b8;
    unaff_w22 = *(uint *)(lVar11 + (long)(int)*(uint *)(unaff_x29 + -0x48) * 4 + 0x20);
    if (unaff_w22 == 0x14) goto LAB_01f5e868;
    if (0x14 < (int)unaff_w22) {
      if (*(long *)(unaff_x29 + -0x28) != 0) {
        uVar4 = FUN_01f1b33c(*(long *)(unaff_x29 + -0x28),0);
        puVar3 = PTR_DAT_027be4d0;
        if ((uVar4 >> 3 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_027be4d0 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          if (DAT_0293daf8 == '\0') {
            thunk_FUN_01279b34(puVar3);
            DAT_0293daf8 = '\x01';
          }
          lVar11 = *(long *)puVar3;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01220628();
            lVar11 = *(long *)puVar3;
          }
          if (**(char **)(lVar11 + 0xb8) == '\0') {
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar6 = FUN_01f5dd00(unaff_w22);
            if ((uVar6 & 1) == 0) goto LAB_01f5e82c;
          }
LAB_01f5e664:
          unaff_w22 = 0;
          unaff_x21 = 1;
          goto LAB_01f5e66c;
        }
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar6 = FUN_01f5aedc(unaff_w22);
        if ((uVar6 & 1) != 0) goto LAB_01f5e664;
LAB_01f5e82c:
        uVar4 = 0;
        goto LAB_01f5e830;
      }
      goto LAB_01f5e9b4;
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
        uVar12 = *(undefined8 *)puVar3;
      }
      else {
        uVar12 = *(undefined8 *)(unaff_x29 + -0x28);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        FUN_01f5d558(uVar12,unaff_x29 + -0x78);
        if (*(int *)(unaff_x29 + -0x5c) != -1) {
          uVar4 = unaff_x19[3];
          if (*(int *)(unaff_x29 + -0x5c) == 0) {
            if (uVar4 < 0xd) {
              uVar8 = 0;
              if (uVar4 != 0xc) {
                uVar8 = uVar4;
              }
LAB_01f5e744:
              unaff_x19[3] = uVar8;
              goto LAB_01f5e748;
            }
          }
          else if (uVar4 < 0x18) {
            if ((int)uVar4 < 0xc) {
              uVar8 = uVar4 + 0xc;
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
        uVar6 = FUN_01f5f2b0();
        if ((uVar6 & 1) == 0) goto LAB_01f5e82c;
        plVar7 = (long *)*unaff_x20;
        if (plVar7 == (long *)0x0) goto LAB_01f5e9b4;
        uVar6 = (**(code **)(*plVar7 + 0x2a8))
                          (plVar7,*unaff_x19,unaff_x19[1],unaff_x19[2],unaff_x19[3],unaff_x19[4],
                           unaff_x19[5],0,unaff_x19[8],unaff_x29 + -0x38,
                           *(undefined8 *)(*plVar7 + 0x2b0));
        if ((uVar6 & 1) != 0) {
          dVar14 = *(double *)(unaff_x29 + -0x58);
          if (0.0 < dVar14) {
            if (*(int *)(*(long *)PTR_DAT_027b1af0 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            dVar14 = dVar14 * DAT_00745958;
            dVar13 = modf(dVar14,(double *)(unaff_x29 + -0x20));
            if (0.0 <= dVar14) {
              if (dVar13 == 0.5) {
                dVar14 = *(double *)(unaff_x29 + -0x20);
                dVar13 = 1.0;
                goto LAB_01f5e8dc;
              }
              dVar14 = (double)(long)(dVar14 + 0.5);
            }
            else if (dVar13 == -0.5) {
              dVar14 = *(double *)(unaff_x29 + -0x20);
              dVar13 = -1.0;
LAB_01f5e8dc:
              if (((long)dVar14 & 1U) != 0) {
                dVar14 = dVar14 + dVar13;
              }
            }
            else {
              dVar14 = (double)(long)(dVar14 + -0.5);
            }
            if (*(int *)(*(long *)PTR_DAT_027b4b30 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            lVar11 = -0x8000000000000000;
            if (dVar14 != INFINITY) {
              lVar11 = (long)dVar14;
            }
            uVar12 = FUN_01e727dc(unaff_x29 + -0x38,lVar11,0);
            *(undefined8 *)(unaff_x29 + -0x38) = uVar12;
          }
          iVar2 = *(int *)(unaff_x29 + -100);
          if (iVar2 != -1) {
            plVar7 = (long *)*unaff_x20;
            if (plVar7 == (long *)0x0) goto LAB_01f5e9b4;
            iVar5 = (**(code **)(*plVar7 + 0x1f8))
                              (plVar7,*(undefined8 *)(unaff_x29 + -0x38),
                               *(undefined8 *)(*plVar7 + 0x200));
            if (iVar2 != iVar5) {
              uVar10 = 4;
              puVar9 = (undefined8 *)PTR_DAT_027c0ab8;
              goto LAB_01f5e6f4;
            }
          }
          *(undefined8 *)(unaff_x19 + 0xe) = *(undefined8 *)(unaff_x29 + -0x38);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar4 = FUN_01f5f534(unaff_x29 + -0xa0);
          goto LAB_01f5e830;
        }
        uVar10 = 7;
        puVar9 = (undefined8 *)PTR_DAT_027c0aa8;
LAB_01f5e6f4:
        uVar12 = *puVar9;
        unaff_x19[0x10] = uVar10;
      }
      uVar4 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = uVar12;
      *(undefined8 *)(unaff_x19 + 0x14) = 0;
LAB_01f5e830:
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        return uVar4 & 1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    do {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar6 = FUN_01f59c20(unaff_w22,unaff_x29 + -0xa0,unaff_x29 + -0x48,unaff_x29 + -0x78);
      if ((uVar6 & 1) == 0) goto LAB_01f5e82c;
      uVar4 = *(uint *)(unaff_x29 + -0x48);
    } while (uVar4 == 0x12);
    if (*(int *)(unaff_x29 + -0x44) != 0x100) {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar6 = FUN_01f5dc08();
      if ((uVar6 & 1) == 0) goto LAB_01f5e868;
      uVar4 = *(uint *)(unaff_x29 + -0x48);
      *(undefined4 *)(unaff_x29 + -0x44) = 0x100;
    }
    if (uVar4 == 0x13) {
      if ((unaff_w22 & 0xfffffffe) == 0xc) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar4 = FUN_01f5ec58(unaff_x29 + -0x78,unaff_x29 + -0xa0,unaff_w25);
        goto LAB_01f5e830;
      }
      goto LAB_01f5e868;
    }
    if ((*(byte *)(unaff_x29 + -0x50) & 1) != 0) break;
    param_1 = *unaff_x27;
  } while( true );
  uVar8 = 3;
  if (unaff_w22 != 0x12) {
    uVar8 = unaff_w22;
  }
  uVar1 = 5;
  if (uVar8 != 0x13) {
    uVar1 = uVar8;
  }
  if ((uVar4 & 0xfffffffd) != 0xc && uVar4 != 0xd) {
    uVar1 = unaff_w22;
  }
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  unaff_w23 = FUN_01f5f230(unaff_x29 + -0xa0);
  param_1 = *unaff_x27;
  in_w9 = *(int *)(param_1 + 0xe0);
  unaff_w22 = uVar1;
  goto code_r0x01f5e480;
}


