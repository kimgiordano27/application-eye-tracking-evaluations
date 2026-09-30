/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedMember$$.ctor
ENTRY_POINT: 0727cee0
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

long Meta_XR_ImmersiveDebugger_InspectedMember___ctor(undefined8 *param_1)

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
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  long unaff_x21;
  int iVar18;
  long *plVar19;
  long unaff_x23;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long *unaff_x25;
  undefined8 uVar23;
  long unaff_x26;
  long *plVar24;
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
  
  plVar24 = *(long **)(unaff_x26 + 0x6b8);
  plVar11 = (long *)(*(code *)*param_1)();
  puVar5 = PTR_DAT_092c16e0;
  in_stack_00000020 = &stack0x000000c8;
  in_stack_00000018 = 0;
  do {
    in_stack_000000c8 = plVar11;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar14 = *plVar11;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x25) {
          puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0727cf5c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar12 = (undefined8 *)FUN_040b1e00(plVar11,*unaff_x25,0);
LAB_0727cf5c:
    uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    plVar11 = in_stack_000000c8;
    if ((uVar16 & 1) == 0) {
      if (in_stack_000000c8 == (long *)0x0) goto LAB_0727d0d4;
      lVar14 = *in_stack_000000c8;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 == 0) goto LAB_0727d0ac;
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    if (in_stack_000000c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar14 = *in_stack_000000c8;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0727cfc0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar12 = (undefined8 *)FUN_040b1e00(in_stack_000000c8,*(long *)puVar5,0);
LAB_0727cfc0:
    lVar14 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar16 = FUN_057bf848();
    plVar11 = in_stack_000000c8;
    if ((uVar16 & 1) != 0) {
      plVar11 = *(long **)(unaff_x19 + 0x58);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar15 = *plVar11;
      uVar20 = *(undefined8 *)(lVar14 + 0x10);
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *plVar24) {
            puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 2) * 0x10 + 0x138);
            goto LAB_0727d048;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)FUN_040b1e00(plVar11,*plVar24,2);
LAB_0727d048:
      (*(code *)*puVar12)(plVar11,uVar20,puVar12[1]);
      plVar11 = in_stack_000000c8;
    }
  } while( true );
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0727d0c8;
    }
  }
LAB_0727d0ac:
  puVar12 = (undefined8 *)FUN_040b1e00(in_stack_000000c8,*(long *)PTR_DAT_092860c0,0);
LAB_0727d0c8:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
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
    while (uVar16 = FUN_07161154(&stack0x000000b0,*(undefined8 *)PTR_DAT_092c1680),
          plVar11 = in_stack_000000c0, lVar14 = in_stack_00000090, puVar8 = PTR_DAT_092c1720,
          puVar7 = PTR_DAT_092c16f0, puVar4 = PTR_DAT_092c16b8, puVar3 = PTR_DAT_092c1408,
          (uVar16 & 1) != 0) {
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
            uVar16 = FUN_057bf848();
            if ((uVar16 & 1) != 0) {
              plVar24 = *(long **)(unaff_x19 + 0x58);
              if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar14 = *plVar24;
              lVar15 = plVar11[4];
              uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092c16f0) {
                    puVar12 = (undefined8 *)(lVar14 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                    goto LAB_0727d8a0;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)FUN_040b1e00(plVar24,*(long *)PTR_DAT_092c16f0,3);
LAB_0727d8a0:
              (*(code *)*puVar12)(plVar24,0,lVar15,puVar12[1]);
            }
          }
        }
        else {
          plVar24 = (long *)in_stack_000000c0[0xb];
          if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = *plVar24;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092c16c0) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0727d1f4;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar24,*(long *)PTR_DAT_092c16c0,0);
LAB_0727d1f4:
          plVar24 = (long *)(*(code *)*puVar12)(plVar24,puVar12[1]);
          in_stack_00000020 = &stack0x000000a8;
          in_stack_00000018 = 0;
joined_r0x0727d210:
          in_stack_000000a8 = plVar24;
          if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = *plVar24;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *unaff_x25) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0727d260;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar24,*unaff_x25,0);
LAB_0727d260:
          uVar16 = (*(code *)*puVar12)(plVar24,puVar12[1]);
          plVar24 = in_stack_000000a8;
          if ((uVar16 & 1) != 0) {
            if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar14 = *in_stack_000000a8;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                  puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_0727d2c4;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)FUN_040b1e00(in_stack_000000a8,*(long *)puVar6,0);
