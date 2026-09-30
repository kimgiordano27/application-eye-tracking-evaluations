/*
FUNCTION_NAME: Fusion.Photon.Realtime.CustomTypesUnity$$DeserializeQuaternion
ENTRY_POINT: 034296c4
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

undefined4 Fusion_Photon_Realtime_CustomTypesUnity__DeserializeQuaternion(code *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar17;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  (*param_1)();
  lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)PTR_DAT_070c9d00);
  FUN_042e4268(lVar5,*(undefined8 *)PTR_DAT_070c9ce8);
  lVar6 = FUN_032c25e4();
  if (lVar6 == 0) {
    uVar14 = 0;
  }
  else {
    FUN_042e54fc(&stack0x00000020,lVar6,*(undefined8 *)PTR_DAT_070c9cd8);
    puVar3 = PTR_DAT_070c9ce0;
    puVar2 = PTR_DAT_070c9cc0;
    in_stack_00000060 = in_stack_00000030;
    in_stack_00000058 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000020;
    in_stack_00000020 = 0;
    in_stack_00000028 = &stack0x00000050;
    while (uVar7 = FUN_054518b4(&stack0x00000050,*(undefined8 *)puVar2), uVar13 = in_stack_00000060,
          lVar6 = in_stack_00000020, (uVar7 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar8 = FUN_032bf834(*(long *)(unaff_x19 + 0x60),0);
      if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8(uVar8,uVar8);
      }
      lVar6 = FUN_033cdc14(uVar13,uVar8,*(undefined8 *)(*(long *)(unaff_x19 + 0x60) + 0x98),0);
      if (lVar6 != 0) {
        lVar9 = *unaff_x20;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar9 = *unaff_x20;
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        FUN_06045760(lVar9,0);
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        lVar9 = FUN_0342a224(lVar6,(long)&stack0x00000048 + 4);
        uVar7 = FUN_057bebf8(*(undefined8 *)(lVar6 + 0x18),0);
        if (((uVar7 & 1) == 0) && (uVar7 = FUN_033cda3c(lVar6,0), (uVar7 & 1) != 0)) {
          if (lVar9 == 0) {
            lVar9 = *unaff_x20;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              lVar9 = *unaff_x20;
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
            if (lVar9 == 0) {
LAB_03429e38:
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar10 = *(long *)(lVar9 + 0x10);
            lVar15 = *(long *)PTR_DAT_070c9cd0;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_03429e38;
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
            }
            else {
              FUN_042e4a64(lVar9,lVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            if (lVar5 == 0) {
LAB_03429e40:
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar9 = *(long *)(lVar5 + 0x10);
            lVar10 = *(long *)PTR_DAT_070c9cd0;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_03429e40;
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
            }
            else {
              FUN_042e4a64(lVar5,lVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            if (*(int *)(*(long *)PTR_DAT_070c2648 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            plVar11 = (long *)FUN_03428c90();
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar6 = *plVar11;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *unaff_x21) {
                  puVar12 = (undefined8 *)(lVar6 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                  goto LAB_03429d08;
                }
                uVar7 = uVar7 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar7 != 0);
            }
            puVar12 = (undefined8 *)FUN_031c0d08(plVar11,*unaff_x21,2);
LAB_03429d08:
            uVar7 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if ((uVar7 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_070c2648 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              plVar11 = (long *)FUN_03428c90();
              uVar13 = FUN_057c032c(*(undefined8 *)PTR_DAT_070c9d08,*(undefined8 *)PTR_DAT_070c9d10)
              ;
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              lVar6 = *plVar11;
              uVar8 = *(undefined8 *)(unaff_x19 + 0x58);
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              uVar17 = *(undefined8 *)PTR_DAT_070c9c70;
              if (uVar7 != 0) {
                piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *unaff_x21) {
                    puVar12 = (undefined8 *)(lVar6 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                    goto Fusion_Photon_Realtime_Extensions__ToStringFull;
                  }
                  uVar7 = uVar7 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar7 != 0);
              }
              puVar12 = (undefined8 *)FUN_031c0d08(plVar11,*unaff_x21,3);
Fusion_Photon_Realtime_Extensions__ToStringFull:
              (*(code *)*puVar12)(plVar11,uVar17,uVar13,uVar8,puVar12[1]);
            }
          }
          else {
            lVar10 = *unaff_x20;
            *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              lVar10 = *unaff_x20;
            }
            lVar9 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            FUN_042e47f8(lVar9,in_stack_00000048._4_4_,lVar6,*(undefined8 *)PTR_DAT_070c9cf8);
            if (lVar5 == 0) {
LAB_03429e20:
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar9 = *(long *)(lVar5 + 0x10);
            lVar10 = *(long *)PTR_DAT_070c9cd0;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_03429e20;
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
            }
            else {
              FUN_042e4a64(lVar5,lVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            if (*(int *)(*(long *)PTR_DAT_070c2648 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            plVar11 = (long *)FUN_03428c90();
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar6 = *plVar11;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *unaff_x21) {
                  puVar12 = (undefined8 *)(lVar6 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                  goto LAB_03429b70;
                }
                uVar7 = uVar7 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar7 != 0);
            }
            puVar12 = (undefined8 *)FUN_031c0d08(plVar11,*unaff_x21,2);
LAB_03429b70:
            uVar7 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if ((uVar7 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_070c2648 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              plVar11 = (long *)FUN_03428c90();
              uVar13 = FUN_057c032c(*(undefined8 *)PTR_DAT_070c9d20,*(undefined8 *)PTR_DAT_070c9d10)
              ;
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              lVar6 = *plVar11;
              uVar8 = *(undefined8 *)(unaff_x19 + 0x58);
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              uVar17 = *(undefined8 *)PTR_DAT_070c9c70;
              if (uVar7 != 0) {
                piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *unaff_x21) {
                    puVar12 = (undefined8 *)(lVar6 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                    goto LAB_03429dc8;
                  }
                  uVar7 = uVar7 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar7 != 0);
              }
              puVar12 = (undefined8 *)FUN_031c0d08(plVar11,*unaff_x21,3);
LAB_03429dc8:
              (*(code *)*puVar12)(plVar11,uVar17,uVar13,uVar8,puVar12[1]);
            }
          }
        }
        else {
          iVar4 = in_stack_00000048._4_4_;
          if (in_stack_00000048._4_4_ != -1) {
            if (*(int *)(*(long *)PTR_DAT_070c2648 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            plVar11 = (long *)FUN_03428c90();
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar6 = *plVar11;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *unaff_x21) {
                  puVar12 = (undefined8 *)(lVar6 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                  goto LAB_03429904;
                }
                uVar7 = uVar7 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar7 != 0);
            }
            puVar12 = (undefined8 *)FUN_031c0d08(plVar11,*unaff_x21,2);
LAB_03429904:
            uVar7 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if ((uVar7 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_070c2648 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              plVar11 = (long *)FUN_03428c90();
              lVar6 = *unaff_x20;
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_031e5338();
                lVar6 = *unaff_x20;
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              FUN_042e47a4(lVar6,iVar4,*(undefined8 *)PTR_DAT_070c9cf0);
              uVar13 = FUN_057c032c(*(undefined8 *)PTR_DAT_070c9d18,*(undefined8 *)PTR_DAT_070c9d10)
              ;
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              lVar6 = *plVar11;
              uVar8 = *(undefined8 *)(unaff_x19 + 0x58);
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              uVar17 = *(undefined8 *)PTR_DAT_070c9c70;
              if (uVar7 != 0) {
                piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *unaff_x21) {
                    puVar12 = (undefined8 *)(lVar6 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                    goto LAB_03429ad8;
                  }
                  uVar7 = uVar7 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar7 != 0);
              }
              puVar12 = (undefined8 *)FUN_031c0d08(plVar11,*unaff_x21,3);
LAB_03429ad8:
              (*(code *)*puVar12)(plVar11,uVar17,uVar13,uVar8,puVar12[1]);
            }
            lVar6 = *unaff_x20;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              lVar6 = *unaff_x20;
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            FUN_042e61ac(lVar6,iVar4,*(undefined8 *)puVar3);
          }
        }
        lVar6 = *unaff_x20;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar6 = *unaff_x20;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        FUN_060461c8(lVar6,0);
      }
    }
    FUN_054518b0(in_stack_00000028,*(undefined8 *)PTR_DAT_070c9cb8);
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd0(lVar6);
    }
    lVar5 = *unaff_x20;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *unaff_x20;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_03475134(lVar5,0);
    uVar14 = 1;
  }
  return uVar14;
}


