/*
FUNCTION_NAME: Fusion.Photon.Realtime.CustomTypesUnity$$SerializeQuaternion
ENTRY_POINT: 03429490
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03429b58) */
/* WARNING: Removing unreachable block (ram,0x03429b5c) */
/* WARNING: Removing unreachable block (ram,0x0342a194) */
/* WARNING: Removing unreachable block (ram,0x0342a130) */

undefined1 Fusion_Photon_Realtime_CustomTypesUnity__SerializeQuaternion(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 uVar18;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000040;
  int iStack000000000000004c;
  long in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000060;
  
  FUN_03188a78();
  FUN_03188a78(PTR_DAT_070c9cd8);
  FUN_03188a78(PTR_DAT_070c9ce0);
  FUN_03188a78(PTR_DAT_070c9ce8);
  FUN_03188a78(PTR_DAT_070c9cf0);
  FUN_03188a78(PTR_DAT_070c9cf8);
  FUN_03188a78(PTR_DAT_070c9d00);
  FUN_03188a78(PTR_DAT_070c31f0);
  FUN_03188a78(PTR_DAT_070c9c70);
  FUN_03188a78(PTR_DAT_070c9d08);
  FUN_03188a78(PTR_DAT_070c3ce0);
  FUN_03188a78(PTR_DAT_070c9d10);
  FUN_03188a78(PTR_DAT_070c9d18);
  FUN_03188a78(PTR_DAT_070c9d20);
  *(undefined1 *)(unaff_x20 + 0x490) = 1;
  puVar3 = PTR_DAT_070c2768;
  in_stack_00000050 = 0;
  in_stack_00000058 = (undefined8 *)0x0;
  in_stack_00000060 = 0;
  iStack000000000000004c = 0;
  in_stack_00000040 = 0;
  if (unaff_x19 == 0) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_070c2768;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar7 = *(long *)puVar3;
  }
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x11) == '\0') {
    return 0;
  }
  if (*(int *)(*(long *)PTR_DAT_070c2648 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  plVar8 = (long *)FUN_03428c90();
  puVar2 = PTR_DAT_070c2658;
  if (plVar8 != (long *)0x0) {
    lVar7 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_070c2658) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_034295f0;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)PTR_DAT_070c2658,2);
LAB_034295f0:
    uVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar14 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_070c2648 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      plVar8 = (long *)FUN_03428c90();
      uVar10 = FUN_057c02e8(*(undefined8 *)PTR_DAT_070c31f0,*(undefined8 *)PTR_DAT_070c9d10);
      if (plVar8 == (long *)0x0) goto LAB_0342a198;
      lVar7 = *plVar8;
      uVar17 = *(undefined8 *)(unaff_x19 + 0x58);
      uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
      uVar18 = *(undefined8 *)PTR_DAT_070c9c70;
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar16 + 3) * 0x10 + 0x138);
            goto LAB_034296b0;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar2,3);
