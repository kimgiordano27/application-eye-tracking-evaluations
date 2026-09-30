/*
FUNCTION_NAME: OVRPlugin$$TryLocateSpace
ENTRY_POINT: 01d93004
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d94010) */
/* WARNING: Removing unreachable block (ram,0x01d94110) */
/* WARNING: Removing unreachable block (ram,0x01d93ed0) */
/* WARNING: Removing unreachable block (ram,0x01d936dc) */
/* WARNING: Removing unreachable block (ram,0x01d93924) */
/* WARNING: Removing unreachable block (ram,0x01d94118) */

long * OVRPlugin__TryLocateSpace(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  long *unaff_x19;
  byte bVar21;
  long unaff_x20;
  undefined8 uVar22;
  byte unaff_w22;
  long unaff_x27;
  long lVar23;
  long in_stack_00000008;
  
  FUN_00fdc2e4(PTR_DAT_02359980);
  FUN_00fdc2e4(PTR_DAT_02359988);
  FUN_00fdc2e4(PTR_DAT_0234bef8);
  FUN_00fdc2e4(PTR_DAT_02359990);
  FUN_00fdc2e4(PTR_DAT_02359998);
  FUN_00fdc2e4(PTR_DAT_023599a0);
  FUN_00fdc2e4(PTR_DAT_023599a8);
  FUN_00fdc2e4(PTR_DAT_023599b0);
  FUN_00fdc2e4(PTR_DAT_0234be70);
  FUN_00fdc2e4(PTR_DAT_02359918);
  FUN_00fdc2e4(PTR_DAT_02354070);
  FUN_00fdc2e4(PTR_DAT_0234bc58);
  *(undefined1 *)(unaff_x20 + 0x881) = 1;
  in_stack_00000008 = 0;
  if (unaff_x27 == 0) {
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar22 = thunk_FUN_010400dc();
    puVar16 = PTR_DAT_02352818;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar8 = FUN_01d603ec();
    puVar16 = PTR_DAT_02354070;
    if ((uVar8 & 1) == 0) {
      uVar22 = *(undefined8 *)PTR_DAT_02359918;
      if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01d5e86c(uVar22,0);
      uVar8 = FUN_01d603ec();
      plVar15 = (long *)0x0;
      if ((uVar8 & 1) == 0) {
        plVar15 = unaff_x19;
      }
      if (*(int *)(*(long *)puVar16 + 0xe0) == 0) {
        thunk_FUN_01022c14(*(long *)puVar16);
      }
      puVar3 = PTR_DAT_02359978;
      plVar9 = (long *)FUN_01d92da8();
      if ((unaff_w22 & 1) == 0) {
        if (plVar9 == (long *)0x0) goto LAB_01d9400c;
        lVar10 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
              puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_01d931cc;
            }
            uVar8 = uVar8 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_0103c348(plVar9,*(long *)puVar3,0);
LAB_01d931cc:
        iVar6 = (*(code *)*puVar11)(plVar9,puVar11[1]);
        puVar4 = PTR_DAT_02359990;
        if (iVar6 == 1) {
          lVar10 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_02359990) {
                puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_01d93934;
              }
              uVar8 = uVar8 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)FUN_0103c348(plVar9,*(long *)PTR_DAT_02359990,0);
LAB_01d93934:
          lVar10 = (*(code *)*puVar11)(plVar9,0,puVar11[1]);
          if (lVar10 == 0) {
            thunk_FUN_010303a8(PTR_DAT_02359920);
            uVar22 = thunk_FUN_010400dc();
            uVar14 = thunk_FUN_010303a8(PTR_DAT_023599b8);
            FUN_01cc6734(uVar22,uVar14,0);
            goto LAB_01d940bc;
          }
          if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          uVar8 = FUN_01d611c4(plVar15,0,0);
          if ((uVar8 & 1) == 0) {
            plVar15 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353960,1);
            lVar12 = *plVar9;
            lVar10 = *(long *)puVar4;
            uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar8 != 0) {
              piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == lVar10) goto LAB_01d93e54;
                uVar8 = uVar8 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar8 != 0);
            }
          }
          else {
            lVar10 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                  puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_01d93d64;
                }
                uVar8 = uVar8 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_0103c348(plVar9,*(long *)puVar4,0);
