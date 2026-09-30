/*
FUNCTION_NAME: FUN_06eb2450
ENTRY_POINT: 06eb2450
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 193
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;data_collection_or_telemetry;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_21;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_21;functionality_possible_biometrics_hits_2
*/


void FUN_06eb2450(long param_1)

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
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  puVar4 = UnityEngine_AI_NavMeshTriangulation_TypeInfo;
  puVar5 = PTR_DAT_07a01240;
  puVar3 = PTR_DAT_07a01238;
  if ((DAT_07eeb15f & 1) == 0) {
    FUN_03642964(PTR_DAT_079f5aa0);
    FUN_03642964(PTR_DAT_079f5040);
    FUN_03642964(PTR_DAT_079f5048);
    FUN_03642964(UnityEngine_UIElements_NavigateFocusRing_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_NavigationCancelEvent_TypeInfo);
    FUN_03642964(Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo);
    FUN_03642964(Newtonsoft_Json_JsonValidatingReader_TypeInfo);
    FUN_03642964(UnityEngine_InputForUI_NavigationEvent_TypeInfo);
    FUN_03642964(PTR_DAT_079f4540);
    FUN_03642964(Newtonsoft_Json_JsonWriter_TypeInfo);
    FUN_03642964(Newtonsoft_Json_JsonWriterException_TypeInfo);
    FUN_03642964(PadsWorkout_JumpControl_TypeInfo);
    FUN_03642964(UnityEngine_InputForUI_NavigationEventRepeatHelper_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_NavigationMoveEvent_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_NavigationSubmitEvent_TypeInfo);
    FUN_03642964(UnityEditor_Analytics_NavmeshBakingAnalytic_TypeInfo);
    FUN_03642964(PadsWorkout_JumpNoteTrack_TypeInfo);
    FUN_03642964(System_Net_NclUtilities_TypeInfo);
    FUN_03642964(PTR_DAT_07a20ff8);
    FUN_03642964(PTR_DAT_079fbc70);
    FUN_03642964(PTR_DAT_07a00dd0);
    FUN_03642964(PTR_DAT_079fd998);
    FUN_03642964(Unity_InferenceEngine_Layers_NearestMode_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_ListViewReorderableDragAndDropController_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_ListViewDraggerAnimated_TypeInfo);
    FUN_03642964(PTR_DAT_07a01238);
    FUN_03642964(Unity_InferenceEngine_Layers_Neg_TypeInfo);
    FUN_03642964(PTR_DAT_07a01240);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(PTR_DAT_07a029b0);
    FUN_03642964(UnityEngine_Rendering_LocalKeyword_TypeInfo);
    FUN_03642964(System_Linq_Expressions_Interpreter_NegateCheckedInstruction_TypeInfo);
    FUN_03642964(System_Linq_Expressions_Interpreter_NegateInstruction_TypeInfo);
    FUN_03642964(System_Runtime_Serialization_NegativeIntegerDataContract_TypeInfo);
    FUN_03642964(System_Runtime_Serialization_NetDataContractSerializer_TypeInfo);
    FUN_03642964(System_Net_NetEventSource_TypeInfo);
    FUN_03642964(Oculus_Platform_Models_NetSyncConnection_TypeInfo);
    FUN_03642964(Oculus_Platform_Models_NetSyncSession_TypeInfo);
    FUN_03642964(Oculus_Platform_Models_NetSyncSessionList_TypeInfo);
    FUN_03642964(Oculus_Platform_Models_NetSyncSessionsChangedNotification_TypeInfo);
    FUN_03642964(Oculus_Platform_Models_NetSyncSetSessionPropertyResult_TypeInfo);
    FUN_03642964(Oculus_Platform_Models_NetSyncVoipAttenuationValue_TypeInfo);
    FUN_03642964(Oculus_Platform_Models_NetSyncVoipAttenuationValueList_TypeInfo);
    FUN_03642964(Meta_XR_MultiplayerBlocks_Colocation_NetworkAdapter_TypeInfo);
    FUN_03642964(System_Net_NetworkCredential_TypeInfo);
    FUN_03642964(System_Net_NetworkInformation_NetworkInformationException_TypeInfo);
    FUN_03642964(System_Net_Sockets_NetworkStream_TypeInfo);
    FUN_03642964(UnityEngine_Rendering_Universal_NeutralRangeReductionModeParameter_TypeInfo);
    FUN_03642964(System_Linq_Expressions_NewArrayBoundsExpression_TypeInfo);
    FUN_03642964(System_Linq_Expressions_Interpreter_NewArrayBoundsInstruction_TypeInfo);
    FUN_03642964(System_Linq_Expressions_NewArrayExpression_TypeInfo);
    FUN_03642964(System_Linq_Expressions_NewArrayInitExpression_TypeInfo);
    FUN_03642964(System_Linq_Expressions_Interpreter_NewArrayInitInstruction_TypeInfo);
    FUN_03642964(System_Linq_Expressions_Interpreter_NewArrayInstruction_TypeInfo);
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
    DAT_07eeb15f = 1;
  }
  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
  FUN_0459e7d4(lVar9,*(undefined8 *)puVar3);
  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
  FUN_06ea7ee0(uVar10,0);
  if (lVar9 != 0) {
    lVar15 = *(long *)(lVar9 + 0x10);
    lVar18 = *(long *)UnityEngine_UIElements_ListViewReorderableDragAndDropController_TypeInfo;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar15 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        puVar11 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
        *puVar11 = uVar10;
        thunk_FUN_036b7ad0(puVar11,uVar10);
      }
      else {
        FUN_0459f03c(lVar9,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70)
                    );
      }
      lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                   Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo);
      FUN_06ea5298(lVar15,0);
      puVar3 = UnityEngine_UIElements_Internal_MultiColumnHeaderColumn_TypeInfo;
      if (lVar15 != 0) {
        *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)OVRMixedReality_TypeInfo;
        thunk_FUN_036b7ad0();
        lVar18 = *(long *)puVar3;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar18 = *(long *)puVar3;
        }
        puVar5 = UnityEngine_UIElements_NavigationCancelEvent_TypeInfo;
        puVar11 = *(undefined8 **)(lVar18 + 0xb8);
        lVar19 = puVar11[3];
        if (lVar19 == 0) {
          if (*(int *)(lVar18 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            puVar11 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
          uVar10 = *puVar11;
          lVar19 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
          FUN_0414c60c(lVar19,uVar10,
                       *(undefined8 *)
                        System_Collections_Specialized_NotifyCollectionChangedAction_TypeInfo,0);
          plVar12 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
          *plVar12 = lVar19;
          thunk_FUN_036b7ad0(plVar12,lVar19);
        }
        *(long *)(lVar15 + 0x48) = lVar19;
        thunk_FUN_036b7ad0((long *)(lVar15 + 0x48),lVar19);
        lVar19 = *(long *)(lVar15 + 0x50);
        lVar18 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
        FUN_06ea66f4(lVar18,0);
        puVar7 = OVRPassthroughColorLut_TypeInfo;
        puVar6 = PadsWorkout_NoteType_TypeInfo;
        puVar2 = System_Linq_Expressions_Interpreter_NewInstruction_TypeInfo;
        puVar4 = UnityEngine_Rendering_Universal_NeutralRangeReductionModeParameter_TypeInfo;
        puVar5 = UnityEngine_UIElements_NavigateFocusRing_TypeInfo;
        puVar3 = PTR_DAT_079f5aa0;
        if (lVar18 != 0) {
          *(undefined8 *)(lVar18 + 0x30) = *(undefined8 *)OVRDynamicObject_TypeInfo;
          thunk_FUN_036b7ad0();
          *(undefined8 *)(lVar18 + 0x38) = *(undefined8 *)puVar7;
          thunk_FUN_036b7ad0();
          uVar10 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
          FUN_0414c60c(uVar10,param_1,*(undefined8 *)puVar4,0);
          *(undefined8 *)(lVar18 + 0x50) = uVar10;
          thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x50),uVar10);
          uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
          System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                    (uVar10,param_1,*(undefined8 *)puVar2,0);
          *(undefined8 *)(lVar18 + 0x58) = uVar10;
          thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x58),uVar10);
          uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
          FUN_05620310(uVar10,param_1,*(undefined8 *)puVar6,0);
          *(undefined8 *)(lVar18 + 0x60) = uVar10;
          thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x60),uVar10);
          if (lVar19 != 0) {
            FUN_04a78624(lVar19,lVar18,*(undefined8 *)PTR_DAT_07a029b0);
            lVar19 = *(long *)(lVar15 + 0x50);
            lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                         UnityEngine_UIElements_NavigationCancelEvent_TypeInfo);
            FUN_06ea66f4(lVar18,0);
            puVar4 = OVRPlugin_TypeInfo;
            puVar5 = System_Text_Normalization_TypeInfo;
            puVar3 = MS_Internal_Xml_XPath_NodeFunctions_TypeInfo;
            if (lVar18 != 0) {
              *(undefined8 *)(lVar18 + 0x30) =
                   *(undefined8 *)OVRMixedRealityCaptureConfiguration_TypeInfo;
              thunk_FUN_036b7ad0();
              *(undefined8 *)(lVar18 + 0x38) = *(undefined8 *)puVar4;
              thunk_FUN_036b7ad0();
              uVar10 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
              FUN_0414c60c(uVar10,param_1,*(undefined8 *)puVar3,0);
              *(undefined8 *)(lVar18 + 0x50) = uVar10;
              thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x50),uVar10);
              uVar10 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
              System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                        (uVar10,param_1,*(undefined8 *)puVar5,0);
              *(undefined8 *)(lVar18 + 0x58) = uVar10;
              thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x58),uVar10);
              uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                           UnityEngine_UIElements_NavigateFocusRing_TypeInfo);
              FUN_05620310(uVar10,param_1,*(undefined8 *)PadsWorkout_NoteType_TypeInfo,0);
              *(undefined8 *)(lVar18 + 0x60) = uVar10;
              thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x60),uVar10);
              puVar3 = System_Net_NclUtilities_TypeInfo;
              if (lVar19 != 0) {
                FUN_04a78624(lVar19,lVar18,*(undefined8 *)PTR_DAT_07a029b0);
                lVar19 = *(long *)(lVar15 + 0x50);
                lVar18 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                FUN_06ea6978(lVar18,0);
                puVar6 = OVRBoneCapsule_TypeInfo;
                puVar2 = System_NotSupportedException_TypeInfo;
                puVar4 = Unity_InferenceEngine_Layers_NotEqual_TypeInfo;
                puVar5 = PTR_DAT_07a20ff8;
                puVar3 = PTR_DAT_079f5040;
                if (lVar18 != 0) {
                  *(undefined8 *)(lVar18 + 0x30) = *(undefined8 *)OVRMarkerPayloadType_TypeInfo;
                  thunk_FUN_036b7ad0();
                  *(undefined8 *)(lVar18 + 0x38) = *(undefined8 *)puVar6;
                  thunk_FUN_036b7ad0();
                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
                  FUN_0414d94c(uVar10,param_1,*(undefined8 *)puVar4,0);
                  *(undefined8 *)(lVar18 + 0x50) = uVar10;
                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x50),uVar10);
                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                  FUN_0554c13c(uVar10,param_1,*(undefined8 *)puVar2,0);
                  *(undefined8 *)(lVar18 + 0x58) = uVar10;
                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x58),uVar10);
                  puVar3 = UnityEngine_UIElements_Internal_MultiColumnHeaderColumn_TypeInfo;
                  lVar13 = *(long *)UnityEngine_UIElements_Internal_MultiColumnHeaderColumn_TypeInfo
                  ;
                  if (*(int *)(lVar13 + 0xe4) == 0) {
                    thunk_FUN_036a1978();
                    lVar13 = *(long *)puVar3;
                  }
                  puVar5 = PTR_DAT_07a029b0;
                  puVar11 = *(undefined8 **)(lVar13 + 0xb8);
                  lVar20 = puVar11[4];
                  if (lVar20 == 0) {
                    if (*(int *)(lVar13 + 0xe4) == 0) {
                      thunk_FUN_036a1978();
                      puVar11 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
                    }
                    uVar10 = *puVar11;
                    lVar20 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
                    FUN_0414d94c(lVar20,uVar10,*(undefined8 *)OVRBody_TypeInfo,0);
                    plVar12 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                    *plVar12 = lVar20;
                    thunk_FUN_036b7ad0(plVar12,lVar20);
                  }
                  *(long *)(lVar18 + 0x68) = lVar20;
                  thunk_FUN_036b7ad0((long *)(lVar18 + 0x68),lVar20);
                  if (lVar19 != 0) {
                    FUN_04a78624(lVar19,lVar18,*(undefined8 *)puVar5);
                    puVar3 = 
                    UnityEngine_UIElements_ListViewReorderableDragAndDropController_TypeInfo;
                    lVar18 = *(long *)(lVar9 + 0x10);
                    lVar19 = *(long *)
                              UnityEngine_UIElements_ListViewReorderableDragAndDropController_TypeInfo
                    ;
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    puVar4 = UnityEngine_AI_NavMeshTriangulation_TypeInfo;
                    if (lVar18 != 0) {
                      uVar1 = *(uint *)(lVar9 + 0x18);
                      if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                        plVar12 = (long *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar12 = lVar15;
                        thunk_FUN_036b7ad0(plVar12,lVar15);
                      }
                      else {
                        FUN_0459f03c(lVar9,lVar15,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                      }
                      uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                      FUN_06ea7ee0(uVar10,0);
                      lVar15 = *(long *)(lVar9 + 0x10);
                      lVar18 = *(long *)puVar3;
                      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                      if (lVar15 != 0) {
                        uVar1 = *(uint *)(lVar9 + 0x18);
                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                          puVar11 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                          *puVar11 = uVar10;
                          thunk_FUN_036b7ad0(puVar11,uVar10);
                        }
                        else {
                          FUN_0459f03c(lVar9,uVar10,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                          
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                        FUN_06ea5298(lVar15,0);
                        if (lVar15 != 0) {
                          *(undefined8 *)(lVar15 + 0x30) =
                               *(undefined8 *)UnityEngine_EventSystems_OVRPointerEventData_TypeInfo;
                          thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x30));
                          lVar19 = *(long *)(lVar15 + 0x50);
                          lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                              
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  );
                          FUN_06ea66f4(lVar18,0);
                          puVar2 = OVRMeshRenderer_TypeInfo;
                          puVar4 = PadsWorkout_NoteTrack_TypeInfo;
                          puVar3 = 
                          System_Linq_Expressions_Interpreter_NegateCheckedInstruction_TypeInfo;
                          if (lVar18 != 0) {
                            *(undefined8 *)(lVar18 + 0x30) = *(undefined8 *)OVRResources_TypeInfo;
                            thunk_FUN_036b7ad0();
                            *(undefined8 *)(lVar18 + 0x38) = *(undefined8 *)puVar2;
                            thunk_FUN_036b7ad0();
                            puVar2 = PTR_DAT_079fbc70;
                            uVar10 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fbc70);
                            FUN_0414c60c(uVar10,param_1,*(undefined8 *)puVar4,0);
                            *(undefined8 *)(lVar18 + 0x50) = uVar10;
                            thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x50),uVar10);
                            uVar10 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5aa0);
                            System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                      (uVar10,param_1,*(undefined8 *)puVar3,0);
                            *(undefined8 *)(lVar18 + 0x58) = uVar10;
                            thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x58),uVar10);
                            uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_NavigateFocusRing_TypeInfo)
                            ;
                            FUN_05620310(uVar10,param_1,*(undefined8 *)PadsWorkout_NoteType_TypeInfo
                                         ,0);
                            *(undefined8 *)(lVar18 + 0x60) = uVar10;
                            thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x60),uVar10);
                            puVar3 = System_Linq_Expressions_Interpreter_NegateInstruction_TypeInfo;
                            if (lVar19 != 0) {
                              FUN_04a78624(lVar19,lVar18,*(undefined8 *)puVar5);
                              lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                      
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                              FUN_06ea5298(lVar18,0);
                              uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                              FUN_0414c60c(uVar10,param_1,*(undefined8 *)puVar3,0);
                              puVar3 = Newtonsoft_Json_JsonWriterException_TypeInfo;
                              if (lVar18 != 0) {
                                *(undefined8 *)(lVar18 + 0x48) = uVar10;
                                thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x48),uVar10);
                                lVar13 = *(long *)(lVar18 + 0x50);
                                lVar19 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                FUN_06e99510(lVar19,0);
                                puVar8 = Meta_XR_Editor_FalcoOVRTelemetry_OVRFalcoTelemetry_TypeInfo
                                ;
                                puVar7 = System_Net_NetEventSource_TypeInfo;
                                puVar6 = 
                                System_Runtime_Serialization_NetDataContractSerializer_TypeInfo;
                                puVar2 = 
                                System_Runtime_Serialization_NegativeIntegerDataContract_TypeInfo;
                                puVar4 = UnityEngine_InputForUI_NavigationEvent_TypeInfo;
                                puVar5 = PTR_DAT_07a00dd0;
                                puVar3 = PTR_DAT_079f5048;
                                if (lVar19 != 0) {
                                  *(undefined8 *)(lVar19 + 0x30) =
                                       *(undefined8 *)OVRGazePointer_TypeInfo;
                                  thunk_FUN_036b7ad0();
                                  *(undefined8 *)(lVar19 + 0x38) = *(undefined8 *)puVar8;
                                  thunk_FUN_036b7ad0();
                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
                                  FUN_0414cefc(uVar10,param_1,*(undefined8 *)puVar2,0);
                                  *(undefined8 *)(lVar19 + 0x50) = uVar10;
                                  thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x50),uVar10);
                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                  FUN_055487a4(uVar10,param_1,*(undefined8 *)puVar6,0);
                                  *(undefined8 *)(lVar19 + 0x58) = uVar10;
                                  thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x58),uVar10);
                                  uVar10 = *(undefined8 *)puVar4;
                                  if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
                                    thunk_FUN_036a1978();
                                  }
                                  uVar10 = FUN_05e26f18(uVar10,0);
                                  FUN_06ea7380(lVar19,uVar10,0);
                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
                                  FUN_0414cefc(uVar10,param_1,*(undefined8 *)puVar7,0);
                                  *(undefined8 *)(lVar19 + 0x88) = uVar10;
                                  thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x88),uVar10);
                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                  FUN_055487a4(uVar10,param_1,
                                               *(undefined8 *)
                                                Oculus_Platform_Models_NetSyncConnection_TypeInfo,0)
                                  ;
                                  *(undefined8 *)(lVar19 + 0x90) = uVar10;
                                  thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x90),uVar10);
                                  puVar5 = 
                                  UnityEngine_UIElements_Internal_MultiColumnHeaderColumn_TypeInfo;
                                  puVar3 = PTR_DAT_07a029b0;
                                  if (lVar13 != 0) {
                                    FUN_04a78624(lVar13,lVar19,*(undefined8 *)PTR_DAT_07a029b0);
                                    lVar13 = *(long *)(lVar18 + 0x50);
                                    lVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                 System_Net_NclUtilities_TypeInfo);
                                    FUN_06ea6978(lVar19,0);
                                    puVar7 = OVRNativeBuffer_TypeInfo;
                                    puVar6 = OVRHumanBodyBonesMappingsInterface_TypeInfo;
                                    puVar2 = Oculus_Platform_Models_NetSyncSessionList_TypeInfo;
                                    puVar4 = Oculus_Platform_Models_NetSyncSession_TypeInfo;
                                    if (lVar19 != 0) {
                                      *(undefined8 *)(lVar19 + 0x30) =
                                           *(undefined8 *)OVRNativeBuffer_TypeInfo;
                                      thunk_FUN_036b7ad0();
                                      *(undefined8 *)(lVar19 + 0x38) = *(undefined8 *)puVar6;
                                      thunk_FUN_036b7ad0();
                                      uVar10 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8);
                                      FUN_0414d94c(uVar10,param_1,*(undefined8 *)puVar4,0);
                                      *(undefined8 *)(lVar19 + 0x50) = uVar10;
                                      thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x50),uVar10);
                                      uVar10 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5040);
                                      FUN_0554c13c(uVar10,param_1,*(undefined8 *)puVar2,0);
                                      *(undefined8 *)(lVar19 + 0x58) = uVar10;
                                      thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x58),uVar10);
                                      lVar20 = *(long *)puVar5;
                                      if (*(int *)(lVar20 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        lVar20 = *(long *)puVar5;
                                      }
                                      puVar11 = *(undefined8 **)(lVar20 + 0xb8);
                                      lVar21 = puVar11[5];
                                      if (lVar21 == 0) {
                                        if (*(int *)(lVar20 + 0xe4) == 0) {
                                          thunk_FUN_036a1978();
                                          puVar11 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                        }
                                        uVar10 = *puVar11;
                                        lVar21 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8)
                                        ;
                                        FUN_0414d94c(lVar21,uVar10,
                                                     *(undefined8 *)
                                                      OVR_OpenVR_NotificationBitmap_t_TypeInfo,0);
                                        plVar12 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28)
                                        ;
                                        *plVar12 = lVar21;
                                        thunk_FUN_036b7ad0(plVar12,lVar21);
                                      }
                                      *(long *)(lVar19 + 0x68) = lVar21;
                                      thunk_FUN_036b7ad0((long *)(lVar19 + 0x68),lVar21);
                                      lVar20 = *(long *)puVar5;
                                      if (*(int *)(lVar20 + 0xe4) == 0) {
                                        thunk_FUN_036a1978();
                                        lVar20 = *(long *)puVar5;
                                      }
                                      puVar11 = *(undefined8 **)(lVar20 + 0xb8);
                                      lVar21 = puVar11[6];
                                      if (lVar21 == 0) {
                                        if (*(int *)(lVar20 + 0xe4) == 0) {
                                          thunk_FUN_036a1978();
                                          puVar11 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                                        }
                                        uVar10 = *puVar11;
                                        lVar21 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a20ff8)
                                        ;
                                        FUN_0414d94c(lVar21,uVar10,
                                                     *(undefined8 *)
                                                      Unity_AppUI_Core_NotificationManager_TypeInfo,
                                                     0);
                                        plVar12 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30)
                                        ;
                                        *plVar12 = lVar21;
                                        thunk_FUN_036b7ad0(plVar12,lVar21);
                                      }
                                      *(long *)(lVar19 + 0x70) = lVar21;
                                      thunk_FUN_036b7ad0((long *)(lVar19 + 0x70),lVar21);
                                      if (lVar13 != 0) {
                                        FUN_04a78624(lVar13,lVar19,*(undefined8 *)puVar3);
                                        lVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                          
                                                  System_Net_NclUtilities_TypeInfo);
                                        FUN_06ea6978(lVar19,0);
                                        puVar8 = OVRInput_TypeInfo;
                                        puVar6 = 
                                        Oculus_Platform_Models_NetSyncVoipAttenuationValue_TypeInfo;
                                        puVar2 = 
                                        Oculus_Platform_Models_NetSyncSetSessionPropertyResult_TypeInfo
                                        ;
                                        puVar4 = 
                                        Oculus_Platform_Models_NetSyncSessionsChangedNotification_TypeInfo
                                        ;
                                        if (lVar19 != 0) {
                                          *(undefined8 *)(lVar19 + 0x30) =
                                               *(undefined8 *)OVREyeGaze_TypeInfo;
                                          thunk_FUN_036b7ad0();
                                          *(undefined8 *)(lVar19 + 0x38) = *(undefined8 *)puVar8;
                                          thunk_FUN_036b7ad0();
                                          uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                       PTR_DAT_07a20ff8);
                                          FUN_0414d94c(uVar10,param_1,*(undefined8 *)puVar4,0);
                                          *(undefined8 *)(lVar19 + 0x50) = uVar10;
                                          thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x50),uVar10);
                                          uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                       PTR_DAT_079f5040);
                                          FUN_0554c13c(uVar10,param_1,*(undefined8 *)puVar2,0);
                                          *(undefined8 *)(lVar19 + 0x58) = uVar10;
                                          thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x58),uVar10);
                                          uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                       PTR_DAT_079fbc70);
                                          FUN_0414c60c(uVar10,param_1,*(undefined8 *)puVar6,0);
                                          *(undefined8 *)(lVar19 + 0x48) = uVar10;
                                          thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x48),uVar10);
                                          puVar4 = Unity_InferenceEngine_Layers_NearestMode_TypeInfo
                                          ;
                                          if (*(long *)(lVar18 + 0x50) != 0) {
                                            FUN_04a78624(*(long *)(lVar18 + 0x50),lVar19,
                                                         *(undefined8 *)puVar3);
                                            lVar13 = *(long *)(lVar18 + 0x50);
                                            lVar19 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                                            FUN_06ea680c(lVar19,0);
                                            puVar2 = OVROverlay_TypeInfo;
                                            puVar4 = 
                                            Meta_XR_MultiplayerBlocks_Colocation_NetworkAdapter_TypeInfo
                                            ;
                                            puVar3 = 
                                            Oculus_Platform_Models_NetSyncVoipAttenuationValueList_TypeInfo
                                            ;
                                            if (lVar19 != 0) {
                                              *(undefined8 *)(lVar19 + 0x30) =
                                                   *(undefined8 *)OVRGLTFComponentType_TypeInfo;
                                              thunk_FUN_036b7ad0();
                                              *(undefined8 *)(lVar19 + 0x38) = *(undefined8 *)puVar2
                                              ;
                                              thunk_FUN_036b7ad0();
                                              puVar2 = PTR_DAT_07a00dd0;
                                              uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                           PTR_DAT_07a00dd0);
                                              FUN_0414cefc(uVar10,param_1,*(undefined8 *)puVar3,0);
                                              *(undefined8 *)(lVar19 + 0x50) = uVar10;
                                              thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x50),
                                                                 uVar10);
                                              uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                           PTR_DAT_079f5048);
                                              FUN_055487a4(uVar10,param_1,*(undefined8 *)puVar4,0);
                                              *(undefined8 *)(lVar19 + 0x58) = uVar10;
                                              thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x58),
                                                                 uVar10);
                                              lVar20 = *(long *)puVar5;
                                              if (*(int *)(lVar20 + 0xe4) == 0) {
                                                thunk_FUN_036a1978();
                                                lVar20 = *(long *)puVar5;
                                              }
                                              puVar3 = System_Net_NetworkCredential_TypeInfo;
                                              puVar11 = *(undefined8 **)(lVar20 + 0xb8);
                                              lVar21 = puVar11[7];
                                              if (lVar21 == 0) {
                                                if (*(int *)(lVar20 + 0xe4) == 0) {
                                                  thunk_FUN_036a1978();
                                                  puVar11 = *(undefined8 **)(*(long *)puVar5 + 0xb8)
                                                  ;
                                                }
                                                uVar10 = *puVar11;
                                                lVar21 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                FUN_0414cefc(lVar21,uVar10,
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Specialized_NotifyCollectionChangedEventArgs_TypeInfo
                                                  ,0);
                                                plVar12 = (long *)(*(long *)(*(long *)puVar5 + 0xb8)
                                                                  + 0x38);
                                                *plVar12 = lVar21;
                                                thunk_FUN_036b7ad0(plVar12,lVar21);
                                              }
                                              *(long *)(lVar19 + 0x68) = lVar21;
                                              thunk_FUN_036b7ad0((long *)(lVar19 + 0x68),lVar21);
                                              uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                              FUN_0414cefc(uVar10,param_1,*(undefined8 *)puVar3,0);
                                              *(undefined8 *)(lVar19 + 0x70) = uVar10;
                                              thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x70),
                                                                 uVar10);
                                              if (lVar13 != 0) {
                                                FUN_04a78624(lVar13,lVar19,
                                                             *(undefined8 *)PTR_DAT_07a029b0);
                                                lVar13 = *(long *)(lVar18 + 0x50);
                                                lVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                          
                                                  Unity_InferenceEngine_Layers_NearestMode_TypeInfo)
                                                ;
                                                FUN_06ea680c(lVar19,0);
                                                puVar2 = OVRPassthroughLayer_TypeInfo;
                                                puVar4 = System_Net_Sockets_NetworkStream_TypeInfo;
                                                puVar3 = 
                                                System_Net_NetworkInformation_NetworkInformationException_TypeInfo
                                                ;
                                                if (lVar19 != 0) {
                                                  *(undefined8 *)(lVar19 + 0x30) =
                                                       *(undefined8 *)
                                                        OVROverlayCanvasSettings_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar19 + 0x38) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0();
                                                  puVar2 = PTR_DAT_07a00dd0;
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                               PTR_DAT_07a00dd0);
                                                  FUN_0414cefc(uVar10,param_1,*(undefined8 *)puVar3,
                                                               0);
                                                  *(undefined8 *)(lVar19 + 0x50) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x50),
                                                                     uVar10);
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                               PTR_DAT_079f5048);
                                                  FUN_055487a4(uVar10,param_1,*(undefined8 *)puVar4,
                                                               0);
                                                  *(undefined8 *)(lVar19 + 0x58) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x58),
                                                                     uVar10);
                                                  lVar20 = *(long *)puVar5;
                                                  if (*(int *)(lVar20 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar20 = *(long *)puVar5;
                                                  }
                                                  puVar3 = 
                                                  System_Linq_Expressions_NewArrayBoundsExpression_TypeInfo
                                                  ;
                                                  puVar11 = *(undefined8 **)(lVar20 + 0xb8);
                                                  lVar21 = puVar11[8];
                                                  if (lVar21 == 0) {
                                                    if (*(int *)(lVar20 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar11;
                                                    lVar21 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_0414cefc(lVar21,uVar10,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo
                                                  ,0);
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x40);
                                                  *plVar12 = lVar21;
                                                  thunk_FUN_036b7ad0(plVar12,lVar21);
                                                  }
                                                  puVar4 = PTR_DAT_079fbc70;
                                                  *(long *)(lVar19 + 0x68) = lVar21;
                                                  thunk_FUN_036b7ad0((long *)(lVar19 + 0x68),lVar21)
                                                  ;
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0414cefc(uVar10,param_1,*(undefined8 *)puVar3,
                                                               0);
                                                  *(undefined8 *)(lVar19 + 0x70) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x70),
                                                                     uVar10);
                                                  puVar3 = PTR_DAT_07a029b0;
                                                  if (lVar13 != 0) {
                                                    FUN_04a78624(lVar13,lVar19,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    if (*(long *)(lVar15 + 0x50) != 0) {
                                                      FUN_04a78624(*(long *)(lVar15 + 0x50),lVar18,
                                                                   *(undefined8 *)puVar3);
                                                      puVar3 = 
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  ;
                                                  lVar19 = *(long *)(lVar15 + 0x50);
                                                  lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  );
                                                  FUN_06ea66f4(lVar18,0);
                                                  puVar8 = OVRBounded2D_TypeInfo;
                                                  puVar6 = 
                                                  System_Linq_Expressions_NewArrayExpression_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  System_Linq_Expressions_Interpreter_NewArrayBoundsInstruction_TypeInfo
                                                  ;
                                                  if (lVar18 != 0) {
                                                    *(undefined8 *)(lVar18 + 0x30) =
                                                         *(undefined8 *)OVRBoundary_TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar18 + 0x38) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_036b7ad0();
                                                    uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_0414c60c(uVar10,param_1,
                                                                 *(undefined8 *)puVar2,0);
                                                    *(undefined8 *)(lVar18 + 0x50) = uVar10;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x50)
                                                                       ,uVar10);
                                                    uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5aa0);
                                                                                                        
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            (uVar10,param_1,*(undefined8 *)puVar6,0)
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x58) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x58),
                                                                     uVar10);
                                                  puVar2 = 
                                                  System_Linq_Expressions_NewArrayInitExpression_TypeInfo
                                                  ;
                                                  if (lVar19 != 0) {
                                                    FUN_04a78624(lVar19,lVar18,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar18,0);
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_0414c60c(uVar10,param_1,*(undefined8 *)puVar2,
                                                               0);
                                                  if (lVar18 != 0) {
                                                    *(undefined8 *)(lVar18 + 0x48) = uVar10;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x48)
                                                                       ,uVar10);
                                                    lVar13 = *(long *)(lVar18 + 0x50);
                                                    lVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  System_Net_NclUtilities_TypeInfo);
                                                  FUN_06ea6978(lVar19,0);
                                                  puVar6 = OVRExternalComposition_TypeInfo;
                                                  puVar2 = 
                                                  System_Linq_Expressions_Interpreter_NewArrayInstruction_TypeInfo
                                                  ;
                                                  puVar4 = 
                                                  System_Linq_Expressions_Interpreter_NewArrayInitInstruction_TypeInfo
                                                  ;
                                                  if (lVar19 != 0) {
                                                    *(undefined8 *)(lVar19 + 0x30) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar19 + 0x38) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_036b7ad0();
                                                    uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(uVar10,param_1,
                                                                 *(undefined8 *)puVar4,0);
                                                    *(undefined8 *)(lVar19 + 0x50) = uVar10;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x50)
                                                                       ,uVar10);
                                                    uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5040);
                                                    FUN_0554c13c(uVar10,param_1,
                                                                 *(undefined8 *)puVar2,0);
                                                    *(undefined8 *)(lVar19 + 0x58) = uVar10;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x58)
                                                                       ,uVar10);
                                                    lVar20 = *(long *)puVar5;
                                                    if (*(int *)(lVar20 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      lVar20 = *(long *)puVar5;
                                                    }
                                                    puVar11 = *(undefined8 **)(lVar20 + 0xb8);
                                                    lVar21 = puVar11[9];
                                                    if (lVar21 == 0) {
                                                      if (*(int *)(lVar20 + 0xe4) == 0) {
                                                        thunk_FUN_036a1978();
                                                        puVar11 = *(undefined8 **)
                                                                   (*(long *)puVar5 + 0xb8);
                                                      }
                                                      uVar10 = *puVar11;
                                                      lVar21 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                   PTR_DAT_07a20ff8)
                                                      ;
                                                      FUN_0414d94c(lVar21,uVar10,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  System_ComponentModel_NotifyParentPropertyAttribute_TypeInfo
                                                  ,0);
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x48);
                                                  *plVar12 = lVar21;
                                                  thunk_FUN_036b7ad0(plVar12,lVar21);
                                                  }
                                                  *(long *)(lVar19 + 0x68) = lVar21;
                                                  thunk_FUN_036b7ad0((long *)(lVar19 + 0x68),lVar21)
                                                  ;
                                                  lVar20 = *(long *)puVar5;
                                                  if (*(int *)(lVar20 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar20 = *(long *)puVar5;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar20 + 0xb8);
                                                  lVar21 = puVar11[10];
                                                  if (lVar21 == 0) {
                                                    if (*(int *)(lVar20 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar11;
                                                    lVar21 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar21,uVar10,
                                                                 *(undefined8 *)
                                                                  Mono_Http_NtlmClient_TypeInfo,0);
                                                    plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0x50);
                                                    *plVar12 = lVar21;
                                                    thunk_FUN_036b7ad0(plVar12,lVar21);
                                                  }
                                                  *(long *)(lVar19 + 0x70) = lVar21;
                                                  thunk_FUN_036b7ad0((long *)(lVar19 + 0x70),lVar21)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    FUN_04a78624(lVar13,lVar19,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    lVar13 = *(long *)(lVar18 + 0x50);
                                                    lVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_06ea66f4(lVar19,0);
                                                    puVar6 = OVRGLTFAnimatinonNode_TypeInfo;
                                                    puVar2 = 
                                                  System_Linq_Expressions_NewExpression_TypeInfo;
                                                  puVar4 = System_Data_NewDiffgramGen_TypeInfo;
                                                  if (lVar19 != 0) {
                                                    *(undefined8 *)(lVar19 + 0x30) =
                                                         *(undefined8 *)OVRProfile_TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar19 + 0x38) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_036b7ad0();
                                                    uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079fbc70);
                                                    FUN_0414c60c(uVar10,param_1,
                                                                 *(undefined8 *)puVar4,0);
                                                    *(undefined8 *)(lVar19 + 0x50) = uVar10;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x50)
                                                                       ,uVar10);
                                                    uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5aa0);
                                                                                                        
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            (uVar10,param_1,*(undefined8 *)puVar2,0)
                                                  ;
                                                  *(undefined8 *)(lVar19 + 0x58) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x58),
                                                                     uVar10);
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_UIElements_NavigateFocusRing_TypeInfo)
                                                  ;
                                                  FUN_05620310(uVar10,param_1,
                                                               *(undefined8 *)
                                                                PadsWorkout_NoteType_TypeInfo,0);
                                                  *(undefined8 *)(lVar19 + 0x60) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x60),
                                                                     uVar10);
                                                  puVar4 = PTR_DAT_07a029b0;
                                                  if (lVar13 != 0) {
                                                    FUN_04a78624(lVar13,lVar19,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    if (*(long *)(lVar15 + 0x50) != 0) {
                                                      FUN_04a78624(*(long *)(lVar15 + 0x50),lVar18,
                                                                   *(undefined8 *)puVar4);
                                                      lVar19 = *(long *)(lVar15 + 0x50);
                                                      lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                   puVar3);
                                                      FUN_06ea66f4(lVar18,0);
                                                      puVar8 = OVROverlayCanvas_TypeInfo;
                                                      puVar6 = 
                                                  TagLib_IFD_Makernotes_Nikon3MakernoteReader_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  System_Xml_Schema_NfaContentValidator_TypeInfo;
                                                  puVar4 = PTR_DAT_079fbc70;
                                                  if (lVar18 != 0) {
                                                    *(undefined8 *)(lVar18 + 0x30) =
                                                         *(undefined8 *)OVRHandTest_TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar18 + 0x38) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_036b7ad0();
                                                    uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_0414c60c(uVar10,param_1,
                                                                 *(undefined8 *)puVar2,0);
                                                    *(undefined8 *)(lVar18 + 0x50) = uVar10;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x50)
                                                                       ,uVar10);
                                                    uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5aa0);
                                                                                                        
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            (uVar10,param_1,*(undefined8 *)puVar6,0)
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x58) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x58),
                                                                     uVar10);
                                                  puVar2 = 
                                                  UnityEngine_Rendering_NoInterpTextureParameter_TypeInfo
                                                  ;
                                                  if (lVar19 != 0) {
                                                    FUN_04a78624(lVar19,lVar18,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar18,0);
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_0414c60c(uVar10,param_1,*(undefined8 *)puVar2,
                                                               0);
                                                  if (lVar18 != 0) {
                                                    *(undefined8 *)(lVar18 + 0x48) = uVar10;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x48)
                                                                       ,uVar10);
                                                    lVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  System_Net_NclUtilities_TypeInfo);
                                                  FUN_06ea6978(lVar19,0);
                                                  puVar6 = OVRPermissionsRequester_TypeInfo;
                                                  puVar2 = 
                                                  Newtonsoft_Json_Utilities_NoThrowExpressionVisitor_TypeInfo
                                                  ;
                                                  puVar4 = 
                                                  System_Data_NoNullAllowedException_TypeInfo;
                                                  if (lVar19 != 0) {
                                                    *(undefined8 *)(lVar19 + 0x30) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar19 + 0x38) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_036b7ad0();
                                                    uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(uVar10,param_1,
                                                                 *(undefined8 *)puVar4,0);
                                                    *(undefined8 *)(lVar19 + 0x50) = uVar10;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x50)
                                                                       ,uVar10);
                                                    uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5040);
                                                    FUN_0554c13c(uVar10,param_1,
                                                                 *(undefined8 *)puVar2,0);
                                                    *(undefined8 *)(lVar19 + 0x58) = uVar10;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x58)
                                                                       ,uVar10);
                                                    lVar13 = *(long *)puVar5;
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      lVar13 = *(long *)puVar5;
                                                    }
                                                    puVar4 = 
                                                  UnityEngine_UIElements_ListViewReorderableDragAndDropController_TypeInfo
                                                  ;
                                                  puVar11 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar20 = puVar11[0xb];
                                                  if (lVar20 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar11;
                                                    lVar20 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar20,uVar10,
                                                                 *(undefined8 *)
                                                                  System_Net_NtlmClient_TypeInfo,0);
                                                    plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0x58);
                                                    *plVar12 = lVar20;
                                                    thunk_FUN_036b7ad0(plVar12,lVar20);
                                                  }
                                                  puVar11 = (undefined8 *)PTR_DAT_07a029b0;
                                                  *(long *)(lVar19 + 0x68) = lVar20;
                                                  thunk_FUN_036b7ad0((long *)(lVar19 + 0x68),lVar20)
                                                  ;
                                                  lVar13 = *(long *)puVar5;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar13 = *(long *)puVar5;
                                                  }
                                                  puVar2 = 
                                                  Newtonsoft_Json_Utilities_NoThrowGetBinderMember_TypeInfo
                                                  ;
                                                  puVar16 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar20 = puVar16[0xc];
                                                  if (lVar20 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar16 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar16;
                                                    lVar20 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar20,uVar10,
                                                                 *(undefined8 *)
                                                                  Mono_Http_NtlmSession_TypeInfo,0);
                                                    plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0x60);
                                                    *plVar12 = lVar20;
                                                    thunk_FUN_036b7ad0(plVar12,lVar20);
                                                    puVar11 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar19 + 0x70) = lVar20;
                                                  thunk_FUN_036b7ad0((long *)(lVar19 + 0x70),lVar20)
                                                  ;
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                               PTR_DAT_079fbc70);
                                                  FUN_0414c60c(uVar10,param_1,*(undefined8 *)puVar2,
                                                               0);
                                                  *(undefined8 *)(lVar19 + 0x48) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar19 + 0x48),
                                                                     uVar10);
                                                  if (*(long *)(lVar18 + 0x50) != 0) {
                                                    FUN_04a78624(*(long *)(lVar18 + 0x50),lVar19,
                                                                 *puVar11);
                                                    if (*(long *)(lVar15 + 0x50) != 0) {
                                                      FUN_04a78624(*(long *)(lVar15 + 0x50),lVar18,
                                                                   *puVar11);
                                                      lVar19 = *(long *)(lVar15 + 0x50);
                                                      lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                      
                                                  System_Net_NclUtilities_TypeInfo);
                                                  FUN_06ea6978(lVar18,0);
                                                  puVar7 = OVRCameraRig_TypeInfo;
                                                  puVar6 = Unity_InferenceEngine_Graph_Node_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  Newtonsoft_Json_Utilities_NoThrowSetBinderMember_TypeInfo
                                                  ;
                                                  if (lVar18 != 0) {
                                                    *(undefined8 *)(lVar18 + 0x30) =
                                                         *(undefined8 *)
                                                          OVRMarkerPayloadType_TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar18 + 0x38) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0();
                                                    uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(uVar10,param_1,
                                                                 *(undefined8 *)puVar2,0);
                                                    *(undefined8 *)(lVar18 + 0x50) = uVar10;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x50)
                                                                       ,uVar10);
                                                    uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5040);
                                                    FUN_0554c13c(uVar10,param_1,
                                                                 *(undefined8 *)puVar6,0);
                                                    *(undefined8 *)(lVar18 + 0x58) = uVar10;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x58)
                                                                       ,uVar10);
                                                    lVar13 = *(long *)puVar5;
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      lVar13 = *(long *)puVar5;
                                                    }
                                                    puVar11 = *(undefined8 **)(lVar13 + 0xb8);
                                                    lVar20 = puVar11[0xd];
                                                    if (lVar20 == 0) {
                                                      if (*(int *)(lVar13 + 0xe4) == 0) {
                                                        thunk_FUN_036a1978();
                                                        puVar11 = *(undefined8 **)
                                                                   (*(long *)puVar5 + 0xb8);
                                                      }
                                                      uVar10 = *puVar11;
                                                      lVar20 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                   PTR_DAT_07a20ff8)
                                                      ;
                                                      FUN_0414d94c(lVar20,uVar10,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Mono_Security_Protocol_Ntlm_NtlmSettings_TypeInfo,
                                                  0);
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x68);
                                                  *plVar12 = lVar20;
                                                  thunk_FUN_036b7ad0(plVar12,lVar20);
                                                  }
                                                  puVar2 = PTR_DAT_07a029b0;
                                                  *(long *)(lVar18 + 0x68) = lVar20;
                                                  thunk_FUN_036b7ad0((long *)(lVar18 + 0x68),lVar20)
                                                  ;
                                                  if (lVar19 != 0) {
                                                    FUN_04a78624(lVar19,lVar18,*(undefined8 *)puVar2
                                                                );
                                                    lVar18 = *(long *)(lVar9 + 0x10);
                                                    lVar19 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar18 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar18 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar15;
                                                        thunk_FUN_036b7ad0();
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar9,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x30) =
                                                         *(undefined8 *)
                                                          OVROverlayCanvasManager_TypeInfo;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x30)
                                                                      );
                                                    lVar19 = *(long *)(lVar15 + 0x50);
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_06ea66f4(lVar18,0);
                                                    puVar7 = OVRGLTFAccessor_TypeInfo;
                                                    puVar6 = 
                                                  Unity_InferenceEngine_Graph_NodeList_TypeInfo;
                                                  puVar2 = Sirenix_Serialization_NodeInfo_TypeInfo;
                                                  if (lVar18 != 0) {
                                                    *(undefined8 *)(lVar18 + 0x30) =
                                                         *(undefined8 *)OVRMarkerPayload_TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar18 + 0x38) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0();
                                                    uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079fbc70);
                                                    FUN_0414c60c(uVar10,param_1,
                                                                 *(undefined8 *)puVar2,0);
                                                    *(undefined8 *)(lVar18 + 0x50) = uVar10;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x50)
                                                                       ,uVar10);
                                                    uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5aa0);
                                                                                                        
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            (uVar10,param_1,*(undefined8 *)puVar6,0)
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x58) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x58),
                                                                     uVar10);
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_UIElements_NavigateFocusRing_TypeInfo)
                                                  ;
                                                  FUN_05620310(uVar10,param_1,
                                                               *(undefined8 *)
                                                                PadsWorkout_NoteType_TypeInfo,0);
                                                  *(undefined8 *)(lVar18 + 0x60) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x60),
                                                                     uVar10);
                                                  if (lVar19 != 0) {
                                                    FUN_04a78624(lVar19,lVar18,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    lVar19 = *(long *)(lVar15 + 0x50);
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_06ea66f4(lVar18,0);
                                                    puVar6 = OVRBounded3D_TypeInfo;
                                                    puVar2 = 
                                                  Unity_InferenceEngine_Layers_NonMaxSuppression_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  Unity_InferenceEngine_Graph_NodeSet_TypeInfo;
                                                  if (lVar18 != 0) {
                                                    *(undefined8 *)(lVar18 + 0x30) =
                                                         *(undefined8 *)OVRManager_TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar18 + 0x38) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_036b7ad0();
                                                    uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079fbc70);
                                                    FUN_0414c60c(uVar10,param_1,
                                                                 *(undefined8 *)puVar3,0);
                                                    *(undefined8 *)(lVar18 + 0x50) = uVar10;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x50)
                                                                       ,uVar10);
                                                    uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5aa0);
                                                                                                        
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            (uVar10,param_1,*(undefined8 *)puVar2,0)
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x58) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x58),
                                                                     uVar10);
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_UIElements_NavigateFocusRing_TypeInfo)
                                                  ;
                                                  FUN_05620310(uVar10,param_1,
                                                               *(undefined8 *)
                                                                PadsWorkout_NoteType_TypeInfo,0);
                                                  *(undefined8 *)(lVar18 + 0x60) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x60),
                                                                     uVar10);
                                                  if (lVar19 != 0) {
                                                    FUN_04a78624(lVar19,lVar18,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    lVar18 = *(long *)(lVar9 + 0x10);
                                                    lVar19 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    puVar3 = PTR_DAT_079fbc70;
                                                    if (lVar18 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar18 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_036b7ad0(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar9,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar15,0);
                                                  puVar2 = 
                                                  System_Runtime_Serialization_NonNegativeIntegerDataContract_TypeInfo
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x30) =
                                                         *(undefined8 *)OVRHaptics_TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_0414c60c(uVar10,param_1,
                                                                 *(undefined8 *)puVar2,0);
                                                    *(undefined8 *)(lVar15 + 0x48) = uVar10;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x48)
                                                                       ,uVar10);
                                                    lVar19 = *(long *)(lVar15 + 0x50);
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  );
                                                  FUN_06ea66f4(lVar18,0);
                                                  puVar7 = OVRGLTFLoader_TypeInfo;
                                                  puVar6 = System_NonSerializedAttribute_TypeInfo;
                                                  puVar2 = 
                                                  System_Runtime_Serialization_NonPositiveIntegerDataContract_TypeInfo
                                                  ;
                                                  if (lVar18 != 0) {
                                                    *(undefined8 *)(lVar18 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Interaction_Input_OVRPointerPoseSelector_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar18 + 0x38) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_036b7ad0();
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_0414c60c(uVar10,param_1,*(undefined8 *)puVar2,
                                                               0);
                                                  *(undefined8 *)(lVar18 + 0x50) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x50),
                                                                     uVar10);
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                               PTR_DAT_079f5aa0);
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            (uVar10,param_1,*(undefined8 *)puVar6,0)
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x58) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x58),
                                                                     uVar10);
                                                  if (lVar19 != 0) {
                                                    FUN_04a78624(lVar19,lVar18,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    lVar19 = *(long *)(lVar15 + 0x50);
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  );
                                                  FUN_06ea66f4(lVar18,0);
                                                  puVar2 = 
                                                  UnityEngine_Rendering_Universal_Internal_NormalReconstruction_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  Unity_InferenceEngine_Layers_NonZero_TypeInfo;
                                                  if (lVar18 != 0) {
                                                    *(undefined8 *)(lVar18 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVRGLTFAnimationNodeMorphTargetHandler_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  puVar11 = (undefined8 *)PTR_DAT_079fbc70;
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                               PTR_DAT_079fbc70);
                                                  FUN_0414c60c(uVar10,param_1,*(undefined8 *)puVar3,
                                                               0);
                                                  *(undefined8 *)(lVar18 + 0x50) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x50),
                                                                     uVar10);
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                               PTR_DAT_079f5aa0);
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            (uVar10,param_1,*(undefined8 *)puVar2,0)
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x58) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x58),
                                                                     uVar10);
                                                  puVar16 = (undefined8 *)PTR_DAT_07a029b0;
                                                  if (lVar19 != 0) {
                                                    FUN_04a78624(lVar19,lVar18,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    puVar3 = 
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  ;
                                                  lVar19 = *(long *)(lVar15 + 0x50);
                                                  lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  UnityEngine_UIElements_NavigationCancelEvent_TypeInfo
                                                  );
                                                  FUN_06ea66f4(lVar18,0);
                                                  puVar2 = OVROverlayCanvas_TMPChanged_TypeInfo;
                                                  if (lVar18 != 0) {
                                                    *(undefined8 *)(lVar18 + 0x30) =
                                                         *(undefined8 *)
                                                          OVRNodeStateProperties_TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar18 + 0x38) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0();
                                                    lVar13 = *(long *)puVar5;
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      lVar13 = *(long *)puVar5;
                                                    }
                                                    puVar17 = *(undefined8 **)(lVar13 + 0xb8);
                                                    lVar20 = puVar17[0xe];
                                                    if (lVar20 == 0) {
                                                      if (*(int *)(lVar13 + 0xe4) == 0) {
                                                        thunk_FUN_036a1978();
                                                        puVar17 = *(undefined8 **)
                                                                   (*(long *)puVar5 + 0xb8);
                                                      }
                                                      uVar10 = *puVar17;
                                                      lVar20 = thunk_FUN_0367fe20(*puVar11);
                                                      FUN_0414c60c(lVar20,uVar10,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Zenject_NullBindingFinalizer_TypeInfo,0);
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x70);
                                                  *plVar12 = lVar20;
                                                  thunk_FUN_036b7ad0(plVar12,lVar20);
                                                  puVar16 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar18 + 0x50) = lVar20;
                                                  thunk_FUN_036b7ad0((long *)(lVar18 + 0x50),lVar20)
                                                  ;
                                                  lVar13 = *(long *)puVar5;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar13 = *(long *)puVar5;
                                                  }
                                                  puVar17 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar20 = puVar17[0xf];
                                                  if (lVar20 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar17 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar17;
                                                    lVar20 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5aa0);
                                                                                                        
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            (lVar20,uVar10,
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Linq_Expressions_Interpreter_NullCheckInstruction_TypeInfo
                                                  ,0);
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x78);
                                                  *plVar12 = lVar20;
                                                  thunk_FUN_036b7ad0(plVar12,lVar20);
                                                  puVar16 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar18 + 0x58) = lVar20;
                                                  thunk_FUN_036b7ad0((long *)(lVar18 + 0x58),lVar20)
                                                  ;
                                                  if (lVar19 != 0) {
                                                    FUN_04a78624(lVar19,lVar18,*puVar16);
                                                    lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar18,0);
                                                  lVar19 = *(long *)puVar5;
                                                  if (*(int *)(lVar19 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar19 = *(long *)puVar5;
                                                  }
                                                  puVar16 = *(undefined8 **)(lVar19 + 0xb8);
                                                  lVar13 = puVar16[0x10];
                                                  if (lVar13 == 0) {
                                                    if (*(int *)(lVar19 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar16 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar16;
                                                    lVar13 = thunk_FUN_0367fe20(*puVar11);
                                                    FUN_0414c60c(lVar13,uVar10,
                                                                 *(undefined8 *)
                                                                  System_NullConsoleDriver_TypeInfo,
                                                                 0);
                                                    plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0x80);
                                                    *plVar12 = lVar13;
                                                    thunk_FUN_036b7ad0(plVar12,lVar13);
                                                  }
                                                  if (lVar18 != 0) {
                                                    *(long *)(lVar18 + 0x48) = lVar13;
                                                    thunk_FUN_036b7ad0((long *)(lVar18 + 0x48),
                                                                       lVar13);
                                                    lVar13 = *(long *)(lVar18 + 0x50);
                                                    lVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                  
                                                  Unity_InferenceEngine_Layers_NearestMode_TypeInfo)
                                                  ;
                                                  FUN_06ea680c(lVar19,0);
                                                  puVar2 = OVRLocatable_TypeInfo;
                                                  if (lVar19 != 0) {
                                                    *(undefined8 *)(lVar19 + 0x30) =
                                                         *(undefined8 *)OVRRaycaster_TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar19 + 0x38) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0();
                                                    lVar20 = *(long *)puVar5;
                                                    if (*(int *)(lVar20 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      lVar20 = *(long *)puVar5;
                                                    }
                                                    puVar16 = *(undefined8 **)(lVar20 + 0xb8);
                                                    lVar21 = puVar16[0x11];
                                                    if (lVar21 == 0) {
                                                      if (*(int *)(lVar20 + 0xe4) == 0) {
                                                        thunk_FUN_036a1978();
                                                        puVar16 = *(undefined8 **)
                                                                   (*(long *)puVar5 + 0xb8);
                                                      }
                                                      uVar10 = *puVar16;
                                                      lVar21 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                   PTR_DAT_07a00dd0)
                                                      ;
                                                      FUN_0414cefc(lVar21,uVar10,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  UnityThreading_NullDispatcher_TypeInfo,0);
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x88);
                                                  *plVar12 = lVar21;
                                                  thunk_FUN_036b7ad0(plVar12,lVar21);
                                                  puVar11 = (undefined8 *)PTR_DAT_079fbc70;
                                                  }
                                                  *(long *)(lVar19 + 0x50) = lVar21;
                                                  thunk_FUN_036b7ad0((long *)(lVar19 + 0x50),lVar21)
                                                  ;
                                                  lVar20 = *(long *)puVar5;
                                                  if (*(int *)(lVar20 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar20 = *(long *)puVar5;
                                                  }
                                                  puVar16 = *(undefined8 **)(lVar20 + 0xb8);
                                                  lVar21 = puVar16[0x12];
                                                  if (lVar21 == 0) {
                                                    if (*(int *)(lVar20 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar16 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar16;
                                                    lVar21 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5048);
                                                    FUN_055487a4(lVar21,uVar10,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_NullReferenceException_TypeInfo,0);
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x90);
                                                  *plVar12 = lVar21;
                                                  thunk_FUN_036b7ad0(plVar12,lVar21);
                                                  puVar11 = (undefined8 *)PTR_DAT_079fbc70;
                                                  }
                                                  *(long *)(lVar19 + 0x58) = lVar21;
                                                  thunk_FUN_036b7ad0((long *)(lVar19 + 0x58),lVar21)
                                                  ;
                                                  lVar20 = *(long *)puVar5;
                                                  if (*(int *)(lVar20 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar20 = *(long *)puVar5;
                                                  }
                                                  puVar16 = *(undefined8 **)(lVar20 + 0xb8);
                                                  lVar21 = puVar16[0x13];
                                                  if (lVar21 == 0) {
                                                    if (*(int *)(lVar20 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar16 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar16;
                                                    lVar21 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a00dd0);
                                                    FUN_0414cefc(lVar21,uVar10,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Meta_XR_Editor_FalcoOVRTelemetry_NullTelemetryClient_TypeInfo
                                                  ,0);
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x98);
                                                  *plVar12 = lVar21;
                                                  thunk_FUN_036b7ad0(plVar12,lVar21);
                                                  puVar11 = (undefined8 *)PTR_DAT_079fbc70;
                                                  }
                                                  *(long *)(lVar19 + 0x68) = lVar21;
                                                  thunk_FUN_036b7ad0((long *)(lVar19 + 0x68),lVar21)
                                                  ;
                                                  lVar20 = *(long *)puVar5;
                                                  if (*(int *)(lVar20 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar20 = *(long *)puVar5;
                                                  }
                                                  puVar16 = *(undefined8 **)(lVar20 + 0xb8);
                                                  lVar21 = puVar16[0x14];
                                                  if (lVar21 == 0) {
                                                    if (*(int *)(lVar20 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar16 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar16;
                                                    lVar21 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a00dd0);
                                                    FUN_0414cefc(lVar21,uVar10,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_TypeInfo
                                                  ,0);
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xa0);
                                                  *plVar12 = lVar21;
                                                  thunk_FUN_036b7ad0(plVar12,lVar21);
                                                  puVar11 = (undefined8 *)PTR_DAT_079fbc70;
                                                  }
                                                  *(long *)(lVar19 + 0x70) = lVar21;
                                                  thunk_FUN_036b7ad0((long *)(lVar19 + 0x70),lVar21)
                                                  ;
                                                  puVar16 = (undefined8 *)PTR_DAT_07a029b0;
                                                  if (lVar13 != 0) {
                                                    FUN_04a78624(lVar13,lVar19,
                                                                 *(undefined8 *)PTR_DAT_07a029b0);
                                                    puVar2 = PTR_DAT_079f4540;
                                                    if (*(long *)(lVar15 + 0x50) != 0) {
                                                      FUN_04a78624(*(long *)(lVar15 + 0x50),lVar18,
                                                                   *puVar16);
                                                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                                        thunk_FUN_036a1978();
                                                      }
                                                      uVar14 = FUN_0717a688(0);
                                                      if ((uVar14 & 1) != 0) {
                                                        lVar19 = *(long *)(lVar15 + 0x50);
                                                        lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                     puVar3);
                                                        FUN_06ea66f4(lVar18,0);
                                                        if (lVar18 == 0) goto LAB_06eb5ee8;
                                                        *(undefined8 *)(lVar18 + 0x30) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  uVar10 = thunk_FUN_0367fe20(*puVar11);
                                                  FUN_0414c60c(uVar10,param_1,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Mono_Globalization_Unicode_NormalizationTableUtil_TypeInfo
                                                  ,0);
                                                  *(undefined8 *)(lVar18 + 0x50) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x50),
                                                                     uVar10);
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                               PTR_DAT_079f5aa0);
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            (uVar10,param_1,
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Runtime_Serialization_NormalizedStringDataContract_TypeInfo
                                                  ,0);
                                                  *(undefined8 *)(lVar18 + 0x58) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x58),
                                                                     uVar10);
                                                  if (lVar19 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar19,lVar18,*puVar16);
                                                  lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar18,0);
                                                  uVar10 = thunk_FUN_0367fe20(*puVar11);
                                                  FUN_0414c60c(uVar10,param_1,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Unity_InferenceEngine_Layers_Not_TypeInfo,0);
                                                  if (lVar18 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar18 + 0x48) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x48),
                                                                     uVar10);
                                                  lVar13 = *(long *)(lVar18 + 0x50);
                                                  lVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                               PTR_DAT_07a029d8);
                                                  FUN_06e958f8(lVar19,0);
                                                  if (lVar19 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar19 + 0x30) =
                                                       *(undefined8 *)OVRDisplay_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  lVar20 = *(long *)puVar5;
                                                  if (*(int *)(lVar20 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar20 = *(long *)puVar5;
                                                  }
                                                  puVar16 = *(undefined8 **)(lVar20 + 0xb8);
                                                  lVar21 = puVar16[0x15];
                                                  if (lVar21 == 0) {
                                                    if (*(int *)(lVar20 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar16 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar16;
                                                    lVar21 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079fd998);
                                                    FUN_0414d3cc(lVar21,uVar10,
                                                                 *(undefined8 *)
                                                                  System_Number_TypeInfo,0);
                                                    plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0xa8);
                                                    *plVar12 = lVar21;
                                                    thunk_FUN_036b7ad0(plVar12,lVar21);
                                                    puVar11 = (undefined8 *)PTR_DAT_079fbc70;
                                                  }
                                                  *(long *)(lVar19 + 0x50) = lVar21;
                                                  thunk_FUN_036b7ad0((long *)(lVar19 + 0x50),lVar21)
                                                  ;
                                                  puVar16 = (undefined8 *)PTR_DAT_07a029b0;
                                                  if (lVar13 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar13,lVar19,
                                                               *(undefined8 *)PTR_DAT_07a029b0);
                                                  if (*(long *)(lVar15 + 0x50) == 0)
                                                  goto LAB_06eb5ee8;
                                                  FUN_04a78624(*(long *)(lVar15 + 0x50),lVar18,
                                                               *puVar16);
                                                  lVar19 = *(long *)(lVar15 + 0x50);
                                                  lVar18 = thunk_FUN_0367fe20(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_06ea66f4(lVar18,0);
                                                  if (lVar18 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar18 + 0x30) =
                                                       *(undefined8 *)OVRHapticsClip_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  uVar10 = thunk_FUN_0367fe20(*puVar11);
                                                  FUN_0414c60c(uVar10,param_1,
                                                               *(undefined8 *)
                                                                                                                                
                                                  System_Linq_Expressions_Interpreter_NotEqualInstruction_TypeInfo
                                                  ,0);
                                                  *(undefined8 *)(lVar18 + 0x50) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x50),
                                                                     uVar10);
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                               PTR_DAT_079f5aa0);
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            (uVar10,param_1,
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_NotFiniteNumberException_TypeInfo,0);
                                                  *(undefined8 *)(lVar18 + 0x58) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x58),
                                                                     uVar10);
                                                  if (lVar19 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar19,lVar18,*puVar16);
                                                  lVar19 = *(long *)(lVar15 + 0x50);
                                                  lVar18 = thunk_FUN_0367fe20(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_06ea66f4(lVar18,0);
                                                  if (lVar18 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar18 + 0x30) =
                                                       *(undefined8 *)OVRPlatformMenu_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  uVar10 = thunk_FUN_0367fe20(*puVar11);
                                                  FUN_0414c60c(uVar10,param_1,
                                                               *(undefined8 *)
                                                                                                                                
                                                  System_NotImplementedException_TypeInfo,0);
                                                  *(undefined8 *)(lVar18 + 0x50) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x50),
                                                                     uVar10);
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                               PTR_DAT_079f5aa0);
                                                  System_Collections_Generic_Dictionary<Int32Enum,_BodySkeletonMapping_JointInfo<Int32Enum>>__System_Collections_IDictionary_set_Item
                                                            (uVar10,param_1,
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Linq_Expressions_Interpreter_NotInstruction_TypeInfo
                                                  ,0);
                                                  *(undefined8 *)(lVar18 + 0x58) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x58),
                                                                     uVar10);
                                                  if (lVar19 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar19,lVar18,*puVar16);
                                                  }
                                                  lVar18 = *(long *)(lVar9 + 0x10);
                                                  lVar19 = *(long *)puVar4;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar15;
                                                      thunk_FUN_036b7ad0(plVar12,lVar15);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = PTR_DAT_079f4e28;
                                                  if (*(char *)(param_1 + 0x1a) != '\0') {
                                                    if (*(long *)(param_1 + 0x148) == 0)
                                                    goto LAB_06eb5ee8;
                                                    uVar10 = FUN_06ed5230(*(long *)(param_1 + 0x148)
                                                                          ,0);
                                                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978(*(long *)puVar3);
                                                    }
                                                    uVar14 = FUN_071c0684(uVar10,0,0);
                                                    if ((uVar14 & 1) != 0) {
                                                      lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                      
                                                  Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo
                                                  );
                                                  FUN_06ea5298(lVar15,0);
                                                  if (lVar15 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar15 + 0x30) =
                                                       *(undefined8 *)OVRColocationSession_TypeInfo;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar15 + 0x30));
                                                  lVar19 = *(long *)(lVar15 + 0x50);
                                                  lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Unity_InferenceEngine_Layers_NearestMode_TypeInfo)
                                                  ;
                                                  FUN_06ea680c(lVar18,0);
                                                  if (lVar18 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar18 + 0x30) =
                                                       *(undefined8 *)OVRGLTFType_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  lVar13 = *(long *)puVar5;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar13 = *(long *)puVar5;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar20 = puVar11[0x16];
                                                  if (lVar20 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar11;
                                                    lVar20 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a00dd0);
                                                    FUN_0414cefc(lVar20,uVar10,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Globalization_NumberFormatInfo_TypeInfo,0);
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xb0);
                                                  *plVar12 = lVar20;
                                                  thunk_FUN_036b7ad0(plVar12,lVar20);
                                                  puVar16 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar18 + 0x50) = lVar20;
                                                  thunk_FUN_036b7ad0((long *)(lVar18 + 0x50),lVar20)
                                                  ;
                                                  lVar13 = *(long *)puVar5;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar13 = *(long *)puVar5;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar20 = puVar11[0x17];
                                                  if (lVar20 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar11;
                                                    lVar20 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5048);
                                                    FUN_055487a4(lVar20,uVar10,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  MS_Internal_Xml_XPath_NumberFunctions_TypeInfo,0);
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xb8);
                                                  *plVar12 = lVar20;
                                                  thunk_FUN_036b7ad0(plVar12,lVar20);
                                                  puVar16 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar18 + 0x58) = lVar20;
                                                  thunk_FUN_036b7ad0((long *)(lVar18 + 0x58),lVar20)
                                                  ;
                                                  lVar13 = *(long *)puVar5;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar13 = *(long *)puVar5;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar20 = puVar11[0x18];
                                                  if (lVar20 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar11;
                                                    lVar20 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a00dd0);
                                                    FUN_0414cefc(lVar20,uVar10,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Xml_Schema_Numeric10FacetsChecker_TypeInfo,
                                                  0);
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xc0);
                                                  *plVar12 = lVar20;
                                                  thunk_FUN_036b7ad0(plVar12,lVar20);
                                                  puVar16 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar18 + 0x68) = lVar20;
                                                  thunk_FUN_036b7ad0((long *)(lVar18 + 0x68),lVar20)
                                                  ;
                                                  if (lVar19 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar19,lVar18,*puVar16);
                                                  lVar19 = *(long *)(lVar15 + 0x50);
                                                  lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_NclUtilities_TypeInfo);
                                                  FUN_06ea6978(lVar18,0);
                                                  if (lVar18 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar18 + 0x30) =
                                                       *(undefined8 *)
                                                        OVRHandSkeletonVersion_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  lVar13 = *(long *)puVar5;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar13 = *(long *)puVar5;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar20 = puVar11[0x19];
                                                  if (lVar20 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar11;
                                                    lVar20 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar20,uVar10,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Xml_Schema_Numeric2FacetsChecker_TypeInfo,0
                                                  );
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 200);
                                                  *plVar12 = lVar20;
                                                  thunk_FUN_036b7ad0(plVar12,lVar20);
                                                  puVar16 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar18 + 0x50) = lVar20;
                                                  thunk_FUN_036b7ad0((long *)(lVar18 + 0x50),lVar20)
                                                  ;
                                                  lVar13 = *(long *)puVar5;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar13 = *(long *)puVar5;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar20 = puVar11[0x1a];
                                                  if (lVar20 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar11;
                                                    lVar20 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5040);
                                                    FUN_0554c13c(lVar20,uVar10,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  MS_Internal_Xml_XPath_NumericExpr_TypeInfo,0);
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xd0);
                                                  *plVar12 = lVar20;
                                                  thunk_FUN_036b7ad0(plVar12,lVar20);
                                                  puVar16 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar18 + 0x58) = lVar20;
                                                  thunk_FUN_036b7ad0((long *)(lVar18 + 0x58),lVar20)
                                                  ;
                                                  lVar13 = *(long *)puVar5;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar13 = *(long *)puVar5;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar20 = puVar11[0x1b];
                                                  if (lVar20 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar11;
                                                    lVar20 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar20,uVar10,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_NumericFieldDraggerUtility_TypeInfo,0)
                                                  ;
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xd8);
                                                  *plVar12 = lVar20;
                                                  thunk_FUN_036b7ad0(plVar12,lVar20);
                                                  puVar16 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar18 + 0x68) = lVar20;
                                                  thunk_FUN_036b7ad0((long *)(lVar18 + 0x68),lVar20)
                                                  ;
                                                  lVar13 = *(long *)puVar5;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar13 = *(long *)puVar5;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar20 = puVar11[0x1c];
                                                  if (lVar20 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar11;
                                                    lVar20 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar20,uVar10,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Runtime_InteropServices_OSPlatform_TypeInfo
                                                  ,0);
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xe0);
                                                  *plVar12 = lVar20;
                                                  thunk_FUN_036b7ad0(plVar12,lVar20);
                                                  puVar16 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar18 + 0x70) = lVar20;
                                                  thunk_FUN_036b7ad0((long *)(lVar18 + 0x70),lVar20)
                                                  ;
                                                  if (lVar19 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar19,lVar18,*puVar16);
                                                  lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Newtonsoft_Json_JsonWriterException_TypeInfo);
                                                  FUN_06e99510(lVar18,0);
                                                  if (lVar18 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar18 + 0x30) =
                                                       *(undefined8 *)OVRPose_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar18 + 0x38) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_EventSystems_OVRInputModule_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar18 + 0x68) =
                                                       *(undefined8 *)(param_1 + 0x1e8);
                                                  thunk_FUN_036b7ad0();
                                                  FUN_058206a4(lVar18,*(undefined8 *)
                                                                       (param_1 + 0x1f0),
                                                               *(undefined8 *)
                                                                Newtonsoft_Json_JsonWriter_TypeInfo)
                                                  ;
                                                  puVar2 = PTR_DAT_07a00dd0;
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                               PTR_DAT_07a00dd0);
                                                  FUN_0414cefc(uVar10,param_1,
                                                               *(undefined8 *)
                                                                PadsWorkout_Note_TypeInfo,0);
                                                  *(undefined8 *)(lVar18 + 0x88) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x88),
                                                                     uVar10);
                                                  puVar3 = PTR_DAT_079f5048;
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                               PTR_DAT_079f5048);
                                                  FUN_055487a4(uVar10,param_1,
                                                               *(undefined8 *)
                                                                PadsWorkout_NoteClip_TypeInfo,0);
                                                  *(undefined8 *)(lVar18 + 0x90) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x90),
                                                                     uVar10);
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0414cefc(uVar10,param_1,
                                                               *(undefined8 *)
                                                                NAudio_Midi_NoteEvent_TypeInfo,0);
                                                  *(undefined8 *)(lVar18 + 0x50) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x50),
                                                                     uVar10);
                                                  uVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_055487a4(uVar10,param_1,
                                                               *(undefined8 *)
                                                                NAudio_Midi_NoteOnEvent_TypeInfo,0);
                                                  *(undefined8 *)(lVar18 + 0x58) = uVar10;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar18 + 0x58),
                                                                     uVar10);
                                                  *(long *)(param_1 + 0x208) = lVar18;
                                                  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x208)
                                                                     ,lVar18);
                                                  if (*(long *)(lVar15 + 0x50) == 0)
                                                  goto LAB_06eb5ee8;
                                                  FUN_04a78624(*(long *)(lVar15 + 0x50),
                                                               *(undefined8 *)(param_1 + 0x208),
                                                               *puVar16);
                                                  lVar19 = *(long *)(lVar15 + 0x50);
                                                  lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  System_Net_NclUtilities_TypeInfo);
                                                  FUN_06ea6978(lVar18,0);
                                                  if (lVar18 == 0) goto LAB_06eb5ee8;
                                                  *(undefined8 *)(lVar18 + 0x30) =
                                                       *(undefined8 *)OVRFaceExpressions_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar18 + 0x38) =
                                                       *(undefined8 *)OVRControllerTest_TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  lVar13 = *(long *)puVar5;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar13 = *(long *)puVar5;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar20 = puVar11[0x1d];
                                                  if (lVar20 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar11;
                                                    lVar20 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar20,uVar10,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Threading_OSSpecificSynchronizationContext_TypeInfo
                                                  ,0);
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0xe8);
                                                  *plVar12 = lVar20;
                                                  thunk_FUN_036b7ad0(plVar12,lVar20);
                                                  puVar16 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar18 + 0x50) = lVar20;
                                                  thunk_FUN_036b7ad0((long *)(lVar18 + 0x50),lVar20)
                                                  ;
                                                  lVar13 = *(long *)puVar5;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar13 = *(long *)puVar5;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar20 = puVar11[0x1e];
                                                  if (lVar20 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar11;
                                                    lVar20 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_079f5040);
                                                    FUN_0554c13c(lVar20,uVar10,
                                                                 *(undefined8 *)OVRAnchor_TypeInfo,0
                                                                );
                                                    plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0xf0);
                                                    *plVar12 = lVar20;
                                                    thunk_FUN_036b7ad0(plVar12,lVar20);
                                                    puVar16 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar18 + 0x58) = lVar20;
                                                  thunk_FUN_036b7ad0((long *)(lVar18 + 0x58),lVar20)
                                                  ;
                                                  lVar13 = *(long *)puVar5;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar13 = *(long *)puVar5;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar20 = puVar11[0x1f];
                                                  if (lVar20 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar11;
                                                    lVar20 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar20,uVar10,
                                                                 *(undefined8 *)
                                                                  OVRAnchorContainer_TypeInfo,0);
                                                    plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                                0xb8) + 0xf8);
                                                    *plVar12 = lVar20;
                                                    thunk_FUN_036b7ad0(plVar12,lVar20);
                                                    puVar16 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar18 + 0x68) = lVar20;
                                                  thunk_FUN_036b7ad0((long *)(lVar18 + 0x68),lVar20)
                                                  ;
                                                  lVar13 = *(long *)puVar5;
                                                  if (*(int *)(lVar13 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                    lVar13 = *(long *)puVar5;
                                                  }
                                                  puVar11 = *(undefined8 **)(lVar13 + 0xb8);
                                                  lVar20 = puVar11[0x20];
                                                  if (lVar20 == 0) {
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_036a1978();
                                                      puVar11 = *(undefined8 **)
                                                                 (*(long *)puVar5 + 0xb8);
                                                    }
                                                    uVar10 = *puVar11;
                                                    lVar20 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 PTR_DAT_07a20ff8);
                                                    FUN_0414d94c(lVar20,uVar10,
                                                                 *(undefined8 *)OVRBone_TypeInfo,0);
                                                    lVar13 = *(long *)(*(long *)puVar5 + 0xb8);
                                                    *(long *)(lVar13 + 0x100) = lVar20;
                                                    thunk_FUN_036b7ad0(lVar13 + 0x100,lVar20);
                                                    puVar16 = (undefined8 *)PTR_DAT_07a029b0;
                                                  }
                                                  *(long *)(lVar18 + 0x70) = lVar20;
                                                  thunk_FUN_036b7ad0((long *)(lVar18 + 0x70),lVar20)
                                                  ;
                                                  if (lVar19 == 0) goto LAB_06eb5ee8;
                                                  FUN_04a78624(lVar19,lVar18,*puVar16);
                                                  lVar18 = *(long *)(lVar9 + 0x10);
                                                  lVar19 = *(long *)puVar4;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar18 == 0) goto LAB_06eb5ee8;
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    plVar12 = (long *)(lVar18 + (long)(int)uVar1 * 8
                                                                      + 0x20);
                                                    *plVar12 = lVar15;
                                                    thunk_FUN_036b7ad0(plVar12,lVar15);
                                                  }
                                                  else {
                                                    FUN_0459f03c(lVar9,lVar15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar19 + 0x20
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
                                                  if (0 < *(int *)(lVar9 + 0x18)) {
                                                    uVar10 = FUN_045a0b8c(lVar9,*(undefined8 *)
                                                                                                                                                                  
                                                  UnityEngine_UIElements_ListViewDraggerAnimated_TypeInfo
                                                  );
                                                  *(undefined8 *)(param_1 + 0x198) = uVar10;
                                                  thunk_FUN_036b7ad0(param_1 + 0x198,uVar10);
                                                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                  }
                                                  lVar9 = FUN_06e96d28(0);
                                                  lVar15 = *(long *)puVar5;
                                                  if (*(int *)(lVar15 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978(lVar15);
                                                  }
                                                  if (((lVar9 == 0) ||
                                                      (lVar9 = FUN_06e96e60(lVar9,*(undefined8 *)
                                                                                   (*(long *)(*(long
                                                                                                *)
                                                  puVar5 + 0xb8) + 0x10),1,0,0,0), lVar9 == 0)) ||
                                                  (*(long *)(lVar9 + 0x28) == 0)) goto LAB_06eb5ee8;
                                                  FUN_04a7870c(*(long *)(lVar9 + 0x28),
                                                               *(undefined8 *)(param_1 + 0x198),
                                                               *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_Rendering_LocalKeyword_TypeInfo);
                                                  }
                                                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                    thunk_FUN_036a1978();
                                                  }
                                                  lVar9 = FUN_06e96d28(0);
                                                  if (lVar9 != 0) {
                                                    FUN_06e96db4(lVar9,*(undefined8 *)
                                                                        (param_1 + 0x180),0);
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


