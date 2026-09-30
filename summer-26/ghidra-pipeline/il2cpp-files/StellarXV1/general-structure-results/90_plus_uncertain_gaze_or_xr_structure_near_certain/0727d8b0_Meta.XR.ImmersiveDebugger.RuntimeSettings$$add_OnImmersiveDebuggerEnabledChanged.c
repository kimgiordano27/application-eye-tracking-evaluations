/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$add_OnImmersiveDebuggerEnabledChanged
ENTRY_POINT: 0727d8b0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0727d7ec) */
/* WARNING: Removing unreachable block (ram,0x0727d7f0) */
/* WARNING: Removing unreachable block (ram,0x0727d3f0) */
/* WARNING: Removing unreachable block (ram,0x0727e444) */
/* WARNING: Removing unreachable block (ram,0x0727e43c) */
/* WARNING: Removing unreachable block (ram,0x0727d9ec) */

long Meta_XR_ImmersiveDebugger_RuntimeSettings__add_OnImmersiveDebuggerEnabledChanged
               (code *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long *unaff_x25;
  undefined8 uVar21;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined4 in_stack_00000028;
  long *in_stack_00000060;
  undefined8 in_stack_00000080;
  undefined8 *in_stack_00000088;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  long *in_stack_000000a0;
  long *in_stack_000000a8;
  long *in_stack_000000c0;
  
  do {
    (*param_1)(param_2,param_3,param_4,param_5);
    do {
      do {
        while( true ) {
          do {
            uVar8 = FUN_07161154(&stack0x000000b0,*(undefined8 *)PTR_DAT_092c1680);
            plVar17 = in_stack_000000c0;
            lVar11 = in_stack_00000090;
            puVar6 = PTR_DAT_092c1720;
            puVar5 = PTR_DAT_092c16f0;
            puVar4 = PTR_DAT_092c16b8;
            puVar3 = PTR_DAT_092c1408;
            if ((uVar8 & 1) == 0) {
              FUN_07161150(in_stack_00000098,*(undefined8 *)PTR_DAT_092c1678);
              if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077828(lVar11);
              }
              lVar11 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1648);
              FUN_06eeec70(lVar11,*(undefined8 *)PTR_DAT_092c1640);
              if (in_stack_00000010 == 0)
              goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
              plVar17 = (long *)(in_stack_00000010 + 0x10);
              *plVar17 = lVar11;
              thunk_FUN_040ec700(plVar17,lVar11);
              plVar15 = *(long **)(unaff_x19 + 0x58);
              if (plVar15 == (long *)0x0)
              goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
              iVar14 = 0;
              goto LAB_0727da3c;
            }
          } while (in_stack_000000c0 == (long *)0x0);
          lVar11 = *in_stack_000000c0;
          bVar1 = *(byte *)(*(long *)PTR_DAT_092c1728 + 0x130);
          if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_092c1728)) break;
          plVar15 = (long *)in_stack_000000c0[0xb];
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar11 = *plVar15;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092c16c0) {
                puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0727d1f4;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)PTR_DAT_092c16c0,0);
LAB_0727d1f4:
          plVar15 = (long *)(*(code *)*puVar9)(plVar15,puVar9[1]);
          in_stack_00000020 = &stack0x000000a8;
          in_stack_00000018 = 0;
joined_r0x0727d210:
          in_stack_000000a8 = plVar15;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar11 = *plVar15;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x25) {
                puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0727d260;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_040b1e00(plVar15,*unaff_x25,0);
LAB_0727d260:
          uVar8 = (*(code *)*puVar9)(plVar15,puVar9[1]);
          plVar15 = in_stack_000000a8;
          if ((uVar8 & 1) != 0) {
            if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar11 = *in_stack_000000a8;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *unaff_x20) {
                  puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0727d2c4;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_040b1e00(in_stack_000000a8,*unaff_x20,0);
LAB_0727d2c4:
            lVar11 = (*(code *)*puVar9)(plVar15,puVar9[1]);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar8 = FUN_057bf848();
            plVar15 = in_stack_000000a8;
            if ((uVar8 & 1) != 0) {
              plVar15 = *(long **)(unaff_x19 + 0x58);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar12 = *plVar15;
              uVar18 = *(undefined8 *)(lVar11 + 0x10);
              uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar8 != 0) {
                piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
                    puVar9 = (undefined8 *)(lVar12 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                    goto LAB_0727d34c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar8 != 0);
              }
              puVar9 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)puVar5,3);
