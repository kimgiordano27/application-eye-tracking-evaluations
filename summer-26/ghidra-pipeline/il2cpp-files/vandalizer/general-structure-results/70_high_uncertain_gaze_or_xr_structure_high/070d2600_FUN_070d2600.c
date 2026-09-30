/*
FUNCTION_NAME: FUN_070d2600
ENTRY_POINT: 070d2600
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void FUN_070d2600(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_07a5a9c0 & 1) == 0) {
    FUN_031f20f4(OVRSceneLoader_<DelayCanvasPosUpdate>d__24_TypeInfo);
    FUN_031f20f4(OVRSceneLoader_<onCheckSceneCoroutine>d__25_TypeInfo);
    FUN_031f20f4(OVRSceneManager_<>c__DisplayClass45_0_TypeInfo);
    FUN_031f20f4(OVRSceneManager_<>c__DisplayClass51_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_TrackingConfidence_TypeInfo);
    FUN_031f20f4(OVRSceneManager_<>c__DisplayClass54_0_TypeInfo);
    DAT_07a5a9c0 = 1;
  }
  puVar1 = OVRPlugin_TrackingConfidence_TypeInfo;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x3b) != '\0') {
      uStack_58 = param_2[1];
      local_60 = *param_2;
      uStack_48 = param_2[3];
      uStack_50 = param_2[2];
      uVar4 = thunk_FUN_0322ed78(*(undefined8 *)OVRSceneManager_<>c__DisplayClass45_0_TypeInfo,
                                 &local_60);
      FUN_070d128c(lVar7,uVar4);
      lVar7 = *(long *)(param_1 + 0x10);
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar5 = *(long *)puVar1;
    }
    puVar2 = OVRSceneManager_<>c__DisplayClass54_0_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x60);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar5 = *(long *)puVar1;
      }
      uVar4 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_0322f148(*(undefined8 *)OVRSceneLoader_<onCheckSceneCoroutine>d__25_TypeInfo
                                );
      FUN_042d0914(lVar8,uVar4,*(undefined8 *)OVRSceneManager_<>c__DisplayClass51_0_TypeInfo,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60);
      *plVar6 = lVar8;
      lVar5 = thunk_FUN_0329bf60(plVar6,lVar8);
    }
    uVar3 = FUN_070d2df0(lVar5,*(undefined4 *)(param_2 + 3));
    local_60 = 0;
    FUN_052e3894(&local_60,uVar3,*(undefined2 *)param_2,*(undefined8 *)puVar2);
    if (lVar7 != 0) {
      FUN_03d9d574(lVar7,lVar8,local_60,
                   *(undefined8 *)OVRSceneLoader_<DelayCanvasPosUpdate>d__24_TypeInfo);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


