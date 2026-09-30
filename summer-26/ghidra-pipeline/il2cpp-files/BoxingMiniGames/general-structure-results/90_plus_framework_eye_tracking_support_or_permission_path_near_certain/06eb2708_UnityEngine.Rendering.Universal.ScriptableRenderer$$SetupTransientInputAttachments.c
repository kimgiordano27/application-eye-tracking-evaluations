/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.ScriptableRenderer$$SetupTransientInputAttachments
ENTRY_POINT: 06eb2708
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 173
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;data_collection_or_telemetry;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_20;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_19;functionality_possible_biometrics_hits_2
*/


void UnityEngine_Rendering_Universal_ScriptableRenderer__SetupTransientInputAttachments
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long lVar17;
  undefined8 *unaff_x23;
  long lVar18;
  long lVar19;
  
  FUN_03642964(*(undefined8 *)(param_1 + 0xcd8));
  FUN_03642964(System_Linq_Expressions_Interpreter_NewArrayInstruction_TypeInfo);
                    /* try { // try from 06eb2724 to 06fb28b3 has its CatchHandler @ 06eb2724
                       catch() { ... } // from try @ 06eb2724 with catch @ 06eb2724
                       catch() { ... } // from try @ 06eb28d0 with catch @ 06eb2724
                       catch() { ... } // from try @ 06eb2d9c with catch @ 06eb2724
                       catch() { ... } // from try @ 06eb2e94 with catch @ 06eb2724 */
  FUN_03642964(System_Data_NewDiffgramGen_TypeInfo);
  FUN_03642964(System_Linq_Expressions_NewExpression_TypeInfo);
  FUN_03642964(System_Linq_Expressions_Interpreter_NewInstruction_TypeInfo);
  FUN_03642964(System_Xml_Schema_NfaContentValidator_TypeInfo);
  FUN_03642964(TagLib_IFD_Makernotes_Nikon3MakernoteReader_TypeInfo);
  FUN_03642964(UnityEngine_Rendering_NoInterpTextureParameter_TypeInfo);
  FUN_03642964(System_Data_NoNullAllowedException_TypeInfo);
  FUN_03642964(Newtonsoft_Json_Utilities_NoThrowExpressionVisitor_TypeInfo);
  FUN_03642964(Newtonsoft_Json_Utilities_NoThrowGetBinderMember_TypeInfo);
  FUN_03642964(Newtonsoft_Json_Utilities_NoThrowSetBinderMember_TypeInfo);
  FUN_03642964(Unity_InferenceEngine_Graph_Node_TypeInfo);
  FUN_03642964(MS_Internal_Xml_XPath_NodeFunctions_TypeInfo);
  FUN_03642964(Sirenix_Serialization_NodeInfo_TypeInfo);
  FUN_03642964(Unity_InferenceEngine_Graph_NodeList_TypeInfo);
  FUN_03642964(Unity_InferenceEngine_Graph_NodeSet_TypeInfo);
  FUN_03642964(Unity_InferenceEngine_Layers_NonMaxSuppression_TypeInfo);
  FUN_03642964(System_Runtime_Serialization_NonNegativeIntegerDataContract_TypeInfo);
  FUN_03642964(System_Runtime_Serialization_NonPositiveIntegerDataContract_TypeInfo);
  FUN_03642964(System_NonSerializedAttribute_TypeInfo);
  FUN_03642964(Unity_InferenceEngine_Layers_NonZero_TypeInfo);
  FUN_03642964(UnityEngine_Rendering_Universal_Internal_NormalReconstruction_TypeInfo);
  FUN_03642964(System_Text_Normalization_TypeInfo);
  FUN_03642964(Mono_Globalization_Unicode_NormalizationTableUtil_TypeInfo);
  FUN_03642964(System_Runtime_Serialization_NormalizedStringDataContract_TypeInfo);
  FUN_03642964(Unity_InferenceEngine_Layers_Not_TypeInfo);
  FUN_03642964(Unity_InferenceEngine_Layers_NotEqual_TypeInfo);
  FUN_03642964(System_Linq_Expressions_Interpreter_NotEqualInstruction_TypeInfo);
  FUN_03642964(System_NotFiniteNumberException_TypeInfo);
  FUN_03642964(System_NotImplementedException_TypeInfo);
  FUN_03642964(System_Linq_Expressions_Interpreter_NotInstruction_TypeInfo);
  FUN_03642964(System_NotSupportedException_TypeInfo);
  FUN_03642964(PadsWorkout_Note_TypeInfo);
  FUN_03642964(PadsWorkout_NoteClip_TypeInfo);
  FUN_03642964(NAudio_Midi_NoteEvent_TypeInfo);
  FUN_03642964(NAudio_Midi_NoteOnEvent_TypeInfo);
  FUN_03642964(PadsWorkout_NoteTrack_TypeInfo);
  FUN_03642964(PadsWorkout_NoteType_TypeInfo);
  FUN_03642964(UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo);
  FUN_03642964(UnityEngine_AI_NavMeshTriangulation_TypeInfo);
  FUN_03642964(OVR_OpenVR_NotificationBitmap_t_TypeInfo);
  FUN_03642964(Unity_AppUI_Core_NotificationManager_TypeInfo);
  FUN_03642964(System_Collections_Specialized_NotifyCollectionChangedAction_TypeInfo);
  FUN_03642964(System_Collections_Specialized_NotifyCollectionChangedEventArgs_TypeInfo);
  FUN_03642964(System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
  FUN_03642964(System_ComponentModel_NotifyParentPropertyAttribute_TypeInfo);
  FUN_03642964(Mono_Http_NtlmClient_TypeInfo);
  FUN_03642964(System_Net_NtlmClient_TypeInfo);
  FUN_03642964(Mono_Http_NtlmSession_TypeInfo);
  FUN_03642964(Mono_Security_Protocol_Ntlm_NtlmSettings_TypeInfo);
  FUN_03642964(Zenject_NullBindingFinalizer_TypeInfo);
  FUN_03642964(System_Linq_Expressions_Interpreter_NullCheckInstruction_TypeInfo);
  FUN_03642964(System_NullConsoleDriver_TypeInfo);
  FUN_03642964(UnityThreading_NullDispatcher_TypeInfo);
  FUN_03642964(System_NullReferenceException_TypeInfo);
  FUN_03642964(Meta_XR_Editor_FalcoOVRTelemetry_NullTelemetryClient_TypeInfo);
  FUN_03642964(System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_TypeInfo);
  FUN_03642964(System_Number_TypeInfo);
  FUN_03642964(System_Globalization_NumberFormatInfo_TypeInfo);
  FUN_03642964(MS_Internal_Xml_XPath_NumberFunctions_TypeInfo);
  FUN_03642964(System_Xml_Schema_Numeric10FacetsChecker_TypeInfo);
  FUN_03642964(System_Xml_Schema_Numeric2FacetsChecker_TypeInfo);
  FUN_03642964(MS_Internal_Xml_XPath_NumericExpr_TypeInfo);
  FUN_03642964(UnityEngine_NumericFieldDraggerUtility_TypeInfo);
  FUN_03642964(System_Runtime_InteropServices_OSPlatform_TypeInfo);
  FUN_03642964(System_Threading_OSSpecificSynchronizationContext_TypeInfo);
  FUN_03642964(OVRAnchor_TypeInfo);
  FUN_03642964(OVRAnchorContainer_TypeInfo);
  FUN_03642964(OVRBody_TypeInfo);
  FUN_03642964(OVRBone_TypeInfo);
  FUN_03642964(UnityEngine_UIElements_Internal_MultiColumnHeaderColumn_TypeInfo);
  FUN_03642964(PTR_DAT_07a029d8);
  FUN_03642964(OVRBoneCapsule_TypeInfo);
  FUN_03642964(OVRBoundary_TypeInfo);
  FUN_03642964(OVRBounded2D_TypeInfo);
  FUN_03642964(OVRBounded3D_TypeInfo);
  FUN_03642964(OVRCameraRig_TypeInfo);
  FUN_03642964(OVRColocationSession_TypeInfo);
  FUN_03642964(OVRControllerTest_TypeInfo);
  FUN_03642964(OVRDisplay_TypeInfo);
  FUN_03642964(OVRDynamicObject_TypeInfo);
  FUN_03642964(OVRExternalComposition_TypeInfo);
  FUN_03642964(OVREyeGaze_TypeInfo);
  FUN_03642964(OVRFaceExpressions_TypeInfo);
  FUN_03642964(Meta_XR_Editor_FalcoOVRTelemetry_OVRFalcoTelemetry_TypeInfo);
  FUN_03642964(OVRGLTFAccessor_TypeInfo);
  FUN_03642964(OVRGLTFAnimatinonNode_TypeInfo);
  FUN_03642964(OVRGLTFAnimationNodeMorphTargetHandler_TypeInfo);
  FUN_03642964(OVRGLTFComponentType_TypeInfo);
  FUN_03642964(OVRGLTFLoader_TypeInfo);
  FUN_03642964(OVRGLTFType_TypeInfo);
  FUN_03642964(OVRGazePointer_TypeInfo);
  FUN_03642964(OVRHandSkeletonVersion_TypeInfo);
  FUN_03642964(OVRHandTest_TypeInfo);
  FUN_03642964(OVRHaptics_TypeInfo);
  FUN_03642964(OVRHapticsClip_TypeInfo);
  FUN_03642964(OVRHumanBodyBonesMappingsInterface_TypeInfo);
  FUN_03642964(OVRInput_TypeInfo);
  FUN_03642964(UnityEngine_EventSystems_OVRInputModule_TypeInfo);
  FUN_03642964(OVRLocatable_TypeInfo);
  FUN_03642964(OVRManager_TypeInfo);
  FUN_03642964(OVRMarkerPayload_TypeInfo);
  FUN_03642964(OVRMarkerPayloadType_TypeInfo);
  FUN_03642964(OVRMeshRenderer_TypeInfo);
  FUN_03642964(OVRMixedReality_TypeInfo);
  FUN_03642964(OVRMixedRealityCaptureConfiguration_TypeInfo);
  FUN_03642964(OVRNativeBuffer_TypeInfo);
  FUN_03642964(OVRNodeStateProperties_TypeInfo);
  FUN_03642964(OVROverlay_TypeInfo);
  FUN_03642964(OVROverlayCanvas_TypeInfo);
  FUN_03642964(OVROverlayCanvasManager_TypeInfo);
  FUN_03642964(OVROverlayCanvasSettings_TypeInfo);
  FUN_03642964(OVROverlayCanvas_TMPChanged_TypeInfo);
  FUN_03642964(OVRPassthroughColorLut_TypeInfo);
  FUN_03642964(OVRPassthroughLayer_TypeInfo);
  FUN_03642964(OVRPermissionsRequester_TypeInfo);
  FUN_03642964(UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo);
  FUN_03642964(OVRPlatformMenu_TypeInfo);
  FUN_03642964(OVRPlugin_TypeInfo);
  FUN_03642964(UnityEngine_EventSystems_OVRPointerEventData_TypeInfo);
  FUN_03642964(Oculus_Interaction_Input_OVRPointerPoseSelector_TypeInfo);
  FUN_03642964(OVRPose_TypeInfo);
  FUN_03642964(OVRProfile_TypeInfo);
  FUN_03642964(OVRRaycaster_TypeInfo);
  FUN_03642964(OVRResources_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x15f) = 1;
  lVar7 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_0459e7d4(lVar7,*unaff_x20);
  uVar8 = thunk_FUN_0367fe20(*unaff_x23);
  FUN_06ea7ee0(uVar8,0);
  if (lVar7 != 0) {
    lVar13 = *(long *)(lVar7 + 0x10);
    lVar16 = *(long *)UnityEngine_UIElements_ListViewReorderableDragAndDropController_TypeInfo;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar13 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        puVar9 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
        *puVar9 = uVar8;
        thunk_FUN_036b7ad0(puVar9,uVar8);
      }
      else {
        FUN_0459f03c(lVar7,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                   Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo);
      FUN_06ea5298(lVar13,0);
      puVar3 = UnityEngine_UIElements_Internal_MultiColumnHeaderColumn_TypeInfo;
      if (lVar13 != 0) {
        *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)OVRMixedReality_TypeInfo;
        thunk_FUN_036b7ad0();
        lVar16 = *(long *)puVar3;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar16 = *(long *)puVar3;
        }
        puVar5 = UnityEngine_UIElements_NavigationCancelEvent_TypeInfo;
        puVar9 = *(undefined8 **)(lVar16 + 0xb8);
        lVar17 = puVar9[3];
        if (lVar17 == 0) {
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            puVar9 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
          uVar8 = *puVar9;
          lVar17 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
          FUN_0414c60c(lVar17,uVar8,
                       *(undefined8 *)
                        System_Collections_Specialized_NotifyCollectionChangedAction_TypeInfo,0);
          plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
          *plVar10 = lVar17;
          thunk_FUN_036b7ad0(plVar10,lVar17);
        }
        *(long *)(lVar13 + 0x48) = lVar17;
        thunk_FUN_036b7ad0((long *)(lVar13 + 0x48),lVar17);
        lVar17 = *(long *)(lVar13 + 0x50);
        lVar16 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
        FUN_06ea66f4(lVar16,0);
        puVar4 = OVRPassthroughColorLut_TypeInfo;
        puVar5 = UnityEngine_UIElements_NavigateFocusRing_TypeInfo;
        puVar3 = PTR_DAT_079f5aa0;
        if (lVar16 != 0) {
          *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)OVRDynamicObject_TypeInfo;
          thunk_FUN_036b7ad0();
          *(undefined8 *)(lVar16 + 0x38) = *(undefined8 *)puVar4;
          thunk_FUN_036b7ad0();
          uVar8 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
          FUN_0414c60c();
          *(undefined8 *)(lVar16 + 0x50) = uVar8;
          thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x50),uVar8);
          uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
          System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                    ();
          *(undefined8 *)(lVar16 + 0x58) = uVar8;
          thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x58),uVar8);
          uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
          FUN_05620310();
          *(undefined8 *)(lVar16 + 0x60) = uVar8;
          thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x60),uVar8);
          if (lVar17 != 0) {
            FUN_04a78624(lVar17,lVar16,*(undefined8 *)PTR_DAT_07a029b0);
            lVar17 = *(long *)(lVar13 + 0x50);
            lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                         UnityEngine_UIElements_NavigationCancelEvent_TypeInfo);
            FUN_06ea66f4(lVar16,0);
            puVar3 = OVRPlugin_TypeInfo;
            if (lVar16 != 0) {
              *(undefined8 *)(lVar16 + 0x30) =
                   *(undefined8 *)OVRMixedRealityCaptureConfiguration_TypeInfo;
              thunk_FUN_036b7ad0();
              *(undefined8 *)(lVar16 + 0x38) = *(undefined8 *)puVar3;
              thunk_FUN_036b7ad0();
              uVar8 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
              FUN_0414c60c();
              *(undefined8 *)(lVar16 + 0x50) = uVar8;
              thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x50),uVar8);
              uVar8 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
              System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                        ();
              *(undefined8 *)(lVar16 + 0x58) = uVar8;
              thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x58),uVar8);
              uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                          UnityEngine_UIElements_NavigateFocusRing_TypeInfo);
              FUN_05620310();
              *(undefined8 *)(lVar16 + 0x60) = uVar8;
              thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x60),uVar8);
              puVar3 = System_Net_NclUtilities_TypeInfo;
              if (lVar17 != 0) {
                FUN_04a78624(lVar17,lVar16,*(undefined8 *)PTR_DAT_07a029b0);
                lVar17 = *(long *)(lVar13 + 0x50);
                lVar16 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                FUN_06ea6978(lVar16,0);
                puVar4 = OVRBoneCapsule_TypeInfo;
                puVar5 = PTR_DAT_07a20ff8;
                puVar3 = PTR_DAT_079f5040;
                if (lVar16 != 0) {
                  *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)OVRMarkerPayloadType_TypeInfo;
                  thunk_FUN_036b7ad0();
                  *(undefined8 *)(lVar16 + 0x38) = *(undefined8 *)puVar4;
                  thunk_FUN_036b7ad0();
                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
                  FUN_0414d94c();
                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x50),uVar8);
                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                  FUN_0554c13c();
                  *(undefined8 *)(lVar16 + 0x58) = uVar8;
                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x58),uVar8);
                  puVar3 = UnityEngine_UIElements_Internal_MultiColumnHeaderColumn_TypeInfo;
                  lVar11 = *(long *)UnityEngine_UIElements_Internal_MultiColumnHeaderColumn_TypeInfo
                  ;
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_036a1978();
                    lVar11 = *(long *)puVar3;
                  }
                  puVar5 = PTR_DAT_07a029b0;
                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                  lVar18 = puVar9[4];
                  if (lVar18 == 0) {
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      thunk_FUN_036a1978();
                      puVar9 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
                    }
                    uVar8 = *puVar9;
                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
                    FUN_0414d94c(lVar18,uVar8,*(undefined8 *)OVRBody_TypeInfo,0);
                    plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                    *plVar10 = lVar18;
                    thunk_FUN_036b7ad0(plVar10,lVar18);
                  }
                  *(long *)(lVar16 + 0x68) = lVar18;
                  thunk_FUN_036b7ad0((long *)(lVar16 + 0x68),lVar18);
                  if (lVar17 != 0) {
                    FUN_04a78624(lVar17,lVar16,*(undefined8 *)puVar5);
                    puVar3 = 
                    UnityEngine_UIElements_ListViewReorderableDragAndDropController_TypeInfo;
                    lVar16 = *(long *)(lVar7 + 0x10);
                    lVar17 = *(long *)
                              UnityEngine_UIElements_ListViewReorderableDragAndDropController_TypeInfo
                    ;
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    puVar4 = UnityEngine_AI_NavMeshTriangulation_TypeInfo;
                    if (lVar16 != 0) {
                      uVar1 = *(uint *)(lVar7 + 0x18);
                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                        plVar10 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar10 = lVar13;
                        thunk_FUN_036b7ad0(plVar10,lVar13);
                      }
                      else {
                        FUN_0459f03c(lVar7,lVar13,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                      }
                      uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                      FUN_06ea7ee0(uVar8,0);
                      lVar13 = *(long *)(lVar7 + 0x10);
                      lVar16 = *(long *)puVar3;
                      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                      if (lVar13 != 0) {
                        uVar1 = *(uint *)(lVar7 + 0x18);
                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                          puVar9 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                          *puVar9 = uVar8;
                          thunk_FUN_036b7ad0(puVar9,uVar8);
                        }
                        else {
                          FUN_0459f03c(lVar7,uVar8,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                          
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                        FUN_06ea5298(lVar13,0);
                        if (lVar13 != 0) {
                          *(undefined8 *)(lVar13 + 0x30) =
                               *(undefined8 *)UnityEngine_EventSystems_OVRPointerEventData_TypeInfo;
                          thunk_FUN_036b7ad0((undefined8 *)(lVar13 + 0x30));
                          lVar17 = *(long *)(lVar13 + 0x50);
                          lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                              
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  );
                          FUN_06ea66f4(lVar16,0);
                          puVar3 = OVRMeshRenderer_TypeInfo;
                          if (lVar16 != 0) {
                            *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)OVRResources_TypeInfo;
                            thunk_FUN_036b7ad0();
                            *(undefined8 *)(lVar16 + 0x38) = *(undefined8 *)puVar3;
                            thunk_FUN_036b7ad0();
                            puVar3 = PTR_DAT_079fbc70;
                            uVar8 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
                            FUN_0414c60c();
                            *(undefined8 *)(lVar16 + 0x50) = uVar8;
                            thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x50),uVar8);
                            uVar8 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
                            System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                      ();
                            *(undefined8 *)(lVar16 + 0x58) = uVar8;
                            thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x58),uVar8);
                            uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_NavigateFocusRing_TypeInfo)
                            ;
                            FUN_05620310();
                            *(undefined8 *)(lVar16 + 0x60) = uVar8;
                            thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x60),uVar8);
                            if (lVar17 != 0) {
                              FUN_04a78624(lVar17,lVar16,*(undefined8 *)puVar5);
                              lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                      
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                              FUN_06ea5298(lVar16,0);
                              uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                              FUN_0414c60c();
                              puVar3 = Newtonsoft_Json_JsonWriterException_TypeInfo;
                              if (lVar16 != 0) {
                                *(undefined8 *)(lVar16 + 0x48) = uVar8;
                                thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x48),uVar8);
                                lVar11 = *(long *)(lVar16 + 0x50);
                                lVar17 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                FUN_06e99510(lVar17,0);
                                puVar2 = Meta_XR_Editor_FalcoOVRTelemetry_OVRFalcoTelemetry_TypeInfo
                                ;
                                puVar4 = UnityEngine_InputForUI_NavigationEvent_TypeInfo;
                                puVar5 = PTR_DAT_07a00dd0;
                                puVar3 = PTR_DAT_079f5048;
                                if (lVar17 != 0) {
                                  *(undefined8 *)(lVar17 + 0x30) =
                                       *(undefined8 *)OVRGazePointer_TypeInfo;
                                  thunk_FUN_036b7ad0();
                                  *(undefined8 *)(lVar17 + 0x38) = *(undefined8 *)puVar2;
                                  thunk_FUN_036b7ad0();
                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
                                  FUN_0414cefc();
                                  *(undefined8 *)(lVar17 + 0x50) = uVar8;
                                  thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x50),uVar8);
                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                  FUN_055487a4();
                                  *(undefined8 *)(lVar17 + 0x58) = uVar8;
                                  thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x58),uVar8);
                                  uVar8 = *(undefined8 *)puVar4;
                                  if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
                                    thunk_FUN_036a1978();
                                  }
                                  uVar8 = FUN_05e26f18(uVar8,0);
                                  FUN_06ea7380(lVar17,uVar8,0);
                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
                                  FUN_0414cefc();
                                  *(undefined8 *)(lVar17 + 0x88) = uVar8;
                                  thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x88),uVar8);
                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                  FUN_055487a4();
                                  *(undefined8 *)(lVar17 + 0x90) = uVar8;
                                  thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x90),uVar8);
                                  puVar5 = 
                                  UnityEngine_UIElements_Internal_MultiColumnHeaderColumn_TypeInfo;
                                  puVar3 = PTR_DAT_07a029b0;
                                  if (lVar11 != 0) {
                                    FUN_04a78624(lVar11,lVar17,*(undefined8 *)PTR_DAT_07a029b0);
                                    lVar11 = *(long *)(lVar16 + 0x50);
                                    lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                 System_Net_NclUtilities_TypeInfo);
                                    FUN_06ea6978(lVar17,0);
                                    puVar2 = OVRNativeBuffer_TypeInfo;
                                    puVar4 = OVRHumanBodyBonesMappingsInterface_TypeInfo;
                                    if (lVar17 != 0) {
                                      *(undefined8 *)(lVar17 + 0x30) =
                                           *(undefined8 *)OVRNativeBuffer_TypeInfo;
                                      thunk_FUN_036b7ad0();
                                      *(undefined8 *)(lVar17 + 0x38) = *(undefined8 *)puVar4;
                                      thunk_FUN_036b7ad0();
                                      uVar8 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
                                      FUN_0414d94c();
                                      *(undefined8 *)(lVar17 + 0x50) = uVar8;
                                      thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x50),uVar8);
                                      uVar8 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5040);
                                      FUN_0554c13c();
                                      *(undefined8 *)(lVar17 + 0x58) = uVar8;
                                      thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x58),uVar8);
                                      lVar18 = *(long *)puVar5;
                                      if (*(int *)(lVar18 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        lVar18 = *(long *)puVar5;
                                      }
                                      puVar9 = *(undefined8 **)(lVar18 + 0xb8);
                                      lVar19 = puVar9[5];
                                      if (lVar19 == 0) {
                                        if (*(int *)(lVar18 + 0xe4) == 0) {
                                          thunk_FUN_036a1978();
                                          puVar9 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                        }
                                        uVar8 = *puVar9;
                                        lVar19 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8)
                                        ;
                                        FUN_0414d94c(lVar19,uVar8,
                                                     *(undefined8 *)
                                                      OVR_OpenVR_NotificationBitmap_t_TypeInfo,0);
                                        plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28)
                                        ;
                                        *plVar10 = lVar19;
                                        thunk_FUN_036b7ad0(plVar10,lVar19);
                                      }
                                      *(long *)(lVar17 + 0x68) = lVar19;
                                      thunk_FUN_036b7ad0((long *)(lVar17 + 0x68),lVar19);
                                      lVar18 = *(long *)puVar5;
                                      if (*(int *)(lVar18 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        lVar18 = *(long *)puVar5;
                                      }
                                      puVar9 = *(undefined8 **)(lVar18 + 0xb8);
                                      lVar19 = puVar9[6];
                                      if (lVar19 == 0) {
                                        if (*(int *)(lVar18 + 0xe4) == 0) {
                                          thunk_FUN_036a1978();
                                          puVar9 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                        }
                                        uVar8 = *puVar9;
                                        lVar19 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8)
                                        ;
                                        FUN_0414d94c(lVar19,uVar8,
                                                     *(undefined8 *)
                                                      Unity_AppUI_Core_NotificationManager_TypeInfo,
                                                     0);
                                        plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30)
                                        ;
                                        *plVar10 = lVar19;
                                        thunk_FUN_036b7ad0(plVar10,lVar19);
                                      }
                                      *(long *)(lVar17 + 0x70) = lVar19;
                                      thunk_FUN_036b7ad0((long *)(lVar17 + 0x70),lVar19);
                                      if (lVar11 != 0) {
                                        FUN_04a78624(lVar11,lVar17,*(undefined8 *)puVar3);
                                        lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                          
                                                  System_Net_NclUtilities_TypeInfo);
                                        FUN_06ea6978(lVar17,0);
                                        puVar4 = OVRInput_TypeInfo;
                                        if (lVar17 != 0) {
                                          *(undefined8 *)(lVar17 + 0x30) =
                                               *(undefined8 *)OVREyeGaze_TypeInfo;
                                          thunk_FUN_036b7ad0();
                                          *(undefined8 *)(lVar17 + 0x38) = *(undefined8 *)puVar4;
                                          thunk_FUN_036b7ad0();
                                          uVar8 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8
                                                                    );
                                          FUN_0414d94c();
                                          *(undefined8 *)(lVar17 + 0x50) = uVar8;
                                          thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x50),uVar8);
                                          uVar8 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5040
                                                                    );
                                          FUN_0554c13c();
                                          *(undefined8 *)(lVar17 + 0x58) = uVar8;
                                          thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x58),uVar8);
                                          uVar8 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70
                                                                    );
                                          FUN_0414c60c();
                                          *(undefined8 *)(lVar17 + 0x48) = uVar8;
                                          thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x48),uVar8);
                                          puVar4 = Unity_InferenceEngine_Layers_NearestMode_TypeInfo
                                          ;
                                          if (*(long *)(lVar16 + 0x50) != 0) {
                                            FUN_04a78624(*(long *)(lVar16 + 0x50),lVar17,
                                                         *(undefined8 *)puVar3);
                                            lVar11 = *(long *)(lVar16 + 0x50);
                                            lVar17 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                                            FUN_06ea680c(lVar17,0);
                                            puVar3 = OVROverlay_TypeInfo;
                                            if (lVar17 != 0) {
                                              *(undefined8 *)(lVar17 + 0x30) =
                                                   *(undefined8 *)OVRGLTFComponentType_TypeInfo;
                                              thunk_FUN_036b7ad0();
                                              *(undefined8 *)(lVar17 + 0x38) = *(undefined8 *)puVar3
                                              ;
                                              thunk_FUN_036b7ad0();
                                              puVar3 = PTR_DAT_07a00dd0;
                                              uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                          PTR_DAT_07a00dd0);
                                              FUN_0414cefc();
                                              *(undefined8 *)(lVar17 + 0x50) = uVar8;
                                              thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x50),uVar8
                                                                );
                                              uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                          PTR_DAT_079f5048);
                                              FUN_055487a4();
                                              *(undefined8 *)(lVar17 + 0x58) = uVar8;
                                              thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x58),uVar8
                                                                );
                                              lVar18 = *(long *)puVar5;
                                              if (*(int *)(lVar18 + 0xe4) == 0) {
                                                thunk_FUN_036a1978();
                                                lVar18 = *(long *)puVar5;
                                              }
                                              puVar9 = *(undefined8 **)(lVar18 + 0xb8);
                                              lVar19 = puVar9[7];
                                              if (lVar19 == 0) {
                                                if (*(int *)(lVar18 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  puVar9 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                                }
                                                uVar8 = *puVar9;
                                                lVar19 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                                FUN_0414cefc(lVar19,uVar8,
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Specialized_NotifyCollectionChangedEventArgs_TypeInfo
                                                  ,0);
                                                plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8)
                                                                  + 0x38);
                                                *plVar10 = lVar19;
                                                thunk_FUN_036b7ad0(plVar10,lVar19);
                                              }
                                              *(long *)(lVar17 + 0x68) = lVar19;
                                              thunk_FUN_036b7ad0((long *)(lVar17 + 0x68),lVar19);
                                              uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                              FUN_0414cefc();
                                              *(undefined8 *)(lVar17 + 0x70) = uVar8;
                                              thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x70),uVar8
                                                                );
                                              if (lVar11 != 0) {
                                                FUN_04a78624(lVar11,lVar17,
                                                             *(undefined8 *)PTR_DAT_07a029b0);
                                                lVar11 = *(long *)(lVar16 + 0x50);
                                                lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                          
                                                  Unity_InferenceEngine_Layers_NearestMode_TypeInfo)
                                                ;
                                                FUN_06ea680c(lVar17,0);
                                                puVar3 = OVRPassthroughLayer_TypeInfo;
                                                if (lVar17 != 0) {
                                                  *(undefined8 *)(lVar17 + 0x30) =
                                                       *(undefined8 *)
                                                        OVROverlayCanvasSettings_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar17 + 0x38) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0();
                                                  puVar3 = PTR_DAT_07a00dd0;
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_07a00dd0);
                                                  FUN_0414cefc();
                                                  *(undefined8 *)(lVar17 + 0x50) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x50),
                                                                     uVar8);
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079f5048);
                                                  FUN_055487a4();
                                                  *(undefined8 *)(lVar17 + 0x58) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x58),
                                                                     uVar8);
                                                  lVar18 = *(long *)puVar5;
                                                  if (*(int *)(lVar18 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar18 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar18 + 0xb8);
                                                  lVar19 = puVar9[8];
                                                  if (lVar19 == 0) {
                                                    if (*(int *)(lVar18 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_0414cefc(lVar19,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x40);
                                                  *plVar10 = lVar19;
                                                  thunk_FUN_036b7ad0(plVar10,lVar19);
                                                  }
                                                  puVar4 = PTR_DAT_079fbc70;
                                                  *(long *)(lVar17 + 0x68) = lVar19;
                                                  thunk_FUN_036b7ad0((long *)(lVar17 + 0x68),lVar19)
                                                  ;
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                                  FUN_0414cefc();
                                                  *(undefined8 *)(lVar17 + 0x70) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x70),
                                                                     uVar8);
                                                  puVar3 = PTR_DAT_07a029b0;
                                                  if (lVar11 != 0) {
                                                    FUN_04a78624(lVar11,lVar17,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    if (*(long *)(lVar13 + 0x50) != 0) {
                                                      FUN_04a78624(*(long *)(lVar13 + 0x50),lVar16,
                                                                   *(undefined8 *)puVar3);
                                                      puVar3 = 
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  ;
                                                  lVar17 = *(long *)(lVar13 + 0x50);
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  );
                                                  FUN_06ea66f4(lVar16,0);
                                                  puVar6 = OVRBounded2D_TypeInfo;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x30) =
                                                         *(undefined8 *)OVRBoundary_TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar16 + 0x38) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_036b7ad0();
                                                    uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_0414c60c();
                                                    *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x50)
                                                                       ,uVar8);
                                                    uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                PTR_DAT_079f5aa0);
                                                                                                        
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar16 + 0x58) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x58),
                                                                     uVar8);
                                                  if (lVar17 != 0) {
                                                    FUN_04a78624(lVar17,lVar16,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar16,0);
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                                                  FUN_0414c60c();
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x48) = uVar8;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x48)
                                                                       ,uVar8);
                                                    lVar11 = *(long *)(lVar16 + 0x50);
                                                    lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  System_Net_NclUtilities_TypeInfo);
                                                  FUN_06ea6978(lVar17,0);
                                                  puVar4 = OVRExternalComposition_TypeInfo;
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x30) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar17 + 0x38) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_036b7ad0();
                                                    uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                PTR_DAT_07a20ff8);
                                                    FUN_0414d94c();
                                                    *(undefined8 *)(lVar17 + 0x50) = uVar8;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x50)
                                                                       ,uVar8);
                                                    uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                PTR_DAT_079f5040);
                                                    FUN_0554c13c();
                                                    *(undefined8 *)(lVar17 + 0x58) = uVar8;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x58)
                                                                       ,uVar8);
                                                    lVar18 = *(long *)puVar5;
                                                    if (*(int *)(lVar18 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      lVar18 = *(long *)puVar5;
                                                    }
                                                    puVar9 = *(undefined8 **)(lVar18 + 0xb8);
                                                    lVar19 = puVar9[9];
                                                    if (lVar19 == 0) {
                                                      if (*(int *)(lVar18 + 0xe4) == 0) {
                                                        thunk_FUN_036a1978();
                                                        puVar9 = *(undefined8 **)
                                                                  (*(long *)puVar5 + 0xb8);
                                                      }
                                                      uVar8 = *puVar9;
                                                      lVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                   PTR_DAT_07a20ff8)
                                                      ;
                                                      FUN_0414d94c(lVar19,uVar8,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  System_ComponentModel_NotifyParentPropertyAttribute_TypeInfo
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x48);
                                                  *plVar10 = lVar19;
                                                  thunk_FUN_036b7ad0(plVar10,lVar19);
                                                  }
                                                  *(long *)(lVar17 + 0x68) = lVar19;
                                                  thunk_FUN_036b7ad0((long *)(lVar17 + 0x68),lVar19)
                                                  ;
                                                  lVar18 = *(long *)puVar5;
                                                  if (*(int *)(lVar18 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar18 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar18 + 0xb8);
                                                  lVar19 = puVar9[10];
                                                  if (lVar19 == 0) {
                                                    if (*(int *)(lVar18 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar19,uVar8,
                                                                 *(undefined8 *)
                                                                  Mono_Http_NtlmClient_TypeInfo,0);
                                                    plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0x50);
                                                    *plVar10 = lVar19;
                                                    thunk_FUN_036b7ad0(plVar10,lVar19);
                                                  }
                                                  *(long *)(lVar17 + 0x70) = lVar19;
                                                  thunk_FUN_036b7ad0((long *)(lVar17 + 0x70),lVar19)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_04a78624(lVar11,lVar17,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    lVar11 = *(long *)(lVar16 + 0x50);
                                                    lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_06ea66f4(lVar17,0);
                                                    puVar4 = OVRGLTFAnimatinonNode_TypeInfo;
                                                    if (lVar17 != 0) {
                                                      *(undefined8 *)(lVar17 + 0x30) =
                                                           *(undefined8 *)OVRProfile_TypeInfo;
                                                      thunk_FUN_036b7ad0();
                                                      *(undefined8 *)(lVar17 + 0x38) =
                                                           *(undefined8 *)puVar4;
                                                      thunk_FUN_036b7ad0();
                                                      uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                  PTR_DAT_079fbc70);
                                                      FUN_0414c60c();
                                                      *(undefined8 *)(lVar17 + 0x50) = uVar8;
                                                      thunk_FUN_036b7ad0((undefined8 *)
                                                                         (lVar17 + 0x50),uVar8);
                                                      uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                  PTR_DAT_079f5aa0);
                                                                                                            
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar17 + 0x58) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x58),
                                                                     uVar8);
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_UIElements_NavigateFocusRing_TypeInfo)
                                                  ;
                                                  FUN_05620310();
                                                  *(undefined8 *)(lVar17 + 0x60) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x60),
                                                                     uVar8);
                                                  puVar4 = PTR_DAT_07a029b0;
                                                  if (lVar11 != 0) {
                                                    FUN_04a78624(lVar11,lVar17,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    if (*(long *)(lVar13 + 0x50) != 0) {
                                                      FUN_04a78624(*(long *)(lVar13 + 0x50),lVar16,
                                                                   *(undefined8 *)puVar4);
                                                      lVar17 = *(long *)(lVar13 + 0x50);
                                                      lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                   puVar3);
                                                      FUN_06ea66f4(lVar16,0);
                                                      puVar6 = OVROverlayCanvas_TypeInfo;
                                                      puVar4 = PTR_DAT_079fbc70;
                                                      if (lVar16 != 0) {
                                                        *(undefined8 *)(lVar16 + 0x30) =
                                                             *(undefined8 *)OVRHandTest_TypeInfo;
                                                        thunk_FUN_036b7ad0();
                                                        *(undefined8 *)(lVar16 + 0x38) =
                                                             *(undefined8 *)puVar6;
                                                        thunk_FUN_036b7ad0();
                                                        uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                    puVar4);
                                                        FUN_0414c60c();
                                                        *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                        thunk_FUN_036b7ad0((undefined8 *)
                                                                           (lVar16 + 0x50),uVar8);
                                                        uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                    PTR_DAT_079f5aa0
                                                                                  );
                                                                                                                
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar16 + 0x58) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x58),
                                                                     uVar8);
                                                  if (lVar17 != 0) {
                                                    FUN_04a78624(lVar17,lVar16,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar16,0);
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                                                  FUN_0414c60c();
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x48) = uVar8;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x48)
                                                                       ,uVar8);
                                                    lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  System_Net_NclUtilities_TypeInfo);
                                                  FUN_06ea6978(lVar17,0);
                                                  puVar4 = OVRPermissionsRequester_TypeInfo;
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x30) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar17 + 0x38) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_036b7ad0();
                                                    uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                PTR_DAT_07a20ff8);
                                                    FUN_0414d94c();
                                                    *(undefined8 *)(lVar17 + 0x50) = uVar8;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x50)
                                                                       ,uVar8);
                                                    uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                PTR_DAT_079f5040);
                                                    FUN_0554c13c();
                                                    *(undefined8 *)(lVar17 + 0x58) = uVar8;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x58)
                                                                       ,uVar8);
                                                    lVar11 = *(long *)puVar5;
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      lVar11 = *(long *)puVar5;
                                                    }
                                                    puVar4 = 
                                                  UnityEngine_UIElements_ListViewReorderableDragAndDropController_TypeInfo
                                                  ;
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0xb];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                  System_Net_NtlmClient_TypeInfo,0);
                                                    plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0x58);
                                                    *plVar10 = lVar18;
                                                    thunk_FUN_036b7ad0(plVar10,lVar18);
                                                  }
                                                  puVar9 = (undefined8 *)PTR_DAT_07a029b0;
                                                  *(long *)(lVar17 + 0x68) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar17 + 0x68),lVar18)
                                                  ;
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar14 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar14[0xc];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar14 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar14;
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                  Mono_Http_NtlmSession_TypeInfo,0);
                                                    plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0x60);
                                                    *plVar10 = lVar18;
                                                    thunk_FUN_036b7ad0(plVar10,lVar18);
                                                    puVar9 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar17 + 0x70) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar17 + 0x70),lVar18)
                                                  ;
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079fbc70);
                                                  FUN_0414c60c();
                                                  *(undefined8 *)(lVar17 + 0x48) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar17 + 0x48),
                                                                     uVar8);
                                                  if (*(long *)(lVar16 + 0x50) != 0) {
                                                    FUN_04a78624(*(long *)(lVar16 + 0x50),lVar17,
                                                                 *puVar9);
                                                    if (*(long *)(lVar13 + 0x50) != 0) {
                                                      FUN_04a78624(*(long *)(lVar13 + 0x50),lVar16,
                                                                   *puVar9);
                                                      lVar17 = *(long *)(lVar13 + 0x50);
                                                      lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                      
                                                  System_Net_NclUtilities_TypeInfo);
                                                  FUN_06ea6978(lVar16,0);
                                                  puVar2 = OVRCameraRig_TypeInfo;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x30) =
                                                         *(undefined8 *)
                                                          OVRMarkerPayloadType_TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar16 + 0x38) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0();
                                                    uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                PTR_DAT_07a20ff8);
                                                    FUN_0414d94c();
                                                    *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x50)
                                                                       ,uVar8);
                                                    uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                PTR_DAT_079f5040);
                                                    FUN_0554c13c();
                                                    *(undefined8 *)(lVar16 + 0x58) = uVar8;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x58)
                                                                       ,uVar8);
                                                    lVar11 = *(long *)puVar5;
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      lVar11 = *(long *)puVar5;
                                                    }
                                                    puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                    lVar18 = puVar9[0xd];
                                                    if (lVar18 == 0) {
                                                      if (*(int *)(lVar11 + 0xe4) == 0) {
                                                        thunk_FUN_036a1978();
                                                        puVar9 = *(undefined8 **)
                                                                  (*(long *)puVar5 + 0xb8);
                                                      }
                                                      uVar8 = *puVar9;
                                                      lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                   PTR_DAT_07a20ff8)
                                                      ;
                                                      FUN_0414d94c(lVar18,uVar8,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Mono_Security_Protocol_Ntlm_NtlmSettings_TypeInfo,
                                                  0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x68);
                                                  *plVar10 = lVar18;
                                                  thunk_FUN_036b7ad0(plVar10,lVar18);
                                                  }
                                                  puVar2 = PTR_DAT_07a029b0;
                                                  *(long *)(lVar16 + 0x68) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar16 + 0x68),lVar18)
                                                  ;
                                                  if (lVar17 != 0) {
                                                    FUN_04a78624(lVar17,lVar16,*(undefined8 *)puVar2
                                                                );
                                                    lVar16 = *(long *)(lVar7 + 0x10);
                                                    lVar17 = *(long *)puVar4;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar16 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar13;
                                                        thunk_FUN_036b7ad0();
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x30) =
                                                         *(undefined8 *)
                                                          OVROverlayCanvasManager_TypeInfo;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar13 + 0x30)
                                                                      );
                                                    lVar17 = *(long *)(lVar13 + 0x50);
                                                    lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_06ea66f4(lVar16,0);
                                                    puVar2 = OVRGLTFAccessor_TypeInfo;
                                                    if (lVar16 != 0) {
                                                      *(undefined8 *)(lVar16 + 0x30) =
                                                           *(undefined8 *)OVRMarkerPayload_TypeInfo;
                                                      thunk_FUN_036b7ad0();
                                                      *(undefined8 *)(lVar16 + 0x38) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_036b7ad0();
                                                      uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                  PTR_DAT_079fbc70);
                                                      FUN_0414c60c();
                                                      *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                      thunk_FUN_036b7ad0((undefined8 *)
                                                                         (lVar16 + 0x50),uVar8);
                                                      uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                  PTR_DAT_079f5aa0);
                                                                                                            
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar16 + 0x58) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x58),
                                                                     uVar8);
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_UIElements_NavigateFocusRing_TypeInfo)
                                                  ;
                                                  FUN_05620310();
                                                  *(undefined8 *)(lVar16 + 0x60) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x60),
                                                                     uVar8);
                                                  if (lVar17 != 0) {
                                                    FUN_04a78624(lVar17,lVar16,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    lVar17 = *(long *)(lVar13 + 0x50);
                                                    lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_06ea66f4(lVar16,0);
                                                    puVar3 = OVRBounded3D_TypeInfo;
                                                    if (lVar16 != 0) {
                                                      *(undefined8 *)(lVar16 + 0x30) =
                                                           *(undefined8 *)OVRManager_TypeInfo;
                                                      thunk_FUN_036b7ad0();
                                                      *(undefined8 *)(lVar16 + 0x38) =
                                                           *(undefined8 *)puVar3;
                                                      thunk_FUN_036b7ad0();
                                                      uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                  PTR_DAT_079fbc70);
                                                      FUN_0414c60c();
                                                      *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                      thunk_FUN_036b7ad0((undefined8 *)
                                                                         (lVar16 + 0x50),uVar8);
                                                      uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                  PTR_DAT_079f5aa0);
                                                                                                            
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar16 + 0x58) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x58),
                                                                     uVar8);
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_UIElements_NavigateFocusRing_TypeInfo)
                                                  ;
                                                  FUN_05620310();
                                                  *(undefined8 *)(lVar16 + 0x60) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x60),
                                                                     uVar8);
                                                  if (lVar17 != 0) {
                                                    FUN_04a78624(lVar17,lVar16,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    lVar16 = *(long *)(lVar7 + 0x10);
                                                    lVar17 = *(long *)puVar4;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    puVar3 = PTR_DAT_079fbc70;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_036b7ad0(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x30) =
                                                         *(undefined8 *)OVRHaptics_TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_0414c60c();
                                                    *(undefined8 *)(lVar13 + 0x48) = uVar8;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar13 + 0x48)
                                                                       ,uVar8);
                                                    lVar17 = *(long *)(lVar13 + 0x50);
                                                    lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  );
                                                  FUN_06ea66f4(lVar16,0);
                                                  puVar2 = OVRGLTFLoader_TypeInfo;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Interaction_Input_OVRPointerPoseSelector_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar16 + 0x38) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0();
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                                  FUN_0414c60c();
                                                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x50),
                                                                     uVar8);
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079f5aa0);
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar16 + 0x58) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x58),
                                                                     uVar8);
                                                  if (lVar17 != 0) {
                                                    FUN_04a78624(lVar17,lVar16,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    lVar17 = *(long *)(lVar13 + 0x50);
                                                    lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  );
                                                  FUN_06ea66f4(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVRGLTFAnimationNodeMorphTargetHandler_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  puVar9 = (undefined8 *)PTR_DAT_079fbc70;
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079fbc70);
                                                  FUN_0414c60c();
                                                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x50),
                                                                     uVar8);
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079f5aa0);
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar16 + 0x58) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x58),
                                                                     uVar8);
                                                  puVar14 = (undefined8 *)PTR_DAT_07a029b0;
                                                  if (lVar17 != 0) {
                                                    FUN_04a78624(lVar17,lVar16,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    puVar3 = 
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  ;
                                                  lVar17 = *(long *)(lVar13 + 0x50);
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  );
                                                  FUN_06ea66f4(lVar16,0);
                                                  puVar2 = OVROverlayCanvas_TMPChanged_TypeInfo;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x30) =
                                                         *(undefined8 *)
                                                          OVRNodeStateProperties_TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar16 + 0x38) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0();
                                                    lVar11 = *(long *)puVar5;
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      lVar11 = *(long *)puVar5;
                                                    }
                                                    puVar15 = *(undefined8 **)(lVar11 + 0xb8);
                                                    lVar18 = puVar15[0xe];
                                                    if (lVar18 == 0) {
                                                      if (*(int *)(lVar11 + 0xe4) == 0) {
                                                        thunk_FUN_036a1978();
                                                        puVar15 = *(undefined8 **)
                                                                   (*(long *)puVar5 + 0xb8);
                                                      }
                                                      uVar8 = *puVar15;
                                                      lVar18 = thunk_FUN_0367fe20(*puVar9);
                                                      FUN_0414c60c(lVar18,uVar8,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Zenject_NullBindingFinalizer_TypeInfo,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x70);
                                                  *plVar10 = lVar18;
                                                  thunk_FUN_036b7ad0(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar16 + 0x50) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar16 + 0x50),lVar18)
                                                  ;
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar15 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar15[0xf];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar15 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar15;
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5aa0);
                                                                                                        
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            (lVar18,uVar8,
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Linq_Expressions_Interpreter_NullCheckInstruction_TypeInfo
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x78);
                                                  *plVar10 = lVar18;
                                                  thunk_FUN_036b7ad0(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar16 + 0x58) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar16 + 0x58),lVar18)
                                                  ;
                                                  if (lVar17 != 0) {
                                                    FUN_04a78624(lVar17,lVar16,*puVar14);
                                                    lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar16,0);
                                                  lVar17 = *(long *)puVar5;
                                                  if (*(int *)(lVar17 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar17 = *(long *)puVar5;
                                                  }
                                                  puVar14 = *(undefined8 **)(lVar17 + 0xb8);
                                                  lVar11 = puVar14[0x10];
                                                  if (lVar11 == 0) {
                                                    if (*(int *)(lVar17 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar14 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar14;
                                                    lVar11 = thunk_FUN_0367fe20(*puVar9);
                                                    FUN_0414c60c(lVar11,uVar8,
                                                                 *(undefined8 *)
                                                                  System_NullConsoleDriver_TypeInfo,
                                                                 0);
                                                    plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0x80);
                                                    *plVar10 = lVar11;
                                                    thunk_FUN_036b7ad0(plVar10,lVar11);
                                                  }
                                                  if (lVar16 != 0) {
                                                    *(long *)(lVar16 + 0x48) = lVar11;
                                                    thunk_FUN_036b7ad0((long *)(lVar16 + 0x48),
                                                                       lVar11);
                                                    lVar11 = *(long *)(lVar16 + 0x50);
                                                    lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  Unity_InferenceEngine_Layers_NearestMode_TypeInfo)
                                                  ;
                                                  FUN_06ea680c(lVar17,0);
                                                  puVar2 = OVRLocatable_TypeInfo;
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x30) =
                                                         *(undefined8 *)OVRRaycaster_TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar17 + 0x38) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0();
                                                    lVar18 = *(long *)puVar5;
                                                    if (*(int *)(lVar18 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      lVar18 = *(long *)puVar5;
                                                    }
                                                    puVar14 = *(undefined8 **)(lVar18 + 0xb8);
                                                    lVar19 = puVar14[0x11];
                                                    if (lVar19 == 0) {
                                                      if (*(int *)(lVar18 + 0xe4) == 0) {
                                                        thunk_FUN_036a1978();
                                                        puVar14 = *(undefined8 **)
                                                                   (*(long *)puVar5 + 0xb8);
                                                      }
                                                      uVar8 = *puVar14;
                                                      lVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                   PTR_DAT_07a00dd0)
                                                      ;
                                                      FUN_0414cefc(lVar19,uVar8,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  UnityThreading_NullDispatcher_TypeInfo,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x88);
                                                  *plVar10 = lVar19;
                                                  thunk_FUN_036b7ad0(plVar10,lVar19);
                                                  puVar9 = (undefined8 *)PTR_DAT_079fbc70;
                                                  }
                                                  *(long *)(lVar17 + 0x50) = lVar19;
                                                  thunk_FUN_036b7ad0((long *)(lVar17 + 0x50),lVar19)
                                                  ;
                                                  lVar18 = *(long *)puVar5;
                                                  if (*(int *)(lVar18 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar18 = *(long *)puVar5;
                                                  }
                                                  puVar14 = *(undefined8 **)(lVar18 + 0xb8);
                                                  lVar19 = puVar14[0x12];
                                                  if (lVar19 == 0) {
                                                    if (*(int *)(lVar18 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar14 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar14;
                                                    lVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5048);
                                                    FUN_055487a4(lVar19,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_NullReferenceException_TypeInfo,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x90);
                                                  *plVar10 = lVar19;
                                                  thunk_FUN_036b7ad0(plVar10,lVar19);
                                                  puVar9 = (undefined8 *)PTR_DAT_079fbc70;
                                                  }
                                                  *(long *)(lVar17 + 0x58) = lVar19;
                                                  thunk_FUN_036b7ad0((long *)(lVar17 + 0x58),lVar19)
                                                  ;
                                                  lVar18 = *(long *)puVar5;
                                                  if (*(int *)(lVar18 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar18 = *(long *)puVar5;
                                                  }
                                                  puVar14 = *(undefined8 **)(lVar18 + 0xb8);
                                                  lVar19 = puVar14[0x13];
                                                  if (lVar19 == 0) {
                                                    if (*(int *)(lVar18 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar14 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar14;
                                                    lVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a00dd0);
                                                    FUN_0414cefc(lVar19,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Meta_XR_Editor_FalcoOVRTelemetry_NullTelemetryClient_TypeInfo
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x98);
                                                  *plVar10 = lVar19;
                                                  thunk_FUN_036b7ad0(plVar10,lVar19);
                                                  puVar9 = (undefined8 *)PTR_DAT_079fbc70;
                                                  }
                                                  *(long *)(lVar17 + 0x68) = lVar19;
                                                  thunk_FUN_036b7ad0((long *)(lVar17 + 0x68),lVar19)
                                                  ;
                                                  lVar18 = *(long *)puVar5;
                                                  if (*(int *)(lVar18 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar18 = *(long *)puVar5;
                                                  }
                                                  puVar14 = *(undefined8 **)(lVar18 + 0xb8);
                                                  lVar19 = puVar14[0x14];
                                                  if (lVar19 == 0) {
                                                    if (*(int *)(lVar18 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar14 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar14;
                                                    lVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a00dd0);
                                                    FUN_0414cefc(lVar19,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_TypeInfo
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xa0);
                                                  *plVar10 = lVar19;
                                                  thunk_FUN_036b7ad0(plVar10,lVar19);
                                                  puVar9 = (undefined8 *)PTR_DAT_079fbc70;
                                                  }
                                                  *(long *)(lVar17 + 0x70) = lVar19;
                                                  thunk_FUN_036b7ad0((long *)(lVar17 + 0x70),lVar19)
                                                  ;
                                                  puVar14 = (undefined8 *)PTR_DAT_07a029b0;
                                                  if (lVar11 != 0) {
                                                    FUN_04a78624(lVar11,lVar17,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    puVar2 = PTR_DAT_079f4540;
                                                    if (*(long *)(lVar13 + 0x50) != 0) {
                                                      FUN_04a78624(*(long *)(lVar13 + 0x50),lVar16,
                                                                   *puVar14);
                                                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                                        thunk_FUN_036a1978();
                                                      }
                                                      uVar12 = FUN_0717a688(0);
                                                      if ((uVar12 & 1) != 0) {
                                                        lVar17 = *(long *)(lVar13 + 0x50);
                                                        lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                     puVar3);
                                                        FUN_06ea66f4(lVar16,0);
                                                        if (lVar16 == 0) goto LAB_06eb5ee8;
                                                        *(undefined8 *)(lVar16 + 0x30) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  uVar8 = thunk_FUN_0367fe20(*puVar9);
                                                  FUN_0414c60c();
                                                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x50),
                                                                     uVar8);
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079f5aa0);
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar16 + 0x58) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x58),
                                                                     uVar8);
                                                  if (lVar17 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar17,lVar16,*puVar14);
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar16,0);
                                                  uVar8 = thunk_FUN_0367fe20(*puVar9);
                                                  FUN_0414c60c();
                                                  if (lVar16 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar16 + 0x48) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x48),
                                                                     uVar8);
                                                  lVar11 = *(long *)(lVar16 + 0x50);
                                                  lVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                               PTR_DAT_07a029d8);
                                                  FUN_06e958f8(lVar17,0);
                                                  if (lVar17 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar17 + 0x30) =
                                                       *(undefined8 *)OVRDisplay_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  lVar18 = *(long *)puVar5;
                                                  if (*(int *)(lVar18 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar18 = *(long *)puVar5;
                                                  }
                                                  puVar14 = *(undefined8 **)(lVar18 + 0xb8);
                                                  lVar19 = puVar14[0x15];
                                                  if (lVar19 == 0) {
                                                    if (*(int *)(lVar18 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar14 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar14;
                                                    lVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079fd998);
                                                    FUN_0414d3cc(lVar19,uVar8,
                                                                 *(undefined8 *)
                                                                  System_Number_TypeInfo,0);
                                                    plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0xa8);
                                                    *plVar10 = lVar19;
                                                    thunk_FUN_036b7ad0(plVar10,lVar19);
                                                    puVar9 = (undefined8 *)PTR_DAT_079fbc70;
                                                  }
                                                  *(long *)(lVar17 + 0x50) = lVar19;
                                                  thunk_FUN_036b7ad0((long *)(lVar17 + 0x50),lVar19)
                                                  ;
                                                  puVar14 = (undefined8 *)PTR_DAT_07a029b0;
                                                  if (lVar11 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar11,lVar17,
                                                               *(undefined8 *)PTR_DAT_07a029b0);
                                                  if (*(long *)(lVar13 + 0x50) == 0)
                                                  goto LAB_06eb5ee8;
                                                  FUN_04a78624(*(long *)(lVar13 + 0x50),lVar16,
                                                               *puVar14);
                                                  lVar17 = *(long *)(lVar13 + 0x50);
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_06ea66f4(lVar16,0);
                                                  if (lVar16 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar16 + 0x30) =
                                                       *(undefined8 *)OVRHapticsClip_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  uVar8 = thunk_FUN_0367fe20(*puVar9);
                                                  FUN_0414c60c();
                                                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x50),
                                                                     uVar8);
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079f5aa0);
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar16 + 0x58) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x58),
                                                                     uVar8);
                                                  if (lVar17 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar17,lVar16,*puVar14);
                                                  lVar17 = *(long *)(lVar13 + 0x50);
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_06ea66f4(lVar16,0);
                                                  if (lVar16 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar16 + 0x30) =
                                                       *(undefined8 *)OVRPlatformMenu_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  uVar8 = thunk_FUN_0367fe20(*puVar9);
                                                  FUN_0414c60c();
                                                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x50),
                                                                     uVar8);
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079f5aa0);
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            ();
                                                  *(undefined8 *)(lVar16 + 0x58) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x58),
                                                                     uVar8);
                                                  if (lVar17 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar17,lVar16,*puVar14);
                                                  }
                                                  lVar16 = *(long *)(lVar7 + 0x10);
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = PTR_DAT_079f4e28;
                                                  if (*(char *)(unaff_x19 + 0x1a) != '\0') {
                                                    if (*(long *)(unaff_x19 + 0x148) == 0)
                                                    goto LAB_06eb5ee8;
                                                    uVar8 = FUN_06ed5230(*(long *)(unaff_x19 + 0x148
                                                                                  ),0);
                                                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978(*(long *)puVar3);
                                                    }
                                                    uVar12 = FUN_071c0684(uVar8,0,0);
                                                    if ((uVar12 & 1) != 0) {
                                                      lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                      
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar13,0);
                                                  if (lVar13 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar13 + 0x30) =
                                                       *(undefined8 *)OVRColocationSession_TypeInfo;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar13 + 0x30));
                                                  lVar17 = *(long *)(lVar13 + 0x50);
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Unity_InferenceEngine_Layers_NearestMode_TypeInfo)
                                                  ;
                                                  FUN_06ea680c(lVar16,0);
                                                  if (lVar16 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar16 + 0x30) =
                                                       *(undefined8 *)OVRGLTFType_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x16];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a00dd0);
                                                    FUN_0414cefc(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Globalization_NumberFormatInfo_TypeInfo,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xb0);
                                                  *plVar10 = lVar18;
                                                  thunk_FUN_036b7ad0(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar16 + 0x50) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar16 + 0x50),lVar18)
                                                  ;
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x17];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5048);
                                                    FUN_055487a4(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  MS_Internal_Xml_XPath_NumberFunctions_TypeInfo,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xb8);
                                                  *plVar10 = lVar18;
                                                  thunk_FUN_036b7ad0(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar16 + 0x58) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar16 + 0x58),lVar18)
                                                  ;
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x18];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a00dd0);
                                                    FUN_0414cefc(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Xml_Schema_Numeric10FacetsChecker_TypeInfo,
                                                  0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xc0);
                                                  *plVar10 = lVar18;
                                                  thunk_FUN_036b7ad0(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar16 + 0x68) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar16 + 0x68),lVar18)
                                                  ;
                                                  if (lVar17 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar17,lVar16,*puVar14);
                                                  lVar17 = *(long *)(lVar13 + 0x50);
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_NclUtilities_TypeInfo);
                                                  FUN_06ea6978(lVar16,0);
                                                  if (lVar16 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar16 + 0x30) =
                                                       *(undefined8 *)
                                                        OVRHandSkeletonVersion_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x19];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Xml_Schema_Numeric2FacetsChecker_TypeInfo,0
                                                  );
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 200);
                                                  *plVar10 = lVar18;
                                                  thunk_FUN_036b7ad0(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar16 + 0x50) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar16 + 0x50),lVar18)
                                                  ;
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x1a];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5040);
                                                    FUN_0554c13c(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  MS_Internal_Xml_XPath_NumericExpr_TypeInfo,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xd0);
                                                  *plVar10 = lVar18;
                                                  thunk_FUN_036b7ad0(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar16 + 0x58) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar16 + 0x58),lVar18)
                                                  ;
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x1b];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_NumericFieldDraggerUtility_TypeInfo,0)
                                                  ;
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xd8);
                                                  *plVar10 = lVar18;
                                                  thunk_FUN_036b7ad0(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar16 + 0x68) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar16 + 0x68),lVar18)
                                                  ;
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x1c];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Runtime_InteropServices_OSPlatform_TypeInfo
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xe0);
                                                  *plVar10 = lVar18;
                                                  thunk_FUN_036b7ad0(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar16 + 0x70) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar16 + 0x70),lVar18)
                                                  ;
                                                  if (lVar17 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar17,lVar16,*puVar14);
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Newtonsoft_Json_JsonWriterException_TypeInfo);
                                                  FUN_06e99510(lVar16,0);
                                                  if (lVar16 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar16 + 0x30) =
                                                       *(undefined8 *)OVRPose_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar16 + 0x38) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_EventSystems_OVRInputModule_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar16 + 0x68) =
                                                       *(undefined8 *)(unaff_x19 + 0x1e8);
                                                  thunk_FUN_036b7ad0();
                                                  FUN_058206a4(lVar16,*(undefined8 *)
                                                                       (unaff_x19 + 0x1f0),
                                                               *(undefined8 *)
                                                                Newtonsoft_Json_JsonWriter_TypeInfo)
                                                  ;
                                                  puVar2 = PTR_DAT_07a00dd0;
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_07a00dd0);
                                                  FUN_0414cefc();
                                                  *(undefined8 *)(lVar16 + 0x88) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x88),
                                                                     uVar8);
                                                  puVar3 = PTR_DAT_079f5048;
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                              PTR_DAT_079f5048);
                                                  FUN_055487a4();
                                                  *(undefined8 *)(lVar16 + 0x90) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x90),
                                                                     uVar8);
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0414cefc();
                                                  *(undefined8 *)(lVar16 + 0x50) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x50),
                                                                     uVar8);
                                                  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                                  FUN_055487a4();
                                                  *(undefined8 *)(lVar16 + 0x58) = uVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar16 + 0x58),
                                                                     uVar8);
                                                  *(long *)(unaff_x19 + 0x208) = lVar16;
                                                  thunk_FUN_036b7ad0((undefined8 *)
                                                                     (unaff_x19 + 0x208),lVar16);
                                                  if (*(long *)(lVar13 + 0x50) == 0)
                                                  goto LAB_06eb5ee8;
                                                  FUN_04a78624(*(long *)(lVar13 + 0x50),
                                                               *(undefined8 *)(unaff_x19 + 0x208),
                                                               *puVar14);
                                                  lVar17 = *(long *)(lVar13 + 0x50);
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_NclUtilities_TypeInfo);
                                                  FUN_06ea6978(lVar16,0);
                                                  if (lVar16 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar16 + 0x30) =
                                                       *(undefined8 *)OVRFaceExpressions_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar16 + 0x38) =
                                                       *(undefined8 *)OVRControllerTest_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x1d];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Threading_OSSpecificSynchronizationContext_TypeInfo
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xe8);
                                                  *plVar10 = lVar18;
                                                  thunk_FUN_036b7ad0(plVar10,lVar18);
                                                  puVar14 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar16 + 0x50) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar16 + 0x50),lVar18)
                                                  ;
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x1e];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5040);
                                                    FUN_0554c13c(lVar18,uVar8,
                                                                 *(undefined8 *)OVRAnchor_TypeInfo,0
                                                                );
                                                    plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0xf0);
                                                    *plVar10 = lVar18;
                                                    thunk_FUN_036b7ad0(plVar10,lVar18);
                                                    puVar14 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar16 + 0x58) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar16 + 0x58),lVar18)
                                                  ;
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x1f];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar18,uVar8,
                                                                 *(undefined8 *)
                                                                  OVRAnchorContainer_TypeInfo,0);
                                                    plVar10 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0xf8);
                                                    *plVar10 = lVar18;
                                                    thunk_FUN_036b7ad0(plVar10,lVar18);
                                                    puVar14 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar16 + 0x68) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar16 + 0x68),lVar18)
                                                  ;
                                                  lVar11 = *(long *)puVar5;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar11 = *(long *)puVar5;
                                                  }
                                                  puVar9 = *(undefined8 **)(lVar11 + 0xb8);
                                                  lVar18 = puVar9[0x20];
                                                  if (lVar18 == 0) {
                                                    if (*(int *)(lVar11 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar9 = *(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar8 = *puVar9;
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar18,uVar8,
                                                                 *(undefined8 *)OVRBone_TypeInfo,0);
                                                    lVar11 = *(long *)(*(long *)puVar5 + 0xb8);
                                                    *(long *)(lVar11 + 0x100) = lVar18;
                                                    thunk_FUN_036b7ad0(lVar11 + 0x100,lVar18);
                                                    puVar14 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar16 + 0x70) = lVar18;
                                                  thunk_FUN_036b7ad0((long *)(lVar16 + 0x70),lVar18)
                                                  ;
                                                  if (lVar17 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar17,lVar16,*puVar14);
                                                  lVar16 = *(long *)(lVar7 + 0x10);
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar16 == 0) goto LAB_06eb5ee8;
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    plVar10 = (long *)(lVar16 + (long)(int)uVar1 * 8
                                                                      + 0x20);
                                                    *plVar10 = lVar13;
                                                    thunk_FUN_036b7ad0(plVar10,lVar13);
                                                  }
                                                  else {
                                                    FUN_0459f03c(lVar7,lVar13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar17 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  }
                                                  }
                                                  puVar5 = 
                                                  UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  Newtonsoft_Json_JsonValidatingReader_TypeInfo;
                                                  if (0 < *(int *)(lVar7 + 0x18)) {
                                                    uVar8 = FUN_045a0b8c(lVar7,*(undefined8 *)
                                                                                                                                                                
                                                  UnityEngine_UIElements_ListViewDraggerAnimated_TypeInfo
                                                  );
                                                  *(undefined8 *)(unaff_x19 + 0x198) = uVar8;
                                                  thunk_FUN_036b7ad0(unaff_x19 + 0x198,uVar8);
                                                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                  }
                                                  lVar7 = FUN_06e96d28(0);
                                                  lVar13 = *(long *)puVar5;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978(lVar13);
                                                  }
                                                  if (((lVar7 == 0) ||
                                                      (lVar7 = FUN_06e96e60(lVar7,*(undefined8 *)
                                                                                   (*(long *)(*(long
                                                                                                *)
                                                  puVar5 + 0xb8) + 0x10),1,0,0,0), lVar7 == 0)) ||
                                                  (*(long *)(lVar7 + 0x28) == 0)) goto LAB_06eb5ee8;
                                                  FUN_04a7870c(*(long *)(lVar7 + 0x28),
                                                               *(undefined8 *)(unaff_x19 + 0x198),
                                                               *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_Rendering_LocalKeyword_TypeInfo);
                                                  }
                                                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                  }
                                                  lVar7 = FUN_06e96d28(0);
                                                  if (lVar7 != 0) {
                                                    FUN_06e96db4(lVar7,*(undefined8 *)
                                                                        (unaff_x19 + 0x180),0);
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
LAB_06eb5ee8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


