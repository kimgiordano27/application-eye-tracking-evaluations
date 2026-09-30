/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedMember$$set_MemberInfo
ENTRY_POINT: 0727cfdc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0727e43c) */
/* WARNING: Removing unreachable block (ram,0x0727d7ec) */
/* WARNING: Removing unreachable block (ram,0x0727d7f0) */
/* WARNING: Removing unreachable block (ram,0x0727d3f0) */
/* WARNING: Removing unreachable block (ram,0x0727e444) */
/* WARNING: Removing unreachable block (ram,0x0727e470) */
/* WARNING: Removing unreachable block (ram,0x0727d9ec) */

long Meta_XR_ImmersiveDebugger_InspectedMember__set_MemberInfo(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long unaff_x23;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long *unaff_x25;
  undefined8 uVar24;
  long *unaff_x26;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  long *in_stack_00000060;
  undefined8 in_stack_00000080;
  undefined8 *in_stack_00000088;
  long in_stack_00000090;
  undefined8 *in_stack_00000098;
  long *in_stack_000000a0;
  long *in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  long *in_stack_000000c0;
  long *in_stack_000000c8;
  
  do {
    uVar11 = FUN_057bf848();
    if ((uVar11 & 1) != 0) {
      plVar18 = *(long **)(unaff_x19 + 0x58);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar14 = *plVar18;
      uVar21 = *(undefined8 *)(unaff_x23 + 0x10);
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x26) {
            puVar12 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
            goto LAB_0727d048;
          }
          uVar11 = uVar11 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)FUN_040b1e00(plVar18,*unaff_x26,2);
LAB_0727d048:
      (*(code *)*puVar12)(plVar18,uVar21,puVar12[1]);
    }
    plVar18 = in_stack_000000c8;
    if (in_stack_000000c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar14 = *in_stack_000000c8;
    uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar11 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x25) {
          puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0727cf5c;
        }
        uVar11 = uVar11 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)FUN_040b1e00(in_stack_000000c8,*unaff_x25,0);
LAB_0727cf5c:
    uVar11 = (*(code *)*puVar12)(plVar18,puVar12[1]);
    plVar18 = in_stack_000000c8;
    if ((uVar11 & 1) == 0) {
      if (in_stack_000000c8 == (long *)0x0) goto LAB_0727d0d4;
      lVar14 = *in_stack_000000c8;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 == 0) goto LAB_0727d0ac;
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    if (in_stack_000000c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar14 = *in_stack_000000c8;
    uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar11 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x20) {
          puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0727cfc0;
        }
        uVar11 = uVar11 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)FUN_040b1e00(in_stack_000000c8,*unaff_x20,0);
LAB_0727cfc0:
    unaff_x23 = (*(code *)*puVar12)(plVar18,puVar12[1]);
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar16 = piVar16 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0727d0c8;
    }
  }
LAB_0727d0ac:
  puVar12 = (undefined8 *)FUN_040b1e00(in_stack_000000c8,*(long *)PTR_DAT_092860c0,0);
LAB_0727d0c8:
  (*(code *)*puVar12)(plVar18,puVar12[1]);
LAB_0727d0d4:
  lVar14 = FUN_04fbecb8(*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)PTR_DAT_092c1670);
  puVar9 = PTR_DAT_092c1738;
  puVar6 = PTR_DAT_092c16e8;
  puVar5 = PTR_DAT_092c16d8;
  if (lVar14 != 0) {
    FUN_05c27784(&stack0x00000018,lVar14,*(undefined8 *)PTR_DAT_092c1700);
    in_stack_000000c0 = (long *)CONCAT44(uStack000000000000002c,uStack0000000000000028);
    in_stack_00000098 = &stack0x000000b0;
    in_stack_000000b8 = in_stack_00000020;
    in_stack_000000b0 = in_stack_00000018;
    in_stack_00000090 = 0;
    while (uVar11 = FUN_07161154(&stack0x000000b0,*(undefined8 *)PTR_DAT_092c1680),
          plVar18 = in_stack_000000c0, lVar14 = in_stack_00000090, puVar8 = PTR_DAT_092c1720,
          puVar7 = PTR_DAT_092c16f0, puVar4 = PTR_DAT_092c16b8, puVar3 = PTR_DAT_092c1408,
          (uVar11 & 1) != 0) {
      if (in_stack_000000c0 != (long *)0x0) {
        lVar14 = *in_stack_000000c0;
        bVar1 = *(byte *)(*(long *)PTR_DAT_092c1728 + 0x130);
        if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_092c1728)
           ) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_092c1730 + 0x130);
          if ((bVar1 <= *(byte *)(lVar14 + 0x130)) &&
             (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)PTR_DAT_092c1730)) {
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar11 = FUN_057bf848();
            if ((uVar11 & 1) != 0) {
              plVar19 = *(long **)(unaff_x19 + 0x58);
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar14 = *plVar19;
              lVar15 = plVar18[4];
              uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar11 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092c16f0) {
                    puVar12 = (undefined8 *)(lVar14 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                    goto LAB_0727d8a0;
                  }
                  uVar11 = uVar11 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar11 != 0);
              }
              puVar12 = (undefined8 *)FUN_040b1e00(plVar19,*(long *)PTR_DAT_092c16f0,3);
