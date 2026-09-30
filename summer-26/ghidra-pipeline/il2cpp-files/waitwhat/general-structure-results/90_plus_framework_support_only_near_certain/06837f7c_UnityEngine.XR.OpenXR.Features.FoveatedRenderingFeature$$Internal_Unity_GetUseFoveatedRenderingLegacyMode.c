/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.FoveatedRenderingFeature$$Internal_Unity_GetUseFoveatedRenderingLegacyMode
ENTRY_POINT: 06837f7c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 110
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;strong_foveation_hits_4;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_XR_OpenXR_Features_FoveatedRenderingFeature__Internal_Unity_GetUseFoveatedRenderingLegacyMode
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar20;
  long unaff_x24;
  long unaff_x25;
  uint unaff_w27;
  undefined8 uStack0000000000000020;
  uint uStack0000000000000030;
  long in_stack_00000038;
  
  while( true ) {
    uStack0000000000000020 = *unaff_x20;
    uStack0000000000000030 = unaff_w27;
    uVar14 = FUN_05965738(&stack0x00000020,0);
    if (param_1 == 0) break;
    uVar15 = FUN_057bd30c(param_1,uVar14,0);
    unaff_w22 = unaff_w22 + 1;
    lVar19 = unaff_x23;
    if ((uVar15 & 1) == 0) {
      lVar19 = unaff_x25;
    }
    if (*(long *)(unaff_x24 + 0x28) == 0) break;
    iVar6 = FUN_069e8e08(*(long *)(unaff_x24 + 0x28),0);
    if (iVar6 <= unaff_w22) {
      if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar15 = FUN_069d8404(lVar19,0,0);
      if ((uVar15 & 1) != 0) {
        if (unaff_x19 == 0) {
          return;
        }
        uStack0000000000000020 = *unaff_x20;
        uStack0000000000000030 = 1;
        uVar14 = FUN_05965738(&stack0x00000020,0);
        iVar6 = *(int *)(unaff_x19 + 0x1c);
        lVar19 = *(long *)(unaff_x19 + 0x10);
        goto LAB_06838430;
      }
      FUN_06838d4c(1,lVar19,&stack0x00000038);
      if (lVar19 != 0) {
        iVar6 = FUN_069e8e08(lVar19,0);
        if (0 < iVar6) {
          iVar6 = 0;
          lVar18 = 0;
          goto LAB_0683806c;
        }
        lVar13 = 0;
        goto UnityEngine_XR_OpenXR_Features_OpenXRFeature__OnSessionStateChange;
      }
      break;
    }
    if (((*(long *)(unaff_x24 + 0x28) == 0) ||
        (unaff_x23 = FUN_069e983c(*(long *)(unaff_x24 + 0x28),unaff_w22,0), unaff_x23 == 0)) ||
       (lVar13 = FUN_069d3b50(unaff_x23,0), lVar13 == 0)) break;
    param_1 = thunk_FUN_069dc13c(lVar13,0);
    unaff_x25 = lVar19;
  }
