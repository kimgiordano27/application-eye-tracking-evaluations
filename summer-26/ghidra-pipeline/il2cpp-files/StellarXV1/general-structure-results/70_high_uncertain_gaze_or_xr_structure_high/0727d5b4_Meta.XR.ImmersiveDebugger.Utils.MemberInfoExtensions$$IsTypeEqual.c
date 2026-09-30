/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.MemberInfoExtensions$$IsTypeEqual
ENTRY_POINT: 0727d5b4
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


/* WARNING: Removing unreachable block (ram,0x0727d3f0) */
/* WARNING: Removing unreachable block (ram,0x0727d7ec) */
/* WARNING: Removing unreachable block (ram,0x0727d7f0) */
/* WARNING: Removing unreachable block (ram,0x0727e43c) */
/* WARNING: Removing unreachable block (ram,0x0727e444) */
/* WARNING: Removing unreachable block (ram,0x0727d9ec) */

long Meta_XR_ImmersiveDebugger_Utils_MemberInfoExtensions__IsTypeEqual(undefined8 *param_1)

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
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x22;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long *unaff_x25;
  undefined8 uVar21;
  long *unaff_x27;
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
  
LAB_0727d5c4:
  do {
    uVar8 = (*(code *)*param_1)(unaff_x22,param_1[1]);
    plVar15 = in_stack_000000a0;
    if ((uVar8 & 1) == 0) {
      if (in_stack_000000a0 != (long *)0x0) {
        lVar11 = *in_stack_000000a0;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092860c0) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0727d7d4;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_040b1e00(in_stack_000000a0,*(long *)PTR_DAT_092860c0,0);
LAB_0727d7d4:
        (*(code *)*puVar9)(plVar15,puVar9[1]);
      }
      while( true ) {
        do {
          uVar8 = FUN_07161154(&stack0x000000b0,*(undefined8 *)PTR_DAT_092c1680);
          plVar15 = in_stack_000000c0;
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
            plVar15 = (long *)(in_stack_00000010 + 0x10);
            *plVar15 = lVar11;
            thunk_FUN_040ec700(plVar15,lVar11);
            plVar17 = *(long **)(unaff_x19 + 0x58);
            if (plVar17 == (long *)0x0)
            goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
            iVar13 = 0;
            goto LAB_0727da3c;
          }
        } while (in_stack_000000c0 == (long *)0x0);
        lVar11 = *in_stack_000000c0;
        bVar1 = *(byte *)(*(long *)PTR_DAT_092c1728 + 0x130);
        if ((bVar1 <= *(byte *)(lVar11 + 0x130)) &&
           (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_092c1728)
           ) break;
        bVar1 = *(byte *)(*(long *)PTR_DAT_092c1730 + 0x130);
        if ((bVar1 <= *(byte *)(lVar11 + 0x130)) &&
           (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_092c1730)
           ) {
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uVar8 = FUN_057bf848();
          if ((uVar8 & 1) != 0) {
            plVar17 = *(long **)(unaff_x19 + 0x58);
            if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar11 = *plVar17;
            lVar18 = plVar15[4];
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092c16f0) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 3) * 0x10 + 0x138);
                  goto LAB_0727d8a0;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_040b1e00(plVar17,*(long *)PTR_DAT_092c16f0,3);
LAB_0727d8a0:
            (*(code *)*puVar9)(plVar17,0,lVar18,puVar9[1]);
          }
        }
      }
      plVar17 = (long *)in_stack_000000c0[0xb];
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar11 = *plVar17;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092c16c0) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0727d1f4;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_040b1e00(plVar17,*(long *)PTR_DAT_092c16c0,0);
LAB_0727d1f4:
      plVar17 = (long *)(*(code *)*puVar9)(plVar17,puVar9[1]);
      in_stack_00000020 = &stack0x000000a8;
      in_stack_00000018 = 0;
joined_r0x0727d210:
      in_stack_000000a8 = plVar17;
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar11 = *plVar17;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x25) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0727d260;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_040b1e00(plVar17,*unaff_x25,0);
LAB_0727d260:
      uVar8 = (*(code *)*puVar9)(plVar17,puVar9[1]);
      plVar17 = in_stack_000000a8;
      if ((uVar8 & 1) != 0) {
        if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar11 = *in_stack_000000a8;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x20) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0727d2c4;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_040b1e00(in_stack_000000a8,*unaff_x20,0);