LAB_01d93d64:
            lVar10 = (*(code *)*puVar11)(plVar9,0,puVar11[1]);
            if ((lVar10 == 0) || (uVar22 = FUN_01cd0fe8(lVar10,0), plVar15 == (long *)0x0))
            goto LAB_01d9400c;
            uVar8 = (**(code **)(*plVar15 + 0x288))
                              (plVar15,uVar22,*(undefined8 *)(*plVar15 + 0x290));
            if ((uVar8 & 1) == 0) {
              lVar12 = *(long *)PTR_DAT_02359970;
              lVar10 = *(long *)(lVar12 + 0x38);
              if (lVar10 == 0) {
                FUN_0103c2a0(lVar12);
                lVar10 = *(long *)(lVar12 + 0x38);
              }
              lVar10 = *(long *)(lVar10 + 0x10);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_0103c244();
              }
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01022c14();
              }
              lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_0103c244();
              }
              return (long *)**(undefined8 **)(lVar10 + 0xb8);
            }
            plVar15 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353960,1);
            lVar12 = *plVar9;
            lVar10 = *(long *)puVar4;
            uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar8 != 0) {
              piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == lVar10) goto LAB_01d93e54;
                uVar8 = uVar8 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar8 != 0);
            }
          }
          puVar11 = (undefined8 *)FUN_0103c348(plVar9,lVar10,0);
          goto LAB_01d93e60;
        }
        bVar21 = 0;
      }
      else {
        if (*(int *)(*(long *)puVar16 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        lVar10 = FUN_01d92590();
        bVar21 = lVar10 != 0 & unaff_w22;
      }
      if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar8 = FUN_01d611c4(plVar15,0,0);
      if ((uVar8 & 1) == 0) {
        bVar5 = 0;
      }
      else {
        if (plVar15 == (long *)0x0) goto LAB_01d9400c;
        bVar5 = FUN_01d62314(plVar15,0);
        bVar5 = bVar5 & 1;
      }
      if ((bVar5 & bVar21) != 0) {
        if (*(int *)(*(long *)puVar16 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        lVar10 = FUN_01d92954(plVar15);
        if (lVar10 == 0) goto LAB_01d9400c;
        bVar21 = bVar21 & *(char *)(lVar10 + 0x15) != '\0';
      }
      puVar16 = PTR_DAT_0234be70;
      if (plVar9 != (long *)0x0) {
        lVar10 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
              puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_01d93300;
            }
            uVar8 = uVar8 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_0103c348(plVar9,*(long *)puVar3,0);
LAB_01d93300:
        uVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
        if (*(int *)(*(long *)puVar16 + 0xe0) == 0) {
          thunk_FUN_01022c14(*(long *)puVar16);
        }
        uVar7 = FUN_01d4b018(uVar7,0x10,0);
        if (bVar21 == 0) {
          if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          uVar8 = FUN_01d603ec(plVar15,0,0);
          if ((uVar8 & 1) == 0) {
            lVar10 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023599b0);
            FUN_017d2874(lVar10,uVar7,*(undefined8 *)PTR_DAT_023599a8);
            lVar12 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar8 != 0) {
              piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_02359980) {
                  puVar11 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_01d93b90;
                }
                uVar8 = uVar8 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_0103c348(plVar9,*(long *)PTR_DAT_02359980,0);
LAB_01d93b90:
            plVar9 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
            puVar4 = PTR_DAT_02359998;
            puVar3 = PTR_DAT_02359988;
            puVar16 = PTR_DAT_0234bef8;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            do {
              lVar12 = *plVar9;
              uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar8 != 0) {
                piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar16) {
                    puVar11 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_01d93c08;
                  }
                  uVar8 = uVar8 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)FUN_0103c348(plVar9,*(long *)puVar16,0);
LAB_01d93c08:
              uVar8 = (*(code *)*puVar11)(plVar9,puVar11[1]);
              if ((uVar8 & 1) == 0) {
                if (plVar9 == (long *)0x0) goto joined_r0x01d93fcc;
                lVar12 = *plVar9;
                uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar8 == 0) goto LAB_01d93d48;
                piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                goto LAB_01d93d30;
              }
              lVar12 = *plVar9;
              uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar8 != 0) {
                piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                    puVar11 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_01d93c64;
                  }
                  uVar8 = uVar8 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar8 != 0);
              }
              puVar11 = (undefined8 *)FUN_0103c348(plVar9,*(long *)puVar3,0);
