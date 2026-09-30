/*
FUNCTION_NAME: FUN_05d8eff0
ENTRY_POINT: 05d8eff0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_14;strong_pose_or_ray_construction_hits_18;negative_string_building_without_real_collection_sink;functionality_gaze_retrieval_or_extraction
*/


void FUN_05d8eff0(long param_1)

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
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  
  puVar9 = Method_Unity_Collections_NativeList_ParallelWriter<int>_AddRangeNoResize__;
  puVar8 = 
  Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_get_originPanel__;
  puVar7 = Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__;
  puVar6 = Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>__ctor__;
  puVar5 = 
  Method_UnityEngine_UIElements_PanelChangedEventBase<AttachToPanelEvent>_get_destinationPanel__;
  puVar4 = Method_UnityEngine_UIElements_PanelChangedEventBase<AttachToPanelEvent>_GetPooled__;
  puVar3 = Method_UnityEngine_UIElements_PanelChangedEventBase<AttachToPanelEvent>__ctor__;
  puVar2 = 
  Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler<XrCompositionLayerQuad>_OnRenderTextureIdIdCallback__
  ;
  puVar1 = 
  Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler<XrCompositionLayerQuad>_OnCreatedSwapchainCallback__
  ;
  if ((DAT_06b82d95 & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_UIElements_PanelChangedEventBase<AttachToPanelEvent>_GetPooled__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>__ctor__);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_get_originPanel__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_PanelChangedEventBase<AttachToPanelEvent>__ctor__);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_PanelChangedEventBase<AttachToPanelEvent>_get_destinationPanel__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler<XrCompositionLayerQuad>_OnRenderTextureIdIdCallback__
                );
    FUN_02d6084c(Method_Unity_VisualScripting_PerSecond<float>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_PerSecond<Vector2>__ctor__);
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler<XrCompositionLayerQuad>_OnCreatedSwapchainCallback__
                );
    FUN_02d6084c(Method_Unity_VisualScripting_PerSecond<Vector3>__ctor__);
    FUN_02d6084c(Method_Unity_Collections_NativeList_ParallelWriter<int>_AddRangeNoResize__);
    FUN_02d6084c(Method_Unity_VisualScripting_PerSecond<Vector4>__ctor__);
    FUN_02d6084c(Method_OVRPlugin_PinnedArray<Guid>__ctor__);
    FUN_02d6084c(Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
    FUN_02d6084c(Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureEvent>_GetPooled__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureOutEvent>_GetPooled__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>__ctor__)
    ;
    FUN_02d6084c(
                Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>_GetPooled__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>_get_pointerId__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>_GetPooled__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>_get_pointerId__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<ClickEvent>__ctor__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<ClickEvent>_GetPooled__);
    FUN_02d6084c(Method_System_Nullable<Color>__ctor__);
    DAT_06b82d95 = 1;
  }
  FUN_05cbdc58(param_1,0);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  System_Text_ValueStringBuilder__GrowAndAppend(uVar10,param_1,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x48),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  FUN_04da41e8(uVar10,param_1,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x50) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x50),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
  FUN_04da41e8(uVar10,param_1,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x58) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x58),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
  FUN_04da41e8(uVar10,param_1,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x60) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x60),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar9);
  System_Text_ValueStringBuilder__GrowAndAppend
            (uVar10,param_1,*(undefined8 *)Method_Unity_VisualScripting_PerSecond<float>__ctor__);
  *(undefined8 *)(param_1 + 0x68) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x68),uVar10);
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)Method_Unity_VisualScripting_PerSecond<Vector3>__ctor__
                             );
  System_Text_ValueStringBuilder__GrowAndAppend
            (uVar10,param_1,*(undefined8 *)Method_Unity_VisualScripting_PerSecond<Vector2>__ctor__);
  *(undefined8 *)(param_1 + 0x70) = uVar10;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x70),uVar10);
  plVar12 = *(long **)(param_1 + 0x18);
  if (plVar12 != (long *)0x0) {
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    lVar11 = thunk_FUN_02d7fbac(*(undefined8 *)
                                 (*plVar12 +
                                  (ulong)*(ushort *)
                                          (*(long *)Method_OVRPlugin_PinnedArray<Guid>_Dispose__ +
                                          0x50) * 0x10 + 0x140));
    (**(code **)(lVar11 + 8))(plVar12,uVar10,lVar11);
    plVar12 = *(long **)(param_1 + 0x18);
    if (plVar12 != (long *)0x0) {
      uVar10 = *(undefined8 *)(param_1 + 0x50);
      lVar11 = thunk_FUN_02d7fbac(*(undefined8 *)
                                   (*plVar12 +
                                    (ulong)*(ushort *)
                                            (*(long *)
                                              Method_Unity_VisualScripting_PerSecond<Vector4>__ctor__
                                            + 0x50) * 0x10 + 0x140));
      (**(code **)(lVar11 + 8))(plVar12,uVar10,lVar11);
      plVar12 = *(long **)(param_1 + 0x18);
      if (plVar12 != (long *)0x0) {
        uVar10 = *(undefined8 *)(param_1 + 0x58);
        lVar11 = thunk_FUN_02d7fbac(*(undefined8 *)
                                     (*plVar12 +
                                      (ulong)*(ushort *)
                                              (*(long *)
                                                Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureOutEvent>_GetPooled__
                                              + 0x50) * 0x10 + 0x140));
        (**(code **)(lVar11 + 8))(plVar12,uVar10,lVar11);
        plVar12 = *(long **)(param_1 + 0x18);
        if (plVar12 != (long *)0x0) {
          uVar10 = *(undefined8 *)(param_1 + 0x60);
          lVar11 = thunk_FUN_02d7fbac(*(undefined8 *)
                                       (*plVar12 +
                                        (ulong)*(ushort *)
                                                (*(long *)
                                                  Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__ +
                                                0x50) * 0x10 + 0x140));
          (**(code **)(lVar11 + 8))(plVar12,uVar10,lVar11);
          plVar12 = *(long **)(param_1 + 0x18);
          if (plVar12 != (long *)0x0) {
            uVar10 = *(undefined8 *)(param_1 + 0x68);
            lVar11 = thunk_FUN_02d7fbac(*(undefined8 *)
                                         (*plVar12 +
                                          (ulong)*(ushort *)
                                                  (*(long *)
                                                  Method_OVRPlugin_PinnedArray<Guid>__ctor__ + 0x50)
                                          * 0x10 + 0x140));
            (**(code **)(lVar11 + 8))(plVar12,uVar10,lVar11);
            puVar8 = Method_UnityEngine_UIElements_PointerEventBase<ClickEvent>_GetPooled__;
            puVar7 = Method_UnityEngine_UIElements_PointerEventBase<ClickEvent>__ctor__;
            puVar6 = 
            Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>_get_pointerId__
            ;
            puVar5 = 
            Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>_GetPooled__
            ;
            puVar4 = 
            Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureOutEvent>__ctor__;
            puVar3 = 
            Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>_get_pointerId__
            ;
            puVar2 = 
            Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>_GetPooled__;
            puVar1 = 
            Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>__ctor__;
            plVar12 = *(long **)(param_1 + 0x18);
            if (plVar12 != (long *)0x0) {
              uVar10 = *(undefined8 *)(param_1 + 0x70);
              lVar11 = thunk_FUN_02d7fbac(*(undefined8 *)
                                           (*plVar12 +
                                            (ulong)*(ushort *)
                                                    (*(long *)
                                                  Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureEvent>_GetPooled__
                                                  + 0x50) * 0x10 + 0x140));
              (**(code **)(lVar11 + 8))(plVar12,uVar10,lVar11);
              uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
              FUN_043e3d40(uVar10,*(undefined8 *)puVar1);
              *(undefined8 *)(param_1 + 0x78) = uVar10;
              thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x78),uVar10);
              uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
              FUN_043e3d40(uVar10,*(undefined8 *)puVar2);
              *(undefined8 *)(param_1 + 0x80) = uVar10;
              thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x80),uVar10);
              uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
              FUN_043e3d40(uVar10,*(undefined8 *)puVar4);
              *(undefined8 *)(param_1 + 0x88) = uVar10;
              thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x88),uVar10);
              uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
              FUN_043e3d40(uVar10,*(undefined8 *)puVar3);
              *(undefined8 *)(param_1 + 0x90) = uVar10;
              thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x90),uVar10);
              uVar10 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Nullable<Color>__ctor__);
              FUN_05d6549c(uVar10,0);
              *(undefined8 *)(param_1 + 0x40) = uVar10;
              thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x40),uVar10);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


