/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedHandle$$TryGetMember
ENTRY_POINT: 0727cba4
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

long Meta_XR_ImmersiveDebugger_InspectedHandle__TryGetMember(void)

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
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  int iVar20;
  undefined8 *unaff_x22;
  undefined8 uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long unaff_x23;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
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
  
  FUN_04077588(PTR_DAT_092c1668);
  FUN_04077588(PTR_DAT_092c1670);
  FUN_04077588(PTR_DAT_092c1678);
  FUN_04077588(PTR_DAT_092c1680);
  FUN_04077588(PTR_DAT_092c1688);
  FUN_04077588(PTR_DAT_092c1690);
  FUN_04077588(PTR_DAT_092c1698);
  FUN_04077588(PTR_DAT_092c16a0);
  FUN_04077588(PTR_DAT_092c16a8);
  FUN_04077588(PTR_DAT_092c16b0);
  FUN_04077588(PTR_DAT_092c1630);
  FUN_04077588(PTR_DAT_092c1628);
  FUN_04077588(PTR_DAT_092c16b8);
  FUN_04077588(PTR_DAT_092860c0);
  FUN_04077588(PTR_DAT_092c16c0);
  FUN_04077588(PTR_DAT_092c16c8);
  FUN_04077588(PTR_DAT_092c16d0);
  FUN_04077588(PTR_DAT_092c16d8);
  FUN_04077588(PTR_DAT_092c16e0);
  FUN_04077588(PTR_DAT_092c16e8);
  FUN_04077588(PTR_DAT_092860c8);
  FUN_04077588(PTR_DAT_092c16f0);
  FUN_04077588(PTR_DAT_092c16f8);
  FUN_04077588(PTR_DAT_092c1700);
  FUN_04077588(PTR_DAT_092c1708);
  FUN_04077588(PTR_DAT_092c1710);
  FUN_04077588(PTR_DAT_09287040);
  FUN_04077588(PTR_DAT_092c1718);
  FUN_04077588(PTR_DAT_092c1720);
  FUN_04077588(PTR_DAT_092c1728);
  FUN_04077588(PTR_DAT_092c1458);
  FUN_04077588(PTR_DAT_092c1730);
  FUN_04077588(PTR_DAT_092c1738);
  FUN_04077588(PTR_DAT_092c1740);
  FUN_04077588(PTR_DAT_092c1748);
  FUN_04077588(PTR_DAT_092c1750);
  FUN_04077588(PTR_DAT_092c1758);
  FUN_04077588(PTR_DAT_092c1760);
  FUN_04077588(PTR_DAT_092c1620);
  FUN_04077588(PTR_DAT_092c1768);
  FUN_04077588(PTR_DAT_092c1400);
  FUN_04077588(PTR_DAT_092c1408);
  FUN_04077588(PTR_DAT_092c1770);
  FUN_04077588(PTR_DAT_0928e688);
  FUN_04077588(PTR_DAT_0928e5a8);
  FUN_04077588(PTR_DAT_092c1778);
  FUN_04077588(PTR_DAT_092c1780);
  FUN_04077588(PTR_DAT_092c1788);
  FUN_04077588(PTR_DAT_092c1790);
  FUN_04077588(PTR_DAT_092c14f8);
  FUN_04077588(PTR_DAT_092c1798);
  FUN_04077588(PTR_DAT_092c17a0);
  FUN_04077588(PTR_DAT_092a5d10);
  FUN_04077588(PTR_DAT_0928cfa8);
  *(undefined1 *)(unaff_x23 + 0x789) = 1;
  in_stack_000000c0 = (long *)0x0;
  in_stack_000000c8 = (long *)0x0;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = (undefined8 *)0x0;
  in_stack_000000a0 = (long *)0x0;
  in_stack_000000a8 = (long *)0x0;
  lVar13 = thunk_FUN_040b4efc(*unaff_x22);
  FUN_076bca34(lVar13,0);
  uVar21 = *(undefined8 *)(unaff_x19 + 0x58);
  lVar14 = thunk_FUN_040b4efc(*unaff_x21);
  FUN_057be744(lVar14,uVar21,*unaff_x20);
  plVar22 = *(long **)(unaff_x19 + 0x60);
  if (plVar22 != (long *)0x0) {
    lVar16 = *plVar22;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092c16c8) {
          puVar15 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0727cecc;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar15 = (undefined8 *)FUN_040b1e00(plVar22,*(long *)PTR_DAT_092c16c8,0);
LAB_0727cecc:
    puVar6 = PTR_DAT_092c16b8;
    puVar5 = PTR_DAT_092c16b0;
    puVar3 = PTR_DAT_092860c8;
    plVar22 = (long *)(*(code *)*puVar15)(plVar22,puVar15[1]);
    puVar8 = PTR_DAT_092c16e0;
    in_stack_00000020 = &stack0x000000c8;
    in_stack_00000018 = 0;
    do {
      in_stack_000000c8 = plVar22;
      if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar16 = *plVar22;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar15 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_0727cf5c;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar15 = (undefined8 *)FUN_040b1e00(plVar22,*(long *)puVar3,0);
LAB_0727cf5c:
      uVar18 = (*(code *)*puVar15)(plVar22,puVar15[1]);
      plVar22 = in_stack_000000c8;
      if ((uVar18 & 1) == 0) {
        if (in_stack_000000c8 == (long *)0x0) goto LAB_0727d0d4;
        lVar16 = *in_stack_000000c8;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 == 0) goto LAB_0727d0ac;
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        goto LAB_0727d094;
      }
      if (in_stack_000000c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar16 = *in_stack_000000c8;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar8) {
            puVar15 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_0727cfc0;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar15 = (undefined8 *)FUN_040b1e00(in_stack_000000c8,*(long *)puVar8,0);
LAB_0727cfc0:
      lVar16 = (*(code *)*puVar15)(plVar22,puVar15[1]);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar18 = FUN_057bf848(lVar14,*(undefined8 *)(lVar16 + 0x10),*(undefined8 *)puVar5);
      plVar22 = in_stack_000000c8;
      if ((uVar18 & 1) != 0) {
        plVar22 = *(long **)(unaff_x19 + 0x58);
        if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar17 = *plVar22;
        uVar21 = *(undefined8 *)(lVar16 + 0x10);
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar6) {
              puVar15 = (undefined8 *)(lVar17 + (long)(*piVar19 + 2) * 0x10 + 0x138);
              goto LAB_0727d048;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar15 = (undefined8 *)FUN_040b1e00(plVar22,*(long *)puVar6,2);
LAB_0727d048:
        (*(code *)*puVar15)(plVar22,uVar21,puVar15[1]);
        plVar22 = in_stack_000000c8;
      }
    } while( true );
  }
  goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_0727d094:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar15 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_0727d0c8;
    }
  }