LAB_01d93c64:
              lVar12 = (*(code *)*puVar11)(plVar9,puVar11[1]);
              if (lVar12 == 0) {
                thunk_FUN_010303a8(PTR_DAT_02359920);
                uVar22 = thunk_FUN_010400dc();
                uVar14 = thunk_FUN_010303a8(PTR_DAT_023599b8);
                FUN_01cc6734(uVar22,uVar14,0);
                uVar14 = thunk_FUN_010303a8(PTR_DAT_023599c0);
                    /* WARNING: Subroutine does not return */
                FUN_00fdc400(uVar22,uVar14);
              }
              uVar22 = FUN_01cd0fe8(lVar12,0);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fdc534(uVar22,uVar22);
              }
              uVar8 = (**(code **)(*plVar15 + 0x288))
                                (plVar15,uVar22,*(undefined8 *)(*plVar15 + 0x290));
              if ((uVar8 & 1) != 0) {
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fdc534();
                }
                lVar17 = *(long *)(lVar10 + 0x10);
                lVar23 = *(long *)puVar4;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fdc534();
                }
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                  plVar13 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar13 = lVar12;
                  thunk_FUN_0106e12c(plVar13,lVar12);
                }
                else {
                  FUN_017d3030(lVar10,lVar12,
                               *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                }
              }
            } while( true );
          }
          lVar10 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_02359980) {
                puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_01d93a0c;
              }
              uVar8 = uVar8 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)FUN_0103c348(plVar9,*(long *)PTR_DAT_02359980,0);
LAB_01d93a0c:
          plVar15 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
          puVar4 = PTR_DAT_02359988;
          puVar16 = PTR_DAT_0234bef8;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          do {
            lVar10 = *plVar15;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar16) {
                  puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_01d93a7c;
                }
                uVar8 = uVar8 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_0103c348(plVar15,*(long *)puVar16,0);
LAB_01d93a7c:
            uVar8 = (*(code *)*puVar11)(plVar15,puVar11[1]);
            if ((uVar8 & 1) == 0) {
              if (plVar15 == (long *)0x0) goto LAB_01d93ec4;
              lVar10 = *plVar15;
              uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar8 == 0) goto LAB_01d93b74;
              piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              goto LAB_01d93b5c;
            }
            lVar10 = *plVar15;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                  puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_01d93ad8;
                }
                uVar8 = uVar8 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_0103c348(plVar15,*(long *)puVar4,0);
