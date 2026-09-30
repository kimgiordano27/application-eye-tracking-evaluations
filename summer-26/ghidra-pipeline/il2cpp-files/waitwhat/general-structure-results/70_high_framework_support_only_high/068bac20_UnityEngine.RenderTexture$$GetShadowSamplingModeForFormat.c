/*
FUNCTION_NAME: UnityEngine.RenderTexture$$GetShadowSamplingModeForFormat
ENTRY_POINT: 068bac20
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_RenderTexture__GetShadowSamplingModeForFormat(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  if ((*(byte *)(unaff_x21 + 0x193) & 1) == 0) {
    FUN_03188a78(
                Oculus_Avatar2_Experimental_OvrAvatarLegsController_<LerpFootRotation>d__32_TypeInfo
                );
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(Oculus_Avatar2_OvrAvatarLog_ELogLevel_TypeInfo);
    FUN_03188a78(Oculus_Avatar2_OvrAvatarLog_UILogListenerDelegate_TypeInfo);
    FUN_03188a78(Oculus_Avatar2_OvrAvatarManager_<>c_TypeInfo);
    FUN_03188a78(
                Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_<>c__DisplayClass21_0_TypeInfo
                );
    FUN_03188a78(Oculus_Avatar2_OvrAvatarManager_<>c__DisplayClass155_0_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(Oculus_Avatar2_OvrAvatarManager_<>c__DisplayClass196_0_TypeInfo);
    FUN_03188a78(OVRPlugin_Vector4f_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x193) = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  if (unaff_x19 != 0) {
    uVar10 = *(undefined8 *)(unaff_x19 + 0x10);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar4 = FUN_069d69b8(uVar10,uVar11,0);
    if ((uVar4 & 1) != 0) {
      uVar10 = FUN_057c032c(*(undefined8 *)OVRPlugin_Vector4f_TypeInfo,param_1,
                            *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(unaff_x19 + 0x10),0);
      uVar10 = FUN_057b27f0(*(undefined8 *)
                             Oculus_Avatar2_OvrAvatarManager_<>c__DisplayClass196_0_TypeInfo,uVar10,
                            0);
      if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)PTR_DAT_070c2418);
      }
      FUN_0698f53c(uVar10,param_1,0);
    }
    plVar5 = *(long **)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(unaff_x19 + 0x10);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      *(undefined1 *)(param_1 + 0x90) = 1;
      puVar3 = Oculus_Avatar2_OvrAvatarLog_UILogListenerDelegate_TypeInfo;
      puVar2 = Oculus_Avatar2_OvrAvatarLog_ELogLevel_TypeInfo;
      puVar1 = 
      Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_<>c__DisplayClass21_0_TypeInfo;
      if ((*(long *)(param_1 + 0x80) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_1 + 0x80) + 0x10), lVar6 != 0)) {
        FUN_042e54fc(&stack0x00000008,lVar6,
                     *(undefined8 *)Oculus_Avatar2_OvrAvatarManager_<>c__DisplayClass155_0_TypeInfo)
        ;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000008 = 0;
        in_stack_00000010 = &stack0x00000020;
        do {
          do {
            uVar4 = FUN_054518b4(&stack0x00000020,*(undefined8 *)puVar3);
            plVar5 = in_stack_00000030;
            if ((uVar4 & 1) == 0) {
              FUN_054518b0(&stack0x00000020,*(undefined8 *)puVar2);
              lVar6 = *(long *)(param_1 + 0x20);
              *(undefined1 *)(param_1 + 0x90) = 0;
              if (lVar6 != 0) {
                (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40));
              }
              return;
            }
            plVar7 = *(long **)(param_1 + 0x80);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            uVar4 = (**(code **)(*plVar7 + 0x188))
                              (plVar7,in_stack_00000030,*(undefined8 *)(*plVar7 + 400));
          } while ((uVar4 & 1) == 0);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          lVar6 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                puVar8 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto UnityEngine_RenderTexture__GetDepthStencilFormatLegacy;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar8 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)puVar1,0);
UnityEngine_RenderTexture__GetDepthStencilFormatLegacy:
          lVar6 = (*(code *)*puVar8)(plVar5,puVar8[1]);
          if (lVar6 == 0) {
            FUN_068baf24(param_1,plVar5);
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


