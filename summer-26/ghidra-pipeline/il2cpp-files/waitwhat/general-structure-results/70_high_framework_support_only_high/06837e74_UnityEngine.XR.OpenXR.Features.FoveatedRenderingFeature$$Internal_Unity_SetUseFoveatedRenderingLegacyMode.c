/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.FoveatedRenderingFeature$$Internal_Unity_SetUseFoveatedRenderingLegacyMode
ENTRY_POINT: 06837e74
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;ray_interaction;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;strong_foveation_hits_4;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_XR_OpenXR_Features_FoveatedRenderingFeature__Internal_Unity_SetUseFoveatedRenderingLegacyMode
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 in_w8;
  long lVar20;
  long unaff_x19;
  long unaff_x20;
  long lVar21;
  long unaff_x24;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  uint in_stack_00000030;
  
  *(undefined1 *)(unaff_x20 + 0xc12) = in_w8;
  if (unaff_x19 != 0) {
    iVar8 = *(int *)(unaff_x19 + 0x18);
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (0 < iVar8) {
      FUN_0595236c(*(undefined8 *)(unaff_x19 + 0x10),0,iVar8,0);
    }
  }
  if ((unaff_x24 != 0) && (lVar20 = *(long *)(unaff_x24 + 0x30), lVar20 != 0)) {
    iVar8 = *(int *)(lVar20 + 0x18);
    *(undefined4 *)(lVar20 + 0x18) = 0;
    *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
    if (0 < iVar8) {
      FUN_0595236c(*(undefined8 *)(lVar20 + 0x10),0,iVar8,0);
    }
    puVar2 = 
    Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecT409K1Holder_TypeInfo;
    if (*(long *)(unaff_x24 + 0x28) != 0) {
      uVar14 = thunk_FUN_069dc13c(*(long *)(unaff_x24 + 0x28),0);
      in_stack_00000020 = *(undefined8 *)puVar2;
      in_stack_00000028 = 0xffffffffffffffff;
      in_stack_00000030 = 1;
      uVar15 = FUN_05965738(&stack0x00000020,0);
      uVar16 = FUN_06838cf8(uVar14,uVar15);
      lVar21 = *(long *)(unaff_x24 + 0x28);
      lVar20 = lVar21;
      if ((uVar16 & 1) == 0) {
        if (lVar21 != 0) {
          iVar8 = 0;
          lVar20 = 0;
          do {
            iVar7 = FUN_069e8e08(lVar21,0);
            if (iVar7 <= iVar8) goto LAB_06837fcc;
            if (((*(long *)(unaff_x24 + 0x28) == 0) ||
                (lVar17 = FUN_069e983c(*(long *)(unaff_x24 + 0x28),iVar8,0), lVar17 == 0)) ||
               (lVar21 = FUN_069d3b50(lVar17,0), lVar21 == 0)) break;
            lVar21 = thunk_FUN_069dc13c(lVar21,0);
            in_stack_00000020 = *(undefined8 *)puVar2;
            in_stack_00000030 = 1;
            in_stack_00000028 = 0xffffffffffffffff;
            uVar14 = FUN_05965738(&stack0x00000020,0);
            if (lVar21 == 0) break;
            uVar16 = FUN_057bd30c(lVar21,uVar14,0);
            lVar21 = *(long *)(unaff_x24 + 0x28);
            iVar8 = iVar8 + 1;
            if ((uVar16 & 1) == 0) {
              lVar17 = lVar20;
            }
            lVar20 = lVar17;
          } while (lVar21 != 0);
        }
      }
      else {
LAB_06837fcc:
        if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar16 = FUN_069d8404(lVar20,0,0);
        if ((uVar16 & 1) == 0) {
          FUN_06838d4c(1,lVar20,&stack0x00000038);
          if (lVar20 == 0) goto LAB_06837fc4;
          iVar8 = FUN_069e8e08(lVar20,0);
          if (iVar8 < 1) {
            lVar21 = 0;
          }
          else {
            iVar8 = 0;
            lVar17 = 0;
            do {
              lVar18 = FUN_069e983c(lVar20,iVar8,0);
              if (lVar18 == 0) goto LAB_06837fc4;
              lVar21 = thunk_FUN_069dc13c(lVar18,0);
              in_stack_00000020 = *(undefined8 *)puVar2;
              in_stack_00000030 = 2;
              in_stack_00000028 = 0xffffffffffffffff;
              uVar14 = FUN_05965738(&stack0x00000020,0);
              if (lVar21 == 0) goto LAB_06837fc4;
              uVar16 = FUN_057bd30c(lVar21,uVar14,0);
              lVar21 = lVar18;
              if ((uVar16 & 1) == 0) {
                iVar7 = 0;
                do {
                  uVar9 = FUN_06832384(iVar7);
                  uVar14 = thunk_FUN_069dc13c(lVar18,0);
                  in_stack_00000020 = *(undefined8 *)puVar2;
                  in_stack_00000028 = 0xffffffffffffffff;
                  in_stack_00000030 = uVar9;
                  uVar15 = FUN_05965738(&stack0x00000020,0);
                  uVar16 = FUN_06838cf8(uVar14,uVar15);
                  if ((uVar16 & 1) != 0) {
                    FUN_06838d4c(uVar9,lVar18,&stack0x00000038);
                    uVar10 = FUN_068323e8(iVar7);
                    lVar21 = lVar18;
                    if (uVar9 < uVar10) {
                      do {
                        in_stack_00000020 = *(undefined8 *)puVar2;
                        uVar9 = uVar9 + 1;
                        in_stack_00000028 = 0xffffffffffffffff;
                        in_stack_00000030 = uVar9;
                        uVar14 = FUN_05965738(&stack0x00000020,0);
                        iVar11 = FUN_069e8e08(lVar21,0);
                        lVar19 = lVar21;
                        if (0 < iVar11) {
                          if (lVar21 == 0) goto LAB_06837fc4;
                          iVar11 = 0;
                          do {
                            lVar19 = FUN_069e983c(lVar21,iVar11,0);
                            if (lVar19 == 0) goto LAB_06837fc4;
                            uVar15 = thunk_FUN_069dc13c(lVar19,0);
                            uVar16 = FUN_06838cf8(uVar15,uVar14);
                            if ((uVar16 & 1) != 0) break;
                            iVar11 = iVar11 + 1;
                            iVar12 = FUN_069e8e08(lVar21,0);
                            lVar19 = lVar21;
                          } while (iVar11 < iVar12);
                        }
                        uVar15 = thunk_FUN_069dc13c(lVar19,0);
                        uVar16 = FUN_06838cf8(uVar15,uVar14);
                        if ((uVar16 & 1) == 0) {
                          if (unaff_x19 != 0) {
                            lVar21 = *(long *)(unaff_x19 + 0x10);
                            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                            if (lVar21 == 0) goto LAB_06837fc4;
                            uVar1 = *(uint *)(unaff_x19 + 0x18);
                            if (uVar1 < *(uint *)(lVar21 + 0x18)) {
                              *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
                              *(undefined8 *)(lVar21 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
                            }
                            else {
                              FUN_042e4a64();
                            }
                          }
                        }
                        else {
                          FUN_06838d4c(uVar9,lVar19,&stack0x00000038);
                        }
                        lVar21 = lVar19;
                      } while (uVar9 != uVar10);
                    }
                  }
                  iVar7 = iVar7 + 1;
                  lVar21 = lVar17;
                } while (iVar7 != 5);
              }
              iVar8 = iVar8 + 1;
              iVar7 = FUN_069e8e08(lVar20,0);
              lVar17 = lVar21;
            } while (iVar8 < iVar7);
          }
          puVar6 = DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass1_0_TypeInfo;
          puVar5 = DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass10_0_TypeInfo;
          puVar4 = DG_Tweening_DOTweenModuleAudio_<>c__DisplayClass2_0_TypeInfo;
          puVar3 = DG_Tweening_DOTweenModuleAudio_<>c__DisplayClass1_0_TypeInfo;
          iVar8 = 0;
          do {
            lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)puVar6);
            FUN_05971910(lVar20,0);
            uVar13 = FUN_06832384(iVar8);
            if ((lVar20 == 0) || (*(undefined4 *)(lVar20 + 0x10) = uVar13, unaff_x24 == 0))
            goto LAB_06837fc4;
            uVar15 = *(undefined8 *)(unaff_x24 + 0x30);
            uVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)puVar4);
            FUN_03dfa7c0(uVar14,lVar20,*(undefined8 *)puVar5,0);
            uVar16 = FUN_03a6b204(uVar15,uVar14,*(undefined8 *)puVar3);
            if ((unaff_x19 != 0) && ((uVar16 & 1) == 0)) {
              in_stack_00000020 = *(undefined8 *)puVar2;
              in_stack_00000030 = *(uint *)(lVar20 + 0x10);
              in_stack_00000028 = 0xffffffffffffffff;
              uVar14 = FUN_05965738(&stack0x00000020,0);
              lVar20 = *(long *)(unaff_x19 + 0x10);
              *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
              if (lVar20 == 0) goto LAB_06837fc4;
              uVar9 = *(uint *)(unaff_x19 + 0x18);
              if (uVar9 < *(uint *)(lVar20 + 0x18)) {
                *(uint *)(unaff_x19 + 0x18) = uVar9 + 1;
                *(undefined8 *)(lVar20 + (long)(int)uVar9 * 8 + 0x20) = uVar14;
              }
              else {
                FUN_042e4a64();
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 != 5);
          if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar16 = FUN_069d69b8(lVar21,0,0);
          if ((uVar16 & 1) != 0) {
            FUN_06838d4c(2,lVar21,&stack0x00000038);
            return;
          }
          if (unaff_x19 == 0) {
            return;
          }
          in_stack_00000020 = *(undefined8 *)puVar2;
          in_stack_00000028 = 0xffffffffffffffff;
          in_stack_00000030 = 2;
          uVar14 = FUN_05965738(&stack0x00000020,0);
          iVar8 = *(int *)(unaff_x19 + 0x1c);
          lVar20 = *(long *)(unaff_x19 + 0x10);
        }
        else {
          if (unaff_x19 == 0) {
            return;
          }
          in_stack_00000020 = *(undefined8 *)puVar2;
          in_stack_00000028 = 0xffffffffffffffff;
          in_stack_00000030 = 1;
          uVar14 = FUN_05965738(&stack0x00000020,0);
          iVar8 = *(int *)(unaff_x19 + 0x1c);
          lVar20 = *(long *)(unaff_x19 + 0x10);
        }
        *(int *)(unaff_x19 + 0x1c) = iVar8 + 1;
        if (lVar20 != 0) {
          uVar9 = *(uint *)(unaff_x19 + 0x18);
          if (uVar9 < *(uint *)(lVar20 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar9 + 1;
            *(undefined8 *)(lVar20 + (long)(int)uVar9 * 8 + 0x20) = uVar14;
          }
          else {
            FUN_042e4a64();
          }
          return;
        }
      }
    }
  }
LAB_06837fc4:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