LAB_0727d2c4:
            lVar14 = (*(code *)*puVar12)(plVar24,puVar12[1]);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar16 = FUN_057bf848();
            plVar24 = in_stack_000000a8;
            if ((uVar16 & 1) != 0) {
              plVar24 = *(long **)(unaff_x19 + 0x58);
              if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar15 = *plVar24;
              uVar20 = *(undefined8 *)(lVar14 + 0x10);
              uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
                    puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                    goto LAB_0727d34c;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)FUN_040b1e00(plVar24,*(long *)puVar7,3);
LAB_0727d34c:
              (*(code *)*puVar12)(plVar24,0,uVar20,puVar12[1]);
              plVar24 = in_stack_000000a8;
            }
            goto joined_r0x0727d210;
          }
          if (in_stack_000000a8 != (long *)0x0) {
            lVar14 = *in_stack_000000a8;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092860c0) {
                  puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_0727d3d8;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)FUN_040b1e00(in_stack_000000a8,*(long *)PTR_DAT_092860c0,0);
LAB_0727d3d8:
            (*(code *)*puVar12)(plVar24,puVar12[1]);
          }
          puVar3 = PTR_DAT_092c16f0;
          plVar24 = (long *)plVar11[3];
          if (plVar24 != (long *)0x0) {
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar14 = *(long *)PTR_DAT_092c1458;
            if ((*(byte *)(*plVar24 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
               (*(long *)(*(long *)(*plVar24 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) !=
                lVar14)) {
                    /* WARNING: Subroutine does not return */
              FUN_04077bb0(plVar24,lVar14);
            }
            uVar16 = FUN_057bf848();
            if ((uVar16 & 1) != 0) {
              plVar24 = *(long **)(unaff_x19 + 0x58);
              if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              plVar19 = (long *)plVar11[3];
              lVar14 = *(long *)puVar3;
              if (plVar19 != (long *)0x0) {
                lVar15 = *(long *)PTR_DAT_092c1458;
                if ((*(byte *)(*plVar19 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
                   (*(long *)(*(long *)(*plVar19 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8)
                    != lVar15)) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077bb0(plVar19,lVar15);
                }
              }
              lVar15 = *plVar24;
              uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar14) {
                    puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                    goto LAB_0727d4e0;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)FUN_040b1e00(plVar24,lVar14,3);
LAB_0727d4e0:
              (*(code *)*puVar12)(plVar24,0,plVar19,puVar12[1]);
            }
          }
          if (plVar11[9] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          plVar11 = *(long **)(plVar11[9] + 0x10);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092c16d0) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0727d558;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092c16d0,0);
LAB_0727d558:
          plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
          in_stack_00000088 = &stack0x000000a0;
          in_stack_00000080 = 0;
joined_r0x0727d574:
          in_stack_000000a0 = plVar11;
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *unaff_x25) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0727d5c4;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar11,*unaff_x25,0);
LAB_0727d5c4:
          uVar16 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          plVar11 = in_stack_000000a0;
          if ((uVar16 & 1) != 0) {
            if (in_stack_000000a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar14 = *in_stack_000000a0;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
                  puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_0727d628;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)FUN_040b1e00(in_stack_000000a0,*(long *)puVar5,0);
LAB_0727d628:
            (*(code *)*puVar12)(&stack0x00000018,plVar11,puVar12[1]);
            plVar24 = in_stack_00000060;
            if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            plVar11 = in_stack_000000a0;
            if (plVar24 != (long *)0x0) {
              if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              bVar1 = *(byte *)(*(long *)PTR_DAT_092c1458 + 0x130);
              if ((*(byte *)(*plVar24 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_092c1458)) {
                    /* WARNING: Subroutine does not return */
                FUN_04077bb0(plVar24);
              }
              uVar16 = FUN_057bf848();
              plVar11 = in_stack_000000a0;
              if ((uVar16 & 1) != 0) {
                plVar11 = *(long **)(unaff_x19 + 0x58);
                if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                bVar1 = *(byte *)(*(long *)PTR_DAT_092c1458 + 0x130);
                if ((*(byte *)(*plVar24 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_092c1458)) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077bb0(plVar24);
                }
                lVar15 = *plVar11;
                lVar14 = *(long *)puVar3;
                uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar16 != 0) {
                  piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == lVar14) {
                      puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                      goto LAB_0727d748;
                    }
                    uVar16 = uVar16 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar16 != 0);
                }
                puVar12 = (undefined8 *)FUN_040b1e00(plVar11,lVar14,3);
LAB_0727d748:
                (*(code *)*puVar12)(plVar11,0,plVar24,puVar12[1]);
                plVar11 = in_stack_000000a0;
              }
            }
            goto joined_r0x0727d574;
          }
          if (in_stack_000000a0 != (long *)0x0) {
            lVar14 = *in_stack_000000a0;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092860c0) {
                  puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_0727d7d4;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)FUN_040b1e00(in_stack_000000a0,*(long *)PTR_DAT_092860c0,0);