LAB_0727d34c:
              (*(code *)*puVar9)(plVar15,0,uVar18,puVar9[1]);
              plVar15 = in_stack_000000a8;
            }
            goto joined_r0x0727d210;
          }
          if (in_stack_000000a8 != (long *)0x0) {
            lVar11 = *in_stack_000000a8;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092860c0) {
                  puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0727d3d8;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_040b1e00(in_stack_000000a8,*(long *)PTR_DAT_092860c0,0);
LAB_0727d3d8:
            (*(code *)*puVar9)(plVar15,puVar9[1]);
          }
          puVar3 = PTR_DAT_092c16f0;
          plVar15 = (long *)plVar17[3];
          if (plVar15 != (long *)0x0) {
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar11 = *(long *)PTR_DAT_092c1458;
            if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
               (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) !=
                lVar11)) {
                    /* WARNING: Subroutine does not return */
              FUN_04077bb0(plVar15,lVar11);
            }
            uVar8 = FUN_057bf848();
            if ((uVar8 & 1) != 0) {
              plVar15 = *(long **)(unaff_x19 + 0x58);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              plVar16 = (long *)plVar17[3];
              lVar11 = *(long *)puVar3;
              if (plVar16 != (long *)0x0) {
                lVar12 = *(long *)PTR_DAT_092c1458;
                if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
                   (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8)
                    != lVar12)) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077bb0(plVar16,lVar12);
                }
              }
              lVar12 = *plVar15;
              uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar8 != 0) {
                piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar11) {
                    puVar9 = (undefined8 *)(lVar12 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                    goto LAB_0727d4e0;
                  }
                  uVar8 = uVar8 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar8 != 0);
              }
              puVar9 = (undefined8 *)FUN_040b1e00(plVar15,lVar11,3);
LAB_0727d4e0:
              (*(code *)*puVar9)(plVar15,0,plVar16,puVar9[1]);
            }
          }
          if (plVar17[9] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          plVar17 = *(long **)(plVar17[9] + 0x10);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar11 = *plVar17;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092c16d0) {
                puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0727d558;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_040b1e00(plVar17,*(long *)PTR_DAT_092c16d0,0);
LAB_0727d558:
          plVar17 = (long *)(*(code *)*puVar9)(plVar17,puVar9[1]);
          in_stack_00000088 = &stack0x000000a0;
          in_stack_00000080 = 0;
joined_r0x0727d574:
          in_stack_000000a0 = plVar17;
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar11 = *plVar17;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x25) {
                puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0727d5c4;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_040b1e00(plVar17,*unaff_x25,0);
LAB_0727d5c4:
          uVar8 = (*(code *)*puVar9)(plVar17,puVar9[1]);
          plVar17 = in_stack_000000a0;
          if ((uVar8 & 1) != 0) {
            if (in_stack_000000a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar11 = *in_stack_000000a0;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *unaff_x29) {
                  puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0727d628;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_040b1e00(in_stack_000000a0,*unaff_x29,0);
LAB_0727d628:
            (*(code *)*puVar9)(&stack0x00000018,plVar17,puVar9[1]);
            plVar15 = in_stack_00000060;
            if (*(int *)(*unaff_x28 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            plVar17 = in_stack_000000a0;
            if (plVar15 != (long *)0x0) {
              if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              bVar1 = *(byte *)(*(long *)PTR_DAT_092c1458 + 0x130);
              if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_092c1458)) {
                    /* WARNING: Subroutine does not return */
                FUN_04077bb0(plVar15);
              }
              uVar8 = FUN_057bf848();
              plVar17 = in_stack_000000a0;
              if ((uVar8 & 1) != 0) {
                plVar17 = *(long **)(unaff_x19 + 0x58);
                if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                bVar1 = *(byte *)(*(long *)PTR_DAT_092c1458 + 0x130);
                if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_092c1458)) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077bb0(plVar15);
                }
                lVar12 = *plVar17;
                lVar11 = *(long *)puVar3;
                uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar8 != 0) {
                  piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == lVar11) {
                      puVar9 = (undefined8 *)(lVar12 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                      goto LAB_0727d748;
                    }
                    uVar8 = uVar8 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar8 != 0);
                }
                puVar9 = (undefined8 *)FUN_040b1e00(plVar17,lVar11,3);