LAB_0727d8a0:
              (*(code *)*puVar12)(plVar19,0,lVar15,puVar12[1]);
            }
          }
        }
        else {
          plVar19 = (long *)in_stack_000000c0[0xb];
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = *plVar19;
          uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092c16c0) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0727d1f4;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar19,*(long *)PTR_DAT_092c16c0,0);
LAB_0727d1f4:
          plVar19 = (long *)(*(code *)*puVar12)(plVar19,puVar12[1]);
          in_stack_00000020 = &stack0x000000a8;
          in_stack_00000018 = 0;
joined_r0x0727d210:
          in_stack_000000a8 = plVar19;
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = *plVar19;
          uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *unaff_x25) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0727d260;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar19,*unaff_x25,0);
LAB_0727d260:
          uVar11 = (*(code *)*puVar12)(plVar19,puVar12[1]);
          plVar19 = in_stack_000000a8;
          if ((uVar11 & 1) != 0) {
            if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar14 = *in_stack_000000a8;
            uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar11 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
                  puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_0727d2c4;
                }
                uVar11 = uVar11 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar11 != 0);
            }
            puVar12 = (undefined8 *)FUN_040b1e00(in_stack_000000a8,*(long *)puVar6,0);
LAB_0727d2c4:
            lVar14 = (*(code *)*puVar12)(plVar19,puVar12[1]);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar11 = FUN_057bf848();
            plVar19 = in_stack_000000a8;
            if ((uVar11 & 1) != 0) {
              plVar19 = *(long **)(unaff_x19 + 0x58);
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar15 = *plVar19;
              uVar21 = *(undefined8 *)(lVar14 + 0x10);
              uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar11 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
                    puVar12 = (undefined8 *)(lVar15 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                    goto LAB_0727d34c;
                  }
                  uVar11 = uVar11 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar11 != 0);
              }
              puVar12 = (undefined8 *)FUN_040b1e00(plVar19,*(long *)puVar7,3);
LAB_0727d34c:
              (*(code *)*puVar12)(plVar19,0,uVar21,puVar12[1]);
              plVar19 = in_stack_000000a8;
            }
            goto joined_r0x0727d210;
          }
          if (in_stack_000000a8 != (long *)0x0) {
            lVar14 = *in_stack_000000a8;
            uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar11 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092860c0) {
                  puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_0727d3d8;
                }
                uVar11 = uVar11 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar11 != 0);
            }
            puVar12 = (undefined8 *)FUN_040b1e00(in_stack_000000a8,*(long *)PTR_DAT_092860c0,0);
LAB_0727d3d8:
            (*(code *)*puVar12)(plVar19,puVar12[1]);
          }
          puVar3 = PTR_DAT_092c16f0;
          plVar19 = (long *)plVar18[3];
          if (plVar19 != (long *)0x0) {
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar14 = *(long *)PTR_DAT_092c1458;
            if ((*(byte *)(*plVar19 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
               (*(long *)(*(long *)(*plVar19 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) !=
                lVar14)) {
                    /* WARNING: Subroutine does not return */
              FUN_04077bb0(plVar19,lVar14);
            }
            uVar11 = FUN_057bf848();
            if ((uVar11 & 1) != 0) {
              plVar19 = *(long **)(unaff_x19 + 0x58);
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              plVar20 = (long *)plVar18[3];
              lVar14 = *(long *)puVar3;
              if (plVar20 != (long *)0x0) {
                lVar15 = *(long *)PTR_DAT_092c1458;
                if ((*(byte *)(*plVar20 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
                   (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8)
                    != lVar15)) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077bb0(plVar20,lVar15);
                }
              }
              lVar15 = *plVar19;
              uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar11 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar14) {
                    puVar12 = (undefined8 *)(lVar15 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                    goto LAB_0727d4e0;
                  }
                  uVar11 = uVar11 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar11 != 0);
              }
              puVar12 = (undefined8 *)FUN_040b1e00(plVar19,lVar14,3);
LAB_0727d4e0:
              (*(code *)*puVar12)(plVar19,0,plVar20,puVar12[1]);
            }
          }
          if (plVar18[9] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          plVar18 = *(long **)(plVar18[9] + 0x10);
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = *plVar18;
          uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092c16d0) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0727d558;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar18,*(long *)PTR_DAT_092c16d0,0);