LAB_034296b0:
      (*(code *)*puVar9)(plVar8,uVar18,uVar10,uVar17,puVar9[1]);
    }
    lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070c9d00);
    FUN_042e4268(lVar7,*(undefined8 *)PTR_DAT_070c9ce8);
    lVar11 = FUN_032c25e4();
    if (lVar11 == 0) {
      return 0;
    }
    FUN_042e54fc(&stack0x00000020,lVar11,*(undefined8 *)PTR_DAT_070c9cd8);
    puVar5 = PTR_DAT_070c9ce0;
    puVar4 = PTR_DAT_070c9cc0;
    in_stack_00000060 = in_stack_00000030;
    in_stack_00000058 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000020;
    in_stack_00000020 = 0;
    in_stack_00000028 = &stack0x00000050;
    while (uVar14 = FUN_054518b4(&stack0x00000050,*(undefined8 *)puVar4), uVar10 = in_stack_00000060
          , lVar11 = in_stack_00000020, (uVar14 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar17 = FUN_032bf834(*(long *)(unaff_x19 + 0x60),0);
      if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8(uVar17,uVar17);
      }
      lVar11 = FUN_033cdc14(uVar10,uVar17,*(undefined8 *)(*(long *)(unaff_x19 + 0x60) + 0x98),0);
      if (lVar11 != 0) {
        lVar12 = *(long *)puVar3;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar12 = *(long *)puVar3;
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x30);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        FUN_06045760(lVar12,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        lVar12 = FUN_0342a224(lVar11,&stack0x0000004c);
        uVar14 = FUN_057bebf8(*(undefined8 *)(lVar11 + 0x18),0);
        if (((uVar14 & 1) == 0) && (uVar14 = FUN_033cda3c(lVar11,0), (uVar14 & 1) != 0)) {
          if (lVar12 == 0) {
            lVar12 = *(long *)puVar3;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              lVar12 = *(long *)puVar3;
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
            if (lVar12 == 0) {
LAB_03429e38:
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar13 = *(long *)(lVar12 + 0x10);
            lVar15 = *(long *)PTR_DAT_070c9cd0;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_03429e38;
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
              *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = lVar11;
            }
            else {
              FUN_042e4a64(lVar12,lVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            if (lVar7 == 0) {
LAB_03429e40:
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar12 = *(long *)(lVar7 + 0x10);
            lVar13 = *(long *)PTR_DAT_070c9cd0;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_03429e40;
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = lVar11;
            }
            else {
              FUN_042e4a64(lVar7,lVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            if (*(int *)(*(long *)PTR_DAT_070c2648 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            plVar8 = (long *)FUN_03428c90();
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar11 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar14 != 0) {
              piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                  goto LAB_03429d08;
                }
                uVar14 = uVar14 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar14 != 0);
            }
            puVar9 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar2,2);
LAB_03429d08:
            uVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            if ((uVar14 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_070c2648 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              plVar8 = (long *)FUN_03428c90();
              uVar10 = FUN_057c032c(*(undefined8 *)PTR_DAT_070c9d08,*(undefined8 *)PTR_DAT_070c9d10)
              ;
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              lVar11 = *plVar8;
              uVar17 = *(undefined8 *)(unaff_x19 + 0x58);
              uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
              uVar18 = *(undefined8 *)PTR_DAT_070c9c70;
              if (uVar14 != 0) {
                piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                    puVar9 = (undefined8 *)(lVar11 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                    goto Fusion_Photon_Realtime_Extensions__ToStringFull;
                  }
                  uVar14 = uVar14 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar14 != 0);
              }
              puVar9 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar2,3);
Fusion_Photon_Realtime_Extensions__ToStringFull:
              (*(code *)*puVar9)(plVar8,uVar18,uVar10,uVar17,puVar9[1]);
            }
          }
          else {
            lVar13 = *(long *)puVar3;
            *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar12 + 0x20);
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              lVar13 = *(long *)puVar3;
            }
            lVar12 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            FUN_042e47f8(lVar12,iStack000000000000004c,lVar11,*(undefined8 *)PTR_DAT_070c9cf8);
            if (lVar7 == 0) {
LAB_03429e20:
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar12 = *(long *)(lVar7 + 0x10);
            lVar13 = *(long *)PTR_DAT_070c9cd0;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_03429e20;
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = lVar11;
            }
            else {
              FUN_042e4a64(lVar7,lVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            if (*(int *)(*(long *)PTR_DAT_070c2648 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            plVar8 = (long *)FUN_03428c90();
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar11 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar14 != 0) {
              piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                  goto LAB_03429b70;
                }
                uVar14 = uVar14 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar14 != 0);
            }
            puVar9 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar2,2);
LAB_03429b70:
            uVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            if ((uVar14 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_070c2648 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              plVar8 = (long *)FUN_03428c90();
              uVar10 = FUN_057c032c(*(undefined8 *)PTR_DAT_070c9d20,*(undefined8 *)PTR_DAT_070c9d10)
              ;
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              lVar11 = *plVar8;
              uVar17 = *(undefined8 *)(unaff_x19 + 0x58);
              uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
              uVar18 = *(undefined8 *)PTR_DAT_070c9c70;
              if (uVar14 != 0) {
                piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                    puVar9 = (undefined8 *)(lVar11 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                    goto LAB_03429dc8;
                  }
                  uVar14 = uVar14 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar14 != 0);
              }
              puVar9 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar2,3);
LAB_03429dc8:
              (*(code *)*puVar9)(plVar8,uVar18,uVar10,uVar17,puVar9[1]);
            }
          }
        }
        else {
          iVar6 = iStack000000000000004c;
          if (iStack000000000000004c != -1) {
            if (*(int *)(*(long *)PTR_DAT_070c2648 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            plVar8 = (long *)FUN_03428c90();
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar11 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar14 != 0) {
              piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                  goto LAB_03429904;
                }
                uVar14 = uVar14 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar14 != 0);
            }
            puVar9 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar2,2);
LAB_03429904:
            uVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            if ((uVar14 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_070c2648 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              plVar8 = (long *)FUN_03428c90();
              lVar11 = *(long *)puVar3;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_031e5338();
                lVar11 = *(long *)puVar3;
              }
              lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              FUN_042e47a4(lVar11,iVar6,*(undefined8 *)PTR_DAT_070c9cf0);
              uVar10 = FUN_057c032c(*(undefined8 *)PTR_DAT_070c9d18,*(undefined8 *)PTR_DAT_070c9d10)
              ;
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              lVar11 = *plVar8;
              uVar17 = *(undefined8 *)(unaff_x19 + 0x58);
              uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
              uVar18 = *(undefined8 *)PTR_DAT_070c9c70;
              if (uVar14 != 0) {
                piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                    puVar9 = (undefined8 *)(lVar11 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                    goto LAB_03429ad8;
                  }
                  uVar14 = uVar14 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar14 != 0);
              }
              puVar9 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar2,3);
LAB_03429ad8:
              (*(code *)*puVar9)(plVar8,uVar18,uVar10,uVar17,puVar9[1]);
            }
            lVar11 = *(long *)puVar3;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              lVar11 = *(long *)puVar3;
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            FUN_042e61ac(lVar11,iVar6,*(undefined8 *)puVar5);
          }
        }
        lVar11 = *(long *)puVar3;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar11 = *(long *)puVar3;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x30);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        FUN_060461c8(lVar11,0);
      }
    }
    FUN_054518b0(in_stack_00000028,*(undefined8 *)PTR_DAT_070c9cb8);
    if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd0(lVar11);
    }
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar7 = *(long *)puVar3;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x40);
    if (lVar7 != 0) {
      FUN_03475134(lVar7,0);
      return 1;
    }
  }
LAB_0342a198:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


