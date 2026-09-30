/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.FoveatedRenderingFeature$$.ctor
ENTRY_POINT: 06837fe8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;ray_interaction;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_19;ray_or_cast_sink_hits_2;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_XR_OpenXR_Features_FoveatedRenderingFeature___ctor(undefined8 param_1)

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
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x23;
  undefined8 uVar18;
  long lVar19;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  uint in_stack_00000030;
  long in_stack_00000038;
  
  uVar13 = FUN_069d8404(param_1,0,0);
  if ((uVar13 & 1) == 0) {
    FUN_06838d4c(1);
    if (unaff_x23 == 0) goto LAB_06837fc4;
    iVar6 = FUN_069e8e08();
    if (iVar6 < 1) {
      lVar17 = 0;
    }
    else {
      iVar6 = 0;
      lVar19 = 0;
      do {
        lVar15 = FUN_069e983c(unaff_x23,iVar6,0);
        if (lVar15 == 0) goto LAB_06837fc4;
        lVar17 = thunk_FUN_069dc13c(lVar15,0);
        in_stack_00000020 = *unaff_x20;
        in_stack_00000030 = 2;
        in_stack_00000028 = 0xffffffffffffffff;
        uVar14 = FUN_05965738(&stack0x00000020,0);
        if (lVar17 == 0) goto LAB_06837fc4;
        uVar13 = FUN_057bd30c(lVar17,uVar14,0);
        lVar17 = lVar15;
        if ((uVar13 & 1) == 0) {
          iVar11 = 0;
          do {
            uVar7 = FUN_06832384(iVar11);
            uVar14 = thunk_FUN_069dc13c(lVar15,0);
            in_stack_00000020 = *unaff_x20;
            in_stack_00000028 = 0xffffffffffffffff;
            in_stack_00000030 = uVar7;
            uVar18 = FUN_05965738(&stack0x00000020,0);
            uVar13 = FUN_06838cf8(uVar14,uVar18);
            if ((uVar13 & 1) != 0) {
              FUN_06838d4c(uVar7,lVar15,&stack0x00000038);
              uVar8 = FUN_068323e8(iVar11);
              lVar17 = lVar15;
              if (uVar7 < uVar8) {
                do {
                  in_stack_00000020 = *unaff_x20;
                  uVar7 = uVar7 + 1;
                  in_stack_00000028 = 0xffffffffffffffff;
                  in_stack_00000030 = uVar7;
                  uVar14 = FUN_05965738(&stack0x00000020,0);
                  iVar9 = FUN_069e8e08(lVar17,0);
                  lVar16 = lVar17;
                  if (0 < iVar9) {
                    if (lVar17 == 0) goto LAB_06837fc4;
                    iVar9 = 0;
                    do {
                      lVar16 = FUN_069e983c(lVar17,iVar9,0);
                      if (lVar16 == 0) goto LAB_06837fc4;
                      uVar18 = thunk_FUN_069dc13c(lVar16,0);
                      uVar13 = FUN_06838cf8(uVar18,uVar14);
                      if ((uVar13 & 1) != 0) break;
                      iVar9 = iVar9 + 1;
                      iVar10 = FUN_069e8e08(lVar17,0);
                      lVar16 = lVar17;
                    } while (iVar9 < iVar10);
                  }
                  uVar18 = thunk_FUN_069dc13c(lVar16,0);
                  uVar13 = FUN_06838cf8(uVar18,uVar14);
                  if ((uVar13 & 1) == 0) {
                    if (unaff_x19 != 0) {
                      lVar17 = *(long *)(unaff_x19 + 0x10);
                      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                      if (lVar17 == 0) goto LAB_06837fc4;
                      uVar1 = *(uint *)(unaff_x19 + 0x18);
                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar17 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
                      }
                      else {
                        FUN_042e4a64();
                      }
                    }
                  }
                  else {
                    FUN_06838d4c(uVar7,lVar16,&stack0x00000038);
                  }
                  lVar17 = lVar16;
                } while (uVar7 != uVar8);
              }
            }
            iVar11 = iVar11 + 1;
            lVar17 = lVar19;
          } while (iVar11 != 5);
        }
        iVar6 = iVar6 + 1;
        iVar11 = FUN_069e8e08(unaff_x23,0);
        lVar19 = lVar17;
      } while (iVar6 < iVar11);
    }
    lVar19 = in_stack_00000038;
    puVar5 = DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass1_0_TypeInfo;
    puVar4 = DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass10_0_TypeInfo;
    puVar3 = DG_Tweening_DOTweenModuleAudio_<>c__DisplayClass2_0_TypeInfo;
    puVar2 = DG_Tweening_DOTweenModuleAudio_<>c__DisplayClass1_0_TypeInfo;
    iVar6 = 0;
    do {
      lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)puVar5);
      FUN_05971910(lVar15,0);
      uVar12 = FUN_06832384(iVar6);
      if ((lVar15 == 0) || (*(undefined4 *)(lVar15 + 0x10) = uVar12, lVar19 == 0))
      goto LAB_06837fc4;
      uVar18 = *(undefined8 *)(lVar19 + 0x30);
      uVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)puVar3);
      FUN_03dfa7c0(uVar14,lVar15,*(undefined8 *)puVar4,0);
      uVar13 = FUN_03a6b204(uVar18,uVar14,*(undefined8 *)puVar2);
      if ((unaff_x19 != 0) && ((uVar13 & 1) == 0)) {
        in_stack_00000020 = *unaff_x20;
        in_stack_00000030 = *(uint *)(lVar15 + 0x10);
        in_stack_00000028 = 0xffffffffffffffff;
        uVar14 = FUN_05965738(&stack0x00000020,0);
        lVar15 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_06837fc4;
        uVar7 = *(uint *)(unaff_x19 + 0x18);
        if (uVar7 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar7 + 1;
          *(undefined8 *)(lVar15 + (long)(int)uVar7 * 8 + 0x20) = uVar14;
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
    uVar13 = FUN_069d69b8(lVar17,0,0);
    if ((uVar13 & 1) != 0) {
      FUN_06838d4c(2,lVar17,&stack0x00000038);
      return;
    }
    if (unaff_x19 == 0) {
      return;
    }
    in_stack_00000020 = *unaff_x20;
    in_stack_00000028 = 0xffffffffffffffff;
    in_stack_00000030 = 2;
    uVar14 = FUN_05965738(&stack0x00000020,0);
    iVar6 = *(int *)(unaff_x19 + 0x1c);
    lVar17 = *(long *)(unaff_x19 + 0x10);
  }
  else {
    if (unaff_x19 == 0) {
      return;
    }
    in_stack_00000020 = *unaff_x20;
    in_stack_00000028 = 0xffffffffffffffff;
    in_stack_00000030 = 1;
    uVar14 = FUN_05965738(&stack0x00000020,0);
    iVar6 = *(int *)(unaff_x19 + 0x1c);
    lVar17 = *(long *)(unaff_x19 + 0x10);
  }
  *(int *)(unaff_x19 + 0x1c) = iVar6 + 1;
  if (lVar17 != 0) {
    uVar7 = *(uint *)(unaff_x19 + 0x18);
    if (uVar7 < *(uint *)(lVar17 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar7 + 1;
      *(undefined8 *)(lVar17 + (long)(int)uVar7 * 8 + 0x20) = uVar14;
    }
    else {
      FUN_042e4a64();
    }
    return;
  }
LAB_06837fc4:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


