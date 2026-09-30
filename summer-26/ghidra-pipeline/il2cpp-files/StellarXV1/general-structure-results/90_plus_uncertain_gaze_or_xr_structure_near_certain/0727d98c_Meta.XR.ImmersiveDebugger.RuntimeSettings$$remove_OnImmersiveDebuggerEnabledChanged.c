/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$remove_OnImmersiveDebuggerEnabledChanged
ENTRY_POINT: 0727d98c
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
/* WARNING: Removing unreachable block (ram,0x0727e444) */

long Meta_XR_ImmersiveDebugger_RuntimeSettings__remove_OnImmersiveDebuggerEnabledChanged(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long *unaff_x25;
  undefined8 uVar18;
  long *unaff_x26;
  int iVar19;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000010;
  long in_stack_00000018;
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
  
  plVar8 = (long *)__cxa_begin_catch();
  lVar14 = *plVar8;
  in_stack_00000018 = lVar14;
  __cxa_end_catch();
  iVar19 = 0;
  puVar7 = in_stack_00000020;
  do {
    plVar8 = (long *)*puVar7;
    if (plVar8 != (long *)0x0) {
      lVar10 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092860c0) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0727d3d8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_092860c0,0);
LAB_0727d3d8:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
    }
    puVar3 = PTR_DAT_092c16f0;
    if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077828(lVar14);
    }
    if ((iVar19 != 10) && (iVar19 != 0)) {
LAB_0727d9b0:
      lVar14 = in_stack_00000090;
      puVar5 = PTR_DAT_092c1720;
      puVar4 = PTR_DAT_092c16b8;
      puVar3 = PTR_DAT_092c1408;
      FUN_07161150(in_stack_00000098,*(undefined8 *)PTR_DAT_092c1678);
      if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077828(lVar14);
      }
      if ((iVar19 != 0xe) && (iVar19 != 0)) {
        return 0;
      }
      lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1648);
      FUN_06eeec70(lVar14,*(undefined8 *)PTR_DAT_092c1640);
      if (in_stack_00000010 == 0)
      goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      plVar8 = (long *)(in_stack_00000010 + 0x10);
      *plVar8 = lVar14;
      thunk_FUN_040ec700(plVar8,lVar14);
      plVar13 = *(long **)(unaff_x19 + 0x58);
      if (plVar13 == (long *)0x0)
      goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      iVar19 = 0;
      break;
    }
    plVar8 = (long *)unaff_x26[3];
    if (plVar8 != (long *)0x0) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar14 = *(long *)PTR_DAT_092c1458;
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar8,lVar14);
      }
      uVar11 = FUN_057bf848();
      if ((uVar11 & 1) != 0) {
        plVar8 = *(long **)(unaff_x19 + 0x58);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar13 = (long *)unaff_x26[3];
        lVar14 = *(long *)puVar3;
        if (plVar13 != (long *)0x0) {
          lVar10 = *(long *)PTR_DAT_092c1458;
          if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) !=
              lVar10)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(plVar13,lVar10);
          }
        }
        lVar10 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar14) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
              goto LAB_0727d4e0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_040b1e00(plVar8,lVar14,3);
LAB_0727d4e0:
        (*(code *)*puVar7)(plVar8,0,plVar13,puVar7[1]);
      }
    }
    if (unaff_x26[9] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar8 = *(long **)(unaff_x26[9] + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar14 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092c16d0) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0727d558;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_092c16d0,0);
LAB_0727d558:
    plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
    in_stack_00000088 = &stack0x000000a0;
    in_stack_00000080 = 0;
joined_r0x0727d574:
    in_stack_000000a0 = plVar8;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar14 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x25) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0727d5c4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*unaff_x25,0);