LAB_01d93ad8:
            lVar10 = (*(code *)*puVar11)(plVar15,puVar11[1]);
            if (lVar10 == 0) {
              thunk_FUN_010303a8(PTR_DAT_02359920);
              uVar22 = thunk_FUN_010400dc();
              uVar14 = thunk_FUN_010303a8(PTR_DAT_023599b8);
              FUN_01cc6734(uVar22,uVar14,0);
              uVar14 = thunk_FUN_010303a8(PTR_DAT_023599c0);
                    /* WARNING: Subroutine does not return */
              FUN_00fdc400(uVar22,uVar14);
            }
          } while( true );
        }
        lVar12 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023598f8);
        FUN_01468810(lVar12,uVar7,*(undefined8 *)PTR_DAT_023598f0);
        lVar10 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023599b0);
        FUN_017d2874(lVar10,uVar7,*(undefined8 *)PTR_DAT_023599a8);
        puVar4 = PTR_DAT_02359988;
        puVar3 = PTR_DAT_023598e8;
        puVar16 = PTR_DAT_0234bef8;
        iVar6 = 0;
        do {
          lVar17 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar8 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_02359980) {
                puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_01d93400;
              }
              uVar8 = uVar8 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)FUN_0103c348(plVar9,*(long *)PTR_DAT_02359980,0);
LAB_01d93400:
          plVar9 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
LAB_01d93414:
          lVar17 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar8 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar16) {
                puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_01d93460;
              }
              uVar8 = uVar8 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)FUN_0103c348(plVar9,*(long *)puVar16,0);
LAB_01d93460:
          uVar8 = (*(code *)*puVar11)(plVar9,puVar11[1]);
          if ((uVar8 & 1) != 0) {
            lVar17 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar8 != 0) {
              piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                  puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_01d934bc;
                }
                uVar8 = uVar8 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_0103c348(plVar9,*(long *)puVar4,0);
LAB_01d934bc:
            lVar17 = (*(code *)*puVar11)(plVar9,puVar11[1]);
            if (lVar17 == 0) {
              thunk_FUN_010303a8(PTR_DAT_02359920);
              uVar22 = thunk_FUN_010400dc();
              uVar14 = thunk_FUN_010303a8(PTR_DAT_023599b8);
              FUN_01cc6734(uVar22,uVar14,0);
              uVar14 = thunk_FUN_010303a8(PTR_DAT_023599c0);
                    /* WARNING: Subroutine does not return */
              FUN_00fdc400(uVar22,uVar14);
            }
            uVar22 = FUN_01cd0fe8(lVar17,0);
            if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            uVar8 = FUN_01d611c4(plVar15,0,0);
            if ((uVar8 & 1) != 0) goto code_r0x01d9350c;
            goto LAB_01d9352c;
          }
          if (plVar9 != (long *)0x0) {
            lVar17 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar8 != 0) {
              piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0234bef0) {
                  puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_01d936c4;
                }
                uVar8 = uVar8 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_0103c348(plVar9,*(long *)PTR_DAT_0234bef0,0);
LAB_01d936c4:
            (*(code *)*puVar11)(plVar9,puVar11[1]);
          }
          puVar2 = PTR_DAT_02354070;
          if (*(int *)(*(long *)PTR_DAT_02354070 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          unaff_x27 = FUN_01d92590(unaff_x27);
          if (unaff_x27 == 0) goto joined_r0x01d93fcc;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          iVar6 = iVar6 + 1;
          plVar9 = (long *)FUN_01d92da8(unaff_x27,plVar15,1);
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_01d9400c;
    }
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar22 = thunk_FUN_010400dc();
    puVar16 = PTR_DAT_02353ae0;
  }
  uVar14 = thunk_FUN_010303a8(puVar16);
  FUN_01c5e120(uVar22,uVar14,0);
LAB_01d940bc:
  uVar14 = thunk_FUN_010303a8(PTR_DAT_023599c0);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar22,uVar14);
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar20 = piVar20 + 4;
    if (uVar8 == 0) break;
LAB_01d93d30:
    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0234bef0) {
      puVar11 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_01d93fbc;
    }
  }
LAB_01d93d48:
  puVar11 = (undefined8 *)FUN_0103c348(plVar9,*(long *)PTR_DAT_0234bef0,0);
LAB_01d93fbc:
  (*(code *)*puVar11)(plVar9,puVar11[1]);
joined_r0x01d93fcc:
  if (lVar10 != 0) {
    plVar15 = (long *)FUN_017d49bc(lVar10,*(undefined8 *)PTR_DAT_023599a0);
    return plVar15;
  }
  goto LAB_01d9400c;