LAB_0727d748:
                (*(code *)*puVar9)(plVar17,0,plVar15,puVar9[1]);
                plVar17 = in_stack_000000a0;
              }
            }
            goto joined_r0x0727d574;
          }
          if (in_stack_000000a0 != (long *)0x0) {
            lVar11 = *in_stack_000000a0;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092860c0) {
                  puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0727d7d4;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_040b1e00(in_stack_000000a0,*(long *)PTR_DAT_092860c0,0);
LAB_0727d7d4:
            (*(code *)*puVar9)(plVar17,puVar9[1]);
          }
        }
        bVar1 = *(byte *)(*(long *)PTR_DAT_092c1730 + 0x130);
      } while ((*(byte *)(lVar11 + 0x130) < bVar1) ||
              (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
               *(long *)PTR_DAT_092c1730));
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar8 = FUN_057bf848();
    } while ((uVar8 & 1) == 0);
    param_2 = *(long **)(unaff_x19 + 0x58);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar11 = *param_2;
    param_4 = plVar17[4];
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092c16f0) {
          puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
          goto LAB_0727d8a0;
        }
        uVar8 = uVar8 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_040b1e00(param_2,*(long *)PTR_DAT_092c16f0,3);
LAB_0727d8a0:
    param_1 = (code *)*puVar9;
    param_5 = puVar9[1];
    param_3 = 0;
  } while( true );
LAB_0727da3c:
  lVar11 = *plVar15;
  uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar8 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_0727da88;
      }
      uVar8 = uVar8 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)puVar4,0);
