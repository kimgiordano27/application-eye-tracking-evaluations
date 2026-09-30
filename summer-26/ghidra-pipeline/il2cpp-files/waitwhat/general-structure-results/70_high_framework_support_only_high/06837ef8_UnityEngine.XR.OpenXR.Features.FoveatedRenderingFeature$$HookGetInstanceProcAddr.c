/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.FoveatedRenderingFeature$$HookGetInstanceProcAddr
ENTRY_POINT: 06837ef8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;ray_interaction;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_XR_OpenXR_Features_FoveatedRenderingFeature__HookGetInstanceProcAddr
               (undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 in_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar19;
  undefined8 uVar20;
  long unaff_x24;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  uint uStack0000000000000030;
  long in_stack_00000038;
  
  uStack0000000000000030 = 1;
  uStack0000000000000020 = param_1;
  uStack0000000000000028 = in_x9;
  FUN_05965738(&stack0x00000020,0);
  uVar13 = FUN_06838cf8();
  lVar19 = *(long *)(unaff_x24 + 0x28);
  lVar18 = lVar19;
  if ((uVar13 & 1) == 0) {
    if (lVar19 != 0) {
      iVar7 = 0;
      lVar18 = 0;
      do {
        iVar6 = FUN_069e8e08(lVar19,0);
        if (iVar6 <= iVar7) goto LAB_06837fcc;
        if (((*(long *)(unaff_x24 + 0x28) == 0) ||
            (lVar14 = FUN_069e983c(*(long *)(unaff_x24 + 0x28),iVar7,0), lVar14 == 0)) ||
           (lVar19 = FUN_069d3b50(lVar14,0), lVar19 == 0)) break;
        lVar19 = thunk_FUN_069dc13c(lVar19,0);
        uStack0000000000000020 = *unaff_x20;
        uStack0000000000000030 = 1;
        uStack0000000000000028 = 0xffffffffffffffff;
        uVar15 = FUN_05965738(&stack0x00000020,0);
        if (lVar19 == 0) break;
        uVar13 = FUN_057bd30c(lVar19,uVar15,0);
        lVar19 = *(long *)(unaff_x24 + 0x28);
        iVar7 = iVar7 + 1;
        if ((uVar13 & 1) == 0) {
          lVar14 = lVar18;
        }
        lVar18 = lVar14;
      } while (lVar19 != 0);
    }
  }
  else {
LAB_06837fcc:
    if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar13 = FUN_069d8404(lVar18,0,0);
    if ((uVar13 & 1) == 0) {
      FUN_06838d4c(1,lVar18,&stack0x00000038);
      if (lVar18 == 0) goto LAB_06837fc4;
      iVar7 = FUN_069e8e08(lVar18,0);
      if (iVar7 < 1) {
        lVar19 = 0;
      }
      else {
        iVar7 = 0;
        lVar14 = 0;
        do {
          lVar16 = FUN_069e983c(lVar18,iVar7,0);
          if (lVar16 == 0) goto LAB_06837fc4;
          lVar19 = thunk_FUN_069dc13c(lVar16,0);
          uStack0000000000000020 = *unaff_x20;
          uStack0000000000000030 = 2;
          uStack0000000000000028 = 0xffffffffffffffff;
          uVar15 = FUN_05965738(&stack0x00000020,0);
          if (lVar19 == 0) goto LAB_06837fc4;
          uVar13 = FUN_057bd30c(lVar19,uVar15,0);
          lVar19 = lVar16;
          if ((uVar13 & 1) == 0) {
            iVar6 = 0;
            do {
              uVar8 = FUN_06832384(iVar6);
              uVar15 = thunk_FUN_069dc13c(lVar16,0);
              uStack0000000000000020 = *unaff_x20;
              uStack0000000000000028 = 0xffffffffffffffff;
              uStack0000000000000030 = uVar8;
              uVar20 = FUN_05965738(&stack0x00000020,0);
              uVar13 = FUN_06838cf8(uVar15,uVar20);
              if ((uVar13 & 1) != 0) {
                FUN_06838d4c(uVar8,lVar16,&stack0x00000038);
                uVar9 = FUN_068323e8(iVar6);
                lVar19 = lVar16;
                if (uVar8 < uVar9) {
                  do {
                    uStack0000000000000020 = *unaff_x20;
                    uVar8 = uVar8 + 1;
                    uStack0000000000000028 = 0xffffffffffffffff;
                    uStack0000000000000030 = uVar8;
                    uVar15 = FUN_05965738(&stack0x00000020,0);
                    iVar10 = FUN_069e8e08(lVar19,0);
                    lVar17 = lVar19;
                    if (0 < iVar10) {
                      if (lVar19 == 0) goto LAB_06837fc4;
                      iVar10 = 0;
                      do {
                        lVar17 = FUN_069e983c(lVar19,iVar10,0);
                        if (lVar17 == 0) goto LAB_06837fc4;
                        uVar20 = thunk_FUN_069dc13c(lVar17,0);
                        uVar13 = FUN_06838cf8(uVar20,uVar15);
                        if ((uVar13 & 1) != 0) break;
                        iVar10 = iVar10 + 1;
                        iVar11 = FUN_069e8e08(lVar19,0);
                        lVar17 = lVar19;
                      } while (iVar10 < iVar11);
                    }
                    uVar20 = thunk_FUN_069dc13c(lVar17,0);
                    uVar13 = FUN_06838cf8(uVar20,uVar15);
                    if ((uVar13 & 1) == 0) {
                      if (unaff_x19 != 0) {
                        lVar19 = *(long *)(unaff_x19 + 0x10);
                        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                        if (lVar19 == 0) goto LAB_06837fc4;
                        uVar1 = *(uint *)(unaff_x19 + 0x18);
                        if (uVar1 < *(uint *)(lVar19 + 0x18)) {
                          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar19 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
                        }
                        else {
                          FUN_042e4a64();
                        }
                      }
                    }
                    else {
                      FUN_06838d4c(uVar8,lVar17,&stack0x00000038);
                    }
                    lVar19 = lVar17;
                  } while (uVar8 != uVar9);
                }
              }
              iVar6 = iVar6 + 1;
              lVar19 = lVar14;
            } while (iVar6 != 5);
          }
          iVar7 = iVar7 + 1;
          iVar6 = FUN_069e8e08(lVar18,0);
          lVar14 = lVar19;
        } while (iVar7 < iVar6);
      }
      lVar18 = in_stack_00000038;
      puVar5 = DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass1_0_TypeInfo;
      puVar4 = DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass10_0_TypeInfo;
      puVar3 = DG_Tweening_DOTweenModuleAudio_<>c__DisplayClass2_0_TypeInfo;
      puVar2 = DG_Tweening_DOTweenModuleAudio_<>c__DisplayClass1_0_TypeInfo;
      iVar7 = 0;
      do {
        lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)puVar5);
        FUN_05971910(lVar14,0);
        uVar12 = FUN_06832384(iVar7);
        if ((lVar14 == 0) || (*(undefined4 *)(lVar14 + 0x10) = uVar12, lVar18 == 0))
        goto LAB_06837fc4;
        uVar20 = *(undefined8 *)(lVar18 + 0x30);
        uVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)puVar3);
        FUN_03dfa7c0(uVar15,lVar14,*(undefined8 *)puVar4,0);
        uVar13 = FUN_03a6b204(uVar20,uVar15,*(undefined8 *)puVar2);
        if ((unaff_x19 != 0) && ((uVar13 & 1) == 0)) {
          uStack0000000000000020 = *unaff_x20;
          uStack0000000000000030 = *(uint *)(lVar14 + 0x10);
          uStack0000000000000028 = 0xffffffffffffffff;
          uVar15 = FUN_05965738(&stack0x00000020,0);
          lVar14 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_06837fc4;
          uVar8 = *(uint *)(unaff_x19 + 0x18);
          if (uVar8 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar8 + 1;
            *(undefined8 *)(lVar14 + (long)(int)uVar8 * 8 + 0x20) = uVar15;
          }
          else {
            FUN_042e4a64();
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 5);
      if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar13 = FUN_069d69b8(lVar19,0,0);
      if ((uVar13 & 1) != 0) {
        FUN_06838d4c(2,lVar19,&stack0x00000038);
        return;
      }
      if (unaff_x19 == 0) {
        return;
      }
      uStack0000000000000020 = *unaff_x20;
      uStack0000000000000028 = 0xffffffffffffffff;
      uStack0000000000000030 = 2;
      uVar15 = FUN_05965738(&stack0x00000020,0);
      iVar7 = *(int *)(unaff_x19 + 0x1c);
      lVar18 = *(long *)(unaff_x19 + 0x10);
    }
    else {
      if (unaff_x19 == 0) {
        return;
      }
      uStack0000000000000020 = *unaff_x20;
      uStack0000000000000028 = 0xffffffffffffffff;
      uStack0000000000000030 = 1;
      uVar15 = FUN_05965738(&stack0x00000020,0);
      iVar7 = *(int *)(unaff_x19 + 0x1c);
      lVar18 = *(long *)(unaff_x19 + 0x10);
    }
    *(int *)(unaff_x19 + 0x1c) = iVar7 + 1;
    if (lVar18 != 0) {
      uVar8 = *(uint *)(unaff_x19 + 0x18);
      if (uVar8 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar8 + 1;
        *(undefined8 *)(lVar18 + (long)(int)uVar8 * 8 + 0x20) = uVar15;
      }
      else {
        FUN_042e4a64();
      }
      return;
    }
  }
LAB_06837fc4:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