LAB_0727d0ac:
  puVar15 = (undefined8 *)FUN_040b1e00(in_stack_000000c8,*(long *)PTR_DAT_092860c0,0);
LAB_0727d0c8:
  (*(code *)*puVar15)(plVar22,puVar15[1]);
LAB_0727d0d4:
  lVar16 = FUN_04fbecb8(*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)PTR_DAT_092c1670);
  puVar11 = PTR_DAT_092c1738;
  puVar8 = PTR_DAT_092c16e8;
  puVar6 = PTR_DAT_092c16d8;
  if (lVar16 != 0) {
    FUN_05c27784(&stack0x00000018,lVar16,*(undefined8 *)PTR_DAT_092c1700);
    in_stack_000000c0 = (long *)CONCAT44(uStack000000000000002c,uStack0000000000000028);
    in_stack_00000098 = &stack0x000000b0;
    in_stack_000000b8 = in_stack_00000020;
    in_stack_000000b0 = in_stack_00000018;
    in_stack_00000090 = 0;
    while (uVar18 = FUN_07161154(&stack0x000000b0,*(undefined8 *)PTR_DAT_092c1680),
          plVar22 = in_stack_000000c0, lVar16 = in_stack_00000090, puVar10 = PTR_DAT_092c1720,
          puVar9 = PTR_DAT_092c16f0, puVar7 = PTR_DAT_092c16b8, puVar4 = PTR_DAT_092c1408,
          (uVar18 & 1) != 0) {
      if (in_stack_000000c0 != (long *)0x0) {
        lVar16 = *in_stack_000000c0;
        bVar1 = *(byte *)(*(long *)PTR_DAT_092c1728 + 0x130);
        if ((*(byte *)(lVar16 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_092c1728)
           ) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_092c1730 + 0x130);
          if ((bVar1 <= *(byte *)(lVar16 + 0x130)) &&
             (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)PTR_DAT_092c1730)) {
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar18 = FUN_057bf848(lVar14,in_stack_000000c0[4],*(undefined8 *)puVar5);
            if ((uVar18 & 1) != 0) {
              plVar23 = *(long **)(unaff_x19 + 0x58);
              if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar16 = *plVar23;
              lVar17 = plVar22[4];
              uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar18 != 0) {
                piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092c16f0) {
                    puVar15 = (undefined8 *)(lVar16 + (long)(*piVar19 + 3) * 0x10 + 0x138);
                    goto LAB_0727d8a0;
                  }
                  uVar18 = uVar18 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar18 != 0);
              }
              puVar15 = (undefined8 *)FUN_040b1e00(plVar23,*(long *)PTR_DAT_092c16f0,3);
LAB_0727d8a0:
              (*(code *)*puVar15)(plVar23,0,lVar17,puVar15[1]);
            }
          }
        }
        else {
          plVar23 = (long *)in_stack_000000c0[0xb];
          if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar16 = *plVar23;
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092c16c0) {
                puVar15 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_0727d1f4;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar15 = (undefined8 *)FUN_040b1e00(plVar23,*(long *)PTR_DAT_092c16c0,0);
LAB_0727d1f4:
          plVar23 = (long *)(*(code *)*puVar15)(plVar23,puVar15[1]);
          in_stack_00000020 = &stack0x000000a8;
          in_stack_00000018 = 0;
joined_r0x0727d210:
          in_stack_000000a8 = plVar23;
          if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar16 = *plVar23;
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
                puVar15 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_0727d260;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar15 = (undefined8 *)FUN_040b1e00(plVar23,*(long *)puVar3,0);
LAB_0727d260:
          uVar18 = (*(code *)*puVar15)(plVar23,puVar15[1]);
          plVar23 = in_stack_000000a8;
          if ((uVar18 & 1) != 0) {
            if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar16 = *in_stack_000000a8;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar8) {
                  puVar15 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_0727d2c4;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            puVar15 = (undefined8 *)FUN_040b1e00(in_stack_000000a8,*(long *)puVar8,0);
LAB_0727d2c4:
            lVar16 = (*(code *)*puVar15)(plVar23,puVar15[1]);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar18 = FUN_057bf848(lVar14,*(undefined8 *)(lVar16 + 0x10),*(undefined8 *)puVar5);
            plVar23 = in_stack_000000a8;
            if ((uVar18 & 1) != 0) {
              plVar23 = *(long **)(unaff_x19 + 0x58);
              if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar17 = *plVar23;
              uVar21 = *(undefined8 *)(lVar16 + 0x10);
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar18 != 0) {
                piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)puVar9) {
                    puVar15 = (undefined8 *)(lVar17 + (long)(*piVar19 + 3) * 0x10 + 0x138);
                    goto LAB_0727d34c;
                  }
                  uVar18 = uVar18 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar18 != 0);
              }
              puVar15 = (undefined8 *)FUN_040b1e00(plVar23,*(long *)puVar9,3);
