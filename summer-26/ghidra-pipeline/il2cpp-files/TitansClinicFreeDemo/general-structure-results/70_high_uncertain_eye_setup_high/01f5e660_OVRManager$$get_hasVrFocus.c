/*
FUNCTION_NAME: OVRManager$$get_hasVrFocus
ENTRY_POINT: 01f5e660
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__get_hasVrFocus(ulong param_1)

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
  long lVar13;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar14;
  uint uVar15;
  undefined4 unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  double dVar16;
  double dVar17;
  
joined_r0x01f5e660:
  do {
    if ((param_1 & 1) == 0) {
LAB_01f5e82c:
      uVar7 = 0;
LAB_01f5e830:
      if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar7 & 1;
    }
    do {
      uVar7 = 0;
      do {
        if ((*(uint *)(unaff_x29 + -0x48) < 7) &&
           ((1 << (ulong)(*(uint *)(unaff_x29 + -0x48) & 0x1f) & 0x43U) != 0)) {
          uVar14 = *(undefined8 *)(unaff_x29 + -0x28);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          FUN_01f5d558(uVar14,unaff_x29 + -0x78);
          if (*(int *)(unaff_x29 + -0x5c) == -1) {
LAB_01f5e748:
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar8 = FUN_01f5f2b0();
            if ((uVar8 & 1) == 0) goto LAB_01f5e82c;
            plVar9 = (long *)*unaff_x20;
            if (plVar9 == (long *)0x0) goto LAB_01f5e9b4;
            uVar8 = (**(code **)(*plVar9 + 0x2a8))
                              (plVar9,*unaff_x19,unaff_x19[1],unaff_x19[2],unaff_x19[3],unaff_x19[4]
                               ,unaff_x19[5],0,unaff_x19[8],unaff_x29 + -0x38,
                               *(undefined8 *)(*plVar9 + 0x2b0));
            if ((uVar8 & 1) != 0) {
              dVar17 = *(double *)(unaff_x29 + -0x58);
              if (0.0 < dVar17) {
                if (*(int *)(*(long *)PTR_DAT_027b1af0 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                dVar17 = dVar17 * DAT_00745958;
                dVar16 = modf(dVar17,(double *)(unaff_x29 + -0x20));
                if (0.0 <= dVar17) {
                  if (dVar16 == 0.5) {
                    dVar17 = *(double *)(unaff_x29 + -0x20);
                    dVar16 = 1.0;
                    goto LAB_01f5e8dc;
                  }
                  dVar17 = (double)(long)(dVar17 + 0.5);
                }
                else if (dVar16 == -0.5) {
                  dVar17 = *(double *)(unaff_x29 + -0x20);
                  dVar16 = -1.0;
LAB_01f5e8dc:
                  if (((long)dVar17 & 1U) != 0) {
                    dVar17 = dVar17 + dVar16;
                  }
                }
                else {
                  dVar17 = (double)(long)(dVar17 + -0.5);
                }
                if (*(int *)(*(long *)PTR_DAT_027b4b30 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                lVar10 = -0x8000000000000000;
                if (dVar17 != INFINITY) {
                  lVar10 = (long)dVar17;
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
          else {
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
LAB_01f5e868:
            if ((DAT_0293dcc4 & 1) == 0) {
              thunk_FUN_01279b34(PTR_DAT_027c0a78);
              DAT_0293dcc4 = 1;
            }
            puVar3 = PTR_DAT_027c0a78;
            unaff_x19[0x10] = 4;
            uVar14 = *(undefined8 *)puVar3;
          }
          uVar7 = 0;
          *(undefined8 *)(unaff_x19 + 0x12) = uVar14;
          *(undefined8 *)(unaff_x19 + 0x14) = 0;
          goto LAB_01f5e830;
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
          if ((uVar7 & 0xfffffffe) != 0xc) goto LAB_01f5e868;
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar7 = FUN_01f5ec58(unaff_x29 + -0x78,unaff_x29 + -0xa0,unaff_w25);
          goto LAB_01f5e830;
        }
        if ((*(byte *)(unaff_x29 + -0x50) & 1) == 0) {
          lVar10 = *unaff_x27;
          uVar15 = uVar7;
          goto LAB_01f5e534;
        }
        uVar1 = 3;
        if (uVar7 != 0x12) {
          uVar1 = uVar7;
        }
        uVar15 = 5;
        if (uVar1 != 0x13) {
          uVar15 = uVar1;
        }
        if ((uVar5 & 0xfffffffd) != 0xc && uVar5 != 0xd) {
          uVar15 = uVar7;
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
        if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_01f5e9b8;
        lVar13 = *(long *)(lVar13 + (long)(int)uVar15 * 8 + 0x20);
        if (lVar13 == 0) goto LAB_01f5e9b4;
        uVar7 = *(uint *)(unaff_x29 + -0x48);
        if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_01f5e9b8;
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
        lVar10 = **(long **)(lVar10 + 0xb8);
        if (lVar10 == 0) goto LAB_01f5e9b4;
        if (*(uint *)(lVar10 + 0x18) <= uVar15) {
LAB_01f5e9b8:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        lVar10 = *(long *)(lVar10 + (long)(int)uVar15 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_01f5e9b4;
        if (*(uint *)(lVar10 + 0x18) <= *(uint *)(unaff_x29 + -0x48)) goto LAB_01f5e9b8;
        uVar7 = *(uint *)(lVar10 + (long)(int)*(uint *)(unaff_x29 + -0x48) * 4 + 0x20);
        if (uVar7 == 0x14) goto LAB_01f5e868;
      } while ((int)uVar7 < 0x15);
      if (*(long *)(unaff_x29 + -0x28) == 0) {
LAB_01f5e9b4:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      uVar5 = FUN_01f1b33c(*(long *)(unaff_x29 + -0x28),0);
      puVar3 = PTR_DAT_027be4d0;
      if ((uVar5 >> 3 & 1) == 0) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        param_1 = FUN_01f5aedc(uVar7);
        goto joined_r0x01f5e660;
      }
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
    } while (**(char **)(lVar10 + 0xb8) != '\0');
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    param_1 = FUN_01f5dd00(uVar7);
  } while( true );
}


