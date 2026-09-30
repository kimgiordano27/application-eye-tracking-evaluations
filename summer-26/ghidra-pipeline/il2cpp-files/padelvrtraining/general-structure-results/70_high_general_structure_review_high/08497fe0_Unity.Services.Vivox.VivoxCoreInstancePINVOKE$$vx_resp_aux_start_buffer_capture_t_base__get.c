/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_aux_start_buffer_capture_t_base__get
ENTRY_POINT: 08497fe0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x084989d8) */
/* WARNING: Removing unreachable block (ram,0x08498b18) */

long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_aux_start_buffer_capture_t_base__get
               (void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar17;
  long unaff_x21;
  long lVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  FUN_03d2d2b0(PTR_DAT_0927ef50);
  FUN_03d2d2b0(PTR_DAT_0927eeb0);
  FUN_03d2d2b0(PTR_DAT_0927ef58);
  FUN_03d2d2b0(PTR_DAT_091a7670);
  FUN_03d2d2b0(PTR_DAT_091a7740);
  FUN_03d2d2b0(PTR_DAT_0927eed0);
  FUN_03d2d2b0(PTR_DAT_0927ef60);
  *(undefined1 *)(unaff_x19 + 0xce) = 1;
  puVar3 = PTR_DAT_0927ef60;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  if (unaff_x21 != 0) {
    uVar8 = *(undefined4 *)(unaff_x21 + 0x70);
    lVar9 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927ef60);
    FUN_08498f84(lVar9,uVar8);
    if (unaff_x20 == 0) {
      if (lVar9 == 0) goto LAB_08498d74;
      *(undefined1 *)(lVar9 + 0x10) = 1;
    }
    else {
      iVar19 = *(int *)(unaff_x21 + 0x70);
      iVar2 = *(int *)(unaff_x20 + 0x70);
      if (iVar19 != iVar2) {
        lVar1 = unaff_x21;
        if (iVar19 < iVar2) {
          lVar1 = unaff_x20;
        }
        uVar8 = *(undefined4 *)(lVar1 + 0x70);
        if (iVar2 <= iVar19) {
          unaff_x21 = unaff_x20;
        }
        lVar9 = thunk_FUN_03d2ef40(*(undefined8 *)puVar3);
        FUN_08498f84(lVar9,uVar8);
        if ((*(long *)(unaff_x21 + 0x30) != 0) &&
           (uVar10 = FUN_06fd15d4(*(long *)(unaff_x21 + 0x30),*(undefined8 *)(lVar1 + 0x30),0),
           (uVar10 & 1) == 0)) {
          if (lVar9 == 0) goto LAB_08498d74;
          FUN_08498ff8(lVar9,*(undefined8 *)(lVar1 + 0x30));
        }
        if ((*(char *)(unaff_x21 + 0x40) != '\0') != (*(char *)(lVar1 + 0x40) != '\0')) {
          if (lVar9 == 0) goto LAB_08498d74;
          FUN_08499060(lVar9,*(char *)(lVar1 + 0x40) != '\0');
        }
        if ((*(char *)(unaff_x21 + 0x41) != '\0') != (*(char *)(lVar1 + 0x41) != '\0')) {
          if (lVar9 == 0) goto LAB_08498d74;
          FUN_084990c4(lVar9,*(char *)(lVar1 + 0x41) != '\0');
        }
        if (*(int *)(unaff_x21 + 0x3c) != *(int *)(lVar1 + 0x3c)) {
          if (lVar9 == 0) goto LAB_08498d74;
          FUN_08499128(lVar9);
        }
        if (*(int *)(unaff_x21 + 0x38) != *(int *)(lVar1 + 0x38)) {
          if (lVar9 == 0) goto LAB_08498d74;
          FUN_08499184(lVar9);
        }
        if ((*(long *)(unaff_x21 + 0x58) != 0) &&
           (uVar10 = FUN_06fd15d4(*(long *)(unaff_x21 + 0x58),*(undefined8 *)(lVar1 + 0x58),0),
           (uVar10 & 1) == 0)) {
          if (lVar9 == 0) goto LAB_08498d74;
          FUN_084991e0(lVar9,*(undefined8 *)(lVar1 + 0x58));
        }
        in_stack_00000088 = *(undefined8 *)(unaff_x21 + 0x68);
        uVar17 = *(undefined8 *)(lVar1 + 0x68);
        if (*(int *)(*(long *)PTR_DAT_091a1650 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar10 = FUN_07158014(&stack0x00000088,uVar17,0);
        if ((uVar10 & 1) == 0) {
          if (lVar9 == 0) goto LAB_08498d74;
          FUN_08499248(lVar9,*(undefined8 *)(lVar1 + 0x68));
        }
        puVar3 = PTR_DAT_0927ef08;
        if (*(long *)(lVar1 + 0x50) == 0) {
          if (lVar9 == 0) goto LAB_08498d74;
          FUN_084992a4(lVar9);
        }
        else {
          lVar11 = FUN_06b6dabc(*(long *)(lVar1 + 0x50),*(undefined8 *)PTR_DAT_0927ef08);
          puVar5 = PTR_DAT_0927ef48;
          if (lVar11 == 0) goto LAB_08498d74;
          FUN_057e0f18(&stack0x00000018,lVar11,*(undefined8 *)PTR_DAT_0927ef48);
          puVar7 = PTR_DAT_0927ef28;
          puVar6 = PTR_DAT_0927eef8;
          puVar4 = PTR_DAT_091a7560;
          in_stack_00000078 = in_stack_00000020;
          in_stack_00000070 = in_stack_00000018;
          in_stack_00000080 = in_stack_00000028;
LAB_0849823c:
          uVar10 = FUN_06e6d394(&stack0x00000070,*(undefined8 *)puVar7);
          uVar17 = in_stack_00000080;
          if ((uVar10 & 1) != 0) {
            if ((*(long *)(unaff_x21 + 0x50) != 0) &&
               (uVar10 = FUN_06b6dfd0(*(long *)(unaff_x21 + 0x50),in_stack_00000080,
                                      *(undefined8 *)puVar6), (uVar10 & 1) != 0))
            goto code_r0x08498268;
            goto LAB_08498280;
          }
          FUN_06e6d390(&stack0x00000070,*(undefined8 *)PTR_DAT_0927ef18);
          if (*(long *)(unaff_x21 + 0x50) != 0) {
            lVar11 = FUN_06b6dabc(*(long *)(unaff_x21 + 0x50),*(undefined8 *)puVar3);
            if (lVar11 == 0) goto LAB_08498d74;
            FUN_057e0f18(&stack0x00000018,lVar11,*(undefined8 *)puVar5);
            in_stack_00000078 = in_stack_00000020;
            in_stack_00000070 = in_stack_00000018;
            in_stack_00000080 = in_stack_00000028;
            while (uVar10 = FUN_06e6d394(&stack0x00000070,*(undefined8 *)puVar7),
                  uVar17 = in_stack_00000080, (uVar10 & 1) != 0) {
              if (*(long *)(lVar1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d548();
              }
              uVar10 = FUN_06b6dfd0(*(long *)(lVar1 + 0x50),in_stack_00000080,*(undefined8 *)puVar6)
              ;
              if ((uVar10 & 1) == 0) {
LAB_084983e4:
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03d2d548();
                }
                Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_get_stats_t_current_bars_get
                          (lVar9,uVar17);
              }
              else {
                if (*(long *)(lVar1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03d2d548();
                }
                lVar11 = FUN_06b6dd5c(*(long *)(lVar1 + 0x50),uVar17,*(undefined8 *)puVar4);
                if (lVar11 == 0) goto LAB_084983e4;
                if (*(long *)(unaff_x21 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03d2d548();
                }
                lVar11 = FUN_06b6dd5c(*(long *)(unaff_x21 + 0x50),uVar17,*(undefined8 *)puVar4);
                if (lVar11 == 0) {
                  if (*(long *)(lVar1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03d2d548();
                  }
                  uVar12 = FUN_06b6dd5c(*(long *)(lVar1 + 0x50),uVar17,*(undefined8 *)puVar4);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03d2d548();
                  }
                  FUN_08499340(lVar9,uVar17,uVar12);
                }
                else {
                  if (*(long *)(unaff_x21 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03d2d548();
                  }
                  uVar12 = FUN_06b6dd5c(*(long *)(unaff_x21 + 0x50),uVar17,*(undefined8 *)puVar4);
                  if (*(long *)(lVar1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03d2d548();
                  }
                  uVar13 = FUN_06b6dd5c(*(long *)(lVar1 + 0x50),uVar17,*(undefined8 *)puVar4);
                  uVar10 = FUN_08499688(uVar12,uVar13);
                  if ((uVar10 & 1) == 0) {
                    if (*(long *)(lVar1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03d2d548();
                    }
                    uVar12 = FUN_06b6dd5c(*(long *)(lVar1 + 0x50),uVar17,*(undefined8 *)puVar4);
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03d2d548();
                    }
                    FUN_084996ec(lVar9,uVar17,uVar12);
                  }
                }
              }
            }
            FUN_06e6d390(&stack0x00000070,*(undefined8 *)PTR_DAT_0927ef18);
          }
        }
        lVar11 = *(long *)(lVar1 + 0x48);
        if ((lVar11 != 0) && (*(int *)(lVar11 + 0x18) != 0)) {
          lVar18 = *(long *)(unaff_x21 + 0x48);
          if (lVar18 == 0) {
            lVar14 = 0;
LAB_08498ccc:
            puVar3 = PTR_DAT_091a7740;
            iVar19 = 0;
            do {
              if (*(int *)(lVar11 + 0x18) <= iVar19) {
                return lVar9;
              }
              if ((lVar14 == 0) || (*(int *)(lVar14 + 0x18) <= iVar19)) {
LAB_08498d48:
                uVar17 = FUN_05a39464(lVar11,iVar19,*(undefined8 *)puVar3);
                if (lVar9 == 0) break;
                FUN_0849a128(lVar9,iVar19,uVar17);
              }
              else {
                lVar11 = FUN_05a39464(lVar14,iVar19,*(undefined8 *)puVar3);
                if ((lVar11 == 0) || (*(long *)(lVar1 + 0x48) == 0)) break;
                lVar18 = *(long *)(lVar11 + 0x10);
                lVar11 = FUN_05a39464(*(long *)(lVar1 + 0x48),iVar19,*(undefined8 *)puVar3);
                if ((lVar11 == 0) || (lVar18 == 0)) break;
                uVar10 = FUN_06fd15d4(lVar18,*(undefined8 *)(lVar11 + 0x10),0);
                if ((uVar10 & 1) == 0) {
                  lVar11 = *(long *)(lVar1 + 0x48);
                  if (lVar11 != 0) goto LAB_08498d48;
                  break;
                }
              }
              lVar11 = *(long *)(lVar1 + 0x48);
              iVar19 = iVar19 + 1;
            } while (lVar11 != 0);
          }
          else {
            lVar14 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927eed0);
            FUN_05a39028(lVar14,lVar18,*(undefined8 *)PTR_DAT_0927ef58);
            puVar3 = PTR_DAT_091a60d8;
            if (*(long *)(unaff_x21 + 0x48) != 0) {
              uVar8 = *(undefined4 *)(*(long *)(unaff_x21 + 0x48) + 0x18);
              lVar11 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a60d8);
              puVar4 = PTR_DAT_0922e8a8;
              System_Collections_Generic_Dictionary<ulong,_OVRVirtualKeyboard_VirtualKeyboardTextureInfo>__System_Collections_ICollection_get_IsSynchronized
                        (lVar11,uVar8,*(undefined8 *)PTR_DAT_0922e8a8);
              puVar5 = PTR_DAT_091a7990;
              puVar20 = (undefined8 *)PTR_DAT_091a7740;
              lVar18 = *(long *)(unaff_x21 + 0x48);
              if (lVar18 != 0) {
                iVar19 = 0;
                while (iVar19 < *(int *)(lVar18 + 0x18)) {
                  lVar18 = FUN_05a39464(lVar18,iVar19,*puVar20);
                  if ((lVar18 == 0) || (lVar11 == 0)) goto LAB_08498d74;
                  FUN_06b636c4(lVar11,*(undefined8 *)(lVar18 + 0x10),iVar19,*(undefined8 *)puVar5);
                  lVar18 = *(long *)(unaff_x21 + 0x48);
                  iVar19 = iVar19 + 1;
                  if (lVar18 == 0) goto LAB_08498d74;
                }
                if (*(long *)(lVar1 + 0x48) != 0) {
                  uVar8 = *(undefined4 *)(*(long *)(lVar1 + 0x48) + 0x18);
                  lVar18 = thunk_FUN_03d2ef40(*(undefined8 *)puVar3);
                  System_Collections_Generic_Dictionary<ulong,_OVRVirtualKeyboard_VirtualKeyboardTextureInfo>__System_Collections_ICollection_get_IsSynchronized
                            (lVar18,uVar8,*(undefined8 *)puVar4);
                  lVar11 = *(long *)(lVar1 + 0x48);
                  if (lVar11 != 0) {
                    iVar19 = 0;
                    goto LAB_08498584;
                  }
                }
              }
            }
          }
          goto LAB_08498d74;
        }
        if ((*(long *)(unaff_x21 + 0x48) != 0) &&
           (iVar19 = *(int *)(*(long *)(unaff_x21 + 0x48) + 0x18), -1 < iVar19 + -1)) {
          if (lVar9 == 0) goto LAB_08498d74;
          do {
            iVar19 = iVar19 + -1;
            FUN_08499874(lVar9,iVar19);
          } while (0 < iVar19);
        }
      }
    }
    return lVar9;
  }
  goto LAB_08498d74;
code_r0x08498268:
  if (*(long *)(unaff_x21 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar11 = FUN_06b6dd5c(*(long *)(unaff_x21 + 0x50),uVar17,*(undefined8 *)puVar4);
  if (lVar11 == 0) {
LAB_08498280:
    if (*(long *)(lVar1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar12 = FUN_06b6dd5c(*(long *)(lVar1 + 0x50),uVar17,*(undefined8 *)puVar4);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_08499340(lVar9,uVar17,uVar12);
  }
  goto LAB_0849823c;
LAB_08498584:
  puVar4 = PTR_DAT_0927ef30;
  puVar3 = PTR_DAT_091a3f60;
  if (*(int *)(lVar11 + 0x18) <= iVar19) {
    lVar16 = *(long *)(unaff_x21 + 0x48);
    if (lVar16 != 0) {
      iVar19 = *(int *)(lVar16 + 0x18) + -1;
      if (iVar19 < 0) goto LAB_08498ccc;
      goto LAB_084985f0;
    }
    goto LAB_08498d74;
  }
  lVar11 = FUN_05a39464(lVar11,iVar19,*puVar20);
  if ((lVar11 == 0) || (lVar18 == 0)) goto LAB_08498d74;
  FUN_06b636c4(lVar18,*(undefined8 *)(lVar11 + 0x10),iVar19,*(undefined8 *)puVar5);
  lVar11 = *(long *)(lVar1 + 0x48);
  iVar19 = iVar19 + 1;
  if (lVar11 == 0) goto LAB_08498d74;
  goto LAB_08498584;
code_r0x0849875c:
  if (*(long *)(lVar11 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar15 = FUN_06b6dd5c(*(long *)(lVar11 + 0x28),uVar17,*(undefined8 *)puVar3);
  if (lVar15 == 0) {
LAB_08498774:
    if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar12 = FUN_06b6dd5c(*(long *)(lVar16 + 0x28),uVar17,*(undefined8 *)puVar3);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_08499bbc(lVar9,uVar8,uVar17,uVar12);
  }
  goto LAB_08498728;
  while( true ) {
    iVar19 = iVar19 + -1;
    if (iVar19 < 0) {
      lVar11 = *(long *)(lVar1 + 0x48);
      if (lVar11 == 0) {
        return lVar9;
      }
      goto LAB_08498ccc;
    }
    lVar16 = *(long *)(unaff_x21 + 0x48);
    puVar20 = (undefined8 *)PTR_DAT_091a7740;
    if (lVar16 == 0) break;
LAB_084985f0:
    lVar11 = FUN_05a39464(lVar16,iVar19,*puVar20);
    if ((lVar11 == 0) || (lVar18 == 0)) break;
    uVar10 = FUN_06b638b8(lVar18,*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)PTR_DAT_091a60b8);
    if ((uVar10 & 1) == 0) {
      if ((lVar9 == 0) || (FUN_08499874(lVar9,iVar19), lVar14 == 0)) break;
      FUN_05a3af6c(lVar14,iVar19,*(undefined8 *)PTR_DAT_0927eeb0);
    }
    else {
      uVar8 = FUN_06b63644(lVar18,*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)PTR_DAT_091a8bc8);
      if (*(long *)(lVar1 + 0x48) == 0) break;
      lVar16 = FUN_05a39464(*(long *)(lVar1 + 0x48),uVar8,*puVar20);
      in_stack_00000088 = *(undefined8 *)(lVar11 + 0x40);
      if (lVar16 == 0) break;
      uVar17 = *(undefined8 *)(lVar16 + 0x40);
      if (*(int *)(*(long *)PTR_DAT_091a1650 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar10 = FUN_07158014(&stack0x00000088,uVar17,0);
      if ((uVar10 & 1) == 0) {
        if (lVar9 == 0) break;
        FUN_084999ac(lVar9,uVar8,*(undefined8 *)(lVar16 + 0x40));
      }
      if ((*(long *)(lVar11 + 0x20) == 0) ||
         (uVar10 = FUN_06fd15d4(*(long *)(lVar11 + 0x20),*(undefined8 *)(lVar16 + 0x20),0),
         (uVar10 & 1) == 0)) {
        if (lVar9 == 0) break;
        FUN_08499a24(lVar9,uVar8,*(undefined8 *)(lVar16 + 0x20));
      }
      lVar15 = *(long *)(lVar16 + 0x28);
      if (*(long *)(lVar11 + 0x28) == 0) {
        if (lVar15 != 0) {
          lVar11 = FUN_06b6dabc(lVar15,*(undefined8 *)PTR_DAT_0927ef10);
          if (lVar11 == 0) break;
          FUN_057e0f18(&stack0x00000018,lVar11,*(undefined8 *)PTR_DAT_0927ef50);
          in_stack_00000058 = in_stack_00000020;
          in_stack_00000050 = in_stack_00000018;
          in_stack_00000060 = in_stack_00000028;
          while (uVar10 = FUN_06e6d394(&stack0x00000050,*(undefined8 *)puVar4),
                uVar17 = in_stack_00000060, (uVar10 & 1) != 0) {
            if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            uVar12 = FUN_06b6dd5c(*(long *)(lVar16 + 0x28),in_stack_00000060,*(undefined8 *)puVar3);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            FUN_08499bbc(lVar9,uVar8,uVar17,uVar12);
          }
          FUN_06e6d390(&stack0x00000050,*(undefined8 *)PTR_DAT_0927ef20);
        }
      }
      else if (lVar15 == 0) {
        if (lVar9 == 0) break;
        FUN_08499aa8(lVar9,uVar8);
      }
      else {
        lVar15 = FUN_06b6dabc(lVar15,*(undefined8 *)PTR_DAT_0927ef10);
        if (lVar15 == 0) break;
        FUN_057e0f18(&stack0x00000018,lVar15,*(undefined8 *)PTR_DAT_0927ef50);
        in_stack_00000058 = in_stack_00000020;
        in_stack_00000050 = in_stack_00000018;
        in_stack_00000060 = in_stack_00000028;
LAB_08498728:
        uVar10 = FUN_06e6d394(&stack0x00000050,*(undefined8 *)puVar4);
        uVar17 = in_stack_00000060;
        if ((uVar10 & 1) != 0) {
          if (*(long *)(lVar11 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          uVar10 = FUN_06b6dfd0(*(long *)(lVar11 + 0x28),in_stack_00000060,
                                *(undefined8 *)PTR_DAT_0927ef00);
          if ((uVar10 & 1) != 0) goto code_r0x0849875c;
          goto LAB_08498774;
        }
        FUN_06e6d390(&stack0x00000050,*(undefined8 *)PTR_DAT_0927ef20);
        if ((*(long *)(lVar11 + 0x28) == 0) ||
           (lVar15 = FUN_06b6dabc(*(long *)(lVar11 + 0x28),*(undefined8 *)PTR_DAT_0927ef10),
           lVar15 == 0)) break;
        FUN_057e0f18(&stack0x00000018,lVar15,*(undefined8 *)PTR_DAT_0927ef50);
        in_stack_00000038 = in_stack_00000020;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000040 = in_stack_00000028;
        if (*(long *)(lVar11 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar15 = FUN_06b6dabc(*(long *)(lVar11 + 0x28),*(undefined8 *)PTR_DAT_0927ef10);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        FUN_057e0f18(&stack0x00000018,lVar15,*(undefined8 *)PTR_DAT_0927ef50);
        in_stack_00000058 = in_stack_00000020;
        in_stack_00000050 = in_stack_00000018;
        in_stack_00000060 = in_stack_00000028;
        while (uVar10 = FUN_06e6d394(&stack0x00000050,*(undefined8 *)puVar4),
              uVar17 = in_stack_00000060, (uVar10 & 1) != 0) {
          if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          uVar10 = FUN_06b6dfd0(*(long *)(lVar16 + 0x28),in_stack_00000060,
                                *(undefined8 *)PTR_DAT_0927ef00);
          if ((uVar10 & 1) == 0) {
LAB_08498950:
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            FUN_08499d5c(lVar9,uVar8,uVar17);
          }
          else {
            if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            lVar15 = FUN_06b6dd5c(*(long *)(lVar16 + 0x28),uVar17,*(undefined8 *)puVar3);
            if (lVar15 == 0) goto LAB_08498950;
            if (*(long *)(lVar11 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            lVar15 = FUN_06b6dd5c(*(long *)(lVar11 + 0x28),uVar17,*(undefined8 *)puVar3);
            if (lVar15 == 0) {
              if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d548();
              }
              uVar12 = FUN_06b6dd5c(*(long *)(lVar16 + 0x28),uVar17,*(undefined8 *)puVar3);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d548();
              }
              FUN_08499bbc(lVar9,uVar8,uVar17,uVar12);
            }
            else {
              if (*(long *)(lVar11 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d548();
              }
              uVar12 = FUN_06b6dd5c(*(long *)(lVar11 + 0x28),uVar17,*(undefined8 *)puVar3);
              if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d548();
              }
              uVar13 = FUN_06b6dd5c(*(long *)(lVar16 + 0x28),uVar17,*(undefined8 *)puVar3);
              uVar10 = FUN_08499f34(uVar12,uVar13);
              if ((uVar10 & 1) == 0) {
                if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03d2d548();
                }
                uVar12 = FUN_06b6dd5c(*(long *)(lVar16 + 0x28),uVar17,*(undefined8 *)puVar3);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03d2d548();
                }
                FUN_08499f88(lVar9,uVar8,uVar17,uVar12);
              }
            }
          }
        }
        FUN_06e6d390(&stack0x00000050,*(undefined8 *)PTR_DAT_0927ef20);
        FUN_06e6d390(&stack0x00000030,*(undefined8 *)PTR_DAT_0927ef20);
      }
    }
  }
LAB_08498d74:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