LAB_06837fc4:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
LAB_0683806c:
  do {
    lVar16 = FUN_069e983c(lVar19,iVar6,0);
    if (lVar16 == 0) goto LAB_06837fc4;
    lVar13 = thunk_FUN_069dc13c(lVar16,0);
    uStack0000000000000020 = *unaff_x20;
    uStack0000000000000030 = 2;
    uVar14 = FUN_05965738(&stack0x00000020,0);
    if (lVar13 == 0) goto LAB_06837fc4;
    uVar15 = FUN_057bd30c(lVar13,uVar14,0);
    lVar13 = lVar16;
    if ((uVar15 & 1) == 0) {
      iVar11 = 0;
      do {
        uVar7 = FUN_06832384(iVar11);
        uVar14 = thunk_FUN_069dc13c(lVar16,0);
        uStack0000000000000020 = *unaff_x20;
        uStack0000000000000030 = uVar7;
        uVar20 = FUN_05965738(&stack0x00000020,0);
        uVar15 = FUN_06838cf8(uVar14,uVar20);
        if ((uVar15 & 1) != 0) {
          FUN_06838d4c(uVar7,lVar16,&stack0x00000038);
          uVar8 = FUN_068323e8(iVar11);
          lVar13 = lVar16;
          if (uVar7 < uVar8) {
            do {
              uStack0000000000000020 = *unaff_x20;
              uVar7 = uVar7 + 1;
              uStack0000000000000030 = uVar7;
              uVar14 = FUN_05965738(&stack0x00000020,0);
              iVar9 = FUN_069e8e08(lVar13,0);
              lVar17 = lVar13;
              if (0 < iVar9) {
                if (lVar13 == 0) goto LAB_06837fc4;
                iVar9 = 0;
                do {
                  lVar17 = FUN_069e983c(lVar13,iVar9,0);
                  if (lVar17 == 0) goto LAB_06837fc4;
                  uVar20 = thunk_FUN_069dc13c(lVar17,0);
                  uVar15 = FUN_06838cf8(uVar20,uVar14);
                  if ((uVar15 & 1) != 0) break;
                  iVar9 = iVar9 + 1;
                  iVar10 = FUN_069e8e08(lVar13,0);
                  lVar17 = lVar13;
                } while (iVar9 < iVar10);
              }
              uVar20 = thunk_FUN_069dc13c(lVar17,0);
              uVar15 = FUN_06838cf8(uVar20,uVar14);
              if ((uVar15 & 1) == 0) {
                if (unaff_x19 != 0) {
                  lVar13 = *(long *)(unaff_x19 + 0x10);
                  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                  if (lVar13 == 0) goto LAB_06837fc4;
                  uVar1 = *(uint *)(unaff_x19 + 0x18);
                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
                  }
                  else {
                    FUN_042e4a64();
                  }
                }
              }
              else {
                FUN_06838d4c(uVar7,lVar17,&stack0x00000038);
              }
              lVar13 = lVar17;
            } while (uVar7 != uVar8);
          }
        }
        iVar11 = iVar11 + 1;
        lVar13 = lVar18;
      } while (iVar11 != 5);
    }
    iVar6 = iVar6 + 1;
    iVar11 = FUN_069e8e08(lVar19,0);
    lVar18 = lVar13;
  } while (iVar6 < iVar11);
UnityEngine_XR_OpenXR_Features_OpenXRFeature__OnSessionStateChange:
  lVar19 = in_stack_00000038;
  puVar5 = DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass1_0_TypeInfo;
  puVar4 = DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass10_0_TypeInfo;
  puVar3 = DG_Tweening_DOTweenModuleAudio_<>c__DisplayClass2_0_TypeInfo;
  puVar2 = DG_Tweening_DOTweenModuleAudio_<>c__DisplayClass1_0_TypeInfo;
  iVar6 = 0;
  do {
    lVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar5);
    FUN_05971910(lVar18,0);
    uVar12 = FUN_06832384(iVar6);
    if ((lVar18 == 0) || (*(undefined4 *)(lVar18 + 0x10) = uVar12, lVar19 == 0)) goto LAB_06837fc4;
    uVar20 = *(undefined8 *)(lVar19 + 0x30);
    uVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar3);
    FUN_03dfa7c0(uVar14,lVar18,*(undefined8 *)puVar4,0);
    uVar15 = FUN_03a6b204(uVar20,uVar14,*(undefined8 *)puVar2);
    if ((unaff_x19 != 0) && ((uVar15 & 1) == 0)) {
      uStack0000000000000020 = *unaff_x20;
      uStack0000000000000030 = *(uint *)(lVar18 + 0x10);
      uVar14 = FUN_05965738(&stack0x00000020,0);
      lVar18 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_06837fc4;
      uVar7 = *(uint *)(unaff_x19 + 0x18);
      if (uVar7 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar7 + 1;
        *(undefined8 *)(lVar18 + (long)(int)uVar7 * 8 + 0x20) = uVar14;
      }
      else {
        FUN_042e4a64();
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 5);
  if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar15 = FUN_069d69b8(lVar13,0,0);
  if ((uVar15 & 1) == 0) {
    if (unaff_x19 != 0) {
      uStack0000000000000020 = *unaff_x20;
      uStack0000000000000030 = 2;
      uVar14 = FUN_05965738(&stack0x00000020,0);
      iVar6 = *(int *)(unaff_x19 + 0x1c);
      lVar19 = *(long *)(unaff_x19 + 0x10);
LAB_06838430:
      *(int *)(unaff_x19 + 0x1c) = iVar6 + 1;
      if (lVar19 == 0) goto LAB_06837fc4;
      uVar7 = *(uint *)(unaff_x19 + 0x18);
      if (uVar7 < *(uint *)(lVar19 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar7 + 1;
        *(undefined8 *)(lVar19 + (long)(int)uVar7 * 8 + 0x20) = uVar14;
      }
      else {
        FUN_042e4a64();
      }
    }
  }
  else {
    FUN_06838d4c(2,lVar13,&stack0x00000038);
  }
  return;
}