LAB_0727d558:
          plVar18 = (long *)(*(code *)*puVar12)(plVar18,puVar12[1]);
          in_stack_00000088 = &stack0x000000a0;
          in_stack_00000080 = 0;
joined_r0x0727d574:
          in_stack_000000a0 = plVar18;
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = *plVar18;
          uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *unaff_x25) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0727d5c4;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar18,*unaff_x25,0);
LAB_0727d5c4:
          uVar11 = (*(code *)*puVar12)(plVar18,puVar12[1]);
          plVar18 = in_stack_000000a0;
          if ((uVar11 & 1) != 0) {
            if (in_stack_000000a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar14 = *in_stack_000000a0;
            uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar11 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                  puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_0727d628;
                }
                uVar11 = uVar11 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar11 != 0);
            }
            puVar12 = (undefined8 *)FUN_040b1e00(in_stack_000000a0,*(long *)puVar5,0);
LAB_0727d628:
            (*(code *)*puVar12)(&stack0x00000018,plVar18,puVar12[1]);
            plVar19 = in_stack_00000060;
            if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            plVar18 = in_stack_000000a0;
            if (plVar19 != (long *)0x0) {
              if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              bVar1 = *(byte *)(*(long *)PTR_DAT_092c1458 + 0x130);
              if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_092c1458)) {
                    /* WARNING: Subroutine does not return */
                FUN_04077bb0(plVar19);
              }
              uVar11 = FUN_057bf848();
              plVar18 = in_stack_000000a0;
              if ((uVar11 & 1) != 0) {
                plVar18 = *(long **)(unaff_x19 + 0x58);
                if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                bVar1 = *(byte *)(*(long *)PTR_DAT_092c1458 + 0x130);
                if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_092c1458)) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077bb0(plVar19);
                }
                lVar15 = *plVar18;
                lVar14 = *(long *)puVar3;
                uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar11 != 0) {
                  piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar14) {
                      puVar12 = (undefined8 *)(lVar15 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                      goto LAB_0727d748;
                    }
                    uVar11 = uVar11 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar11 != 0);
                }
                puVar12 = (undefined8 *)FUN_040b1e00(plVar18,lVar14,3);
LAB_0727d748:
                (*(code *)*puVar12)(plVar18,0,plVar19,puVar12[1]);
                plVar18 = in_stack_000000a0;
              }
            }
            goto joined_r0x0727d574;
          }
          if (in_stack_000000a0 != (long *)0x0) {
            lVar14 = *in_stack_000000a0;
            uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar11 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092860c0) {
                  puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_0727d7d4;
                }
                uVar11 = uVar11 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar11 != 0);
            }
            puVar12 = (undefined8 *)FUN_040b1e00(in_stack_000000a0,*(long *)PTR_DAT_092860c0,0);