LAB_0727da88:
  iVar7 = (*(code *)*puVar9)(plVar15,puVar9[1]);
  if (iVar7 <= iVar14) {
    lVar11 = *(long *)puVar6;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar11 = *(long *)puVar6;
    }
    uVar18 = **(undefined8 **)(lVar11 + 0xb8);
    lVar11 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
    FUN_07df6498(lVar11,uVar18,0);
    lVar12 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1710);
    FUN_05c26520(lVar12,*(undefined8 *)PTR_DAT_092c1708);
    puVar4 = PTR_DAT_092c1768;
    uVar18 = *(undefined8 *)(unaff_x19 + 0x58);
    lVar10 = *(long *)PTR_DAT_092c1768;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar10 = *(long *)puVar4;
    }
    puVar9 = *(undefined8 **)(lVar10 + 0xb8);
    lVar19 = puVar9[1];
    if (lVar19 == 0) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        puVar9 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
      }
      uVar21 = *puVar9;
      lVar19 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1690);
      FUN_056893d4(lVar19,uVar21,*(undefined8 *)PTR_DAT_092c1748,0);
      plVar17 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 8);
      *plVar17 = lVar19;
      thunk_FUN_040ec700(plVar17,lVar19);
    }
    uVar8 = FUN_04f7671c(uVar18,lVar19,*(undefined8 *)PTR_DAT_092c1650);
    if ((uVar8 & 1) != 0) {
      uVar18 = FUN_05217a68(*(undefined8 *)PTR_DAT_092c14f8,*(undefined8 *)PTR_DAT_092c17a0,
                            *(undefined8 *)PTR_DAT_092c1740);
      if (lVar12 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      lVar10 = *(long *)(lVar12 + 0x10);
      lVar19 = *(long *)PTR_DAT_092c16f8;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar10 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      uVar2 = *(uint *)(lVar12 + 0x18);
      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar18;
        thunk_FUN_040ec700();
      }
      else {
        FUN_05c26d88(lVar12,uVar18,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
    }
    plVar17 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,0xd);
    uVar18 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1770,0);
    in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x10);
    in_stack_00000018 = *(undefined8 *)PTR_DAT_092c1718;
    in_stack_00000020 = (undefined8 *)0xffffffffffffffff;
    lVar10 = FUN_076b01b4(&stack0x00000018,0);
    if (lVar10 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    uVar21 = FUN_074eac78(lVar10,0);
    lVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
    FUN_07df1964(lVar10,uVar18,uVar21,0);
    if (plVar17 == (long *)0x0)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    if ((lVar10 != 0) &&
       (lVar19 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar17 + 0x40)), lVar19 == 0)) {
LAB_0727e420:
      uVar18 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar18,0);
    }
    if ((int)plVar17[3] != 0) {
      plVar17[4] = lVar10;
      thunk_FUN_040ec700(plVar17 + 4,lVar10);
      lVar10 = *(long *)puVar6;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar10 = *(long *)puVar6;
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x20);
      lVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
      FUN_07df1964(lVar10,uVar18,*(undefined8 *)PTR_DAT_0928e688,0);
      if ((lVar10 != 0) &&
         (lVar19 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar17 + 0x40)), lVar19 == 0))
      goto LAB_0727e420;
      if ((*(uint *)(plVar17 + 3) & 0xfffffffe) != 0) {
        plVar17[5] = lVar10;
        thunk_FUN_040ec700(plVar17 + 5,lVar10);
        lVar10 = *(long *)PTR_DAT_092c1768;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar10 = *(long *)PTR_DAT_092c1768;
        }
        puVar9 = *(undefined8 **)(lVar10 + 0xb8);
        lVar19 = puVar9[2];
        if (lVar19 == 0) {
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            puVar9 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
          }
          uVar18 = *puVar9;
          lVar19 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1698);
          FUN_0568af90(lVar19,uVar18,*(undefined8 *)PTR_DAT_092c1750,0);
          plVar15 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 0x10);
          *plVar15 = lVar19;
          thunk_FUN_040ec700(plVar15,lVar19);
        }
        lVar12 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                           (lVar12,lVar19,*(undefined8 *)PTR_DAT_092c1668);
        if ((lVar12 != 0) &&
           (lVar10 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar17 + 0x40)), lVar10 == 0))
        goto LAB_0727e420;
        if (2 < *(uint *)(plVar17 + 3)) {
          plVar17[6] = lVar12;
          uVar18 = thunk_FUN_040ec700(plVar17 + 6,lVar12);
          lVar12 = FUN_07283670(uVar18,*(undefined8 *)PTR_DAT_0928e5a8,
                                *(undefined8 *)(unaff_x19 + 0x18));
          if ((lVar12 != 0) &&
             (lVar10 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar17 + 0x40)), lVar10 == 0))
          goto LAB_0727e420;
          if ((*(uint *)(plVar17 + 3) & 0xfffffffc) != 0) {
            plVar17[7] = lVar12;
            uVar18 = thunk_FUN_040ec700(plVar17 + 7,lVar12);
            lVar12 = FUN_07283670(uVar18,*(undefined8 *)PTR_DAT_092c1778,
                                  *(undefined8 *)(unaff_x19 + 0x20));
            if ((lVar12 != 0) &&
               (lVar10 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar17 + 0x40)), lVar10 == 0))
            goto LAB_0727e420;
            if (4 < *(uint *)(plVar17 + 3)) {
              plVar17[8] = lVar12;
              uVar18 = thunk_FUN_040ec700(plVar17 + 8,lVar12);
              lVar12 = FUN_07283670(uVar18,*(undefined8 *)PTR_DAT_0928cfa8,
                                    *(undefined8 *)(unaff_x19 + 0x28));
              if ((lVar12 != 0) &&
                 (lVar10 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar17 + 0x40)), lVar10 == 0)
                 ) goto LAB_0727e420;
              if (5 < *(uint *)(plVar17 + 3)) {
                plVar17[9] = lVar12;
                uVar18 = thunk_FUN_040ec700(plVar17 + 9,lVar12);
                lVar12 = FUN_07283670(uVar18,*(undefined8 *)PTR_DAT_092c1788,
                                      *(undefined8 *)(unaff_x19 + 0x30));
                if ((lVar12 != 0) &&
                   (lVar10 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar10 == 0)) goto LAB_0727e420;
                if (6 < *(uint *)(plVar17 + 3)) {
                  plVar17[10] = lVar12;
                  uVar18 = thunk_FUN_040ec700(plVar17 + 10,lVar12);
                  lVar12 = FUN_07283670(uVar18,*(undefined8 *)PTR_DAT_092c1790,
                                        *(undefined8 *)(unaff_x19 + 0x38));
                  if ((lVar12 != 0) &&
                     (lVar10 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                     lVar10 == 0)) goto LAB_0727e420;
                  if ((*(uint *)(plVar17 + 3) & 0xfffffff8) != 0) {
                    plVar17[0xb] = lVar12;
                    uVar18 = thunk_FUN_040ec700(plVar17 + 0xb,lVar12);
                    lVar12 = FUN_07283670(uVar18,*(undefined8 *)PTR_DAT_092c1798,
                                          *(undefined8 *)(unaff_x19 + 0x40));
                    if ((lVar12 != 0) &&
                       (lVar10 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                       lVar10 == 0)) goto LAB_0727e420;
                    if (8 < *(uint *)(plVar17 + 3)) {
                      plVar17[0xc] = lVar12;
                      uVar18 = thunk_FUN_040ec700(plVar17 + 0xc,lVar12);
                      lVar12 = FUN_07283670(uVar18,*(undefined8 *)PTR_DAT_092a5d10,
                                            *(undefined8 *)(unaff_x19 + 0x48));
                      if ((lVar12 != 0) &&
                         (lVar10 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                         lVar10 == 0)) goto LAB_0727e420;
                      if (9 < *(uint *)(plVar17 + 3)) {
                        plVar17[0xd] = lVar12;
                        uVar18 = thunk_FUN_040ec700(plVar17 + 0xd,lVar12);
                        lVar12 = FUN_07283670(uVar18,*(undefined8 *)PTR_DAT_092c1780,
                                              *(undefined8 *)(unaff_x19 + 0x50));
                        if ((lVar12 != 0) &&
                           (lVar10 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                           lVar10 == 0)) goto LAB_0727e420;
                        if (10 < *(uint *)(plVar17 + 3)) {
                          plVar17[0xe] = lVar12;
                          thunk_FUN_040ec700(plVar17 + 0xe,lVar12);
                          lVar12 = *(long *)puVar6;
                          if (*(int *)(lVar12 + 0xe4) == 0) {
                            thunk_FUN_040d65a8();
                            lVar12 = *(long *)puVar6;
                          }
                          uVar21 = *(undefined8 *)(unaff_x19 + 0x58);
                          uVar20 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10);
                          uVar18 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a8);
                          FUN_0568af90(uVar18,in_stack_00000010,*(undefined8 *)PTR_DAT_092c1758,0);
                          uVar18 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                             (uVar21,uVar18,*(undefined8 *)PTR_DAT_092c1660);
                          lVar12 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
                          System_Xml_XmlReader__Close(lVar12,uVar20,uVar18,0);
                          if ((lVar12 != 0) &&
                             (lVar10 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                             lVar10 == 0)) goto LAB_0727e420;
                          if (0xb < *(uint *)(plVar17 + 3)) {
                            plVar17[0xf] = lVar12;
                            thunk_FUN_040ec700(plVar17 + 0xf,lVar12);
                            uVar21 = *(undefined8 *)(unaff_x19 + 0x60);
                            uVar20 = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
                            uVar18 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
                            FUN_0568af90(uVar18,in_stack_00000010,*(undefined8 *)PTR_DAT_092c1760,0)
                            ;
                            uVar18 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                               (uVar21,uVar18,*(undefined8 *)PTR_DAT_092c1658);
                            lVar12 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
                            System_Xml_XmlReader__Close(lVar12,uVar20,uVar18,0);
                            if ((lVar12 != 0) &&
                               (lVar10 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar17 + 0x40))
                               , lVar10 == 0)) goto LAB_0727e420;
                            if (0xc < *(uint *)(plVar17 + 3)) {
                              plVar17[0x10] = lVar12;
                              thunk_FUN_040ec700(plVar17 + 0x10,lVar12);
                              if (lVar11 != 0) {
                                thunk_FUN_07df3248(lVar11,plVar17,0);
                                return lVar11;
                              }
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets:
                    /* WARNING: Subroutine does not return */
                              FUN_04077830();
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
  plVar15 = *(long **)(unaff_x19 + 0x58);
  if (plVar15 == (long *)0x0)
  goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  lVar11 = *plVar15;
  uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar8 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092c16f0) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_0727daf8;
      }
      uVar8 = uVar8 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)PTR_DAT_092c16f0,0);