LAB_0727d2c4:
        lVar11 = (*(code *)*puVar9)(plVar17,puVar9[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar8 = FUN_057bf848();
        plVar17 = in_stack_000000a8;
        if ((uVar8 & 1) != 0) {
          plVar17 = *(long **)(unaff_x19 + 0x58);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar18 = *plVar17;
          uVar16 = *(undefined8 *)(lVar11 + 0x10);
          uVar8 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
                puVar9 = (undefined8 *)(lVar18 + (long)(*piVar12 + 3) * 0x10 + 0x138);
                goto LAB_0727d34c;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_040b1e00(plVar17,*(long *)puVar5,3);
LAB_0727d34c:
          (*(code *)*puVar9)(plVar17,0,uVar16,puVar9[1]);
          plVar17 = in_stack_000000a8;
        }
        goto joined_r0x0727d210;
      }
      if (in_stack_000000a8 != (long *)0x0) {
        lVar11 = *in_stack_000000a8;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092860c0) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0727d3d8;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_040b1e00(in_stack_000000a8,*(long *)PTR_DAT_092860c0,0);
LAB_0727d3d8:
        (*(code *)*puVar9)(plVar17,puVar9[1]);
      }
      unaff_x27 = (long *)PTR_DAT_092c16f0;
      plVar17 = (long *)plVar15[3];
      if (plVar17 != (long *)0x0) {
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar11 = *(long *)PTR_DAT_092c1458;
        if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
           (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) !=
            lVar11)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077bb0(plVar17,lVar11);
        }
        uVar8 = FUN_057bf848();
        if ((uVar8 & 1) != 0) {
          plVar17 = *(long **)(unaff_x19 + 0x58);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          plVar14 = (long *)plVar15[3];
          if (plVar14 != (long *)0x0) {
            lVar11 = *(long *)PTR_DAT_092c1458;
            if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) !=
                lVar11)) {
                    /* WARNING: Subroutine does not return */
              FUN_04077bb0(plVar14,lVar11);
            }
          }
          lVar11 = *plVar17;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *unaff_x27) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 3) * 0x10 + 0x138);
                goto LAB_0727d4e0;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_040b1e00(plVar17,*unaff_x27,3);
LAB_0727d4e0:
          (*(code *)*puVar9)(plVar17,0,plVar14,puVar9[1]);
        }
      }
      if (plVar15[9] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar15 = *(long **)(plVar15[9] + 0x10);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar11 = *plVar15;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092c16d0) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0727d558;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)PTR_DAT_092c16d0,0);
LAB_0727d558:
      unaff_x22 = (long *)(*(code *)*puVar9)(plVar15,puVar9[1]);
      in_stack_00000088 = &stack0x000000a0;
      in_stack_00000080 = 0;
    }
    else {
      if (in_stack_000000a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar11 = *in_stack_000000a0;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x29) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0727d628;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_040b1e00(in_stack_000000a0,*unaff_x29,0);
LAB_0727d628:
      (*(code *)*puVar9)(&stack0x00000018,plVar15,puVar9[1]);
      plVar15 = in_stack_00000060;
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      unaff_x22 = in_stack_000000a0;
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
        unaff_x22 = in_stack_000000a0;
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
          lVar11 = *plVar17;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *unaff_x27) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 3) * 0x10 + 0x138);
                goto LAB_0727d748;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_040b1e00(plVar17,*unaff_x27,3);
LAB_0727d748:
          (*(code *)*puVar9)(plVar17,0,plVar15,puVar9[1]);
          unaff_x22 = in_stack_000000a0;
        }
      }
    }
    in_stack_000000a0 = unaff_x22;
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar11 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x25) {
          param_1 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0727d5c4;
        }
        uVar8 = uVar8 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar8 != 0);
    }
    param_1 = (undefined8 *)FUN_040b1e00(unaff_x22,*unaff_x25,0);
  } while( true );