LAB_0727d7d4:
            (*(code *)*puVar12)(plVar11,puVar12[1]);
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
    if (unaff_x23 != 0) {
      plVar11 = (long *)(unaff_x23 + 0x10);
      *plVar11 = lVar14;
      thunk_FUN_040ec700(plVar11,lVar14);
      plVar24 = *(long **)(unaff_x19 + 0x58);
      if (plVar24 != (long *)0x0) {
        iVar18 = 0;
        do {
          lVar14 = *plVar24;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0727da88;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar24,*(long *)puVar4,0);
LAB_0727da88:
          iVar10 = (*(code *)*puVar12)(plVar24,puVar12[1]);
          if (iVar10 <= iVar18) {
            lVar14 = *(long *)puVar8;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar14 = *(long *)puVar8;
            }
            uVar20 = **(undefined8 **)(lVar14 + 0xb8);
            lVar14 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
            FUN_07df6498(lVar14,uVar20,0);
            lVar15 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1710);
            FUN_05c26520(lVar15,*(undefined8 *)PTR_DAT_092c1708);
            puVar5 = PTR_DAT_092c1768;
            uVar20 = *(undefined8 *)(unaff_x19 + 0x58);
            lVar13 = *(long *)PTR_DAT_092c1768;
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar13 = *(long *)puVar5;
            }
            puVar12 = *(undefined8 **)(lVar13 + 0xb8);
            lVar21 = puVar12[1];
            if (lVar21 == 0) {
              if (*(int *)(lVar13 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                puVar12 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
              }
              uVar23 = *puVar12;
              lVar21 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1690);
              FUN_056893d4(lVar21,uVar23,*(undefined8 *)PTR_DAT_092c1748,0);
              plVar11 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 8);
              *plVar11 = lVar21;
              thunk_FUN_040ec700(plVar11,lVar21);
            }
            uVar16 = FUN_04f7671c(uVar20,lVar21,*(undefined8 *)PTR_DAT_092c1650);
            if ((uVar16 & 1) != 0) {
              uVar20 = FUN_05217a68(*(undefined8 *)PTR_DAT_092c14f8,*(undefined8 *)PTR_DAT_092c17a0,
                                    *(undefined8 *)PTR_DAT_092c1740);
              if (lVar15 == 0) break;
              lVar13 = *(long *)(lVar15 + 0x10);
              lVar21 = *(long *)PTR_DAT_092c16f8;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar13 == 0) break;
              uVar2 = *(uint *)(lVar15 + 0x18);
              if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar20;
                thunk_FUN_040ec700();
              }
              else {
                FUN_05c26d88(lVar15,uVar20,
                             *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
            }
            plVar11 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,0xd);
            uVar20 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1770,0);
            uStack0000000000000028 = *(undefined4 *)(unaff_x19 + 0x10);
            in_stack_00000018 = *(undefined8 *)PTR_DAT_092c1718;
            in_stack_00000020 = (undefined8 *)0xffffffffffffffff;
            lVar13 = FUN_076b01b4(&stack0x00000018,0);
            if (lVar13 == 0) break;
            uVar23 = FUN_074eac78(lVar13,0);
            lVar13 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
            FUN_07df1964(lVar13,uVar20,uVar23,0);
            if (plVar11 == (long *)0x0) break;
            if ((lVar13 != 0) &&
               (lVar21 = thunk_FUN_040b4e00(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar21 == 0))
            {
LAB_0727e420:
              uVar20 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
              FUN_040776f4(uVar20,0);
            }
            if ((int)plVar11[3] != 0) {
              plVar11[4] = lVar13;
              thunk_FUN_040ec700(plVar11 + 4,lVar13);
              lVar13 = *(long *)puVar8;
              if (*(int *)(lVar13 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar13 = *(long *)puVar8;
              }
              uVar20 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x20);
              lVar13 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
              FUN_07df1964(lVar13,uVar20,*(undefined8 *)PTR_DAT_0928e688,0);
              if ((lVar13 != 0) &&
                 (lVar21 = thunk_FUN_040b4e00(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar21 == 0)
                 ) goto LAB_0727e420;
              if ((*(uint *)(plVar11 + 3) & 0xfffffffe) != 0) {
                plVar11[5] = lVar13;
                thunk_FUN_040ec700(plVar11 + 5,lVar13);
                lVar13 = *(long *)PTR_DAT_092c1768;
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar13 = *(long *)PTR_DAT_092c1768;
                }
                puVar12 = *(undefined8 **)(lVar13 + 0xb8);
                lVar21 = puVar12[2];
                if (lVar21 == 0) {
                  if (*(int *)(lVar13 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    puVar12 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
                  }
                  uVar20 = *puVar12;
                  lVar21 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1698);
                  FUN_0568af90(lVar21,uVar20,*(undefined8 *)PTR_DAT_092c1750,0);
                  plVar24 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 0x10);
                  *plVar24 = lVar21;
                  thunk_FUN_040ec700(plVar24,lVar21);
                }
                lVar15 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                   (lVar15,lVar21,*(undefined8 *)PTR_DAT_092c1668);
                if ((lVar15 != 0) &&
                   (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)(*plVar11 + 0x40)),
                   lVar13 == 0)) goto LAB_0727e420;
                if (2 < *(uint *)(plVar11 + 3)) {
                  plVar11[6] = lVar15;
                  uVar20 = thunk_FUN_040ec700(plVar11 + 6,lVar15);
                  lVar15 = FUN_07283670(uVar20,*(undefined8 *)PTR_DAT_0928e5a8,
                                        *(undefined8 *)(unaff_x19 + 0x18));
                  if ((lVar15 != 0) &&
                     (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)(*plVar11 + 0x40)),
                     lVar13 == 0)) goto LAB_0727e420;
                  if ((*(uint *)(plVar11 + 3) & 0xfffffffc) != 0) {
                    plVar11[7] = lVar15;
                    uVar20 = thunk_FUN_040ec700(plVar11 + 7,lVar15);
                    lVar15 = FUN_07283670(uVar20,*(undefined8 *)PTR_DAT_092c1778,
                                          *(undefined8 *)(unaff_x19 + 0x20));
                    if ((lVar15 != 0) &&
                       (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar13 == 0)) goto LAB_0727e420;
                    if (4 < *(uint *)(plVar11 + 3)) {
                      plVar11[8] = lVar15;
                      uVar20 = thunk_FUN_040ec700(plVar11 + 8,lVar15);
                      lVar15 = FUN_07283670(uVar20,*(undefined8 *)PTR_DAT_0928cfa8,
                                            *(undefined8 *)(unaff_x19 + 0x28));
                      if ((lVar15 != 0) &&
                         (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)(*plVar11 + 0x40)),
                         lVar13 == 0)) goto LAB_0727e420;
                      if (5 < *(uint *)(plVar11 + 3)) {
                        plVar11[9] = lVar15;
                        uVar20 = thunk_FUN_040ec700(plVar11 + 9,lVar15);
                        lVar15 = FUN_07283670(uVar20,*(undefined8 *)PTR_DAT_092c1788,
                                              *(undefined8 *)(unaff_x19 + 0x30));
                        if ((lVar15 != 0) &&
                           (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)(*plVar11 + 0x40)),
                           lVar13 == 0)) goto LAB_0727e420;
                        if (6 < *(uint *)(plVar11 + 3)) {
                          plVar11[10] = lVar15;
                          uVar20 = thunk_FUN_040ec700(plVar11 + 10,lVar15);
                          lVar15 = FUN_07283670(uVar20,*(undefined8 *)PTR_DAT_092c1790,
                                                *(undefined8 *)(unaff_x19 + 0x38));
                          if ((lVar15 != 0) &&
                             (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)(*plVar11 + 0x40)),
                             lVar13 == 0)) goto LAB_0727e420;
                          if ((*(uint *)(plVar11 + 3) & 0xfffffff8) != 0) {
                            plVar11[0xb] = lVar15;
                            uVar20 = thunk_FUN_040ec700(plVar11 + 0xb,lVar15);
                            lVar15 = FUN_07283670(uVar20,*(undefined8 *)PTR_DAT_092c1798,
                                                  *(undefined8 *)(unaff_x19 + 0x40));
                            if ((lVar15 != 0) &&
                               (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)(*plVar11 + 0x40))
                               , lVar13 == 0)) goto LAB_0727e420;
                            if (8 < *(uint *)(plVar11 + 3)) {
                              plVar11[0xc] = lVar15;
                              uVar20 = thunk_FUN_040ec700(plVar11 + 0xc,lVar15);
                              lVar15 = FUN_07283670(uVar20,*(undefined8 *)PTR_DAT_092a5d10,
                                                    *(undefined8 *)(unaff_x19 + 0x48));
                              if ((lVar15 != 0) &&
                                 (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)
                                                                      (*plVar11 + 0x40)),
                                 lVar13 == 0)) goto LAB_0727e420;
                              if (9 < *(uint *)(plVar11 + 3)) {
                                plVar11[0xd] = lVar15;
                                uVar20 = thunk_FUN_040ec700(plVar11 + 0xd,lVar15);
                                lVar15 = FUN_07283670(uVar20,*(undefined8 *)PTR_DAT_092c1780,
                                                      *(undefined8 *)(unaff_x19 + 0x50));
                                if ((lVar15 != 0) &&
                                   (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)
                                                                        (*plVar11 + 0x40)),
                                   lVar13 == 0)) goto LAB_0727e420;
                                if (10 < *(uint *)(plVar11 + 3)) {
                                  plVar11[0xe] = lVar15;
                                  thunk_FUN_040ec700(plVar11 + 0xe,lVar15);
                                  lVar15 = *(long *)puVar8;
                                  if (*(int *)(lVar15 + 0xe4) == 0) {
                                    thunk_FUN_040d65a8();
                                    lVar15 = *(long *)puVar8;
                                  }
                                  uVar23 = *(undefined8 *)(unaff_x19 + 0x58);
                                  uVar22 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x10);
                                  uVar20 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a8);
                                  FUN_0568af90(uVar20,unaff_x23,*(undefined8 *)PTR_DAT_092c1758,0);
                                  uVar20 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                     (uVar23,uVar20,*(undefined8 *)PTR_DAT_092c1660)
                                  ;
                                  lVar15 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
                                  System_Xml_XmlReader__Close(lVar15,uVar22,uVar20,0);
                                  if ((lVar15 != 0) &&
                                     (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)
                                                                          (*plVar11 + 0x40)),
                                     lVar13 == 0)) goto LAB_0727e420;
                                  if (0xb < *(uint *)(plVar11 + 3)) {
                                    plVar11[0xf] = lVar15;
                                    thunk_FUN_040ec700(plVar11 + 0xf,lVar15);
                                    uVar23 = *(undefined8 *)(unaff_x19 + 0x60);
                                    uVar22 = *(undefined8 *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
                                    uVar20 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
                                    FUN_0568af90(uVar20,unaff_x23,*(undefined8 *)PTR_DAT_092c1760,0)
                                    ;
                                    uVar20 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                       (uVar23,uVar20,
                                                        *(undefined8 *)PTR_DAT_092c1658);
                                    lVar15 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
                                    System_Xml_XmlReader__Close(lVar15,uVar22,uVar20,0);
                                    if ((lVar15 != 0) &&
                                       (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)
                                                                            (*plVar11 + 0x40)),
                                       lVar13 == 0)) goto LAB_0727e420;
                                    if (0xc < *(uint *)(plVar11 + 3)) {
                                      plVar11[0x10] = lVar15;
                                      thunk_FUN_040ec700(plVar11 + 0x10,lVar15);
                                      if (lVar14 != 0) {
                                        thunk_FUN_07df3248(lVar14,plVar11,0);
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
          plVar24 = *(long **)(unaff_x19 + 0x58);
          if (plVar24 == (long *)0x0) break;
          lVar14 = *plVar24;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092c16f0) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0727daf8;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar24,*(long *)PTR_DAT_092c16f0,0);
LAB_0727daf8:
          lVar14 = (*(code *)*puVar12)(plVar24,iVar18,puVar12[1]);
          if (lVar14 == 0) break;
          *(int *)(lVar14 + 0x10) = iVar18 + 1;
          plVar24 = *(long **)(unaff_x19 + 0x58);
          if (plVar24 == (long *)0x0) break;
          lVar14 = *plVar24;
          lVar15 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092c16f0) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar24,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog:
          uVar20 = (*(code *)*puVar12)(plVar24,iVar18,puVar12[1]);
          plVar24 = *(long **)(unaff_x19 + 0x58);
          if (plVar24 == (long *)0x0) break;
          lVar14 = *plVar24;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092c16f0) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar24,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer:
          lVar14 = (*(code *)*puVar12)(plVar24,iVar18,puVar12[1]);
          if ((lVar14 == 0) || (lVar15 == 0)) break;
          FUN_06eef620(lVar15,uVar20,*(undefined4 *)(lVar14 + 0x10),*(undefined8 *)PTR_DAT_092c1638)
          ;
          plVar24 = *(long **)(unaff_x19 + 0x58);
          iVar18 = iVar18 + 1;
          if (plVar24 == (long *)0x0) break;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