LAB_0727daf8:
  lVar11 = (*(code *)*puVar9)(plVar15,iVar14,puVar9[1]);
  if (lVar11 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  *(int *)(lVar11 + 0x10) = iVar14 + 1;
  plVar15 = *(long **)(unaff_x19 + 0x58);
  if (plVar15 == (long *)0x0)
  goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  lVar11 = *plVar15;
  lVar12 = *plVar17;
  uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar8 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092c16f0) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog;
      }
      uVar8 = uVar8 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog:
  uVar18 = (*(code *)*puVar9)(plVar15,iVar14,puVar9[1]);
  plVar15 = *(long **)(unaff_x19 + 0x58);
  if (plVar15 == (long *)0x0)
  goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  lVar11 = *plVar15;
  uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar8 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092c16f0) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer;
      }
      uVar8 = uVar8 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer:
  lVar11 = (*(code *)*puVar9)(plVar15,iVar14,puVar9[1]);
  if ((lVar11 == 0) || (lVar12 == 0))
  goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  FUN_06eef620(lVar12,uVar18,*(undefined4 *)(lVar11 + 0x10),*(undefined8 *)PTR_DAT_092c1638);
  plVar15 = *(long **)(unaff_x19 + 0x58);
  iVar14 = iVar14 + 1;
  if (plVar15 == (long *)0x0)
  goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  goto LAB_0727da3c;
}