code_r0x01d9350c:
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar8 = (**(code **)(*plVar15 + 0x288))(plVar15,uVar22,*(undefined8 *)(*plVar15 + 0x290));
  if ((uVar8 & 1) == 0) goto LAB_01d93414;
LAB_01d9352c:
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar8 = FUN_0146ab1c(lVar12,uVar22,&stack0x00000008,*(undefined8 *)puVar3);
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_02354070 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar23 = FUN_01d92954(uVar22);
    if (iVar6 != 0) goto LAB_01d93558;
LAB_01d93590:
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
  }
  else {
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar23 = *(long *)(in_stack_00000008 + 0x10);
    if (iVar6 == 0) goto LAB_01d93590;
LAB_01d93558:
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(char *)(lVar23 + 0x15) == '\0') goto LAB_01d93618;
  }
  if (((*(char *)(lVar23 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
     (*(int *)(in_stack_00000008 + 0x18) == iVar6)) {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar18 = *(long *)(lVar10 + 0x10);
    lVar19 = *(long *)PTR_DAT_02359998;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      plVar13 = (long *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
      *plVar13 = lVar17;
      thunk_FUN_0106e12c(plVar13,lVar17);
    }
    else {
      FUN_017d3030(lVar10,lVar17,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
LAB_01d93618:
  if (in_stack_00000008 == 0) {
    lVar17 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023598d8);
    *(long *)(lVar17 + 0x10) = lVar23;
    thunk_FUN_0106e12c((long *)(lVar17 + 0x10),lVar23);
    *(int *)(lVar17 + 0x18) = iVar6;
    FUN_01468fe8(lVar12,uVar22,lVar17,*(undefined8 *)PTR_DAT_023598e0);
  }
  goto LAB_01d93414;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar20 = piVar20 + 4;
    if (uVar8 == 0) break;
LAB_01d93b5c:
    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0234bef0) {
      puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_01d93eb8;
    }
  }
LAB_01d93b74:
  puVar11 = (undefined8 *)FUN_0103c348(plVar15,*(long *)PTR_DAT_0234bef0,0);
LAB_01d93eb8:
  (*(code *)*puVar11)(plVar15,puVar11[1]);
LAB_01d93ec4:
  lVar10 = *plVar9;
  uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar8 != 0) {
    piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
        puVar11 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_01d93f20;
      }
      uVar8 = uVar8 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar8 != 0);
  }
  puVar11 = (undefined8 *)FUN_0103c348(plVar9,*(long *)puVar3,0);
LAB_01d93f20:
  uVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
  plVar15 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353960,uVar7);
  lVar10 = *plVar9;
  uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar8 != 0) {
    piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
        puVar11 = (undefined8 *)(lVar10 + (long)(*piVar20 + 5) * 0x10 + 0x138);
        goto LAB_01d93f98;
      }
      uVar8 = uVar8 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar8 != 0);
  }
  puVar11 = (undefined8 *)FUN_0103c348(plVar9,*(long *)puVar3,5);
LAB_01d93f98:
  (*(code *)*puVar11)(plVar9,plVar15,0,puVar11[1]);
  return plVar15;
LAB_01d93e54:
  puVar11 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
LAB_01d93e60:
  lVar10 = (*(code *)*puVar11)(plVar9,0,puVar11[1]);
  if (plVar15 != (long *)0x0) {
    if ((lVar10 != 0) &&
       (lVar12 = thunk_FUN_0103ffe0(lVar10,*(undefined8 *)(*plVar15 + 0x40)), lVar12 == 0)) {
      uVar22 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar22,0);
    }
    if ((int)plVar15[3] != 0) {
      plVar15[4] = lVar10;
      thunk_FUN_0106e12c(plVar15 + 4,lVar10);
      return plVar15;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
LAB_01d9400c:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