LAB_0727d34c:
              (*(code *)*puVar15)(plVar23,0,uVar21,puVar15[1]);
              plVar23 = in_stack_000000a8;
            }
            goto joined_r0x0727d210;
          }
          if (in_stack_000000a8 != (long *)0x0) {
            lVar16 = *in_stack_000000a8;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092860c0) {
                  puVar15 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_0727d3d8;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            puVar15 = (undefined8 *)FUN_040b1e00(in_stack_000000a8,*(long *)PTR_DAT_092860c0,0);
LAB_0727d3d8:
            (*(code *)*puVar15)(plVar23,puVar15[1]);
          }
          puVar4 = PTR_DAT_092c16f0;
          plVar23 = (long *)plVar22[3];
          if (plVar23 != (long *)0x0) {
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar16 = *(long *)PTR_DAT_092c1458;
            if ((*(byte *)(*plVar23 + 0x130) < *(byte *)(lVar16 + 0x130)) ||
               (*(long *)(*(long *)(*plVar23 + 200) + (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) !=
                lVar16)) {
                    /* WARNING: Subroutine does not return */
              FUN_04077bb0(plVar23,lVar16);
            }
            uVar18 = FUN_057bf848(lVar14,plVar23,*(undefined8 *)puVar5);
            if ((uVar18 & 1) != 0) {
              plVar23 = *(long **)(unaff_x19 + 0x58);
              if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              plVar24 = (long *)plVar22[3];
              lVar16 = *(long *)puVar4;
              if (plVar24 != (long *)0x0) {
                lVar17 = *(long *)PTR_DAT_092c1458;
                if ((*(byte *)(*plVar24 + 0x130) < *(byte *)(lVar17 + 0x130)) ||
                   (*(long *)(*(long *)(*plVar24 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8 + -8)
                    != lVar17)) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077bb0(plVar24,lVar17);
                }
              }
              lVar17 = *plVar23;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar18 != 0) {
                piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == lVar16) {
                    puVar15 = (undefined8 *)(lVar17 + (long)(*piVar19 + 3) * 0x10 + 0x138);
                    goto LAB_0727d4e0;
                  }
                  uVar18 = uVar18 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar18 != 0);
              }
              puVar15 = (undefined8 *)FUN_040b1e00(plVar23,lVar16,3);