LAB_0727d5c4:
    uVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    plVar8 = in_stack_000000a0;
    if ((uVar11 & 1) != 0) {
      if (in_stack_000000a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar14 = *in_stack_000000a0;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x29) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0727d628;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(in_stack_000000a0,*unaff_x29,0);
LAB_0727d628:
      (*(code *)*puVar7)(&stack0x00000018,plVar8,puVar7[1]);
      plVar13 = in_stack_00000060;
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      plVar8 = in_stack_000000a0;
      if (plVar13 != (long *)0x0) {
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        bVar1 = *(byte *)(*(long *)PTR_DAT_092c1458 + 0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_092c1458)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077bb0(plVar13);
        }
        uVar11 = FUN_057bf848();
        plVar8 = in_stack_000000a0;
        if ((uVar11 & 1) != 0) {
          plVar8 = *(long **)(unaff_x19 + 0x58);
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          bVar1 = *(byte *)(*(long *)PTR_DAT_092c1458 + 0x130);
          if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_092c1458)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(plVar13);
          }
          lVar10 = *plVar8;
          lVar14 = *(long *)puVar3;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar14) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
                goto LAB_0727d748;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_040b1e00(plVar8,lVar14,3);
LAB_0727d748:
          (*(code *)*puVar7)(plVar8,0,plVar13,puVar7[1]);
          plVar8 = in_stack_000000a0;
        }
      }
      goto joined_r0x0727d574;
    }
    if (in_stack_000000a0 != (long *)0x0) {
      lVar14 = *in_stack_000000a0;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092860c0) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0727d7d4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(in_stack_000000a0,*(long *)PTR_DAT_092860c0,0);
LAB_0727d7d4:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
    }
    while( true ) {
      do {
        uVar11 = FUN_07161154(&stack0x000000b0,*(undefined8 *)PTR_DAT_092c1680);
        unaff_x26 = in_stack_000000c0;
        puVar3 = PTR_DAT_092c16f0;
        if ((uVar11 & 1) == 0) {
          iVar19 = 0xe;
          goto LAB_0727d9b0;
        }
      } while (in_stack_000000c0 == (long *)0x0);
      lVar14 = *in_stack_000000c0;
      bVar1 = *(byte *)(*(long *)PTR_DAT_092c1728 + 0x130);
      if ((bVar1 <= *(byte *)(lVar14 + 0x130)) &&
         (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_092c1728))
      break;
      bVar1 = *(byte *)(*(long *)PTR_DAT_092c1730 + 0x130);
      if ((bVar1 <= *(byte *)(lVar14 + 0x130)) &&
         (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_092c1730))
      {
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar11 = FUN_057bf848();
        if ((uVar11 & 1) != 0) {
          plVar8 = *(long **)(unaff_x19 + 0x58);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = *plVar8;
          lVar10 = unaff_x26[4];
          uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092c16f0) {
                puVar7 = (undefined8 *)(lVar14 + (long)(*piVar12 + 3) * 0x10 + 0x138);
                goto LAB_0727d8a0;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_092c16f0,3);
LAB_0727d8a0:
          (*(code *)*puVar7)(plVar8,0,lVar10,puVar7[1]);
        }
      }
    }
    plVar8 = (long *)in_stack_000000c0[0xb];
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar14 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092c16c0) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0727d1f4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_092c16c0,0);
LAB_0727d1f4:
    plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
    in_stack_00000020 = &stack0x000000a8;
    in_stack_00000018 = 0;
joined_r0x0727d210:
    in_stack_000000a8 = plVar8;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar14 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x25) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0727d260;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*unaff_x25,0);
LAB_0727d260:
    uVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    plVar8 = in_stack_000000a8;
    if ((uVar11 & 1) != 0) {
      if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar14 = *in_stack_000000a8;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x20) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0727d2c4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(in_stack_000000a8,*unaff_x20,0);
LAB_0727d2c4:
      lVar14 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar11 = FUN_057bf848();
      plVar8 = in_stack_000000a8;
      if ((uVar11 & 1) != 0) {
        plVar8 = *(long **)(unaff_x19 + 0x58);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar10 = *plVar8;
        uVar15 = *(undefined8 *)(lVar14 + 0x10);
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
              goto LAB_0727d34c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar3,3);
