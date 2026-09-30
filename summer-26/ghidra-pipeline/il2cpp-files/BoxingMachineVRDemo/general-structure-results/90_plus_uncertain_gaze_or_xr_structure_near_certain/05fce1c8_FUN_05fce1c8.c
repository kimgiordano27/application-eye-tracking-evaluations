/*
FUNCTION_NAME: FUN_05fce1c8
ENTRY_POINT: 05fce1c8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 156
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_10;ui_or_gameplay_sink_hits_18;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05fce1c8(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  puVar2 = Method_UnityEngine_GameObject_AddComponent<Cursor>__;
  if ((DAT_06b84e34 & 1) == 0) {
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
    FUN_02d6084c(Method_UnityEngine_InputSystem_LowLevel_GamepadState__ctor__);
    FUN_02d6084c(Firebase_Platform_FirebaseHandler_ApplicationFocusChangedEventArgs_TypeInfo);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__);
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager_OnDeviceChange__
                );
    FUN_02d6084c(PTR_DAT_0676a290);
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager_OnDeviceConnected__
                );
    FUN_02d6084c(Method_Unity_Properties_GeneratePropertyBagsForTypesQualifiedWithAttribute__ctor__)
    ;
    FUN_02d6084c(PTR_DAT_06761180);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponentsInChildren<ParticleSystem>__);
    FUN_02d6084c(PTR_DAT_06779338);
    FUN_02d6084c(
                Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_GenericDropdownMenu_Apply__);
    FUN_02d6084c(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<short,_uint>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__);
    FUN_02d6084c(UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_TypeInfo);
    FUN_02d6084c(Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalLightData>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<OVRManager>__);
    FUN_02d6084c(OVRHaptics_Config_TypeInfo);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<MeshCollider>__);
    FUN_02d6084c(Method_UnityEngine_UIElements_GenericDropdownMenu_OnAttachToPanel__);
    FUN_02d6084c(Method_UnityEngine_UIElements_GenericDropdownMenu_OnContainerGeometryChanged__);
    FUN_02d6084c(Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_Start__);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRPointCloudData_TypeInfo);
    FUN_02d6084c(Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__);
    FUN_02d6084c(Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo);
    FUN_02d6084c(Method_UnityEngine_GameObject_TryGetComponent<Collider>__);
    FUN_02d6084c(Method_UnityEngine_UIElements_GenericDropdownMenu_OnDetachFromPanel__);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__);
    FUN_02d6084c(Method_UnityEngine_Color_get_Item__);
    FUN_02d6084c(Method_UnityEngine_UIElements_GenericDropdownMenu_OnFocusOut__);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRRaycast_TypeInfo);
    FUN_02d6084c(PTR_DAT_0676c270);
    FUN_02d6084c(Method_UnityEngine_Color32_get_Item__);
    FUN_02d6084c(PTR_DAT_06762058);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_TypeInfo);
    FUN_02d6084c(PTR_DAT_06762060);
    FUN_02d6084c(Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__);
    FUN_02d6084c(Method_UnityEngine_UIElements_GenericDropdownMenu_OnInitialDisplay__);
    FUN_02d6084c(Method_VRUIP_ColorPickerController_OnSliderValueChanged__);
    FUN_02d6084c(Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__);
    FUN_02d6084c(Method_System_Linq_Enumerable_Count<ARAnchor>__);
    FUN_02d6084c(Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRReferenceImage_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e638);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__);
    FUN_02d6084c(Method_UnityEngine_UIElements_GenericDropdownMenu_OnParentResized__);
    FUN_02d6084c(Method_UnityEngine_UIElements_GenericDropdownMenu_OnPointerDown__);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<InputField>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_TryGetComponent<Renderer>__);
    FUN_02d6084c(Method_UnityEngine_UIElements_GenericDropdownMenu_OnPointerMove__);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<Renderer>__);
    DAT_06b84e34 = 1;
  }
  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_05fc095c(lVar10,0);
  puVar9 = Method_UnityEngine_UIElements_GenericDropdownMenu_OnContainerGeometryChanged__;
  puVar4 = Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalLightData>__;
  puVar6 = Method_UnityEngine_GameObject_AddComponent<GizmoRenderer>__;
  puVar8 = Method_UnityEngine_GameObject_AddComponent<FirebaseMonoBehaviour>__;
  puVar5 = Method_UnityEngine_GameObject_AddComponent<DebugInterface>__;
  puVar3 = OVRHaptics_Config_TypeInfo;
  puVar2 = PTR_DAT_0675e638;
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x10) =
         *(undefined8 *)Method_UnityEngine_UIElements_GenericDropdownMenu_OnAttachToPanel__;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)puVar4;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)puVar9;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)puVar3;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)puVar2;
    thunk_FUN_02dd37b4();
    lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
    FUN_03aabc60(lVar11,*(undefined8 *)puVar8);
    lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
    FUN_05fc0954(lVar12,0);
    puVar2 = Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__;
    if (lVar12 != 0) {
      *(undefined4 *)(lVar12 + 0x10) = 0x164;
      *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)puVar2;
      thunk_FUN_02dd37b4();
      puVar2 = Method_UnityEngine_GameObject_AddComponent<DebugManager>__;
      if (lVar11 != 0) {
        lVar15 = *(long *)(lVar11 + 0x10);
        lVar16 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugManager>__;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar15 != 0) {
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
            *plVar13 = lVar12;
            thunk_FUN_02dd37b4(plVar13,lVar12);
          }
          else {
            FUN_03aac494(lVar11,lVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
          FUN_05fc0954(lVar12,0);
          puVar3 = Method_UnityEngine_GameObject_AddComponent<MeshCollider>__;
          if (lVar12 != 0) {
            *(undefined4 *)(lVar12 + 0x10) = 0x264;
            *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)puVar3;
            thunk_FUN_02dd37b4();
            lVar15 = *(long *)(lVar11 + 0x10);
            lVar16 = *(long *)puVar2;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            puVar5 = Method_UnityEngine_GameObject_AddComponent<GizmoRendererManager>__;
            puVar3 = Method_UnityEngine_GameObject_AddComponent<EventSystem>__;
            puVar2 = Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__;
            if (lVar15 != 0) {
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                *plVar13 = lVar12;
                thunk_FUN_02dd37b4(plVar13,lVar12);
              }
              else {
                FUN_03aac494(lVar11,lVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar10 + 0x20) = lVar11;
              thunk_FUN_02dd37b4((long *)(lVar10 + 0x20),lVar11);
              lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
              FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
              lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
              FUN_05fc094c(lVar12,0);
              puVar8 = PTR_DAT_06762058;
              puVar5 = PTR_DAT_0675eb68;
              puVar3 = PTR_DAT_0675eb60;
              if (lVar12 != 0) {
                *(undefined8 *)(lVar12 + 0x10) =
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_TypeInfo;
                thunk_FUN_02dd37b4();
                *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar8;
                thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                *(undefined4 *)(lVar12 + 0x18) = 1;
                lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                FUN_03aabc60(lVar15,*(undefined8 *)puVar5);
                if (lVar15 != 0) {
                  uVar14 = *(undefined8 *)puVar8;
                  lVar16 = *(long *)(lVar15 + 0x10);
                  lVar17 = *(long *)PTR_DAT_0675eb70;
                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  puVar8 = Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__;
                  puVar5 = Method_UnityEngine_GameObject_AddComponent<FixedJoint>__;
                  puVar3 = Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__;
                  if (lVar16 != 0) {
                    uVar1 = *(uint *)(lVar15 + 0x18);
                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
                      thunk_FUN_02dd37b4();
                    }
                    else {
                      FUN_03aac494(lVar15,uVar14,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar12 + 0x30) = lVar15;
                    thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15);
                    lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
                    FUN_03aabc60(lVar15,*(undefined8 *)puVar5);
                    lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                    FUN_05fc0944(lVar16,0);
                    puVar6 = Method_UnityEngine_UIElements_GenericDropdownMenu_OnDetachFromPanel__;
                    if (lVar16 != 0) {
                      *(undefined8 *)(lVar16 + 0x18) =
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_GenericDropdownMenu_OnDetachFromPanel__;
                      thunk_FUN_02dd37b4();
                      *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)puVar9;
                      thunk_FUN_02dd37b4();
                      if (lVar15 != 0) {
                        lVar17 = *(long *)(lVar15 + 0x10);
                        lVar18 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                        ;
                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                        if (lVar17 != 0) {
                          uVar1 = *(uint *)(lVar15 + 0x18);
                          if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                            *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                            plVar13 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar13 = lVar16;
                            thunk_FUN_02dd37b4(plVar13,lVar16);
                          }
                          else {
                            FUN_03aac494(lVar15,lVar16,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar12 + 0x28) = lVar15;
                          thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15);
                          if (lVar11 != 0) {
                            lVar15 = *(long *)(lVar11 + 0x10);
                            lVar16 = *(long *)
                                      Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                            ;
                            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                            if (lVar15 != 0) {
                              uVar1 = *(uint *)(lVar11 + 0x18);
                              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar13 = lVar12;
                                thunk_FUN_02dd37b4(plVar13,lVar12);
                              }
                              else {
                                FUN_03aac494(lVar11,lVar12,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                              FUN_05fc094c(lVar12,0);
                              puVar4 = Method_UnityEngine_GameObject_TryGetComponent<Collider>__;
                              if (lVar12 != 0) {
                                *(undefined8 *)(lVar12 + 0x10) =
                                     *(undefined8 *)
                                      UnityEngine_XR_ARSubsystems_XRPointCloudData_TypeInfo;
                                thunk_FUN_02dd37b4();
                                *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar4;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                *(undefined4 *)(lVar12 + 0x18) = 0;
                                lVar15 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eb60);
                                FUN_03aabc60(lVar15,*(undefined8 *)PTR_DAT_0675eb68);
                                if (lVar15 != 0) {
                                  uVar14 = *(undefined8 *)Method_UnityEngine_Color32_get_Item__;
                                  lVar16 = *(long *)(lVar15 + 0x10);
                                  lVar17 = *(long *)PTR_DAT_0675eb70;
                                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                  if (lVar16 != 0) {
                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar14
                                      ;
                                      thunk_FUN_02dd37b4();
                                    }
                                    else {
                                      FUN_03aac494(lVar15,uVar14,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar12 + 0x30) = lVar15;
                                    thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15);
                                    lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
                                    FUN_03aabc60(lVar15,*(undefined8 *)puVar5);
                                    lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                                    FUN_05fc0944(lVar16,0);
                                    if (lVar16 != 0) {
                                      *(undefined8 *)(lVar16 + 0x18) = *(undefined8 *)puVar6;
                                      thunk_FUN_02dd37b4();
                                      *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)puVar9;
                                      thunk_FUN_02dd37b4();
                                      if (lVar15 != 0) {
                                        lVar17 = *(long *)(lVar15 + 0x10);
                                        lVar18 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                        ;
                                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                        puVar6 = PTR_DAT_0675eb68;
                                        if (lVar17 != 0) {
                                          uVar1 = *(uint *)(lVar15 + 0x18);
                                          if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                            *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                            plVar13 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar13 = lVar16;
                                            thunk_FUN_02dd37b4(plVar13,lVar16);
                                          }
                                          else {
                                            FUN_03aac494(lVar15,lVar16,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          puVar4 = PTR_DAT_0675eb60;
                                          *(long *)(lVar12 + 0x28) = lVar15;
                                          thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15);
                                          lVar15 = *(long *)(lVar11 + 0x10);
                                          lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                          ;
                                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                          if (lVar15 != 0) {
                                            uVar1 = *(uint *)(lVar11 + 0x18);
                                            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                              plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar13 = lVar12;
                                              thunk_FUN_02dd37b4(plVar13,lVar12);
                                            }
                                            else {
                                              FUN_03aac494(lVar11,lVar12,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar16 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                            FUN_05fc094c(lVar12,0);
                                            puVar7 = PTR_DAT_06761180;
                                            if (lVar12 != 0) {
                                              *(undefined8 *)(lVar12 + 0x10) =
                                                   *(undefined8 *)PTR_DAT_0676a290;
                                              thunk_FUN_02dd37b4();
                                              *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar7
                                              ;
                                              thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                              *(undefined4 *)(lVar12 + 0x18) = 0;
                                              lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
                                              FUN_03aabc60(lVar15,*(undefined8 *)puVar6);
                                              if (lVar15 != 0) {
                                                uVar14 = *(undefined8 *)
                                                                                                                    
                                                  Method_VRUIP_ColorPickerController_OnSliderValueChanged__
                                                ;
                                                lVar16 = *(long *)(lVar15 + 0x10);
                                                lVar17 = *(long *)PTR_DAT_0675eb70;
                                                *(int *)(lVar15 + 0x1c) =
                                                     *(int *)(lVar15 + 0x1c) + 1;
                                                if (lVar16 != 0) {
                                                  uVar1 = *(uint *)(lVar15 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                    *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar14
                                                    ;
                                                    thunk_FUN_02dd37b4();
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar15,uVar14,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar17 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar5);
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInChildren<ParticleSystem>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dd37b4(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar7 = 
                                                  Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<short,_uint>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Firebase_Platform_FirebaseHandler_ApplicationFocusChangedEventArgs_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar6);
                                                  if (lVar15 != 0) {
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnPointerDown__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  lVar17 = *(long *)PTR_DAT_0675eb70;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar5);
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager_OnDeviceChange__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dd37b4(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar7 = PTR_DAT_06762060;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0676c270;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar12 + 0x18) = 1;
                                                    lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_03aabc60(lVar15,*(undefined8 *)puVar6);
                                                    if (lVar15 != 0) {
                                                      uVar14 = *(undefined8 *)puVar7;
                                                      lVar16 = *(long *)(lVar15 + 0x10);
                                                      lVar17 = *(long *)PTR_DAT_0675eb70;
                                                      *(int *)(lVar15 + 0x1c) =
                                                           *(int *)(lVar15 + 0x1c) + 1;
                                                      if (lVar16 != 0) {
                                                        uVar1 = *(uint *)(lVar15 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar14;
                                                          thunk_FUN_02dd37b4();
                                                        }
                                                        else {
                                                          FUN_03aac494(lVar15,uVar14,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar17 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar5);
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dd37b4(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<Renderer>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRRaycast_TypeInfo;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar6);
                                                  if (lVar15 != 0) {
                                                    uVar14 = *(undefined8 *)
                                                              Method_UnityEngine_Color_get_Item__;
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    lVar17 = *(long *)PTR_DAT_0675eb70;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar15,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar5);
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnParentResized__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dd37b4(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnInitialDisplay__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRReferenceImage_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 2;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar6);
                                                  if (lVar15 != 0) {
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_Start__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  lVar17 = *(long *)PTR_DAT_0675eb70;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar5);
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Properties_GeneratePropertyBagsForTypesQualifiedWithAttribute__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dd37b4(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager_OnDeviceConnected__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar6);
                                                  if (lVar15 != 0) {
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  lVar17 = *(long *)PTR_DAT_0675eb70;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar5);
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnPointerMove__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dd37b4(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_InputSystem_LowLevel_GamepadState__ctor__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnFocusOut__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar6);
                                                  if (lVar15 != 0) {
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  lVar17 = *(long *)PTR_DAT_0675eb70;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar5);
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_Apply__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dd37b4(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 3;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar6);
                                                  if (lVar15 != 0) {
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_GetComponent<InputField>__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  lVar17 = *(long *)PTR_DAT_0675eb70;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar5);
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<Renderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dd37b4(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06779338;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar12 + 0x18) = 3;
                                                    lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_03aabc60(lVar15,*(undefined8 *)puVar6);
                                                    if (lVar15 != 0) {
                                                      uVar14 = *(undefined8 *)
                                                                                                                                
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  lVar17 = *(long *)PTR_DAT_0675eb70;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar5);
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dd37b4(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 4;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar6);
                                                  if (lVar15 != 0) {
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  lVar17 = *(long *)PTR_DAT_0675eb70;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar5);
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dd37b4(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11)
                                                  ;
                                                  FUN_05fc0710(param_1,lVar10,0);
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
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


