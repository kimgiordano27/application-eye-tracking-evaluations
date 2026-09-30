/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$BeginInvoke
ENTRY_POINT: 05694d34
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__BeginInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_02d965b8(UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo);
  FUN_02d965b8(UnityEngine_Rendering_ObservableList<DebugUI_Widget>_TypeInfo);
  FUN_02d965b8(OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo);
  FUN_02d965b8(OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo);
  FUN_02d965b8(Unity_Netcode_NetworkVariable_OnValueChangedDelegate<FixedString128Bytes>_TypeInfo);
  FUN_02d965b8(Unity_Netcode_NetworkVariable_OnValueChangedDelegate<int>_TypeInfo);
  FUN_02d965b8(Unity_Netcode_NetworkVariable_OnValueChangedDelegate<PlayerScoreData>_TypeInfo);
  FUN_02d965b8(Unity_Netcode_NetworkVariable_OnValueChangedDelegate<ulong>_TypeInfo);
  FUN_02d965b8(
              Oculus_Skinning_GpuSkinning_OvrGpuSkinnerBaseDrawCall<OvrGpuSkinnerDrawCall_PerBlockData>_TypeInfo
              );
  FUN_02d965b8(
              Oculus_Skinning_GpuSkinning_OvrGpuSkinnerBaseDrawCall<OvrGpuSkinnerJointsOnlyDrawCall_PerBlockData>_TypeInfo
              );
  FUN_02d965b8(
              Oculus_Skinning_GpuSkinning_OvrGpuSkinnerBaseDrawCall<OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData>_TypeInfo
              );
  FUN_02d965b8(UnityEngine_UIElements_UIR_TempAllocator_Page<ushort>_TypeInfo);
  FUN_02d965b8(UnityEngine_UIElements_UIR_TempAllocator_Page<Vertex>_TypeInfo);
  FUN_02d965b8(Unity_Netcode_NetworkMessageManager_PointerListWrapper<ulong>_TypeInfo);
  FUN_02d965b8(UnityEngine_UIElements_PopupField<string>_TypeInfo);
  FUN_02d965b8(System_Predicate<ValueTuple<string,_Type>>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x7e2) = 1;
  lVar11 = thunk_FUN_02dd3144(*unaff_x21);
  FUN_04df7850(lVar11,*unaff_x19);
  puVar10 = System_Predicate<ValueTuple<string,_Type>>_TypeInfo;
  puVar9 = UnityEngine_UIElements_PopupField<string>_TypeInfo;
  puVar8 = Unity_Netcode_NetworkMessageManager_PointerListWrapper<ulong>_TypeInfo;
  puVar7 = UnityEngine_UIElements_UIR_TempAllocator_Page<ushort>_TypeInfo;
  puVar6 = 
  Oculus_Skinning_GpuSkinning_OvrGpuSkinnerBaseDrawCall<OvrGpuSkinnerDrawCall_PerBlockData>_TypeInfo
  ;
  puVar5 = Unity_Netcode_NetworkVariable_OnValueChangedDelegate<ulong>_TypeInfo;
  puVar4 = UnityEngine_Rendering_ObservableList<DebugUI_Widget>_TypeInfo;
  puVar3 = UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo;
  puVar2 = UnityEngine_UIElements_ObjectPool<Queue<EventDispatcher_EventRecord>>_TypeInfo;
  puVar1 = OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo;
  if (lVar11 != 0) {
    FUN_04df85f0(lVar11,0,*(undefined8 *)
                           Oculus_Skinning_GpuSkinning_OvrGpuSkinnerBaseDrawCall<OvrGpuSkinnerJointsOnlyDrawCall_PerBlockData>_TypeInfo
                 ,*(undefined8 *)
                   UnityEngine_UIElements_ObjectPool<Queue<EventDispatcher_EventRecord>>_TypeInfo);
    FUN_04df85f0(lVar11,1,*(undefined8 *)puVar5,*(undefined8 *)puVar2);
    FUN_04df85f0(lVar11,2,*(undefined8 *)puVar8,*(undefined8 *)puVar2);
    FUN_04df85f0(lVar11,3,*(undefined8 *)puVar7,*(undefined8 *)puVar2);
    FUN_04df85f0(lVar11,4,*(undefined8 *)puVar6,*(undefined8 *)puVar2);
    FUN_04df85f0(lVar11,5,*(undefined8 *)puVar9,*(undefined8 *)puVar2);
    FUN_04df85f0(lVar11,6,*(undefined8 *)puVar10,*(undefined8 *)puVar2);
    FUN_04df85f0(lVar11,7,*(undefined8 *)
                           UnityEngine_UIElements_UIR_TempAllocator_Page<Vertex>_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_04df85f0(lVar11,8,*(undefined8 *)
                           Unity_Netcode_NetworkVariable_OnValueChangedDelegate<FixedString128Bytes>_TypeInfo
                 ,*(undefined8 *)puVar2);
    FUN_04df85f0(lVar11,9,*(undefined8 *)
                           Unity_Netcode_NetworkVariable_OnValueChangedDelegate<int>_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_04df85f0(lVar11,10,
                 *(undefined8 *)
                  Oculus_Skinning_GpuSkinning_OvrGpuSkinnerBaseDrawCall<OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData>_TypeInfo
                 ,*(undefined8 *)puVar2);
    FUN_04df85f0(lVar11,0xb,
                 *(undefined8 *)
                  Unity_Netcode_NetworkVariable_OnValueChangedDelegate<PlayerScoreData>_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_04df85f0(lVar11,0xc,
                 *(undefined8 *)
                  OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo,
                 *(undefined8 *)puVar2);
    **(long **)(*(long *)puVar1 + 0xb8) = lVar11;
    LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar11);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
    FUN_03bfece4(lVar11,*(undefined8 *)puVar3);
    puVar2 = UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_TypeInfo;
    if (lVar11 != 0) {
      FUN_03bfff24(lVar11,2,*(undefined8 *)
                             UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_TypeInfo)
      ;
      FUN_03bfff24(lVar11,3,*(undefined8 *)puVar2);
      FUN_03bfff24(lVar11,4,*(undefined8 *)puVar2);
      FUN_03bfff24(lVar11,5,*(undefined8 *)puVar2);
      plVar12 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar12 = lVar11;
      LeanTween__value(plVar12,lVar11);
      lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
      FUN_03bfece4(lVar11,*(undefined8 *)puVar3);
      if (lVar11 != 0) {
        FUN_03bfff24(lVar11,6,*(undefined8 *)puVar2);
        FUN_03bfff24(lVar11,7,*(undefined8 *)puVar2);
        FUN_03bfff24(lVar11,8,*(undefined8 *)puVar2);
        FUN_03bfff24(lVar11,9,*(undefined8 *)puVar2);
        FUN_03bfff24(lVar11,10,*(undefined8 *)puVar2);
        plVar12 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
        *plVar12 = lVar11;
        LeanTween__value(plVar12,lVar11);
        lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
        FUN_03bfece4(lVar11,*(undefined8 *)puVar3);
        puVar4 = UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_TypeInfo;
        puVar3 = UnityEngine_UIElements_ObjectPool<PropagationPaths>_TypeInfo;
        if (lVar11 != 0) {
          FUN_03bfff24(lVar11,6,*(undefined8 *)puVar2);
          FUN_03bfff24(lVar11,7,*(undefined8 *)puVar2);
          FUN_03bfff24(lVar11,8,*(undefined8 *)puVar2);
          FUN_03bfff24(lVar11,9,*(undefined8 *)puVar2);
          FUN_03bfff24(lVar11,10,*(undefined8 *)puVar2);
          plVar12 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
          *plVar12 = lVar11;
          LeanTween__value(plVar12,lVar11);
          uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
          FUN_04e8b9a0(uVar13,*(undefined8 *)puVar3);
          puVar14 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
          *puVar14 = uVar13;
          LeanTween__value(puVar14,uVar13);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