LAB_0727d34c:
        (*(code *)*puVar7)(plVar8,0,uVar15,puVar7[1]);
        plVar8 = in_stack_000000a8;
      }
      goto joined_r0x0727d210;
    }
    lVar14 = 0;
    iVar19 = 10;
    puVar7 = &stack0x000000a8;
  } while( true );
LAB_0727da3c:
  lVar14 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
        puVar7 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0727da88;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)puVar4,0);
LAB_0727da88:
  iVar6 = (*(code *)*puVar7)(plVar13,puVar7[1]);
  if (iVar6 <= iVar19) {
    lVar14 = *(long *)puVar5;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar14 = *(long *)puVar5;
    }
    uVar15 = **(undefined8 **)(lVar14 + 0xb8);
    lVar14 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
    FUN_07df6498(lVar14,uVar15,0);
    lVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1710);
    FUN_05c26520(lVar10,*(undefined8 *)PTR_DAT_092c1708);
    puVar4 = PTR_DAT_092c1768;
    uVar15 = *(undefined8 *)(unaff_x19 + 0x58);
    lVar9 = *(long *)PTR_DAT_092c1768;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar9 = *(long *)puVar4;
    }
    puVar7 = *(undefined8 **)(lVar9 + 0xb8);
    lVar16 = puVar7[1];
    if (lVar16 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        puVar7 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
      }
      uVar18 = *puVar7;
      lVar16 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1690);
      FUN_056893d4(lVar16,uVar18,*(undefined8 *)PTR_DAT_092c1748,0);
      plVar8 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 8);
      *plVar8 = lVar16;
      thunk_FUN_040ec700(plVar8,lVar16);
    }
    uVar11 = FUN_04f7671c(uVar15,lVar16,*(undefined8 *)PTR_DAT_092c1650);
    if ((uVar11 & 1) != 0) {
      uVar15 = FUN_05217a68(*(undefined8 *)PTR_DAT_092c14f8,*(undefined8 *)PTR_DAT_092c17a0,
                            *(undefined8 *)PTR_DAT_092c1740);
      if (lVar10 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      lVar9 = *(long *)(lVar10 + 0x10);
      lVar16 = *(long *)PTR_DAT_092c16f8;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar9 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      uVar2 = *(uint *)(lVar10 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar15;
        thunk_FUN_040ec700();
      }
      else {
        FUN_05c26d88(lVar10,uVar15,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
    }
    plVar8 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,0xd);
    uVar15 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1770,0);
    in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x10);
    in_stack_00000018 = *(long *)PTR_DAT_092c1718;
    in_stack_00000020 = (undefined8 *)0xffffffffffffffff;
    lVar9 = FUN_076b01b4(&stack0x00000018,0);
    if (lVar9 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    uVar18 = FUN_074eac78(lVar9,0);
    lVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
    FUN_07df1964(lVar9,uVar15,uVar18,0);
    if (plVar8 == (long *)0x0)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    if ((lVar9 != 0) &&
       (lVar16 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar16 == 0)) {
LAB_0727e420:
      uVar15 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar15,0);
    }
    if ((int)plVar8[3] != 0) {
      plVar8[4] = lVar9;
      thunk_FUN_040ec700(plVar8 + 4,lVar9);
      lVar9 = *(long *)puVar5;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar9 = *(long *)puVar5;
      }
      uVar15 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x20);
      lVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
      FUN_07df1964(lVar9,uVar15,*(undefined8 *)PTR_DAT_0928e688,0);
      if ((lVar9 != 0) &&
         (lVar16 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar16 == 0))
      goto LAB_0727e420;
      if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
        plVar8[5] = lVar9;
        thunk_FUN_040ec700(plVar8 + 5,lVar9);
        lVar9 = *(long *)PTR_DAT_092c1768;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar9 = *(long *)PTR_DAT_092c1768;
        }
        puVar7 = *(undefined8 **)(lVar9 + 0xb8);
        lVar16 = puVar7[2];
        if (lVar16 == 0) {
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            puVar7 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
          }
          uVar15 = *puVar7;
          lVar16 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1698);
          FUN_0568af90(lVar16,uVar15,*(undefined8 *)PTR_DAT_092c1750,0);
          plVar13 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 0x10);
          *plVar13 = lVar16;
          thunk_FUN_040ec700(plVar13,lVar16);
        }
        lVar10 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                           (lVar10,lVar16,*(undefined8 *)PTR_DAT_092c1668);
        if ((lVar10 != 0) &&
           (lVar9 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_0727e420;
        if (2 < *(uint *)(plVar8 + 3)) {
          plVar8[6] = lVar10;
          uVar15 = thunk_FUN_040ec700(plVar8 + 6,lVar10);
          lVar10 = FUN_07283670(uVar15,*(undefined8 *)PTR_DAT_0928e5a8,
                                *(undefined8 *)(unaff_x19 + 0x18));
          if ((lVar10 != 0) &&
             (lVar9 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
          goto LAB_0727e420;
          if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
            plVar8[7] = lVar10;
            uVar15 = thunk_FUN_040ec700(plVar8 + 7,lVar10);
            lVar10 = FUN_07283670(uVar15,*(undefined8 *)PTR_DAT_092c1778,
                                  *(undefined8 *)(unaff_x19 + 0x20));
            if ((lVar10 != 0) &&
               (lVar9 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
            goto LAB_0727e420;
            if (4 < *(uint *)(plVar8 + 3)) {
              plVar8[8] = lVar10;
              uVar15 = thunk_FUN_040ec700(plVar8 + 8,lVar10);
              lVar10 = FUN_07283670(uVar15,*(undefined8 *)PTR_DAT_0928cfa8,
                                    *(undefined8 *)(unaff_x19 + 0x28));
              if ((lVar10 != 0) &&
                 (lVar9 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
              goto LAB_0727e420;
              if (5 < *(uint *)(plVar8 + 3)) {
                plVar8[9] = lVar10;
                uVar15 = thunk_FUN_040ec700(plVar8 + 9,lVar10);
                lVar10 = FUN_07283670(uVar15,*(undefined8 *)PTR_DAT_092c1788,
                                      *(undefined8 *)(unaff_x19 + 0x30));
                if ((lVar10 != 0) &&
                   (lVar9 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                goto LAB_0727e420;
                if (6 < *(uint *)(plVar8 + 3)) {
                  plVar8[10] = lVar10;
                  uVar15 = thunk_FUN_040ec700(plVar8 + 10,lVar10);
                  lVar10 = FUN_07283670(uVar15,*(undefined8 *)PTR_DAT_092c1790,
                                        *(undefined8 *)(unaff_x19 + 0x38));
                  if ((lVar10 != 0) &&
                     (lVar9 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0
                     )) goto LAB_0727e420;
                  if ((*(uint *)(plVar8 + 3) & 0xfffffff8) != 0) {
                    plVar8[0xb] = lVar10;
                    uVar15 = thunk_FUN_040ec700(plVar8 + 0xb,lVar10);
                    lVar10 = FUN_07283670(uVar15,*(undefined8 *)PTR_DAT_092c1798,
                                          *(undefined8 *)(unaff_x19 + 0x40));
                    if ((lVar10 != 0) &&
                       (lVar9 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar9 == 0)) goto LAB_0727e420;
                    if (8 < *(uint *)(plVar8 + 3)) {
                      plVar8[0xc] = lVar10;
                      uVar15 = thunk_FUN_040ec700(plVar8 + 0xc,lVar10);
                      lVar10 = FUN_07283670(uVar15,*(undefined8 *)PTR_DAT_092a5d10,
                                            *(undefined8 *)(unaff_x19 + 0x48));
                      if ((lVar10 != 0) &&
                         (lVar9 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar9 == 0)) goto LAB_0727e420;
                      if (9 < *(uint *)(plVar8 + 3)) {
                        plVar8[0xd] = lVar10;
                        uVar15 = thunk_FUN_040ec700(plVar8 + 0xd,lVar10);
                        lVar10 = FUN_07283670(uVar15,*(undefined8 *)PTR_DAT_092c1780,
                                              *(undefined8 *)(unaff_x19 + 0x50));
                        if ((lVar10 != 0) &&
                           (lVar9 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar9 == 0)) goto LAB_0727e420;
                        if (10 < *(uint *)(plVar8 + 3)) {
                          plVar8[0xe] = lVar10;
                          thunk_FUN_040ec700(plVar8 + 0xe,lVar10);
                          lVar10 = *(long *)puVar5;
                          if (*(int *)(lVar10 + 0xe4) == 0) {
                            thunk_FUN_040d65a8();
                            lVar10 = *(long *)puVar5;
                          }
                          uVar18 = *(undefined8 *)(unaff_x19 + 0x58);
                          uVar17 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
                          uVar15 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a8);
                          FUN_0568af90(uVar15,in_stack_00000010,*(undefined8 *)PTR_DAT_092c1758,0);
                          uVar15 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                             (uVar18,uVar15,*(undefined8 *)PTR_DAT_092c1660);
                          lVar10 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
                          System_Xml_XmlReader__Close(lVar10,uVar17,uVar15,0);
                          if ((lVar10 != 0) &&
                             (lVar9 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                             lVar9 == 0)) goto LAB_0727e420;
                          if (0xb < *(uint *)(plVar8 + 3)) {
                            plVar8[0xf] = lVar10;
                            thunk_FUN_040ec700(plVar8 + 0xf,lVar10);
                            uVar18 = *(undefined8 *)(unaff_x19 + 0x60);
                            uVar17 = *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
                            uVar15 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
                            FUN_0568af90(uVar15,in_stack_00000010,*(undefined8 *)PTR_DAT_092c1760,0)
                            ;
                            uVar15 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                               (uVar18,uVar15,*(undefined8 *)PTR_DAT_092c1658);
                            lVar10 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
                            System_Xml_XmlReader__Close(lVar10,uVar17,uVar15,0);
                            if ((lVar10 != 0) &&
                               (lVar9 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                               lVar9 == 0)) goto LAB_0727e420;
                            if (0xc < *(uint *)(plVar8 + 3)) {
                              plVar8[0x10] = lVar10;
                              thunk_FUN_040ec700(plVar8 + 0x10,lVar10);
                              if (lVar14 != 0) {
                                thunk_FUN_07df3248(lVar14,plVar8,0);
                                return lVar14;
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
  plVar13 = *(long **)(unaff_x19 + 0x58);
  if (plVar13 == (long *)0x0)
  goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  lVar14 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092c16f0) {
        puVar7 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0727daf8;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)PTR_DAT_092c16f0,0);
LAB_0727daf8:
  lVar14 = (*(code *)*puVar7)(plVar13,iVar19,puVar7[1]);
  if (lVar14 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  *(int *)(lVar14 + 0x10) = iVar19 + 1;
  plVar13 = *(long **)(unaff_x19 + 0x58);
  if (plVar13 == (long *)0x0)
  goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  lVar14 = *plVar13;
  lVar10 = *plVar8;
  uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092c16f0) {
        puVar7 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
        goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog:
  uVar15 = (*(code *)*puVar7)(plVar13,iVar19,puVar7[1]);
  plVar13 = *(long **)(unaff_x19 + 0x58);
  if (plVar13 == (long *)0x0)
  goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  lVar14 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092c16f0) {
        puVar7 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
        goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer:
  lVar14 = (*(code *)*puVar7)(plVar13,iVar19,puVar7[1]);
  if ((lVar14 == 0) || (lVar10 == 0))
  goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  FUN_06eef620(lVar10,uVar15,*(undefined4 *)(lVar14 + 0x10),*(undefined8 *)PTR_DAT_092c1638);
  plVar13 = *(long **)(unaff_x19 + 0x58);
  iVar19 = iVar19 + 1;
  if (plVar13 == (long *)0x0)
  goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  goto LAB_0727da3c;
}