LAB_0727d7d4:
            (*(code *)*puVar12)(plVar18,puVar12[1]);
          }
        }
      }
    }
    FUN_07161150(in_stack_00000098,*(undefined8 *)PTR_DAT_092c1678);
    if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077828(lVar14);
    }
    lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1648);
    FUN_06eeec70(lVar14,*(undefined8 *)PTR_DAT_092c1640);
    if (in_stack_00000010 != 0) {
      plVar18 = (long *)(in_stack_00000010 + 0x10);
      *plVar18 = lVar14;
      thunk_FUN_040ec700(plVar18,lVar14);
      plVar19 = *(long **)(unaff_x19 + 0x58);
      if (plVar19 != (long *)0x0) {
        iVar17 = 0;
        do {
          lVar14 = *plVar19;
          uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0727da88;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar19,*(long *)puVar4,0);
LAB_0727da88:
          iVar10 = (*(code *)*puVar12)(plVar19,puVar12[1]);
          if (iVar10 <= iVar17) {
            lVar14 = *(long *)puVar8;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar14 = *(long *)puVar8;
            }
            uVar21 = **(undefined8 **)(lVar14 + 0xb8);
            lVar14 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
            FUN_07df6498(lVar14,uVar21,0);
            lVar15 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1710);
            FUN_05c26520(lVar15,*(undefined8 *)PTR_DAT_092c1708);
            puVar5 = PTR_DAT_092c1768;
            uVar21 = *(undefined8 *)(unaff_x19 + 0x58);
            lVar13 = *(long *)PTR_DAT_092c1768;
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar13 = *(long *)puVar5;
            }
            puVar12 = *(undefined8 **)(lVar13 + 0xb8);
            lVar22 = puVar12[1];
            if (lVar22 == 0) {
              if (*(int *)(lVar13 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                puVar12 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
              }
              uVar24 = *puVar12;
              lVar22 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1690);
              FUN_056893d4(lVar22,uVar24,*(undefined8 *)PTR_DAT_092c1748,0);
              plVar18 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 8);
              *plVar18 = lVar22;
              thunk_FUN_040ec700(plVar18,lVar22);
            }
            uVar11 = FUN_04f7671c(uVar21,lVar22,*(undefined8 *)PTR_DAT_092c1650);
            if ((uVar11 & 1) != 0) {
              uVar21 = FUN_05217a68(*(undefined8 *)PTR_DAT_092c14f8,*(undefined8 *)PTR_DAT_092c17a0,
                                    *(undefined8 *)PTR_DAT_092c1740);
              if (lVar15 == 0) break;
              lVar13 = *(long *)(lVar15 + 0x10);
              lVar22 = *(long *)PTR_DAT_092c16f8;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar13 == 0) break;
              uVar2 = *(uint *)(lVar15 + 0x18);
              if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar21;
                thunk_FUN_040ec700();
              }
              else {
                FUN_05c26d88(lVar15,uVar21,
                             *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
              }
            }
            plVar18 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,0xd);
            uVar21 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1770,0);
            uStack0000000000000028 = *(undefined4 *)(unaff_x19 + 0x10);
            in_stack_00000018 = *(undefined8 *)PTR_DAT_092c1718;
            in_stack_00000020 = (undefined8 *)0xffffffffffffffff;
            lVar13 = FUN_076b01b4(&stack0x00000018,0);
            if (lVar13 == 0) break;
            uVar24 = FUN_074eac78(lVar13,0);
            lVar13 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
            FUN_07df1964(lVar13,uVar21,uVar24,0);
            if (plVar18 == (long *)0x0) break;
            if ((lVar13 != 0) &&
               (lVar22 = thunk_FUN_040b4e00(lVar13,*(undefined8 *)(*plVar18 + 0x40)), lVar22 == 0))
            {
LAB_0727e420:
              uVar21 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
              FUN_040776f4(uVar21,0);
            }
            if ((int)plVar18[3] != 0) {
              plVar18[4] = lVar13;
              thunk_FUN_040ec700(plVar18 + 4,lVar13);
              lVar13 = *(long *)puVar8;
              if (*(int *)(lVar13 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar13 = *(long *)puVar8;
              }
              uVar21 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x20);
              lVar13 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
              FUN_07df1964(lVar13,uVar21,*(undefined8 *)PTR_DAT_0928e688,0);
              if ((lVar13 != 0) &&
                 (lVar22 = thunk_FUN_040b4e00(lVar13,*(undefined8 *)(*plVar18 + 0x40)), lVar22 == 0)
                 ) goto LAB_0727e420;
              if ((*(uint *)(plVar18 + 3) & 0xfffffffe) != 0) {
                plVar18[5] = lVar13;
                thunk_FUN_040ec700(plVar18 + 5,lVar13);
                lVar13 = *(long *)PTR_DAT_092c1768;
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar13 = *(long *)PTR_DAT_092c1768;
                }
                puVar12 = *(undefined8 **)(lVar13 + 0xb8);
                lVar22 = puVar12[2];
                if (lVar22 == 0) {
                  if (*(int *)(lVar13 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    puVar12 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
                  }
                  uVar21 = *puVar12;
                  lVar22 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1698);
                  FUN_0568af90(lVar22,uVar21,*(undefined8 *)PTR_DAT_092c1750,0);
                  plVar19 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 0x10);
                  *plVar19 = lVar22;
                  thunk_FUN_040ec700(plVar19,lVar22);
                }
                lVar15 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                   (lVar15,lVar22,*(undefined8 *)PTR_DAT_092c1668);
                if ((lVar15 != 0) &&
                   (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar13 == 0)) goto LAB_0727e420;
                if (2 < *(uint *)(plVar18 + 3)) {
                  plVar18[6] = lVar15;
                  uVar21 = thunk_FUN_040ec700(plVar18 + 6,lVar15);
                  lVar15 = FUN_07283670(uVar21,*(undefined8 *)PTR_DAT_0928e5a8,
                                        *(undefined8 *)(unaff_x19 + 0x18));
                  if ((lVar15 != 0) &&
                     (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)(*plVar18 + 0x40)),
                     lVar13 == 0)) goto LAB_0727e420;
                  if ((*(uint *)(plVar18 + 3) & 0xfffffffc) != 0) {
                    plVar18[7] = lVar15;
                    uVar21 = thunk_FUN_040ec700(plVar18 + 7,lVar15);
                    lVar15 = FUN_07283670(uVar21,*(undefined8 *)PTR_DAT_092c1778,
                                          *(undefined8 *)(unaff_x19 + 0x20));
                    if ((lVar15 != 0) &&
                       (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar13 == 0)) goto LAB_0727e420;
                    if (4 < *(uint *)(plVar18 + 3)) {
                      plVar18[8] = lVar15;
                      uVar21 = thunk_FUN_040ec700(plVar18 + 8,lVar15);
                      lVar15 = FUN_07283670(uVar21,*(undefined8 *)PTR_DAT_0928cfa8,
                                            *(undefined8 *)(unaff_x19 + 0x28));
                      if ((lVar15 != 0) &&
                         (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)(*plVar18 + 0x40)),
                         lVar13 == 0)) goto LAB_0727e420;
                      if (5 < *(uint *)(plVar18 + 3)) {
                        plVar18[9] = lVar15;
                        uVar21 = thunk_FUN_040ec700(plVar18 + 9,lVar15);
                        lVar15 = FUN_07283670(uVar21,*(undefined8 *)PTR_DAT_092c1788,
                                              *(undefined8 *)(unaff_x19 + 0x30));
                        if ((lVar15 != 0) &&
                           (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)(*plVar18 + 0x40)),
                           lVar13 == 0)) goto LAB_0727e420;
                        if (6 < *(uint *)(plVar18 + 3)) {
                          plVar18[10] = lVar15;
                          uVar21 = thunk_FUN_040ec700(plVar18 + 10,lVar15);
                          lVar15 = FUN_07283670(uVar21,*(undefined8 *)PTR_DAT_092c1790,
                                                *(undefined8 *)(unaff_x19 + 0x38));
                          if ((lVar15 != 0) &&
                             (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)(*plVar18 + 0x40)),
                             lVar13 == 0)) goto LAB_0727e420;
                          if ((*(uint *)(plVar18 + 3) & 0xfffffff8) != 0) {
                            plVar18[0xb] = lVar15;
                            uVar21 = thunk_FUN_040ec700(plVar18 + 0xb,lVar15);
                            lVar15 = FUN_07283670(uVar21,*(undefined8 *)PTR_DAT_092c1798,
                                                  *(undefined8 *)(unaff_x19 + 0x40));
                            if ((lVar15 != 0) &&
                               (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)(*plVar18 + 0x40))
                               , lVar13 == 0)) goto LAB_0727e420;
                            if (8 < *(uint *)(plVar18 + 3)) {
                              plVar18[0xc] = lVar15;
                              uVar21 = thunk_FUN_040ec700(plVar18 + 0xc,lVar15);
                              lVar15 = FUN_07283670(uVar21,*(undefined8 *)PTR_DAT_092a5d10,
                                                    *(undefined8 *)(unaff_x19 + 0x48));
                              if ((lVar15 != 0) &&
                                 (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)
                                                                      (*plVar18 + 0x40)),
                                 lVar13 == 0)) goto LAB_0727e420;
                              if (9 < *(uint *)(plVar18 + 3)) {
                                plVar18[0xd] = lVar15;
                                uVar21 = thunk_FUN_040ec700(plVar18 + 0xd,lVar15);
                                lVar15 = FUN_07283670(uVar21,*(undefined8 *)PTR_DAT_092c1780,
                                                      *(undefined8 *)(unaff_x19 + 0x50));
                                if ((lVar15 != 0) &&
                                   (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)
                                                                        (*plVar18 + 0x40)),
                                   lVar13 == 0)) goto LAB_0727e420;
                                if (10 < *(uint *)(plVar18 + 3)) {
                                  plVar18[0xe] = lVar15;
                                  thunk_FUN_040ec700(plVar18 + 0xe,lVar15);
                                  lVar15 = *(long *)puVar8;
                                  if (*(int *)(lVar15 + 0xe4) == 0) {
                                    thunk_FUN_040d65a8();
                                    lVar15 = *(long *)puVar8;
                                  }
                                  uVar24 = *(undefined8 *)(unaff_x19 + 0x58);
                                  uVar23 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x10);
                                  uVar21 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a8);
                                  FUN_0568af90(uVar21,in_stack_00000010,
                                               *(undefined8 *)PTR_DAT_092c1758,0);
                                  uVar21 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                     (uVar24,uVar21,*(undefined8 *)PTR_DAT_092c1660)
                                  ;
                                  lVar15 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
                                  System_Xml_XmlReader__Close(lVar15,uVar23,uVar21,0);
                                  if ((lVar15 != 0) &&
                                     (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)
                                                                          (*plVar18 + 0x40)),
                                     lVar13 == 0)) goto LAB_0727e420;
                                  if (0xb < *(uint *)(plVar18 + 3)) {
                                    plVar18[0xf] = lVar15;
                                    thunk_FUN_040ec700(plVar18 + 0xf,lVar15);
                                    uVar24 = *(undefined8 *)(unaff_x19 + 0x60);
                                    uVar23 = *(undefined8 *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
                                    uVar21 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
                                    FUN_0568af90(uVar21,in_stack_00000010,
                                                 *(undefined8 *)PTR_DAT_092c1760,0);
                                    uVar21 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                       (uVar24,uVar21,
                                                        *(undefined8 *)PTR_DAT_092c1658);
                                    lVar15 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
                                    System_Xml_XmlReader__Close(lVar15,uVar23,uVar21,0);
                                    if ((lVar15 != 0) &&
                                       (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)
                                                                            (*plVar18 + 0x40)),
                                       lVar13 == 0)) goto LAB_0727e420;
                                    if (0xc < *(uint *)(plVar18 + 3)) {
                                      plVar18[0x10] = lVar15;
                                      thunk_FUN_040ec700(plVar18 + 0x10,lVar15);
                                      if (lVar14 != 0) {
                                        thunk_FUN_07df3248(lVar14,plVar18,0);
                                        return lVar14;
                                      }
                                      break;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar19 = *(long **)(unaff_x19 + 0x58);
          if (plVar19 == (long *)0x0) break;
          lVar14 = *plVar19;
          uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092c16f0) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0727daf8;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar19,*(long *)PTR_DAT_092c16f0,0);
LAB_0727daf8:
          lVar14 = (*(code *)*puVar12)(plVar19,iVar17,puVar12[1]);
          if (lVar14 == 0) break;
          *(int *)(lVar14 + 0x10) = iVar17 + 1;
          plVar19 = *(long **)(unaff_x19 + 0x58);
          if (plVar19 == (long *)0x0) break;
          lVar14 = *plVar19;
          lVar15 = *plVar18;
          uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092c16f0) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar19,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog:
          uVar21 = (*(code *)*puVar12)(plVar19,iVar17,puVar12[1]);
          plVar19 = *(long **)(unaff_x19 + 0x58);
          if (plVar19 == (long *)0x0) break;
          lVar14 = *plVar19;
          uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092c16f0) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar19,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer:
          lVar14 = (*(code *)*puVar12)(plVar19,iVar17,puVar12[1]);
          if ((lVar14 == 0) || (lVar15 == 0)) break;
          FUN_06eef620(lVar15,uVar21,*(undefined4 *)(lVar14 + 0x10),*(undefined8 *)PTR_DAT_092c1638)
          ;
          plVar19 = *(long **)(unaff_x19 + 0x58);
          iVar17 = iVar17 + 1;
          if (plVar19 == (long *)0x0) break;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


