/*
FUNCTION_NAME: FUN_0639b108
ENTRY_POINT: 0639b108
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_4;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0639b108(long param_1)

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
  undefined *puVar11;
  undefined8 uVar12;
  
  puVar1 = UnityEngine_Rendering_XRGraphicsAutomatedTests_TypeInfo;
  if ((bRam0000000006e9bb84 & 1) == 0) {
    FUN_02e3ca1c(UnityEngine_InputSystem_XR_XRHMD_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_TypeInfo);
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_XRInputDeviceHapticImpulseChannel_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_XRInputDeviceHapticImpulseChannelGroup_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_XRInputHapticImpulseProvider_TypeInfo
                );
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_XRInputSubsystem_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Utilities_XRInteractableUtility_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_TypeInfo);
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRInteractionSimulator_TypeInfo
                );
    FUN_02e3ca1c(UnityEngine_InputSystem_XR_XRLayoutBuilder_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Experimental_Rendering_XRLayoutStack_TypeInfo);
    FUN_02e3ca1c(Unity_XR_CoreUtils_XRLoggingUtils_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Management_XRManagementAnalytics_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Experimental_Rendering_XRMirrorView_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Locomotion_XRMovableBody_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_XRNodeState_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Experimental_Rendering_XROcclusionMesh_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Rendering_Universal_XROcclusionMeshPass_TypeInfo);
    FUN_02e3ca1c(Unity_XR_CoreUtils_XROrigin_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Locomotion_XROriginMovement_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Locomotion_XROriginUpAlignment_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Experimental_Rendering_XRPass_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Rendering_Universal_XRPassUniversal_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Interactors_XRPokeInteractor_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_TypeInfo);
    FUN_02e3ca1c(Modules_Core_XRPose_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_XRScreenSpaceController_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRSimulatedController_TypeInfo
                );
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRSimulatedHMD_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRSimulatorUtility_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Experimental_Rendering_XRSystem_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetFilter_TypeInfo);
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Interactables_Visuals_XRTintInteractableVisual_TypeInfo
                );
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_UI_XRUIToolkitHandler_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Experimental_Rendering_XRView_TypeInfo);
    FUN_02e3ca1c(System_Data_XSDSchema_TypeInfo);
    FUN_02e3ca1c(System_Xml_Linq_XStreamingElement_TypeInfo);
    FUN_02e3ca1c(System_Xml_Linq_XText_TypeInfo);
    FUN_02e3ca1c(Newtonsoft_Json_Converters_XTextWrapper_TypeInfo);
    FUN_02e3ca1c(System_Xml_Schema_XdrBuilder_TypeInfo);
    FUN_02e3ca1c(System_Xml_Schema_XdrValidator_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlAnyAttributeAttribute_TypeInfo);
    FUN_02e3ca1c(System_Xml_Schema_XmlAnyConverter_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlAnyElementAttribute_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlAnyElementAttributes_TypeInfo);
    FUN_02e3ca1c(System_Xml_Schema_XmlAnyListConverter_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlArrayAttribute_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlArrayItemAttribute_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlArrayItemAttributes_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlAsyncCheckReader_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlAsyncCheckReaderWithLineInfo_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlAsyncCheckReaderWithLineInfoNS_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlAsyncCheckReaderWithLineInfoNSSchema_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlAsyncCheckReaderWithNS_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlAsyncCheckWriter_TypeInfo);
    FUN_02e3ca1c(System_Xml_Schema_XmlAtomicValue_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlAttribute_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlAttributeAttribute_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlAttributeCollection_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlAttributeEventArgs_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlAttributeOverrides_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlAttributes_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlAutoDetectWriter_TypeInfo);
    FUN_02e3ca1c(System_Xml_Schema_XmlBaseConverter_TypeInfo);
    FUN_02e3ca1c(System_Xml_Schema_XmlBooleanConverter_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlCDataSection_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlCachedStream_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlCharType_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlChildEnumerator_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlChildNodes_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlChoiceIdentifierAttribute_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlComment_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlConvert_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlCustomFormatter_TypeInfo);
    FUN_02e3ca1c(System_Data_XmlDataLoader_TypeInfo);
    FUN_02e3ca1c(System_Data_XmlDataTreeWriter_TypeInfo);
    FUN_02e3ca1c(System_Xml_Schema_XmlDateTimeConverter_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlDateTimeSerializationMode_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlDeclaration_TypeInfo);
    FUN_02e3ca1c(Newtonsoft_Json_Converters_XmlDeclarationWrapper_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlDocument_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlDocumentFragment_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Rendering_XRGraphicsAutomatedTests_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlDocumentType_TypeInfo);
    FUN_02e3ca1c(Newtonsoft_Json_Converters_XmlDocumentTypeWrapper_TypeInfo);
    FUN_02e3ca1c(Newtonsoft_Json_Converters_XmlDocumentWrapper_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlDownloadManager_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlElement_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlElementAttribute_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlElementAttributes_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlElementEventArgs_TypeInfo);
    FUN_02e3ca1c(Newtonsoft_Json_Converters_XmlElementWrapper_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlEncodedRawTextWriter_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlEncodedRawTextWriterIndent_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlEntity_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlEntityReference_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlEnumAttribute_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlEventCache_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlException_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlIgnoreAttribute_TypeInfo);
    FUN_02e3ca1c(System_Data_XmlIgnoreNamespaceReader_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlImplementation_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlLinkedNode_TypeInfo);
    FUN_02e3ca1c(System_Xml_Schema_XmlListConverter_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlLoader_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlMembersMapping_TypeInfo);
    FUN_02e3ca1c(System_Xml_Schema_XmlMiscConverter_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlName_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlNameEx_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlNamedNodeMap_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlNamespaceDeclarationsAttribute_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlNamespaceManager_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlNode_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlNodeChangedEventArgs_TypeInfo);
    FUN_02e3ca1c(Newtonsoft_Json_Converters_XmlNodeConverter_TypeInfo);
    FUN_02e3ca1c(System_Xml_Serialization_XmlNodeEventArgs_TypeInfo);
    FUN_02e3ca1c(System_Xml_XmlNodeReaderNavigator_TypeInfo);
    bRam0000000006e9bb84 = 1;
  }
  puVar11 = System_Xml_XmlDocumentFragment_TypeInfo;
  puVar10 = System_Xml_XmlCDataSection_TypeInfo;
  puVar9 = System_Xml_Schema_XmlBooleanConverter_TypeInfo;
  puVar8 = System_Xml_XmlAsyncCheckReaderWithLineInfoNSSchema_TypeInfo;
  puVar7 = System_Xml_Schema_XdrValidator_TypeInfo;
  puVar6 = UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_TypeInfo;
  puVar5 = UnityEngine_Rendering_Universal_XRPassUniversal_TypeInfo;
  puVar4 = UnityEngine_Experimental_Rendering_XRPass_TypeInfo;
  puVar3 = UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_TypeInfo;
  puVar2 = UnityEngine_InputSystem_XR_XRHMD_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_04353a5c(param_1,*(undefined8 *)puVar11);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)puVar10);
  FUN_03f2ae1c(uVar12,0x54,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 0x18) = uVar12;
  thunk_FUN_02ee2be8((undefined8 *)(param_1 + 0x18),uVar12);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)puVar5);
  FUN_04deec7c(uVar12,0xfc,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x20) = uVar12;
  thunk_FUN_02ee2be8((undefined8 *)(param_1 + 0x20),uVar12);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
  FUN_0639c61c();
  FUN_03934434(param_1,uVar12,*(undefined8 *)puVar7);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
  FUN_0639c664();
  FUN_03934434(param_1,uVar12,*(undefined8 *)puVar7);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_XRInputDeviceHapticImpulseChannel_TypeInfo
                             );
  FUN_0639c6ac();
  FUN_03934434(param_1,uVar12,*(undefined8 *)puVar7);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_XRInputDeviceHapticImpulseChannelGroup_TypeInfo
                             );
  FUN_0639d668();
  puVar1 = UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_TypeInfo;
  FUN_03934fb4(param_1,uVar12,
               *(undefined8 *)
                UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_XRInputHapticImpulseProvider_TypeInfo
                             );
  FUN_0639da90();
  FUN_039349f4(param_1,uVar12,
               *(undefined8 *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TypeInfo
                             );
  FUN_0639e2f0();
  FUN_03934b64(param_1,uVar12,*(undefined8 *)puVar6);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_XR_XRInputSubsystem_TypeInfo);
  FUN_0639e2f0();
  FUN_03934b64(param_1,uVar12,*(undefined8 *)puVar6);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator_TypeInfo
                             );
  FUN_0639e710();
  FUN_03934cd4(param_1,uVar12,
               *(undefined8 *)
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Utilities_XRInteractableUtility_TypeInfo
                             );
  FUN_0639e984();
  FUN_03934e44(param_1,uVar12,*(undefined8 *)UnityEngine_Experimental_Rendering_XRSystem_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_TypeInfo
                             );
  FUN_0639d668();
  FUN_03934fb4(param_1,uVar12,*(undefined8 *)puVar1);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRInteractionSimulator_TypeInfo
                             );
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_InputSystem_XR_XRLayoutBuilder_TypeInfo);
  FUN_0639f528();
  puVar2 = System_Xml_Serialization_XmlArrayItemAttributes_TypeInfo;
  FUN_03935294(param_1,uVar12,
               *(undefined8 *)System_Xml_Serialization_XmlArrayItemAttributes_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_Experimental_Rendering_XRLayoutStack_TypeInfo);
  FUN_0639d668();
  FUN_03934fb4(param_1,uVar12,*(undefined8 *)puVar1);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)Unity_XR_CoreUtils_XRLoggingUtils_TypeInfo);
  FUN_0639f528();
  FUN_03935294(param_1,uVar12,*(undefined8 *)puVar2);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Management_XRManagementAnalytics_TypeInfo);
  FUN_0639d668();
  FUN_03934fb4(param_1,uVar12,*(undefined8 *)puVar1);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_Experimental_Rendering_XRMirrorView_TypeInfo);
  FUN_0639f528();
  FUN_03935294(param_1,uVar12,*(undefined8 *)puVar2);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Locomotion_XRMovableBody_TypeInfo)
  ;
  FUN_0639d668();
  FUN_03934fb4(param_1,uVar12,*(undefined8 *)puVar1);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_XR_XRNodeState_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_Experimental_Rendering_XROcclusionMesh_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_Rendering_Universal_XROcclusionMeshPass_TypeInfo);
  FUN_0639f528();
  FUN_03935294(param_1,uVar12,*(undefined8 *)puVar2);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)Unity_XR_CoreUtils_XROrigin_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Locomotion_XROriginMovement_TypeInfo
                             );
  FUN_0639d668();
  FUN_03934fb4(param_1,uVar12,*(undefined8 *)puVar1);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Locomotion_XROriginUpAlignment_TypeInfo
                             );
  FUN_063a0d3c();
  FUN_03935124(param_1,uVar12,
               *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetFilter_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Interactors_XRPokeInteractor_TypeInfo
                             );
  FUN_0639c748();
  FUN_03934434(param_1,uVar12,*(undefined8 *)System_Data_XSDSchema_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)Modules_Core_XRPose_TypeInfo);
  FUN_0639c794();
  FUN_03934434(param_1,uVar12,*(undefined8 *)System_Xml_Linq_XText_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_TypeInfo
                             );
  FUN_0639f528();
  FUN_03935294(param_1,uVar12,*(undefined8 *)puVar2);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_XRScreenSpaceController_TypeInfo);
  FUN_0639f528();
  FUN_03935294(param_1,uVar12,*(undefined8 *)puVar2);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRSimulatedController_TypeInfo
                             );
  UnityEngine_UIElements_MultiColumnListView_UxmlFactory___ctor();
  FUN_03934434(param_1,uVar12,*(undefined8 *)System_Xml_Schema_XdrBuilder_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRSimulatedHMD_TypeInfo
                             );
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRSimulatorUtility_TypeInfo
                             );
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Serialization_XmlAttributes_TypeInfo);
  FUN_0639c834();
  FUN_03934434(param_1,uVar12,*(undefined8 *)UnityEngine_Experimental_Rendering_XRView_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlAutoDetectWriter_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Schema_XmlBaseConverter_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlCachedStream_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlCharType_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlChildEnumerator_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlChildNodes_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               System_Xml_Serialization_XmlChoiceIdentifierAttribute_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlComment_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlConvert_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Serialization_XmlCustomFormatter_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Data_XmlDataLoader_TypeInfo);
  FUN_0639f528();
  FUN_03935294(param_1,uVar12,*(undefined8 *)puVar2);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Data_XmlDataTreeWriter_TypeInfo);
  FUN_0639c8a8();
  FUN_03934434(param_1,uVar12,*(undefined8 *)System_Xml_Serialization_XmlArrayItemAttribute_TypeInfo
              );
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Schema_XmlDateTimeConverter_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlDateTimeSerializationMode_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlDeclaration_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               Newtonsoft_Json_Converters_XmlDeclarationWrapper_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlDocument_TypeInfo);
  FUN_0639c900();
  FUN_03934434(param_1,uVar12,*(undefined8 *)System_Xml_Serialization_XmlArrayAttribute_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlDocumentType_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               Newtonsoft_Json_Converters_XmlDocumentTypeWrapper_TypeInfo);
  FUN_063a4328();
  FUN_039359c4(param_1,uVar12,*(undefined8 *)System_Xml_XmlAttribute_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)Newtonsoft_Json_Converters_XmlDocumentWrapper_TypeInfo)
  ;
  FUN_063a459c();
  FUN_03935b34(param_1,uVar12,*(undefined8 *)System_Xml_Serialization_XmlAttributeAttribute_TypeInfo
              );
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlDownloadManager_TypeInfo);
  FUN_0639c954();
  FUN_03934434(param_1,uVar12,
               *(undefined8 *)System_Xml_Serialization_XmlAnyAttributeAttribute_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlElement_TypeInfo);
  FUN_063a49d0();
  FUN_03935ca4(param_1,uVar12,*(undefined8 *)System_Xml_XmlAttributeCollection_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Serialization_XmlElementAttribute_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Serialization_XmlElementAttributes_TypeInfo)
  ;
  FUN_063a4e34();
  FUN_03935e14(param_1,uVar12,*(undefined8 *)System_Xml_Serialization_XmlAttributeEventArgs_TypeInfo
              );
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Serialization_XmlElementEventArgs_TypeInfo);
  FUN_0639c9a8();
  puVar3 = System_Xml_XmlAsyncCheckReaderWithNS_TypeInfo;
  FUN_03934884(param_1,uVar12,*(undefined8 *)System_Xml_XmlAsyncCheckReaderWithNS_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)Newtonsoft_Json_Converters_XmlElementWrapper_TypeInfo);
  FUN_0639c9f0();
  FUN_03934884(param_1,uVar12,*(undefined8 *)puVar3);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlEncodedRawTextWriter_TypeInfo);
  FUN_0639ca38();
  FUN_03934714(param_1,uVar12,*(undefined8 *)System_Xml_Schema_XmlAtomicValue_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlEncodedRawTextWriterIndent_TypeInfo);
  FUN_0639ca80();
  FUN_039345a4(param_1,uVar12,*(undefined8 *)System_Xml_XmlAsyncCheckWriter_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlEntity_TypeInfo);
  FUN_063a5848();
  FUN_03935f84(param_1,uVar12,*(undefined8 *)System_Xml_Serialization_XmlAttributeOverrides_TypeInfo
              );
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlEntityReference_TypeInfo);
  FUN_0639d668();
  FUN_03934fb4(param_1,uVar12,*(undefined8 *)puVar1);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Serialization_XmlEnumAttribute_TypeInfo);
  FUN_0639cad0();
  FUN_03934434(param_1,uVar12,
               *(undefined8 *)
                UnityEngine_XR_Interaction_Toolkit_Interactables_Visuals_XRTintInteractableVisual_TypeInfo
              );
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlException_TypeInfo);
  FUN_063a5e7c();
  FUN_03935404(param_1,uVar12,*(undefined8 *)System_Xml_XmlAsyncCheckReaderWithLineInfo_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlEventCache_TypeInfo);
  FUN_063a60f0();
  FUN_03935574(param_1,uVar12,*(undefined8 *)System_Xml_XmlAsyncCheckReader_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Serialization_XmlIgnoreAttribute_TypeInfo);
  FUN_0639cb20();
  FUN_03934434(param_1,uVar12,*(undefined8 *)System_Xml_Schema_XmlAnyConverter_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Data_XmlIgnoreNamespaceReader_TypeInfo);
  FUN_0639cb68();
  FUN_03934434(param_1,uVar12,
               *(undefined8 *)System_Xml_Serialization_XmlAnyElementAttribute_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlImplementation_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlLinkedNode_TypeInfo);
  FUN_063a6be0();
  puVar3 = System_Xml_XmlAsyncCheckReaderWithLineInfoNS_TypeInfo;
  FUN_039356e4(param_1,uVar12,*(undefined8 *)System_Xml_XmlAsyncCheckReaderWithLineInfoNS_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Schema_XmlListConverter_TypeInfo);
  FUN_063a6be0();
  FUN_039356e4(param_1,uVar12,*(undefined8 *)puVar3);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlLoader_TypeInfo);
  FUN_063a6be0();
  FUN_039356e4(param_1,uVar12,*(undefined8 *)puVar3);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Serialization_XmlMembersMapping_TypeInfo);
  FUN_0639f528();
  FUN_03935294(param_1,uVar12,*(undefined8 *)puVar2);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Schema_XmlMiscConverter_TypeInfo);
  FUN_063a6be0();
  FUN_039356e4(param_1,uVar12,*(undefined8 *)puVar3);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlName_TypeInfo);
  FUN_0639cbc8();
  FUN_03934434(param_1,uVar12,
               *(undefined8 *)System_Xml_Serialization_XmlAnyElementAttributes_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlNameEx_TypeInfo);
  FUN_0639cc10();
  FUN_03934434(param_1,uVar12,
               *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_UI_XRUIToolkitHandler_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlNamedNodeMap_TypeInfo);
  FUN_0639cc58();
  FUN_03934434(param_1,uVar12,*(undefined8 *)System_Xml_Schema_XmlAnyListConverter_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)
                               System_Xml_Serialization_XmlNamespaceDeclarationsAttribute_TypeInfo);
  FUN_0639d668();
  FUN_03934fb4(param_1,uVar12,*(undefined8 *)puVar1);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlNamespaceManager_TypeInfo);
  FUN_0639f528();
  FUN_03935294(param_1,uVar12,*(undefined8 *)puVar2);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlNode_TypeInfo);
  FUN_0639cca8();
  FUN_03934434(param_1,uVar12,
               *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlNodeChangedEventArgs_TypeInfo);
  FUN_0639ccf0();
  FUN_03934434(param_1,uVar12,*(undefined8 *)System_Xml_Linq_XStreamingElement_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)Newtonsoft_Json_Converters_XmlNodeConverter_TypeInfo);
  FUN_0639cd38();
  FUN_03934434(param_1,uVar12,*(undefined8 *)Newtonsoft_Json_Converters_XTextWrapper_TypeInfo);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Serialization_XmlNodeEventArgs_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  uVar12 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_XmlNodeReaderNavigator_TypeInfo);
  FUN_0639ede8();
  FUN_03935854(param_1,uVar12,*(undefined8 *)puVar8);
  return;
}


