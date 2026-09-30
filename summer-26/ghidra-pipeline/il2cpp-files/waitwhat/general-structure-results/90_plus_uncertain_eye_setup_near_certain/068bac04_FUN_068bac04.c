/*
FUNCTION_NAME: FUN_068bac04
ENTRY_POINT: 068bac04
PROGRAM: waitwhat-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_068bac04(long param_1,long param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_78;
  undefined8 *puStack_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  
  if ((DAT_07559193 & 1) == 0) {
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
    DAT_07559193 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (long *)0x0;
  if (param_2 != 0) {
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar4 = FUN_069d69b8(uVar10,uVar11,0);
    if ((uVar4 & 1) != 0) {
      uVar10 = FUN_057c032c(*(undefined8 *)OVRPlugin_Vector4f_TypeInfo,param_1,
                            *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x10),0);
      uVar10 = FUN_057b27f0(*(undefined8 *)
                             Oculus_Avatar2_OvrAvatarManager_<>c__DisplayClass196_0_TypeInfo,uVar10,
                            0);
      if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)PTR_DAT_070c2418);
      }
      FUN_0698f53c(uVar10,param_1,0);
    }
    plVar5 = *(long **)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x10);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      *(undefined1 *)(param_1 + 0x90) = 1;
      puVar3 = Oculus_Avatar2_OvrAvatarLog_UILogListenerDelegate_TypeInfo;
      puVar2 = Oculus_Avatar2_OvrAvatarLog_ELogLevel_TypeInfo;
      puVar1 = 
      Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_<>c__DisplayClass21_0_TypeInfo;
      if ((*(long *)(param_1 + 0x80) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_1 + 0x80) + 0x10), lVar6 != 0)) {
        FUN_042e54fc(&local_78,lVar6,
                     *(undefined8 *)Oculus_Avatar2_OvrAvatarManager_<>c__DisplayClass155_0_TypeInfo)
        ;
        local_50 = local_68;
        uStack_58 = puStack_70;
        local_60 = local_78;
        local_78 = 0;
        puStack_70 = &local_60;
        do {
          do {
            uVar4 = FUN_054518b4(&local_60,*(undefined8 *)puVar3);
            plVar5 = local_50;
            if ((uVar4 & 1) == 0) {
              FUN_054518b0(&local_60,*(undefined8 *)puVar2);
              lVar6 = *(long *)(param_1 + 0x20);
              *(undefined1 *)(param_1 + 0x90) = 0;
              if (lVar6 != 0) {
                (**(code **)(lVar6 + 0x18))
                          (*(undefined8 *)(lVar6 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x28));
              }
              return;
            }
            plVar7 = *(long **)(param_1 + 0x80);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            uVar4 = (**(code **)(*plVar7 + 0x188))(plVar7,local_50,*(undefined8 *)(*plVar7 + 400));
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