LAB_0727da3c:
  lVar11 = *plVar17;
  uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar8 != 0) {
    piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0727da88;
      }
      uVar8 = uVar8 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_040b1e00(plVar17,*(long *)puVar4,0);
LAB_0727da88:
  iVar7 = (*(code *)*puVar9)(plVar17,puVar9[1]);
  if (iVar7 <= iVar13) {
    lVar11 = *(long *)puVar6;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar11 = *(long *)puVar6;
    }
    uVar16 = **(undefined8 **)(lVar11 + 0xb8);
    lVar11 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
    FUN_07df6498(lVar11,uVar16,0);
    lVar18 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1710);
    FUN_05c26520(lVar18,*(undefined8 *)PTR_DAT_092c1708);
    puVar4 = PTR_DAT_092c1768;
    uVar16 = *(undefined8 *)(unaff_x19 + 0x58);
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
      plVar15 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 8);
      *plVar15 = lVar19;
      thunk_FUN_040ec700(plVar15,lVar19);
    }
    uVar8 = FUN_04f7671c(uVar16,lVar19,*(undefined8 *)PTR_DAT_092c1650);
    if ((uVar8 & 1) != 0) {
      uVar16 = FUN_05217a68(*(undefined8 *)PTR_DAT_092c14f8,*(undefined8 *)PTR_DAT_092c17a0,
                            *(undefined8 *)PTR_DAT_092c1740);
      if (lVar18 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      lVar10 = *(long *)(lVar18 + 0x10);
      lVar19 = *(long *)PTR_DAT_092c16f8;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      if (lVar10 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      uVar2 = *(uint *)(lVar18 + 0x18);
      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar18 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar16;
        thunk_FUN_040ec700();
      }
      else {
        FUN_05c26d88(lVar18,uVar16,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
    }
    plVar15 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,0xd);
    uVar16 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1770,0);
    in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x10);
    in_stack_00000018 = *(undefined8 *)PTR_DAT_092c1718;
    in_stack_00000020 = (undefined8 *)0xffffffffffffffff;
    lVar10 = FUN_076b01b4(&stack0x00000018,0);
    if (lVar10 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    uVar21 = FUN_074eac78(lVar10,0);
    lVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
    FUN_07df1964(lVar10,uVar16,uVar21,0);
    if (plVar15 == (long *)0x0)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    if ((lVar10 != 0) &&
       (lVar19 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar15 + 0x40)), lVar19 == 0)) {
LAB_0727e420:
      uVar16 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar16,0);
    }
    if ((int)plVar15[3] != 0) {
      plVar15[4] = lVar10;
      thunk_FUN_040ec700(plVar15 + 4,lVar10);
      lVar10 = *(long *)puVar6;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar10 = *(long *)puVar6;
      }
      uVar16 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x20);
      lVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
      FUN_07df1964(lVar10,uVar16,*(undefined8 *)PTR_DAT_0928e688,0);
      if ((lVar10 != 0) &&
         (lVar19 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar15 + 0x40)), lVar19 == 0))
      goto LAB_0727e420;
      if ((*(uint *)(plVar15 + 3) & 0xfffffffe) != 0) {
        plVar15[5] = lVar10;
        thunk_FUN_040ec700(plVar15 + 5,lVar10);
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
          uVar16 = *puVar9;
          lVar19 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1698);
          FUN_0568af90(lVar19,uVar16,*(undefined8 *)PTR_DAT_092c1750,0);
          plVar17 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 0x10);
          *plVar17 = lVar19;
          thunk_FUN_040ec700(plVar17,lVar19);
        }
        lVar18 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                           (lVar18,lVar19,*(undefined8 *)PTR_DAT_092c1668);
        if ((lVar18 != 0) &&
           (lVar10 = thunk_FUN_040b4e00(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar10 == 0))
        goto LAB_0727e420;
        if (2 < *(uint *)(plVar15 + 3)) {
          plVar15[6] = lVar18;
          uVar16 = thunk_FUN_040ec700(plVar15 + 6,lVar18);
          lVar18 = FUN_07283670(uVar16,*(undefined8 *)PTR_DAT_0928e5a8,
                                *(undefined8 *)(unaff_x19 + 0x18));
          if ((lVar18 != 0) &&
             (lVar10 = thunk_FUN_040b4e00(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar10 == 0))
          goto LAB_0727e420;
          if ((*(uint *)(plVar15 + 3) & 0xfffffffc) != 0) {
            plVar15[7] = lVar18;
            uVar16 = thunk_FUN_040ec700(plVar15 + 7,lVar18);
            lVar18 = FUN_07283670(uVar16,*(undefined8 *)PTR_DAT_092c1778,
                                  *(undefined8 *)(unaff_x19 + 0x20));
            if ((lVar18 != 0) &&
               (lVar10 = thunk_FUN_040b4e00(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar10 == 0))
            goto LAB_0727e420;
            if (4 < *(uint *)(plVar15 + 3)) {
              plVar15[8] = lVar18;
              uVar16 = thunk_FUN_040ec700(plVar15 + 8,lVar18);
              lVar18 = FUN_07283670(uVar16,*(undefined8 *)PTR_DAT_0928cfa8,
                                    *(undefined8 *)(unaff_x19 + 0x28));
              if ((lVar18 != 0) &&
                 (lVar10 = thunk_FUN_040b4e00(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar10 == 0)
                 ) goto LAB_0727e420;
              if (5 < *(uint *)(plVar15 + 3)) {
                plVar15[9] = lVar18;
                uVar16 = thunk_FUN_040ec700(plVar15 + 9,lVar18);
                lVar18 = FUN_07283670(uVar16,*(undefined8 *)PTR_DAT_092c1788,
                                      *(undefined8 *)(unaff_x19 + 0x30));
                if ((lVar18 != 0) &&
                   (lVar10 = thunk_FUN_040b4e00(lVar18,*(undefined8 *)(*plVar15 + 0x40)),
                   lVar10 == 0)) goto LAB_0727e420;
                if (6 < *(uint *)(plVar15 + 3)) {
                  plVar15[10] = lVar18;
                  uVar16 = thunk_FUN_040ec700(plVar15 + 10,lVar18);
                  lVar18 = FUN_07283670(uVar16,*(undefined8 *)PTR_DAT_092c1790,
                                        *(undefined8 *)(unaff_x19 + 0x38));
                  if ((lVar18 != 0) &&
                     (lVar10 = thunk_FUN_040b4e00(lVar18,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar10 == 0)) goto LAB_0727e420;
                  if ((*(uint *)(plVar15 + 3) & 0xfffffff8) != 0) {
                    plVar15[0xb] = lVar18;
                    uVar16 = thunk_FUN_040ec700(plVar15 + 0xb,lVar18);
                    lVar18 = FUN_07283670(uVar16,*(undefined8 *)PTR_DAT_092c1798,
                                          *(undefined8 *)(unaff_x19 + 0x40));
                    if ((lVar18 != 0) &&
                       (lVar10 = thunk_FUN_040b4e00(lVar18,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar10 == 0)) goto LAB_0727e420;
                    if (8 < *(uint *)(plVar15 + 3)) {
                      plVar15[0xc] = lVar18;
                      uVar16 = thunk_FUN_040ec700(plVar15 + 0xc,lVar18);
                      lVar18 = FUN_07283670(uVar16,*(undefined8 *)PTR_DAT_092a5d10,
                                            *(undefined8 *)(unaff_x19 + 0x48));
                      if ((lVar18 != 0) &&
                         (lVar10 = thunk_FUN_040b4e00(lVar18,*(undefined8 *)(*plVar15 + 0x40)),
                         lVar10 == 0)) goto LAB_0727e420;
                      if (9 < *(uint *)(plVar15 + 3)) {
                        plVar15[0xd] = lVar18;
                        uVar16 = thunk_FUN_040ec700(plVar15 + 0xd,lVar18);
                        lVar18 = FUN_07283670(uVar16,*(undefined8 *)PTR_DAT_092c1780,
                                              *(undefined8 *)(unaff_x19 + 0x50));
                        if ((lVar18 != 0) &&
                           (lVar10 = thunk_FUN_040b4e00(lVar18,*(undefined8 *)(*plVar15 + 0x40)),
                           lVar10 == 0)) goto LAB_0727e420;
                        if (10 < *(uint *)(plVar15 + 3)) {
                          plVar15[0xe] = lVar18;
                          thunk_FUN_040ec700(plVar15 + 0xe,lVar18);
                          lVar18 = *(long *)puVar6;
                          if (*(int *)(lVar18 + 0xe4) == 0) {
                            thunk_FUN_040d65a8();
                            lVar18 = *(long *)puVar6;
                          }
                          uVar21 = *(undefined8 *)(unaff_x19 + 0x58);
                          uVar20 = *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 0x10);
                          uVar16 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a8);
                          FUN_0568af90(uVar16,in_stack_00000010,*(undefined8 *)PTR_DAT_092c1758,0);
                          uVar16 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                             (uVar21,uVar16,*(undefined8 *)PTR_DAT_092c1660);
                          lVar18 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
                          System_Xml_XmlReader__Close(lVar18,uVar20,uVar16,0);
                          if ((lVar18 != 0) &&
                             (lVar10 = thunk_FUN_040b4e00(lVar18,*(undefined8 *)(*plVar15 + 0x40)),
                             lVar10 == 0)) goto LAB_0727e420;
                          if (0xb < *(uint *)(plVar15 + 3)) {
                            plVar15[0xf] = lVar18;
                            thunk_FUN_040ec700(plVar15 + 0xf,lVar18);
                            uVar21 = *(undefined8 *)(unaff_x19 + 0x60);
                            uVar20 = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
                            uVar16 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
                            FUN_0568af90(uVar16,in_stack_00000010,*(undefined8 *)PTR_DAT_092c1760,0)
                            ;
                            uVar16 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                               (uVar21,uVar16,*(undefined8 *)PTR_DAT_092c1658);
                            lVar18 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
                            System_Xml_XmlReader__Close(lVar18,uVar20,uVar16,0);
                            if ((lVar18 != 0) &&
                               (lVar10 = thunk_FUN_040b4e00(lVar18,*(undefined8 *)(*plVar15 + 0x40))
                               , lVar10 == 0)) goto LAB_0727e420;
                            if (0xc < *(uint *)(plVar15 + 3)) {
                              plVar15[0x10] = lVar18;
                              thunk_FUN_040ec700(plVar15 + 0x10,lVar18);
                              if (lVar11 != 0) {
                                thunk_FUN_07df3248(lVar11,plVar15,0);
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
  plVar17 = *(long **)(unaff_x19 + 0x58);
  if (plVar17 == (long *)0x0)
  goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  lVar11 = *plVar17;
  uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar8 != 0) {
    piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092c16f0) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0727daf8;
      }
      uVar8 = uVar8 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_040b1e00(plVar17,*(long *)PTR_DAT_092c16f0,0);
LAB_0727daf8:
  lVar11 = (*(code *)*puVar9)(plVar17,iVar13,puVar9[1]);
  if (lVar11 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  *(int *)(lVar11 + 0x10) = iVar13 + 1;
  plVar17 = *(long **)(unaff_x19 + 0x58);
  if (plVar17 == (long *)0x0)
  goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  lVar11 = *plVar17;
  lVar18 = *plVar15;
  uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar8 != 0) {
    piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092c16f0) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
        goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog;
      }
      uVar8 = uVar8 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_040b1e00(plVar17,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog:
  uVar16 = (*(code *)*puVar9)(plVar17,iVar13,puVar9[1]);
  plVar17 = *(long **)(unaff_x19 + 0x58);
  if (plVar17 == (long *)0x0)
  goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  lVar11 = *plVar17;
  uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar8 != 0) {
    piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092c16f0) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
        goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer;
      }
      uVar8 = uVar8 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_040b1e00(plVar17,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer:
  lVar11 = (*(code *)*puVar9)(plVar17,iVar13,puVar9[1]);
  if ((lVar11 == 0) || (lVar18 == 0))
  goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  FUN_06eef620(lVar18,uVar16,*(undefined4 *)(lVar11 + 0x10),*(undefined8 *)PTR_DAT_092c1638);
  plVar17 = *(long **)(unaff_x19 + 0x58);
  iVar13 = iVar13 + 1;
  if (plVar17 == (long *)0x0)
  goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  goto LAB_0727da3c;
}


