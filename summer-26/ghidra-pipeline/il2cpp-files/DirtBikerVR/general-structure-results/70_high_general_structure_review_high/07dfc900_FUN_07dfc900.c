/*
FUNCTION_NAME: FUN_07dfc900
ENTRY_POINT: 07dfc900
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_07dfc900(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = Normal_Realtime_RealtimeAvatar_LocalPlayer_TypeInfo;
  puVar1 = Normal_Realtime_Realtime_RealtimeEvent_TypeInfo;
  if ((DAT_0899a363 & 1) == 0) {
    FUN_03a8a718(Normal_Realtime_RealtimeAvatarManager_<>c__DisplayClass28_0_TypeInfo);
    FUN_03a8a718(Normal_Realtime_RealtimeAvatarManager_AvatarCreatedDestroyed_TypeInfo);
    FUN_03a8a718(Normal_Realtime_RealtimeAvatarModel_PropertyChangeSet_TypeInfo);
    FUN_03a8a718(
                Normal_Realtime_RealtimeAvatarVoice_<RequestMicrophonePermissionAndConnectLocalAudioStreamTask>d__37_TypeInfo
                );
    FUN_03a8a718(Normal_Realtime_RealtimeAvatarVoiceModel_PropertyChangeSet_TypeInfo);
    FUN_03a8a718(Normal_Realtime_RealtimePool_Pool_TypeInfo);
    FUN_03a8a718(Normal_Realtime_RealtimeRefData_ReferenceMode_TypeInfo);
    FUN_03a8a718(PTR_DAT_084918f8);
    FUN_03a8a718(Normal_Realtime_Realtime_RealtimeEvent_TypeInfo);
    FUN_03a8a718(Normal_Realtime_RealtimeRefID_Error_TypeInfo);
    FUN_03a8a718(Normal_Realtime_RealtimeRefManager_IRealtimeRefListener_TypeInfo);
    FUN_03a8a718(Normal_Realtime_RealtimeRefManager_RealtimeRefManagerContext_TypeInfo);
    FUN_03a8a718(Normal_Realtime_RealtimeSessionCapture_<>c_TypeInfo);
    FUN_03a8a718(Normal_Realtime_RealtimeTransform_<FixedUpdateEnumerator>d__57_TypeInfo);
    FUN_03a8a718(Normal_Realtime_RealtimeTransformModel_PropertyChangeSet_TypeInfo);
    FUN_03a8a718(Normal_Realtime_RealtimeTransformModel_TransformReadHandler_TypeInfo);
    FUN_03a8a718(Normal_Realtime_RealtimeTransformModel_TransformWriteHandler_TypeInfo);
    FUN_03a8a718(Normal_Realtime_RealtimeViewModel_CachedModelUpdate_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_RectField_<>c_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_RectField_UxmlFactory_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_RectIntField_<>c_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_RectIntField_UxmlFactory_TypeInfo);
    FUN_03a8a718(Unity_Properties_Internal_RectIntPropertyBag_HeightProperty_TypeInfo);
    FUN_03a8a718(Normal_Realtime_RealtimeAvatar_LocalPlayer_TypeInfo);
    DAT_0899a363 = 1;
  }
  FUN_04a36e7c(param_1,*(undefined8 *)puVar1);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_084918f8;
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Normal_Realtime_RealtimeRefManager_RealtimeRefManagerContext_TypeInfo
                              );
    FUN_059a3b74(lVar7,uVar8,
                 *(undefined8 *)
                  Normal_Realtime_RealtimeTransformModel_TransformWriteHandler_TypeInfo,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar5 = lVar7;
    thunk_FUN_03afed3c(plVar5,lVar7);
  }
  puVar3 = Normal_Realtime_RealtimePool_Pool_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_04488c5c(lVar7,*(undefined8 *)puVar3);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar4 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[2];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)Normal_Realtime_RealtimeRefID_Error_TypeInfo);
    FUN_059a3b74(lVar7,uVar8,
                 *(undefined8 *)Normal_Realtime_RealtimeViewModel_CachedModelUpdate_TypeInfo,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar5 = lVar7;
    thunk_FUN_03afed3c(plVar5,lVar7);
  }
  puVar3 = Normal_Realtime_RealtimeAvatarManager_<>c__DisplayClass28_0_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_04488c5c(lVar7,*(undefined8 *)puVar3);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar4 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[3];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)Normal_Realtime_RealtimeSessionCapture_<>c_TypeInfo);
    FUN_059a3b74(lVar7,uVar8,*(undefined8 *)UnityEngine_UIElements_RectField_<>c_TypeInfo,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar5 = lVar7;
    thunk_FUN_03afed3c(plVar5,lVar7);
  }
  puVar3 = Normal_Realtime_RealtimeRefData_ReferenceMode_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_04488c5c(lVar7,*(undefined8 *)puVar3);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar4 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[4];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Normal_Realtime_RealtimeTransform_<FixedUpdateEnumerator>d__57_TypeInfo
                              );
    FUN_059a5714(lVar7,uVar8,*(undefined8 *)UnityEngine_UIElements_RectField_UxmlFactory_TypeInfo,0)
    ;
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *plVar5 = lVar7;
    thunk_FUN_03afed3c(plVar5,lVar7);
  }
  puVar3 = 
  Normal_Realtime_RealtimeAvatarVoice_<RequestMicrophonePermissionAndConnectLocalAudioStreamTask>d__37_TypeInfo
  ;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_04489778(lVar7,*(undefined8 *)puVar3);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar4 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[5];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Normal_Realtime_RealtimeRefManager_IRealtimeRefListener_TypeInfo);
    FUN_059a5714(lVar7,uVar8,*(undefined8 *)UnityEngine_UIElements_RectIntField_<>c_TypeInfo,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *plVar5 = lVar7;
    thunk_FUN_03afed3c(plVar5,lVar7);
  }
  puVar3 = Normal_Realtime_RealtimeAvatarModel_PropertyChangeSet_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_04489778(lVar7,*(undefined8 *)puVar3);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar4 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[6];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Normal_Realtime_RealtimeTransformModel_PropertyChangeSet_TypeInfo);
    FUN_059a5714(lVar7,uVar8,*(undefined8 *)UnityEngine_UIElements_RectIntField_UxmlFactory_TypeInfo
                 ,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    *plVar5 = lVar7;
    thunk_FUN_03afed3c(plVar5,lVar7);
  }
  puVar3 = Normal_Realtime_RealtimeAvatarManager_AvatarCreatedDestroyed_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_04489778(lVar7,*(undefined8 *)puVar3);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar4 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[7];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Normal_Realtime_RealtimeTransformModel_TransformReadHandler_TypeInfo
                              );
    FUN_059a5714(lVar7,uVar8,
                 *(undefined8 *)Unity_Properties_Internal_RectIntPropertyBag_HeightProperty_TypeInfo
                 ,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
    *plVar5 = lVar7;
    thunk_FUN_03afed3c(plVar5,lVar7);
  }
  puVar2 = Normal_Realtime_RealtimeAvatarVoiceModel_PropertyChangeSet_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_04489778(lVar7,*(undefined8 *)puVar2);
  return;
}