LAB_0727d4e0:
              (*(code *)*puVar15)(plVar23,0,plVar24,puVar15[1]);
            }
          }
          if (plVar22[9] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          plVar22 = *(long **)(plVar22[9] + 0x10);
          if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar16 = *plVar22;
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092c16d0) {
                puVar15 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_0727d558;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar15 = (undefined8 *)FUN_040b1e00(plVar22,*(long *)PTR_DAT_092c16d0,0);
LAB_0727d558:
          plVar22 = (long *)(*(code *)*puVar15)(plVar22,puVar15[1]);
          in_stack_00000088 = &stack0x000000a0;
          in_stack_00000080 = 0;
joined_r0x0727d574:
          in_stack_000000a0 = plVar22;
          if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar16 = *plVar22;
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
                puVar15 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_0727d5c4;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar15 = (undefined8 *)FUN_040b1e00(plVar22,*(long *)puVar3,0);
LAB_0727d5c4:
          uVar18 = (*(code *)*puVar15)(plVar22,puVar15[1]);
          plVar22 = in_stack_000000a0;
          if ((uVar18 & 1) != 0) {
            if (in_stack_000000a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar16 = *in_stack_000000a0;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar6) {
                  puVar15 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_0727d628;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            puVar15 = (undefined8 *)FUN_040b1e00(in_stack_000000a0,*(long *)puVar6,0);
LAB_0727d628:
            (*(code *)*puVar15)(&stack0x00000018,plVar22,puVar15[1]);
            plVar23 = in_stack_00000060;
            if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            plVar22 = in_stack_000000a0;
            if (plVar23 != (long *)0x0) {
              if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              bVar1 = *(byte *)(*(long *)PTR_DAT_092c1458 + 0x130);
              if ((*(byte *)(*plVar23 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_092c1458)) {
                    /* WARNING: Subroutine does not return */
                FUN_04077bb0(plVar23);
              }
              uVar18 = FUN_057bf848(lVar14,plVar23,*(undefined8 *)puVar5);
              plVar22 = in_stack_000000a0;
              if ((uVar18 & 1) != 0) {
                plVar22 = *(long **)(unaff_x19 + 0x58);
                if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                bVar1 = *(byte *)(*(long *)PTR_DAT_092c1458 + 0x130);
                if ((*(byte *)(*plVar23 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_092c1458)) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077bb0(plVar23);
                }
                lVar17 = *plVar22;
                lVar16 = *(long *)puVar4;
                uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar18 != 0) {
                  piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == lVar16) {
                      puVar15 = (undefined8 *)(lVar17 + (long)(*piVar19 + 3) * 0x10 + 0x138);
                      goto LAB_0727d748;
                    }
                    uVar18 = uVar18 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar18 != 0);
                }
                puVar15 = (undefined8 *)FUN_040b1e00(plVar22,lVar16,3);
LAB_0727d748:
                (*(code *)*puVar15)(plVar22,0,plVar23,puVar15[1]);
                plVar22 = in_stack_000000a0;
              }
            }
            goto joined_r0x0727d574;
          }
          if (in_stack_000000a0 != (long *)0x0) {
            lVar16 = *in_stack_000000a0;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092860c0) {
                  puVar15 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_0727d7d4;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            puVar15 = (undefined8 *)FUN_040b1e00(in_stack_000000a0,*(long *)PTR_DAT_092860c0,0);
LAB_0727d7d4:
            (*(code *)*puVar15)(plVar22,puVar15[1]);
          }
        }
      }
    }
    FUN_07161150(in_stack_00000098,*(undefined8 *)PTR_DAT_092c1678);
    if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077828(lVar16);
    }
    lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1648);
    FUN_06eeec70(lVar14,*(undefined8 *)PTR_DAT_092c1640);
    if (lVar13 != 0) {
      plVar22 = (long *)(lVar13 + 0x10);
      *plVar22 = lVar14;
      thunk_FUN_040ec700(plVar22,lVar14);
      plVar23 = *(long **)(unaff_x19 + 0x58);
      if (plVar23 != (long *)0x0) {
        iVar20 = 0;
        do {
          lVar14 = *plVar23;
          uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar7) {
                puVar15 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_0727da88;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar15 = (undefined8 *)FUN_040b1e00(plVar23,*(long *)puVar7,0);
LAB_0727da88:
          iVar12 = (*(code *)*puVar15)(plVar23,puVar15[1]);
          if (iVar12 <= iVar20) {
            lVar14 = *(long *)puVar10;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar14 = *(long *)puVar10;
            }
            uVar21 = **(undefined8 **)(lVar14 + 0xb8);
            lVar14 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
            FUN_07df6498(lVar14,uVar21,0);
            lVar16 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1710);
            FUN_05c26520(lVar16,*(undefined8 *)PTR_DAT_092c1708);
            puVar3 = PTR_DAT_092c1768;
            uVar21 = *(undefined8 *)(unaff_x19 + 0x58);
            lVar17 = *(long *)PTR_DAT_092c1768;
            if (*(int *)(lVar17 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar17 = *(long *)puVar3;
            }
            puVar15 = *(undefined8 **)(lVar17 + 0xb8);
            lVar25 = puVar15[1];
            if (lVar25 == 0) {
              if (*(int *)(lVar17 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                puVar15 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
              }
              uVar27 = *puVar15;
              lVar25 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1690);
              FUN_056893d4(lVar25,uVar27,*(undefined8 *)PTR_DAT_092c1748,0);
              plVar22 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 8);
              *plVar22 = lVar25;
              thunk_FUN_040ec700(plVar22,lVar25);
            }
            uVar18 = FUN_04f7671c(uVar21,lVar25,*(undefined8 *)PTR_DAT_092c1650);
            if ((uVar18 & 1) != 0) {
              uVar21 = FUN_05217a68(*(undefined8 *)PTR_DAT_092c14f8,*(undefined8 *)PTR_DAT_092c17a0,
                                    *(undefined8 *)PTR_DAT_092c1740);
              if (lVar16 == 0) break;
              lVar17 = *(long *)(lVar16 + 0x10);
              lVar25 = *(long *)PTR_DAT_092c16f8;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar17 == 0) break;
              uVar2 = *(uint *)(lVar16 + 0x18);
              if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar16 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar21;
                thunk_FUN_040ec700();
              }
              else {
                FUN_05c26d88(lVar16,uVar21,
                             *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
              }
            }
            plVar22 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,0xd);
            uVar21 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1770,0);
            uStack0000000000000028 = *(undefined4 *)(unaff_x19 + 0x10);
            in_stack_00000018 = *(undefined8 *)PTR_DAT_092c1718;
            in_stack_00000020 = (undefined8 *)0xffffffffffffffff;
            lVar17 = FUN_076b01b4(&stack0x00000018,0);
            if (lVar17 == 0) break;
            uVar27 = FUN_074eac78(lVar17,0);
            lVar17 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
            FUN_07df1964(lVar17,uVar21,uVar27,0);
            if (plVar22 == (long *)0x0) break;
            if ((lVar17 != 0) &&
               (lVar25 = thunk_FUN_040b4e00(lVar17,*(undefined8 *)(*plVar22 + 0x40)), lVar25 == 0))
            {
LAB_0727e420:
              uVar21 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
              FUN_040776f4(uVar21,0);
            }
            if ((int)plVar22[3] != 0) {
              plVar22[4] = lVar17;
              thunk_FUN_040ec700(plVar22 + 4,lVar17);
              lVar17 = *(long *)puVar10;
              if (*(int *)(lVar17 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar17 = *(long *)puVar10;
              }
              uVar21 = *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x20);
              lVar17 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
              FUN_07df1964(lVar17,uVar21,*(undefined8 *)PTR_DAT_0928e688,0);
              if ((lVar17 != 0) &&
                 (lVar25 = thunk_FUN_040b4e00(lVar17,*(undefined8 *)(*plVar22 + 0x40)), lVar25 == 0)
                 ) goto LAB_0727e420;
              if ((*(uint *)(plVar22 + 3) & 0xfffffffe) != 0) {
                plVar22[5] = lVar17;
                thunk_FUN_040ec700(plVar22 + 5,lVar17);
                lVar17 = *(long *)PTR_DAT_092c1768;
                if (*(int *)(lVar17 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar17 = *(long *)PTR_DAT_092c1768;
                }
                puVar15 = *(undefined8 **)(lVar17 + 0xb8);
                lVar25 = puVar15[2];
                if (lVar25 == 0) {
                  if (*(int *)(lVar17 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    puVar15 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
                  }
                  uVar21 = *puVar15;
                  lVar25 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1698);
                  FUN_0568af90(lVar25,uVar21,*(undefined8 *)PTR_DAT_092c1750,0);
                  plVar23 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 0x10);
                  *plVar23 = lVar25;
                  thunk_FUN_040ec700(plVar23,lVar25);
                }
                lVar16 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                   (lVar16,lVar25,*(undefined8 *)PTR_DAT_092c1668);
                if ((lVar16 != 0) &&
                   (lVar17 = thunk_FUN_040b4e00(lVar16,*(undefined8 *)(*plVar22 + 0x40)),
                   lVar17 == 0)) goto LAB_0727e420;
                if (2 < *(uint *)(plVar22 + 3)) {
                  plVar22[6] = lVar16;
                  uVar21 = thunk_FUN_040ec700(plVar22 + 6,lVar16);
                  lVar16 = FUN_07283670(uVar21,*(undefined8 *)PTR_DAT_0928e5a8,
                                        *(undefined8 *)(unaff_x19 + 0x18));
                  if ((lVar16 != 0) &&
                     (lVar17 = thunk_FUN_040b4e00(lVar16,*(undefined8 *)(*plVar22 + 0x40)),
                     lVar17 == 0)) goto LAB_0727e420;
                  if ((*(uint *)(plVar22 + 3) & 0xfffffffc) != 0) {
                    plVar22[7] = lVar16;
                    uVar21 = thunk_FUN_040ec700(plVar22 + 7,lVar16);
                    lVar16 = FUN_07283670(uVar21,*(undefined8 *)PTR_DAT_092c1778,
                                          *(undefined8 *)(unaff_x19 + 0x20));
                    if ((lVar16 != 0) &&
                       (lVar17 = thunk_FUN_040b4e00(lVar16,*(undefined8 *)(*plVar22 + 0x40)),
                       lVar17 == 0)) goto LAB_0727e420;
                    if (4 < *(uint *)(plVar22 + 3)) {
                      plVar22[8] = lVar16;
                      uVar21 = thunk_FUN_040ec700(plVar22 + 8,lVar16);
                      lVar16 = FUN_07283670(uVar21,*(undefined8 *)PTR_DAT_0928cfa8,
                                            *(undefined8 *)(unaff_x19 + 0x28));
                      if ((lVar16 != 0) &&
                         (lVar17 = thunk_FUN_040b4e00(lVar16,*(undefined8 *)(*plVar22 + 0x40)),
                         lVar17 == 0)) goto LAB_0727e420;
                      if (5 < *(uint *)(plVar22 + 3)) {
                        plVar22[9] = lVar16;
                        uVar21 = thunk_FUN_040ec700(plVar22 + 9,lVar16);
                        lVar16 = FUN_07283670(uVar21,*(undefined8 *)PTR_DAT_092c1788,
                                              *(undefined8 *)(unaff_x19 + 0x30));
                        if ((lVar16 != 0) &&
                           (lVar17 = thunk_FUN_040b4e00(lVar16,*(undefined8 *)(*plVar22 + 0x40)),
                           lVar17 == 0)) goto LAB_0727e420;
                        if (6 < *(uint *)(plVar22 + 3)) {
                          plVar22[10] = lVar16;
                          uVar21 = thunk_FUN_040ec700(plVar22 + 10,lVar16);
                          lVar16 = FUN_07283670(uVar21,*(undefined8 *)PTR_DAT_092c1790,
                                                *(undefined8 *)(unaff_x19 + 0x38));
                          if ((lVar16 != 0) &&
                             (lVar17 = thunk_FUN_040b4e00(lVar16,*(undefined8 *)(*plVar22 + 0x40)),
                             lVar17 == 0)) goto LAB_0727e420;
                          if ((*(uint *)(plVar22 + 3) & 0xfffffff8) != 0) {
                            plVar22[0xb] = lVar16;
                            uVar21 = thunk_FUN_040ec700(plVar22 + 0xb,lVar16);
                            lVar16 = FUN_07283670(uVar21,*(undefined8 *)PTR_DAT_092c1798,
                                                  *(undefined8 *)(unaff_x19 + 0x40));
                            if ((lVar16 != 0) &&
                               (lVar17 = thunk_FUN_040b4e00(lVar16,*(undefined8 *)(*plVar22 + 0x40))
                               , lVar17 == 0)) goto LAB_0727e420;
                            if (8 < *(uint *)(plVar22 + 3)) {
                              plVar22[0xc] = lVar16;
                              uVar21 = thunk_FUN_040ec700(plVar22 + 0xc,lVar16);
                              lVar16 = FUN_07283670(uVar21,*(undefined8 *)PTR_DAT_092a5d10,
                                                    *(undefined8 *)(unaff_x19 + 0x48));
                              if ((lVar16 != 0) &&
                                 (lVar17 = thunk_FUN_040b4e00(lVar16,*(undefined8 *)
                                                                      (*plVar22 + 0x40)),
                                 lVar17 == 0)) goto LAB_0727e420;
                              if (9 < *(uint *)(plVar22 + 3)) {
                                plVar22[0xd] = lVar16;
                                uVar21 = thunk_FUN_040ec700(plVar22 + 0xd,lVar16);
                                lVar16 = FUN_07283670(uVar21,*(undefined8 *)PTR_DAT_092c1780,
                                                      *(undefined8 *)(unaff_x19 + 0x50));
                                if ((lVar16 != 0) &&
                                   (lVar17 = thunk_FUN_040b4e00(lVar16,*(undefined8 *)
                                                                        (*plVar22 + 0x40)),
                                   lVar17 == 0)) goto LAB_0727e420;
                                if (10 < *(uint *)(plVar22 + 3)) {
                                  plVar22[0xe] = lVar16;
                                  thunk_FUN_040ec700(plVar22 + 0xe,lVar16);
                                  lVar16 = *(long *)puVar10;
                                  if (*(int *)(lVar16 + 0xe4) == 0) {
                                    thunk_FUN_040d65a8();
                                    lVar16 = *(long *)puVar10;
                                  }
                                  uVar27 = *(undefined8 *)(unaff_x19 + 0x58);
                                  uVar26 = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x10);
                                  uVar21 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a8);
                                  FUN_0568af90(uVar21,lVar13,*(undefined8 *)PTR_DAT_092c1758,0);
                                  uVar21 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                     (uVar27,uVar21,*(undefined8 *)PTR_DAT_092c1660)
                                  ;
                                  lVar16 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
                                  System_Xml_XmlReader__Close(lVar16,uVar26,uVar21,0);
                                  if ((lVar16 != 0) &&
                                     (lVar17 = thunk_FUN_040b4e00(lVar16,*(undefined8 *)
                                                                          (*plVar22 + 0x40)),
                                     lVar17 == 0)) goto LAB_0727e420;
                                  if (0xb < *(uint *)(plVar22 + 3)) {
                                    plVar22[0xf] = lVar16;
                                    thunk_FUN_040ec700(plVar22 + 0xf,lVar16);
                                    uVar27 = *(undefined8 *)(unaff_x19 + 0x60);
                                    uVar26 = *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 8)
                                    ;
                                    uVar21 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
                                    FUN_0568af90(uVar21,lVar13,*(undefined8 *)PTR_DAT_092c1760,0);
                                    uVar21 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                       (uVar27,uVar21,
                                                        *(undefined8 *)PTR_DAT_092c1658);
                                    lVar13 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
                                    System_Xml_XmlReader__Close(lVar13,uVar26,uVar21,0);
                                    if ((lVar13 != 0) &&
                                       (lVar16 = thunk_FUN_040b4e00(lVar13,*(undefined8 *)
                                                                            (*plVar22 + 0x40)),
                                       lVar16 == 0)) goto LAB_0727e420;
                                    if (0xc < *(uint *)(plVar22 + 3)) {
                                      plVar22[0x10] = lVar13;
                                      thunk_FUN_040ec700(plVar22 + 0x10,lVar13);
                                      if (lVar14 != 0) {
                                        thunk_FUN_07df3248(lVar14,plVar22,0);
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
          plVar23 = *(long **)(unaff_x19 + 0x58);
          if (plVar23 == (long *)0x0) break;
          lVar14 = *plVar23;
          uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092c16f0) {
                puVar15 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_0727daf8;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar15 = (undefined8 *)FUN_040b1e00(plVar23,*(long *)PTR_DAT_092c16f0,0);
LAB_0727daf8:
          lVar14 = (*(code *)*puVar15)(plVar23,iVar20,puVar15[1]);
          if (lVar14 == 0) break;
          *(int *)(lVar14 + 0x10) = iVar20 + 1;
          plVar23 = *(long **)(unaff_x19 + 0x58);
          if (plVar23 == (long *)0x0) break;
          lVar14 = *plVar23;
          lVar16 = *plVar22;
          uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092c16f0) {
                puVar15 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
                goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar15 = (undefined8 *)FUN_040b1e00(plVar23,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog:
          uVar21 = (*(code *)*puVar15)(plVar23,iVar20,puVar15[1]);
          plVar23 = *(long **)(unaff_x19 + 0x58);
          if (plVar23 == (long *)0x0) break;
          lVar14 = *plVar23;
          uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092c16f0) {
                puVar15 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
                goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar15 = (undefined8 *)FUN_040b1e00(plVar23,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer:
          lVar14 = (*(code *)*puVar15)(plVar23,iVar20,puVar15[1]);
          if ((lVar14 == 0) || (lVar16 == 0)) break;
          FUN_06eef620(lVar16,uVar21,*(undefined4 *)(lVar14 + 0x10),*(undefined8 *)PTR_DAT_092c1638)
          ;
          plVar23 = *(long **)(unaff_x19 + 0x58);
          iVar20 = iVar20 + 1;
          if (plVar23 == (long *)0x0) break;
        } while( true );
      }
    }
  }
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


