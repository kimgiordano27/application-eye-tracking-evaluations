/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_resp_aux_start_buffer_capture_t
ENTRY_POINT: 084980c4
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

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_resp_aux_start_buffer_capture_t(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  long unaff_x28;
  long unaff_x29;
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
  
  if (unaff_x19 != 0) {
    FUN_08498ff8();
    if ((*(char *)(unaff_x29 + 0x40) != '\0') != (*(char *)(unaff_x28 + 0x40) != '\0')) {
      if (unaff_x19 == 0) goto LAB_08498d74;
      FUN_08499060();
    }
    if ((*(char *)(unaff_x29 + 0x41) != '\0') != (*(char *)(unaff_x28 + 0x41) != '\0')) {
      if (unaff_x19 == 0) goto LAB_08498d74;
      FUN_084990c4();
    }
    if (*(int *)(unaff_x29 + 0x3c) != *(int *)(unaff_x28 + 0x3c)) {
      if (unaff_x19 == 0) goto LAB_08498d74;
      FUN_08499128();
    }
    if (*(int *)(unaff_x29 + 0x38) != *(int *)(unaff_x28 + 0x38)) {
      if (unaff_x19 == 0) goto LAB_08498d74;
      FUN_08499184();
    }
    if ((*(long *)(unaff_x29 + 0x58) != 0) &&
       (uVar7 = FUN_06fd15d4(*(long *)(unaff_x29 + 0x58),*(undefined8 *)(unaff_x28 + 0x58),0),
       (uVar7 & 1) == 0)) {
      if (unaff_x19 == 0) goto LAB_08498d74;
      FUN_084991e0();
    }
    in_stack_00000088 = *(undefined8 *)(unaff_x29 + 0x68);
    uVar14 = *(undefined8 *)(unaff_x28 + 0x68);
    if (*(int *)(*(long *)PTR_DAT_091a1650 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar7 = FUN_07158014(&stack0x00000088,uVar14,0);
    if ((uVar7 & 1) == 0) {
      if (unaff_x19 == 0) goto LAB_08498d74;
      FUN_08499248();
    }
    puVar1 = PTR_DAT_0927ef08;
    if (*(long *)(unaff_x28 + 0x50) == 0) {
      if (unaff_x19 == 0) goto LAB_08498d74;
      FUN_084992a4();
    }
    else {
      lVar8 = FUN_06b6dabc(*(long *)(unaff_x28 + 0x50),*(undefined8 *)PTR_DAT_0927ef08);
      puVar3 = PTR_DAT_0927ef48;
      if (lVar8 == 0) goto LAB_08498d74;
      FUN_057e0f18(&stack0x00000018,lVar8,*(undefined8 *)PTR_DAT_0927ef48);
      puVar5 = PTR_DAT_0927ef28;
      puVar4 = PTR_DAT_0927eef8;
      puVar2 = PTR_DAT_091a7560;
      in_stack_00000078 = in_stack_00000020;
      in_stack_00000070 = in_stack_00000018;
      in_stack_00000080 = in_stack_00000028;
LAB_0849823c:
      uVar7 = FUN_06e6d394(&stack0x00000070,*(undefined8 *)puVar5);
      uVar14 = in_stack_00000080;
      if ((uVar7 & 1) != 0) {
        if ((*(long *)(unaff_x29 + 0x50) != 0) &&
           (uVar7 = FUN_06b6dfd0(*(long *)(unaff_x29 + 0x50),in_stack_00000080,*(undefined8 *)puVar4
                                ), (uVar7 & 1) != 0)) goto code_r0x08498268;
        goto LAB_08498280;
      }
      FUN_06e6d390(&stack0x00000070,*(undefined8 *)PTR_DAT_0927ef18);
      if (*(long *)(unaff_x29 + 0x50) != 0) {
        lVar8 = FUN_06b6dabc(*(long *)(unaff_x29 + 0x50),*(undefined8 *)puVar1);
        if (lVar8 == 0) goto LAB_08498d74;
        FUN_057e0f18(&stack0x00000018,lVar8,*(undefined8 *)puVar3);
        in_stack_00000078 = in_stack_00000020;
        in_stack_00000070 = in_stack_00000018;
        in_stack_00000080 = in_stack_00000028;
        while (uVar7 = FUN_06e6d394(&stack0x00000070,*(undefined8 *)puVar5),
              uVar14 = in_stack_00000080, (uVar7 & 1) != 0) {
          if (*(long *)(unaff_x28 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          uVar7 = FUN_06b6dfd0(*(long *)(unaff_x28 + 0x50),in_stack_00000080,*(undefined8 *)puVar4);
          if ((uVar7 & 1) == 0) {
LAB_084983e4:
            if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_get_stats_t_current_bars_get
                      ();
          }
          else {
            if (*(long *)(unaff_x28 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            lVar8 = FUN_06b6dd5c(*(long *)(unaff_x28 + 0x50),uVar14,*(undefined8 *)puVar2);
            if (lVar8 == 0) goto LAB_084983e4;
            if (*(long *)(unaff_x29 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            lVar8 = FUN_06b6dd5c(*(long *)(unaff_x29 + 0x50),uVar14,*(undefined8 *)puVar2);
            if (lVar8 == 0) {
              if (*(long *)(unaff_x28 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d548();
              }
              FUN_06b6dd5c(*(long *)(unaff_x28 + 0x50),uVar14,*(undefined8 *)puVar2);
              if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d548();
              }
              FUN_08499340();
            }
            else {
              if (*(long *)(unaff_x29 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d548();
              }
              uVar9 = FUN_06b6dd5c(*(long *)(unaff_x29 + 0x50),uVar14,*(undefined8 *)puVar2);
              if (*(long *)(unaff_x28 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d548();
              }
              uVar10 = FUN_06b6dd5c(*(long *)(unaff_x28 + 0x50),uVar14,*(undefined8 *)puVar2);
              uVar7 = FUN_08499688(uVar9,uVar10);
              if ((uVar7 & 1) == 0) {
                if (*(long *)(unaff_x28 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03d2d548();
                }
                FUN_06b6dd5c(*(long *)(unaff_x28 + 0x50),uVar14,*(undefined8 *)puVar2);
                if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03d2d548();
                }
                FUN_084996ec();
              }
            }
          }
        }
        FUN_06e6d390(&stack0x00000070,*(undefined8 *)PTR_DAT_0927ef18);
      }
    }
    lVar8 = *(long *)(unaff_x28 + 0x48);
    if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) == 0)) {
      if ((*(long *)(unaff_x29 + 0x48) != 0) &&
         (iVar16 = *(int *)(*(long *)(unaff_x29 + 0x48) + 0x18), -1 < iVar16 + -1)) {
        if (unaff_x19 == 0) goto LAB_08498d74;
        do {
          iVar16 = iVar16 + -1;
          FUN_08499874();
        } while (0 < iVar16);
      }
      return;
    }
    lVar15 = *(long *)(unaff_x29 + 0x48);
    if (lVar15 == 0) {
      lVar11 = 0;
LAB_08498ccc:
      puVar1 = PTR_DAT_091a7740;
      iVar16 = 0;
      do {
        if (*(int *)(lVar8 + 0x18) <= iVar16) {
          return;
        }
        if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) <= iVar16)) {
LAB_08498d48:
          FUN_05a39464(lVar8,iVar16,*(undefined8 *)puVar1);
          if (unaff_x19 == 0) break;
          FUN_0849a128();
        }
        else {
          lVar8 = FUN_05a39464(lVar11,iVar16,*(undefined8 *)puVar1);
          if ((lVar8 == 0) || (*(long *)(unaff_x28 + 0x48) == 0)) break;
          lVar15 = *(long *)(lVar8 + 0x10);
          lVar8 = FUN_05a39464(*(long *)(unaff_x28 + 0x48),iVar16,*(undefined8 *)puVar1);
          if ((lVar8 == 0) || (lVar15 == 0)) break;
          uVar7 = FUN_06fd15d4(lVar15,*(undefined8 *)(lVar8 + 0x10),0);
          if ((uVar7 & 1) == 0) {
            lVar8 = *(long *)(unaff_x28 + 0x48);
            if (lVar8 != 0) goto LAB_08498d48;
            break;
          }
        }
        lVar8 = *(long *)(unaff_x28 + 0x48);
        iVar16 = iVar16 + 1;
      } while (lVar8 != 0);
    }
    else {
      lVar11 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927eed0);
      FUN_05a39028(lVar11,lVar15,*(undefined8 *)PTR_DAT_0927ef58);
      puVar1 = PTR_DAT_091a60d8;
      if (*(long *)(unaff_x29 + 0x48) != 0) {
        uVar6 = *(undefined4 *)(*(long *)(unaff_x29 + 0x48) + 0x18);
        lVar8 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a60d8);
        puVar2 = PTR_DAT_0922e8a8;
        System_Collections_Generic_Dictionary<ulong,_OVRVirtualKeyboard_VirtualKeyboardTextureInfo>__System_Collections_ICollection_get_IsSynchronized
                  (lVar8,uVar6,*(undefined8 *)PTR_DAT_0922e8a8);
        puVar3 = PTR_DAT_091a7990;
        puVar17 = (undefined8 *)PTR_DAT_091a7740;
        lVar15 = *(long *)(unaff_x29 + 0x48);
        if (lVar15 != 0) {
          iVar16 = 0;
          while (iVar16 < *(int *)(lVar15 + 0x18)) {
            lVar15 = FUN_05a39464(lVar15,iVar16,*puVar17);
            if ((lVar15 == 0) || (lVar8 == 0)) goto LAB_08498d74;
            FUN_06b636c4(lVar8,*(undefined8 *)(lVar15 + 0x10),iVar16,*(undefined8 *)puVar3);
            lVar15 = *(long *)(unaff_x29 + 0x48);
            iVar16 = iVar16 + 1;
            if (lVar15 == 0) goto LAB_08498d74;
          }
          if (*(long *)(unaff_x28 + 0x48) != 0) {
            uVar6 = *(undefined4 *)(*(long *)(unaff_x28 + 0x48) + 0x18);
            lVar15 = thunk_FUN_03d2ef40(*(undefined8 *)puVar1);
            System_Collections_Generic_Dictionary<ulong,_OVRVirtualKeyboard_VirtualKeyboardTextureInfo>__System_Collections_ICollection_get_IsSynchronized
                      (lVar15,uVar6,*(undefined8 *)puVar2);
            lVar8 = *(long *)(unaff_x28 + 0x48);
            if (lVar8 != 0) {
              iVar16 = 0;
              goto LAB_08498584;
            }
          }
        }
      }
    }
  }
  goto LAB_08498d74;
code_r0x08498268:
  if (*(long *)(unaff_x29 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar8 = FUN_06b6dd5c(*(long *)(unaff_x29 + 0x50),uVar14,*(undefined8 *)puVar2);
  if (lVar8 == 0) {
LAB_08498280:
    if (*(long *)(unaff_x28 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_06b6dd5c(*(long *)(unaff_x28 + 0x50),uVar14,*(undefined8 *)puVar2);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_08499340();
  }
  goto LAB_0849823c;
LAB_08498584:
  puVar2 = PTR_DAT_0927ef30;
  puVar1 = PTR_DAT_091a3f60;
  if (*(int *)(lVar8 + 0x18) <= iVar16) {
    lVar13 = *(long *)(unaff_x29 + 0x48);
    if (lVar13 != 0) {
      iVar16 = *(int *)(lVar13 + 0x18) + -1;
      if (iVar16 < 0) goto LAB_08498ccc;
      goto LAB_084985f0;
    }
    goto LAB_08498d74;
  }
  lVar8 = FUN_05a39464(lVar8,iVar16,*puVar17);
  if ((lVar8 == 0) || (lVar15 == 0)) goto LAB_08498d74;
  FUN_06b636c4(lVar15,*(undefined8 *)(lVar8 + 0x10),iVar16,*(undefined8 *)puVar3);
  lVar8 = *(long *)(unaff_x28 + 0x48);
  iVar16 = iVar16 + 1;
  if (lVar8 == 0) goto LAB_08498d74;
  goto LAB_08498584;
code_r0x0849875c:
  if (*(long *)(lVar8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar12 = FUN_06b6dd5c(*(long *)(lVar8 + 0x28),uVar14,*(undefined8 *)puVar1);
  if (lVar12 == 0) {
LAB_08498774:
    if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_06b6dd5c(*(long *)(lVar13 + 0x28),uVar14,*(undefined8 *)puVar1);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_08499bbc();
  }
  goto LAB_08498728;
  while( true ) {
    iVar16 = iVar16 + -1;
    if (iVar16 < 0) {
      lVar8 = *(long *)(unaff_x28 + 0x48);
      if (lVar8 == 0) {
        return;
      }
      goto LAB_08498ccc;
    }
    lVar13 = *(long *)(unaff_x29 + 0x48);
    puVar17 = (undefined8 *)PTR_DAT_091a7740;
    if (lVar13 == 0) break;
LAB_084985f0:
    lVar8 = FUN_05a39464(lVar13,iVar16,*puVar17);
    if ((lVar8 == 0) || (lVar15 == 0)) break;
    uVar7 = FUN_06b638b8(lVar15,*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)PTR_DAT_091a60b8);
    if ((uVar7 & 1) == 0) {
      if ((unaff_x19 == 0) || (FUN_08499874(), lVar11 == 0)) break;
      FUN_05a3af6c(lVar11,iVar16,*(undefined8 *)PTR_DAT_0927eeb0);
    }
    else {
      uVar6 = FUN_06b63644(lVar15,*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)PTR_DAT_091a8bc8);
      if (*(long *)(unaff_x28 + 0x48) == 0) break;
      lVar13 = FUN_05a39464(*(long *)(unaff_x28 + 0x48),uVar6,*puVar17);
      in_stack_00000088 = *(undefined8 *)(lVar8 + 0x40);
      if (lVar13 == 0) break;
      uVar14 = *(undefined8 *)(lVar13 + 0x40);
      if (*(int *)(*(long *)PTR_DAT_091a1650 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar7 = FUN_07158014(&stack0x00000088,uVar14,0);
      if ((uVar7 & 1) == 0) {
        if (unaff_x19 == 0) break;
        FUN_084999ac();
      }
      if ((*(long *)(lVar8 + 0x20) == 0) ||
         (uVar7 = FUN_06fd15d4(*(long *)(lVar8 + 0x20),*(undefined8 *)(lVar13 + 0x20),0),
         (uVar7 & 1) == 0)) {
        if (unaff_x19 == 0) break;
        FUN_08499a24();
      }
      lVar12 = *(long *)(lVar13 + 0x28);
      if (*(long *)(lVar8 + 0x28) == 0) {
        if (lVar12 != 0) {
          lVar8 = FUN_06b6dabc(lVar12,*(undefined8 *)PTR_DAT_0927ef10);
          if (lVar8 == 0) break;
          FUN_057e0f18(&stack0x00000018,lVar8,*(undefined8 *)PTR_DAT_0927ef50);
          in_stack_00000058 = in_stack_00000020;
          in_stack_00000050 = in_stack_00000018;
          in_stack_00000060 = in_stack_00000028;
          while (uVar7 = FUN_06e6d394(&stack0x00000050,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
            if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            FUN_06b6dd5c(*(long *)(lVar13 + 0x28),in_stack_00000060,*(undefined8 *)puVar1);
            if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            FUN_08499bbc();
          }
          FUN_06e6d390(&stack0x00000050,*(undefined8 *)PTR_DAT_0927ef20);
        }
      }
      else if (lVar12 == 0) {
        if (unaff_x19 == 0) break;
        FUN_08499aa8();
      }
      else {
        lVar12 = FUN_06b6dabc(lVar12,*(undefined8 *)PTR_DAT_0927ef10);
        if (lVar12 == 0) break;
        FUN_057e0f18(&stack0x00000018,lVar12,*(undefined8 *)PTR_DAT_0927ef50);
        in_stack_00000058 = in_stack_00000020;
        in_stack_00000050 = in_stack_00000018;
        in_stack_00000060 = in_stack_00000028;
LAB_08498728:
        uVar7 = FUN_06e6d394(&stack0x00000050,*(undefined8 *)puVar2);
        uVar14 = in_stack_00000060;
        if ((uVar7 & 1) != 0) {
          if (*(long *)(lVar8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          uVar7 = FUN_06b6dfd0(*(long *)(lVar8 + 0x28),in_stack_00000060,
                               *(undefined8 *)PTR_DAT_0927ef00);
          if ((uVar7 & 1) != 0) goto code_r0x0849875c;
          goto LAB_08498774;
        }
        FUN_06e6d390(&stack0x00000050,*(undefined8 *)PTR_DAT_0927ef20);
        if ((*(long *)(lVar8 + 0x28) == 0) ||
           (lVar12 = FUN_06b6dabc(*(long *)(lVar8 + 0x28),*(undefined8 *)PTR_DAT_0927ef10),
           lVar12 == 0)) break;
        FUN_057e0f18(&stack0x00000018,lVar12,*(undefined8 *)PTR_DAT_0927ef50);
        in_stack_00000038 = in_stack_00000020;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000040 = in_stack_00000028;
        if (*(long *)(lVar8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar12 = FUN_06b6dabc(*(long *)(lVar8 + 0x28),*(undefined8 *)PTR_DAT_0927ef10);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        FUN_057e0f18(&stack0x00000018,lVar12,*(undefined8 *)PTR_DAT_0927ef50);
        in_stack_00000058 = in_stack_00000020;
        in_stack_00000050 = in_stack_00000018;
        in_stack_00000060 = in_stack_00000028;
        while (uVar7 = FUN_06e6d394(&stack0x00000050,*(undefined8 *)puVar2),
              uVar14 = in_stack_00000060, (uVar7 & 1) != 0) {
          if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          uVar7 = FUN_06b6dfd0(*(long *)(lVar13 + 0x28),in_stack_00000060,
                               *(undefined8 *)PTR_DAT_0927ef00);
          if ((uVar7 & 1) == 0) {
LAB_08498950:
            if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            FUN_08499d5c();
          }
          else {
            if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            lVar12 = FUN_06b6dd5c(*(long *)(lVar13 + 0x28),uVar14,*(undefined8 *)puVar1);
            if (lVar12 == 0) goto LAB_08498950;
            if (*(long *)(lVar8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            lVar12 = FUN_06b6dd5c(*(long *)(lVar8 + 0x28),uVar14,*(undefined8 *)puVar1);
            if (lVar12 == 0) {
              if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d548();
              }
              FUN_06b6dd5c(*(long *)(lVar13 + 0x28),uVar14,*(undefined8 *)puVar1);
              if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d548();
              }
              FUN_08499bbc();
            }
            else {
              if (*(long *)(lVar8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d548();
              }
              uVar9 = FUN_06b6dd5c(*(long *)(lVar8 + 0x28),uVar14,*(undefined8 *)puVar1);
              if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d548();
              }
              uVar10 = FUN_06b6dd5c(*(long *)(lVar13 + 0x28),uVar14,*(undefined8 *)puVar1);
              uVar7 = FUN_08499f34(uVar9,uVar10);
              if ((uVar7 & 1) == 0) {
                if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03d2d548();
                }
                FUN_06b6dd5c(*(long *)(lVar13 + 0x28),uVar14,*(undefined8 *)puVar1);
                if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03d2d548();
                }
                FUN_08499f88();
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


