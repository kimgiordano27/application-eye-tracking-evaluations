/*
FUNCTION_NAME: UnityEngine.InputForUI.NavigationEventRepeatHelper$$ShouldSendMoveEvent
ENTRY_POINT: 05fdd9e4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 135
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_12;ray_or_cast_sink_hits_5;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_5
*/


void UnityEngine_InputForUI_NavigationEventRepeatHelper__ShouldSendMoveEvent(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar16;
  
  puVar16 = *(undefined8 **)(unaff_x20 + 0x5d8);
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<Cursor>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<DebugInterface>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<DebugManager>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__);
    FUN_02d6084c(PTR_DAT_0675eb70);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<EventSystem>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<FirebaseMonoBehaviour>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
    FUN_02d6084c(PTR_DAT_0675eb68);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<GizmoRenderer>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<GizmoRendererManager>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__);
    FUN_02d6084c(PTR_DAT_0675eb60);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__);
    FUN_02d6084c(PTR_DAT_0676a290);
    FUN_02d6084c(Method_Unity_Properties_GeneratePropertyBagsForTypesQualifiedWithAttribute__ctor__)
    ;
    FUN_02d6084c(PTR_DAT_06761180);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponentsInChildren<ParticleSystem>__);
    FUN_02d6084c(PTR_DAT_06779338);
    FUN_02d6084c(
                Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                );
    FUN_02d6084c(Method_UnityEngine_Graphics_DrawMesh__);
    FUN_02d6084c(Method_UnityEngine_UIElements_GenericDropdownMenu_Apply__);
    FUN_02d6084c(Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnDestroy__);
    FUN_02d6084c(Method_UnityEngine_Graphics_DrawMeshInstanced__);
    FUN_02d6084c(
                Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionCreatedWithSpatialAnchor__
                );
    FUN_02d6084c(UnityEngine_XR_Interaction_Toolkit_Interactors_XRPokeInteractor_TypeInfo);
    FUN_02d6084c(System_Xml_Schema_XmlAnyListConverter_TypeInfo);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__);
    FUN_02d6084c(UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_TypeInfo);
    FUN_02d6084c(Method_UnityEngine_Graphics_CheckLoadActionValid__);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<OVRManager>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_TryGetComponent<Canvas>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<MeshCollider>__);
    FUN_02d6084c(Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_Start__);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRPointCloudData_TypeInfo);
    FUN_02d6084c(Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__);
    FUN_02d6084c(Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo);
    FUN_02d6084c(UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_TypeInfo);
    FUN_02d6084c(Method_UnityEngine_GameObject_TryGetComponent<Collider>__);
    FUN_02d6084c(Method_UnityEngine_UIElements_GenericDropdownMenu_OnDetachFromPanel__);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__);
    FUN_02d6084c(Method_UnityEngine_Color_get_Item__);
    FUN_02d6084c(Method_UnityEngine_Graphics_DrawMeshInstancedIndirect__);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRRaycast_TypeInfo);
    FUN_02d6084c(PTR_DAT_0676c270);
    FUN_02d6084c(Method_UnityEngine_Color32_get_Item__);
    FUN_02d6084c(Method_VRUIP_ColorPickerController_OnColorInputTextChanged__);
    FUN_02d6084c(PTR_DAT_06762058);
    FUN_02d6084c(Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_TypeInfo);
    FUN_02d6084c(UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_TypeInfo);
    FUN_02d6084c(PTR_DAT_06762060);
    FUN_02d6084c(Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__);
    FUN_02d6084c(Method_UnityEngine_Graphics_SetRenderTargetImpl__);
    FUN_02d6084c(Method_VRUIP_ColorPickerController_OnSliderValueChanged__);
    FUN_02d6084c(Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__);
    FUN_02d6084c(Method_System_Linq_Enumerable_Count<ARAnchor>__);
    FUN_02d6084c(Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__);
    FUN_02d6084c(Method_UnityEngine_GraphicsBuffer_SetData<int>__);
    FUN_02d6084c(PTR_DAT_0675e638);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__);
    FUN_02d6084c(Method_Unity_VisualScripting_GraphReference_ParentReference__);
    FUN_02d6084c(Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRTrackedObject_TypeInfo);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<InputField>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_TryGetComponent<Renderer>__);
    FUN_02d6084c(Method_UnityEngine_UIElements_GenericDropdownMenu_OnPointerMove__);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<Renderer>__);
    *(undefined1 *)(unaff_x19 + 0xe54) = 1;
  }
  lVar9 = thunk_FUN_02d9d534(*puVar16);
  FUN_05fc095c(lVar9,0);
  puVar8 = Method_UnityEngine_Graphics_SetRenderTargetImpl__;
  puVar7 = Method_UnityEngine_Graphics_CheckLoadActionValid__;
  puVar6 = Method_Unity_VisualScripting_GraphReference_ParentReference__;
  puVar5 = Method_UnityEngine_GameObject_AddComponent<GizmoRenderer>__;
  puVar4 = Method_UnityEngine_GameObject_AddComponent<FirebaseMonoBehaviour>__;
  puVar3 = Method_UnityEngine_GameObject_AddComponent<DebugInterface>__;
  puVar2 = PTR_DAT_0675e638;
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)Method_UnityEngine_Graphics_DrawMeshInstanced__;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)puVar7;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar8;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)puVar6;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)puVar2;
    thunk_FUN_02dd37b4();
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
    FUN_03aabc60(lVar10,*(undefined8 *)puVar4);
    lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
    FUN_05fc0954(lVar11,0);
    puVar2 = Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__;
    if (lVar11 != 0) {
      *(undefined4 *)(lVar11 + 0x10) = 0x164;
      *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)puVar2;
      thunk_FUN_02dd37b4();
      puVar2 = Method_UnityEngine_GameObject_AddComponent<DebugManager>__;
      if (lVar10 != 0) {
        lVar14 = *(long *)(lVar10 + 0x10);
        lVar15 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugManager>__;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *plVar12 = lVar11;
            thunk_FUN_02dd37b4(plVar12,lVar11);
          }
          else {
            FUN_03aac494(lVar10,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
          FUN_05fc0954(lVar11,0);
          puVar3 = Method_UnityEngine_GameObject_AddComponent<MeshCollider>__;
          if (lVar11 != 0) {
            *(undefined4 *)(lVar11 + 0x10) = 0x264;
            *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)puVar3;
            thunk_FUN_02dd37b4();
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar15 = *(long *)puVar2;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            puVar3 = Method_UnityEngine_GameObject_AddComponent<GizmoRendererManager>__;
            puVar2 = Method_UnityEngine_GameObject_AddComponent<EventSystem>__;
            if (lVar14 != 0) {
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                *plVar12 = lVar11;
                thunk_FUN_02dd37b4(plVar12,lVar11);
              }
              else {
                FUN_03aac494(lVar10,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar9 + 0x20) = lVar10;
              thunk_FUN_02dd37b4((long *)(lVar9 + 0x20),lVar10);
              uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
              FUN_03aabc60(uVar13,*(undefined8 *)puVar2);
              lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                          Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__)
              ;
              FUN_05fc094c(lVar9,0);
              puVar4 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_TypeInfo;
              puVar3 = PTR_DAT_0675eb68;
              puVar2 = PTR_DAT_0675eb60;
              if (lVar9 != 0) {
                *(undefined8 *)(lVar9 + 0x10) =
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_TypeInfo;
                thunk_FUN_02dd37b4();
                *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar4;
                thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                *(undefined4 *)(lVar9 + 0x18) = 2;
                lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                if (lVar9 != 0) {
                  FUN_0638a5cc(
                              Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_Start__
                              );
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


