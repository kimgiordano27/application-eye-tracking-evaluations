/*
FUNCTION_NAME: PA.ParticleField.Samples.SmoothCamera$$.ctor
ENTRY_POINT: 01eb5d34
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 303
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_21;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_18;ray_or_cast_sink_hits_12;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_18;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_21;functionality_data_collection_or_telemetry_hits_6
*/


undefined8 PA_ParticleField_Samples_SmoothCamera___ctor(ulong *param_1)

{
  undefined4 uVar1;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  ulong *in_stack_00000058;
  ulong *in_stack_00000060;
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<Type>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<Type>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<Type>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<TypeIdentifier>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<TypeIdentifier>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<TypeIdentifier>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<UIDocument>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<UIDocument>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<UIDocument>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<ulong>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<ulong>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<ulong>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<UsageHint>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_MoveNext__)
  ;
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<VText>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<VText>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<VText>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_Unity_Collections_NativeArray_Enumerator<Vector2>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_Unity_Collections_NativeArray_Enumerator<Vector2>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_Unity_Collections_NativeArray_Enumerator<Vector2>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<Vector3>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000058);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<Vector3>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<Vector3>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<Vector4>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<Vector4>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<Vector4>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<VirtualCurrency>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<VirtualCurrency>_MoveNext__)
  ;
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<VirtualCurrency>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_Dispose__)
  ;
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<VisualElement>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<VisualElement>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<VisualElement>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_HashSet_Enumerator<VoiceServiceRequest>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_HashSet_Enumerator<VoiceServiceRequest>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_HashSet_Enumerator<VoiceServiceRequest>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000060);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<Volume>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<Volume>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<Volume>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<VolumeComponent>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<VolumeComponent>_MoveNext__)
  ;
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<VolumeComponent>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<VolumeParameter>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<VolumeParameter>_MoveNext__)
  ;
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<VolumeParameter>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_LinkedList_Enumerator<WebConnection>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_LinkedList_Enumerator<WebConnection>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_LinkedList_Enumerator<WebConnection>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<WitDynamicEntity>_Dispose__)
  ;
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<WitDynamicEntity>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<WitDynamicEntity>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<WitEntityKeywordInfo>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<WitEntityKeywordInfo>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(unaff_x29 + -0x58));
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<WitEntityKeywordInfo>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<WitResponseNode>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(unaff_x29 + -0x50));
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<WitResponseNode>_MoveNext__)
  ;
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<WitResponseNode>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(unaff_x29 + -0x48));
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<X509CertificateImpl>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<X509CertificateImpl>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<X509CertificateImpl>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<X509Extension>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<X509Extension>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<X509Extension>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_get_Current__)
  ;
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<XRDisplaySubsystem>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<XRDisplaySubsystem>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<XRDisplaySubsystem>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<XRInputSubsystem>_Dispose__)
  ;
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<XRInputSubsystem>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<XRInputSubsystem>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<XRLoader>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<XRLoader>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<XRNodeState>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<XRNodeState>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<XRNodeState>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(unaff_x29 + -0x40));
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<XRTargetEvaluator>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<XRTargetEvaluator>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<XRTargetEvaluator>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<XmlQualifiedName>_Dispose__)
  ;
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<XmlQualifiedName>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<XmlQualifiedName>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<XmlReflectionMember>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<XmlReflectionMember>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<XmlReflectionMember>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<BodyPoseComparerActiveState_JointComparerConfig>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<BodyPoseComparerActiveState_JointComparerConfig>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<BodyPoseComparerActiveState_JointComparerConfig>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<DebugUI_Widget>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List_Enumerator<DebugUI_Widget>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<DebugUI_Widget>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<FingerFeatureStateProvider_FingerStateThresholds>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<FingerFeatureStateProvider_FingerStateThresholds>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<FingerFeatureStateProvider_FingerStateThresholds>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<GSXR_TrackedDeviceGraphicRaycaster_RaycastHitData>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<GSXR_TrackedDeviceGraphicRaycaster_RaycastHitData>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<GSXR_TrackedDeviceGraphicRaycaster_RaycastHitData>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<HID_HIDCollectionDescriptor>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<HID_HIDCollectionDescriptor>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<HID_HIDCollectionDescriptor>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<HID_HIDElementDescriptor>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<HID_HIDElementDescriptor>_MoveNext__)
  ;
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<HID_HIDElementDescriptor>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<HandGrabUtils_HandGrabPoseData>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<HandGrabUtils_HandGrabPoseData>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<HandGrabUtils_HandGrabPoseData>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(unaff_x29 + -0x38));
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<InputActionMap_BindingOverrideJson>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<InputActionMap_BindingOverrideJson>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<InputActionMap_BindingOverrideJson>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputControlScheme_DeviceRequirement>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputControlScheme_DeviceRequirement>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputControlScheme_DeviceRequirement>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(unaff_x29 + -0x30));
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<LogrosRecords_Resultado>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<LogrosRecords_Resultado>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<LogrosRecords_Resultado>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<Loom_DelayedQueueItem>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<Loom_DelayedQueueItem>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<Loom_DelayedQueueItem>_get_Current__)
  ;
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_get_Current__)
  ;
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<MultiColumnCollectionHeader_SortedColumnState>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<MultiColumnCollectionHeader_SortedColumnState>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<MultiColumnCollectionHeader_SortedColumnState>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_MeshMaterial>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_MeshMaterial>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_MeshMaterial>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<OVRInput_Controller>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<OVRInput_Controller>_MoveNext__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<OVRInput_Controller>_get_Current__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__)
  ;
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_VoxelMeta>_Dispose__)
  ;
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_VoxelMeta>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_VoxelMeta>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_SerializablePerScenarioDataItem>_Dispose__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_SerializablePerScenarioDataItem>_MoveNext__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_SerializablePerScenarioDataItem>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(unaff_x29 + -0x28));
  NivelesSimulator_DevuelveEquipoSegunID_mEEC28F627DA74466E2F9C8AE402543E7D67C2D07::
  s_Il2CppMethodInitialized = 1;
  *(undefined4 *)(unaff_x29 + -0x1c) = *(undefined4 *)(unaff_x29 + -0xc);
  uVar1 = il2cpp_codegen_subtract<int,int>(*(int *)(unaff_x29 + -0x1c),1);
  switch(uVar1) {
  case 0:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_LinkedList_Enumerator<WebConnection>_get_Current__;
    break;
  case 1:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<XRLoader>_Dispose__;
    break;
  case 2:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_HashSet_Enumerator<string>_get_Current__;
    break;
  case 3:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000018;
    break;
  case 4:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__;
    break;
  case 5:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<XmlReflectionMember>_get_Current__;
    break;
  case 6:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_Dispose__
    ;
    break;
  case 7:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_MoveNext__;
    break;
  case 8:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_VoxelMeta>_MoveNext__;
    break;
  case 9:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<TypeIdentifier>_MoveNext__
    ;
    break;
  case 10:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ScheduledInvocation>_MoveNext__;
    break;
  case 0xb:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<VolumeParameter>_Dispose__
    ;
    break;
  case 0xc:
  default:
switchD_01eb6714_default:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<string>_get_Current__;
    break;
  case 0xd:
    goto switchD_01eb6714_default;
  case 0xe:
    goto switchD_01eb6714_default;
  case 0xf:
    goto switchD_01eb6714_default;
  case 0x10:
    goto switchD_01eb6714_default;
  case 0x11:
    goto switchD_01eb6714_default;
  case 0x12:
    goto switchD_01eb6714_default;
  case 0x13:
    goto switchD_01eb6714_default;
  case 0x14:
    goto switchD_01eb6714_default;
  case 0x15:
    goto switchD_01eb6714_default;
  case 0x16:
    goto switchD_01eb6714_default;
  case 0x17:
    goto switchD_01eb6714_default;
  case 0x18:
    goto switchD_01eb6714_default;
  case 0x19:
    goto switchD_01eb6714_default;
  case 0x1a:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<LogrosRecords_Resultado>_Dispose__;
    break;
  case 0x1b:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_Dispose__;
    break;
  case 0x1c:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Rigidbody>_get_Current__;
    break;
  case 0x1d:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_get_Current__
    ;
    break;
  case 0x1e:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<XRTargetEvaluator>_MoveNext__;
    break;
  case 0x1f:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<WitEntityKeywordInfo>_MoveNext__;
    break;
  case 0x20:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_HashSet_Enumerator<Text>_Dispose__;
    break;
  case 0x21:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_get_Current__;
    break;
  case 0x22:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_LinkedList_Enumerator<WebConnection>_Dispose__;
    break;
  case 0x23:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_MoveNext__;
    break;
  case 0x24:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<XRDisplaySubsystem>_Dispose__;
    break;
  case 0x25:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Vector3>_get_Current__;
    break;
  case 0x26:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ShadowCasterGroup2D>_Dispose__;
    break;
  case 0x27:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<X509Extension>_MoveNext__;
    break;
  case 0x28:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_MoveNext__;
    break;
  case 0x29:
    goto switchD_01eb6714_default;
  case 0x2a:
    goto switchD_01eb6714_default;
  case 0x2b:
    goto switchD_01eb6714_default;
  case 0x2c:
    goto switchD_01eb6714_default;
  case 0x2d:
    goto switchD_01eb6714_default;
  case 0x2e:
    goto switchD_01eb6714_default;
  case 0x2f:
    goto switchD_01eb6714_default;
  case 0x30:
    goto switchD_01eb6714_default;
  case 0x31:
    goto switchD_01eb6714_default;
  case 0x32:
    goto switchD_01eb6714_default;
  case 0x33:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_get_Current__
    ;
    break;
  case 0x34:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<VolumeParameter>_MoveNext__;
    break;
  case 0x35:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_get_Current__
    ;
    break;
  case 0x36:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<VirtualCurrency>_get_Current__;
    break;
  case 0x37:
    goto switchD_01eb6714_default;
  case 0x38:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<VirtualCurrency>_MoveNext__;
    break;
  case 0x39:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Vector3>_MoveNext__;
    break;
  case 0x3a:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_Dispose__;
    break;
  case 0x3b:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_Dispose__;
    break;
  case 0x3c:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_get_Current__;
    break;
  case 0x3d:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Type>_get_Current__;
    break;
  case 0x3e:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_Dispose__
    ;
    break;
  case 0x3f:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<HandGrabUtils_HandGrabPoseData>_Dispose__
    ;
    break;
  case 0x40:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_MoveNext__;
    break;
  case 0x41:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_get_Current__;
    break;
  case 0x42:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_Dispose__;
    break;
  case 0x43:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_VoxelMeta>_Dispose__;
    break;
  case 0x44:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<X509CertificateImpl>_get_Current__;
    break;
  case 0x45:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<VirtualCurrency>_Dispose__
    ;
    break;
  case 0x46:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<StyleSheet>_MoveNext__;
    break;
  case 0x47:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<Loom_DelayedQueueItem>_get_Current__;
    break;
  case 0x48:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<XRNodeState>_MoveNext__;
    break;
  case 0x49:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Thread>_get_Current__;
    break;
  case 0x4a:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<TypeIdentifier>_Dispose__;
    break;
  case 0x4b:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Renderer>_get_Current__;
    break;
  case 0x4c:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_MeshMaterial>_get_Current__
    ;
    break;
  case 0x4d:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<FingerFeatureStateProvider_FingerStateThresholds>_Dispose__
    ;
    break;
  case 0x4e:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Vector4>_get_Current__;
    break;
  case 0x4f:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_Dispose__
    ;
    break;
  case 0x50:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<WitDynamicEntity>_MoveNext__;
    break;
  case 0x51:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_VoxelMeta>_get_Current__
    ;
    break;
  case 0x52:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_Dispose__
    ;
    break;
  case 0x53:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__;
    break;
  case 0x54:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_MoveNext__
    ;
    break;
  case 0x55:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_get_Current__;
    break;
  case 0x56:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<WitEntityKeywordInfo>_Dispose__;
    break;
  case 0x57:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<LogrosRecords_Resultado>_MoveNext__;
    break;
  case 0x58:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_Dispose__;
    break;
  case 0x59:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_Dispose__
    ;
    break;
  case 0x5a:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<DebugUI_Widget>_get_Current__;
    break;
  case 0x5b:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_MoveNext__
    ;
    break;
  case 0x5c:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_get_Current__
    ;
    break;
  case 0x5d:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_MoveNext__
    ;
    break;
  case 0x5e:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_MoveNext__
    ;
    break;
  case 0x5f:
    goto switchD_01eb6714_default;
  case 0x60:
    goto switchD_01eb6714_default;
  case 0x61:
    goto switchD_01eb6714_default;
  case 0x62:
    goto switchD_01eb6714_default;
  case 99:
    goto switchD_01eb6714_default;
  case 100:
    goto switchD_01eb6714_default;
  case 0x65:
    goto switchD_01eb6714_default;
  case 0x66:
    goto switchD_01eb6714_default;
  case 0x67:
    goto switchD_01eb6714_default;
  case 0x68:
    goto switchD_01eb6714_default;
  case 0x69:
    goto switchD_01eb6714_default;
  case 0x6a:
    goto switchD_01eb6714_default;
  case 0x6b:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Thread>_MoveNext__;
    break;
  case 0x6c:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_Dispose__
    ;
    break;
  case 0x6d:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_HashSet_Enumerator<SpeechEvents>_get_Current__;
    break;
  case 0x6e:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<BodyPoseComparerActiveState_JointComparerConfig>_Dispose__
    ;
    break;
  case 0x6f:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_MoveNext__
    ;
    break;
  case 0x70:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<ulong>_MoveNext__;
    break;
  case 0x71:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_get_Current__
    ;
    break;
  case 0x72:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<XRDisplaySubsystem>_get_Current__;
    break;
  case 0x73:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<GSXR_TrackedDeviceGraphicRaycaster_RaycastHitData>_Dispose__
    ;
    break;
  case 0x74:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
    ;
    break;
  case 0x75:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<DebugUI_Widget>_Dispose__;
    break;
  case 0x76:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<HID_HIDElementDescriptor>_MoveNext__;
    break;
  case 0x77:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<OVRInput_Controller>_Dispose__;
    break;
  case 0x78:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<VolumeComponent>_Dispose__
    ;
    break;
  case 0x79:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_Dispose__;
    break;
  case 0x7a:
    goto switchD_01eb6714_default;
  case 0x7b:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<GSXR_TrackedDeviceGraphicRaycaster_RaycastHitData>_MoveNext__
    ;
    break;
  case 0x7c:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_get_Current__;
    break;
  case 0x7d:
    goto switchD_01eb6714_default;
  case 0x7e:
    goto switchD_01eb6714_default;
  case 0x7f:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_Dispose__;
    break;
  case 0x80:
    goto switchD_01eb6714_default;
  case 0x81:
    goto switchD_01eb6714_default;
  case 0x82:
    goto switchD_01eb6714_default;
  case 0x83:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_Dispose__;
    break;
  case 0x84:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<TcpClient>_get_Current__;
    break;
  case 0x85:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<ulong>_get_Current__;
    break;
  case 0x86:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<FingerFeatureStateProvider_FingerStateThresholds>_get_Current__
    ;
    break;
  case 0x87:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_Dispose__;
    break;
  case 0x88:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Rigidbody>_Dispose__;
    break;
  case 0x89:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_MoveNext__;
    break;
  case 0x8a:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<HandJointsPose_WeightedJoint>_Dispose__;
    break;
  case 0x8b:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__;
    break;
  case 0x8c:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_Dispose__;
    break;
  case 0x8d:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<TriangulationConstraint>_Dispose__;
    break;
  case 0x8e:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_SerializablePerScenarioDataItem>_MoveNext__
    ;
    break;
  case 0x8f:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<WitDynamicEntity>_get_Current__;
    break;
  case 0x90:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_get_Current__
    ;
    break;
  case 0x91:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_MoveNext__
    ;
    break;
  case 0x92:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<VolumeParameter>_get_Current__;
    break;
  case 0x93:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_MoveNext__
    ;
    break;
  case 0x94:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_MoveNext__
    ;
    break;
  case 0x95:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ScheduledInvocation>_get_Current__;
    break;
  case 0x96:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_HashSet_Enumerator<VoiceServiceRequest>_MoveNext__;
    break;
  case 0x97:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_MeshMaterial>_Dispose__
    ;
    break;
  case 0x98:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_get_Current__;
    break;
  case 0x99:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_MoveNext__
    ;
    break;
  case 0x9a:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<X509CertificateImpl>_Dispose__;
    break;
  case 0x9b:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_Dispose__
    ;
    break;
  case 0x9c:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
    break;
  case 0x9d:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<TimeValue>_MoveNext__;
    break;
  case 0x9e:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<StyleValue>_get_Current__;
    break;
  case 0x9f:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<X509Extension>_get_Current__;
    break;
  case 0xa0:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_Dispose__;
    break;
  case 0xa1:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_get_Current__;
    break;
  case 0xa2:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_get_Current__
    ;
    break;
  case 0xa3:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_Unity_Collections_NativeArray_Enumerator<Vector2>_Dispose__;
    break;
  case 0xa4:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_get_Current__
    ;
    break;
  case 0xa5:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_LinkedList_Enumerator<WebConnection>_MoveNext__;
    break;
  case 0xa6:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__;
    break;
  case 0xa7:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<XmlReflectionMember>_MoveNext__;
    break;
  case 0xa8:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_HashSet_Enumerator<VoiceServiceRequest>_Dispose__;
    break;
  case 0xa9:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000038;
    break;
  case 0xaa:
    goto switchD_01eb6714_default;
  case 0xab:
    goto switchD_01eb6714_default;
  case 0xac:
    goto switchD_01eb6714_default;
  case 0xad:
    goto switchD_01eb6714_default;
  case 0xae:
    goto switchD_01eb6714_default;
  case 0xaf:
    goto switchD_01eb6714_default;
  case 0xb0:
    goto switchD_01eb6714_default;
  case 0xb1:
    goto switchD_01eb6714_default;
  case 0xb2:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_HashSet_Enumerator<string>_MoveNext__;
    break;
  case 0xb3:
    goto switchD_01eb6714_default;
  case 0xb4:
    goto switchD_01eb6714_default;
  case 0xb5:
    goto switchD_01eb6714_default;
  case 0xb6:
    goto switchD_01eb6714_default;
  case 0xb7:
    goto switchD_01eb6714_default;
  case 0xb8:
    goto switchD_01eb6714_default;
  case 0xb9:
    goto switchD_01eb6714_default;
  case 0xba:
    goto switchD_01eb6714_default;
  case 0xbb:
    goto switchD_01eb6714_default;
  case 0xbc:
    goto switchD_01eb6714_default;
  case 0xbd:
    goto switchD_01eb6714_default;
  case 0xbe:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputControlScheme_DeviceRequirement>_Dispose__
    ;
    break;
  case 0xbf:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_MoveNext__;
    break;
  case 0xc0:
    goto switchD_01eb6714_default;
  case 0xc1:
    goto switchD_01eb6714_default;
  case 0xc2:
    goto switchD_01eb6714_default;
  case 0xc3:
    goto switchD_01eb6714_default;
  case 0xc4:
    goto switchD_01eb6714_default;
  case 0xc5:
    goto switchD_01eb6714_default;
  case 0xc6:
    goto switchD_01eb6714_default;
  case 199:
    goto switchD_01eb6714_default;
  case 200:
    goto switchD_01eb6714_default;
  case 0xc9:
    goto switchD_01eb6714_default;
  case 0xca:
    goto switchD_01eb6714_default;
  case 0xcb:
    goto switchD_01eb6714_default;
  case 0xcc:
    goto switchD_01eb6714_default;
  case 0xcd:
    goto switchD_01eb6714_default;
  case 0xce:
    goto switchD_01eb6714_default;
  case 0xcf:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_get_Current__
    ;
    break;
  case 0xd0:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__;
    break;
  case 0xd1:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_Dispose__;
    break;
  case 0xd2:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<XRInputSubsystem>_MoveNext__;
    break;
  case 0xd3:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputControlScheme_DeviceRequirement>_get_Current__
    ;
    break;
  case 0xd4:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<WitResponseNode>_Dispose__
    ;
    break;
  case 0xd5:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<WitEntityKeywordInfo>_get_Current__;
    break;
  case 0xd6:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<TimeValue>_Dispose__;
    break;
  case 0xd7:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<SerializationCallback>_MoveNext__;
    break;
  case 0xd8:
    goto switchD_01eb6714_default;
  case 0xd9:
    goto switchD_01eb6714_default;
  case 0xda:
    goto switchD_01eb6714_default;
  case 0xdb:
    goto switchD_01eb6714_default;
  case 0xdc:
    goto switchD_01eb6714_default;
  case 0xdd:
    goto switchD_01eb6714_default;
  case 0xde:
    goto switchD_01eb6714_default;
  case 0xdf:
    goto switchD_01eb6714_default;
  case 0xe0:
    goto switchD_01eb6714_default;
  case 0xe1:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_get_Current__
    ;
    break;
  case 0xe2:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_Dispose__;
    break;
  case 0xe3:
    goto switchD_01eb6714_default;
  case 0xe4:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Volume>_MoveNext__;
    break;
  case 0xe5:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Type>_MoveNext__;
    break;
  case 0xe6:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_get_Current__;
    break;
  case 0xe7:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_Dispose__
    ;
    break;
  case 0xe8:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<XRLoader>_MoveNext__;
    break;
  case 0xe9:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<InputActionMap_BindingOverrideJson>_MoveNext__
    ;
    break;
  case 0xea:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<TriangulationConstraint>_get_Current__;
    break;
  case 0xeb:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<OVRInput_Controller>_MoveNext__;
    break;
  case 0xec:
    goto switchD_01eb6714_default;
  case 0xed:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_Dispose__;
    break;
  case 0xee:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_MoveNext__;
    break;
  case 0xef:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<MultiColumnCollectionHeader_SortedColumnState>_MoveNext__
    ;
    break;
  case 0xf0:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_HashSet_Enumerator<TTSClipData>_get_Current__;
    break;
  case 0xf1:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<MultiColumnCollectionHeader_SortedColumnState>_get_Current__
    ;
    break;
  case 0xf2:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<SerializationCallback>_Dispose__;
    break;
  case 0xf3:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_HashSet_Enumerator<TTSClipData>_Dispose__;
    break;
  case 0xf4:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_MoveNext__
    ;
    break;
  case 0xf5:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<XmlReflectionMember>_Dispose__;
    break;
  case 0xf6:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Toggle>_get_Current__;
    break;
  case 0xf7:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__;
    break;
  case 0xf8:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<WitResponseNode>_MoveNext__;
    break;
  case 0xf9:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_get_Current__;
    break;
  case 0xfa:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__;
    break;
  case 0xfb:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Transform>_Dispose__;
    break;
  case 0xfc:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ShadowCasterGroup2D>_get_Current__;
    break;
  case 0xfd:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_HashSet_Enumerator<SpeechEvents>_Dispose__
    ;
    break;
  case 0xfe:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<FingerFeatureStateProvider_FingerStateThresholds>_MoveNext__
    ;
    break;
  case 0xff:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_MoveNext__;
    break;
  case 0x100:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<XmlQualifiedName>_Dispose__;
    break;
  case 0x101:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_MoveNext__;
    break;
  case 0x102:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_MeshMaterial>_MoveNext__
    ;
    break;
  case 0x103:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<DebugUI_Widget>_MoveNext__
    ;
    break;
  case 0x104:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<X509CertificateImpl>_MoveNext__;
    break;
  case 0x105:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_get_Current__;
    break;
  case 0x106:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_MoveNext__
    ;
    break;
  case 0x107:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<WitResponseNode>_get_Current__;
    break;
  case 0x108:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<TriangulationConstraint>_MoveNext__;
    break;
  case 0x109:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000048;
    break;
  case 0x10a:
    *(undefined8 *)(unaff_x29 + -8) = **(undefined8 **)(unaff_x29 + -0x48);
    break;
  case 0x10b:
    *(undefined8 *)(unaff_x29 + -8) = **(undefined8 **)(unaff_x29 + -0x58);
    break;
  case 0x10c:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000020;
    break;
  case 0x10d:
    *(undefined8 *)(unaff_x29 + -8) = **(undefined8 **)(unaff_x29 + -0x50);
    break;
  case 0x10e:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000050;
    break;
  case 0x10f:
    *(ulong *)(unaff_x29 + -8) = *in_stack_00000060;
    break;
  case 0x110:
    *(undefined8 *)(unaff_x29 + -8) = **(undefined8 **)(unaff_x29 + -0x30);
    break;
  case 0x111:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000010;
    break;
  case 0x112:
    *(ulong *)(unaff_x29 + -8) = *in_stack_00000058;
    break;
  case 0x113:
    *(undefined8 *)(unaff_x29 + -8) = **(undefined8 **)(unaff_x29 + -0x40);
    break;
  case 0x114:
    *(undefined8 *)(unaff_x29 + -8) = **(undefined8 **)(unaff_x29 + -0x28);
    break;
  case 0x115:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000030;
    break;
  case 0x116:
    *(undefined8 *)(unaff_x29 + -8) = **(undefined8 **)(unaff_x29 + -0x38);
    break;
  case 0x117:
    goto switchD_01eb6714_default;
  case 0x118:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000028;
    break;
  case 0x119:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000040;
    break;
  case 0x11a:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000048;
    break;
  case 0x11b:
    *(undefined8 *)(unaff_x29 + -8) = **(undefined8 **)(unaff_x29 + -0x48);
    break;
  case 0x11c:
    *(undefined8 *)(unaff_x29 + -8) = **(undefined8 **)(unaff_x29 + -0x58);
    break;
  case 0x11d:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000020;
    break;
  case 0x11e:
    *(undefined8 *)(unaff_x29 + -8) = **(undefined8 **)(unaff_x29 + -0x50);
    break;
  case 0x11f:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000050;
    break;
  case 0x120:
    *(ulong *)(unaff_x29 + -8) = *in_stack_00000060;
    break;
  case 0x121:
    *(undefined8 *)(unaff_x29 + -8) = **(undefined8 **)(unaff_x29 + -0x30);
    break;
  case 0x122:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000010;
    break;
  case 0x123:
    *(ulong *)(unaff_x29 + -8) = *in_stack_00000058;
    break;
  case 0x124:
    *(undefined8 *)(unaff_x29 + -8) = **(undefined8 **)(unaff_x29 + -0x40);
    break;
  case 0x125:
    *(undefined8 *)(unaff_x29 + -8) = **(undefined8 **)(unaff_x29 + -0x28);
    break;
  case 0x126:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000030;
    break;
  case 0x127:
    *(undefined8 *)(unaff_x29 + -8) = **(undefined8 **)(unaff_x29 + -0x38);
    break;
  case 0x128:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Toggle>_MoveNext__;
    break;
  case 0x129:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000028;
    break;
  case 0x12a:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000040;
    break;
  case 299:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<TimeValue>_get_Current__;
    break;
  case 300:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<StyleValue>_Dispose__;
    break;
  case 0x12d:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000018;
    break;
  case 0x12e:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<SerializationCallback>_get_Current__;
    break;
  case 0x12f:
    goto switchD_01eb6714_default;
  case 0x130:
    goto switchD_01eb6714_default;
  case 0x131:
    goto switchD_01eb6714_default;
  case 0x132:
    goto switchD_01eb6714_default;
  case 0x133:
    goto switchD_01eb6714_default;
  case 0x134:
    goto switchD_01eb6714_default;
  case 0x135:
    goto switchD_01eb6714_default;
  case 0x136:
    goto switchD_01eb6714_default;
  case 0x137:
    goto switchD_01eb6714_default;
  case 0x138:
    goto switchD_01eb6714_default;
  case 0x139:
    goto switchD_01eb6714_default;
  case 0x13a:
    goto switchD_01eb6714_default;
  case 0x13b:
    goto switchD_01eb6714_default;
  case 0x13c:
    goto switchD_01eb6714_default;
  case 0x13d:
    goto switchD_01eb6714_default;
  case 0x13e:
    goto switchD_01eb6714_default;
  case 0x13f:
    goto switchD_01eb6714_default;
  case 0x140:
    goto switchD_01eb6714_default;
  case 0x141:
    goto switchD_01eb6714_default;
  case 0x142:
    goto switchD_01eb6714_default;
  case 0x143:
    goto switchD_01eb6714_default;
  case 0x144:
    goto switchD_01eb6714_default;
  case 0x145:
    goto switchD_01eb6714_default;
  case 0x146:
    goto switchD_01eb6714_default;
  case 0x147:
    goto switchD_01eb6714_default;
  case 0x148:
    goto switchD_01eb6714_default;
  case 0x149:
    goto switchD_01eb6714_default;
  case 0x14a:
    goto switchD_01eb6714_default;
  case 0x14b:
    goto switchD_01eb6714_default;
  case 0x14c:
    goto switchD_01eb6714_default;
  case 0x14d:
    goto switchD_01eb6714_default;
  case 0x14e:
    goto switchD_01eb6714_default;
  case 0x14f:
    goto switchD_01eb6714_default;
  case 0x150:
    goto switchD_01eb6714_default;
  case 0x151:
    goto switchD_01eb6714_default;
  case 0x152:
    goto switchD_01eb6714_default;
  case 0x153:
    goto switchD_01eb6714_default;
  case 0x154:
    goto switchD_01eb6714_default;
  case 0x155:
    goto switchD_01eb6714_default;
  case 0x156:
    goto switchD_01eb6714_default;
  case 0x157:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_get_Current__;
    break;
  case 0x158:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<VolumeComponent>_get_Current__;
    break;
  case 0x159:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<TcpClient>_Dispose__;
    break;
  case 0x15a:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Rigidbody>_MoveNext__;
    break;
  case 0x15b:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<string>_Dispose__;
    break;
  case 0x15c:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_Unity_Collections_NativeArray_Enumerator<Vector2>_MoveNext__;
    break;
  case 0x15d:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_Unity_Collections_NativeArray_Enumerator<Vector2>_get_Current__;
    break;
  case 0x15e:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_get_Current__;
    break;
  case 0x15f:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<SortColumnDescription>_MoveNext__;
    break;
  case 0x160:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<HandGrabUtils_HandGrabPoseData>_MoveNext__
    ;
    break;
  case 0x161:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<TTSClipData>_Dispose__;
    break;
  case 0x162:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_Dispose__
    ;
    break;
  case 0x163:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<VText>_get_Current__;
    break;
  case 0x164:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<GSXR_TrackedDeviceGraphicRaycaster_RaycastHitData>_get_Current__
    ;
    break;
  case 0x165:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<XRTargetEvaluator>_get_Current__;
    break;
  case 0x166:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<X509Extension>_Dispose__;
    break;
  case 0x167:
    goto switchD_01eb6714_default;
  case 0x168:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<OVRInput_Controller>_get_Current__;
    break;
  case 0x169:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_Dispose__;
    break;
  case 0x16a:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_Dispose__;
    break;
  case 0x16b:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_MoveNext__;
    break;
  case 0x16c:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_MoveNext__;
    break;
  case 0x16d:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_HashSet_Enumerator<ScheduledItem>_get_Current__;
    break;
  case 0x16e:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_MoveNext__
    ;
    break;
  case 0x16f:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<XRNodeState>_get_Current__
    ;
    break;
  case 0x170:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<StyleSheet>_Dispose__;
    break;
  case 0x171:
    goto switchD_01eb6714_default;
  case 0x172:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_SerializablePerScenarioDataItem>_get_Current__
    ;
    break;
  case 0x173:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<XRTargetEvaluator>_Dispose__;
    break;
  case 0x174:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ShadowCasterGroup2D>_MoveNext__;
    break;
  case 0x175:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_get_Current__
    ;
    break;
  case 0x176:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<XmlQualifiedName>_get_Current__;
    break;
  case 0x177:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_Dispose__;
    break;
  case 0x178:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<XmlQualifiedName>_MoveNext__;
    break;
  case 0x179:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_get_Current__;
    break;
  case 0x17a:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<WitDynamicEntity>_Dispose__;
    break;
  case 0x17b:
    goto switchD_01eb6714_default;
  case 0x17c:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Toggle>_Dispose__;
    break;
  case 0x17d:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<InputActionMap_BindingOverrideJson>_Dispose__
    ;
    break;
  case 0x17e:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<TcpClient>_MoveNext__;
    break;
  case 0x17f:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<SelectorMatchRecord>_get_Current__;
    break;
  case 0x180:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_Queue_Enumerator<string>_Dispose__;
    break;
  case 0x181:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_Dispose__;
    break;
  case 0x182:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_HashSet_Enumerator<Text>_MoveNext__;
    break;
  case 0x183:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Type>_Dispose__;
    break;
  case 0x184:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Volume>_Dispose__;
    break;
  case 0x185:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_Dispose__;
    break;
  case 0x186:
    goto switchD_01eb6714_default;
  case 0x187:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Vector3>_Dispose__;
    break;
  case 0x188:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_Dispose__;
    break;
  case 0x189:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<XRInputSubsystem>_get_Current__;
    break;
  case 0x18a:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_HashSet_Enumerator<Transform>_MoveNext__;
    break;
  case 0x18b:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ScheduledInvocation>_Dispose__;
    break;
  case 0x18c:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_SerializablePerScenarioDataItem>_Dispose__
    ;
    break;
  case 0x18d:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<ulong>_Dispose__;
    break;
  case 0x18e:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000038;
    break;
  case 399:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<UIDocument>_get_Current__;
    break;
  case 400:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<HandGrabUtils_HandGrabPoseData>_get_Current__
    ;
    break;
  case 0x191:
    goto switchD_01eb6714_default;
  case 0x192:
    goto switchD_01eb6714_default;
  case 0x193:
    goto switchD_01eb6714_default;
  case 0x194:
    goto switchD_01eb6714_default;
  case 0x195:
    goto switchD_01eb6714_default;
  case 0x196:
    goto switchD_01eb6714_default;
  case 0x197:
    goto switchD_01eb6714_default;
  case 0x198:
    goto switchD_01eb6714_default;
  case 0x199:
    goto switchD_01eb6714_default;
  case 0x19a:
    goto switchD_01eb6714_default;
  case 0x19b:
    goto switchD_01eb6714_default;
  case 0x19c:
    goto switchD_01eb6714_default;
  case 0x19d:
    goto switchD_01eb6714_default;
  case 0x19e:
    goto switchD_01eb6714_default;
  case 0x19f:
    goto switchD_01eb6714_default;
  case 0x1a0:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_Dispose__
    ;
    break;
  case 0x1a1:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_Queue_Enumerator<string>_MoveNext__;
    break;
  case 0x1a2:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<HID_HIDCollectionDescriptor>_get_Current__
    ;
    break;
  case 0x1a3:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Vector4>_MoveNext__;
    break;
  case 0x1a4:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Transform>_MoveNext__;
    break;
  case 0x1a5:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<VText>_Dispose__;
    break;
  case 0x1a6:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_MoveNext__
    ;
    break;
  case 0x1a7:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_HashSet_Enumerator<Text>_get_Current__;
    break;
  case 0x1a8:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_HashSet_Enumerator<VisualElement>_get_Current__;
    break;
  case 0x1a9:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<XRInputSubsystem>_Dispose__;
    break;
  case 0x1aa:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__;
    break;
  case 0x1ab:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_MoveNext__;
    break;
  case 0x1ac:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<VisualElement>_Dispose__;
    break;
  case 0x1ad:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<StyleValue>_MoveNext__;
    break;
  case 0x1ae:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_HashSet_Enumerator<SpeechEvents>_MoveNext__;
    break;
  case 0x1af:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
    ;
    break;
  case 0x1b0:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<XRNodeState>_Dispose__;
    break;
  case 0x1b1:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<UsageHint>_Dispose__;
    break;
  case 0x1b2:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<HID_HIDElementDescriptor>_Dispose__;
    break;
  case 0x1b3:
    goto switchD_01eb6714_default;
  case 0x1b4:
    goto switchD_01eb6714_default;
  case 0x1b5:
    goto switchD_01eb6714_default;
  case 0x1b6:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_get_Current__
    ;
    break;
  case 0x1b7:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_MoveNext__;
    break;
  case 0x1b8:
    goto switchD_01eb6714_default;
  case 0x1b9:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<InputActionMap_BindingOverrideJson>_get_Current__
    ;
    break;
  case 0x1ba:
    goto switchD_01eb6714_default;
  case 0x1bb:
    *(undefined8 *)(unaff_x29 + -8) = *in_stack_00000040;
    break;
  case 0x1bc:
    goto switchD_01eb6714_default;
  case 0x1bd:
    goto switchD_01eb6714_default;
  case 0x1be:
    goto switchD_01eb6714_default;
  case 0x1bf:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_HashSet_Enumerator<Transform>_get_Current__;
    break;
  case 0x1c0:
    goto switchD_01eb6714_default;
  case 0x1c1:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<LogrosRecords_Resultado>_get_Current__;
    break;
  case 0x1c2:
    goto switchD_01eb6714_default;
  case 0x1c3:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<Loom_DelayedQueueItem>_Dispose__;
    break;
  case 0x1c4:
    goto switchD_01eb6714_default;
  case 0x1c5:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Volume>_get_Current__;
    break;
  case 0x1c6:
    goto switchD_01eb6714_default;
  case 0x1c7:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ProbeBrickPool_BrickChunkAlloc>_Dispose__
    ;
    break;
  case 0x1c8:
    goto switchD_01eb6714_default;
  case 0x1c9:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<BodyPoseComparerActiveState_JointComparerConfig>_get_Current__
    ;
    break;
  case 0x1ca:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<ScheduledItem>_MoveNext__;
    break;
  case 0x1cb:
    goto switchD_01eb6714_default;
  case 0x1cc:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<UIDocument>_Dispose__;
    break;
  case 0x1cd:
    goto switchD_01eb6714_default;
  case 0x1ce:
    goto switchD_01eb6714_default;
  case 0x1cf:
    goto switchD_01eb6714_default;
  case 0x1d0:
    goto switchD_01eb6714_default;
  case 0x1d1:
    goto switchD_01eb6714_default;
  case 0x1d2:
    goto switchD_01eb6714_default;
  case 0x1d3:
    goto switchD_01eb6714_default;
  case 0x1d4:
    goto switchD_01eb6714_default;
  case 0x1d5:
    goto switchD_01eb6714_default;
  case 0x1d6:
    goto switchD_01eb6714_default;
  case 0x1d7:
    goto switchD_01eb6714_default;
  case 0x1d8:
    goto switchD_01eb6714_default;
  case 0x1d9:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_Dispose__
    ;
    break;
  case 0x1da:
    goto switchD_01eb6714_default;
  case 0x1db:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_get_Current__;
    break;
  case 0x1dc:
    goto switchD_01eb6714_default;
  case 0x1dd:
    goto switchD_01eb6714_default;
  case 0x1de:
    goto switchD_01eb6714_default;
  case 0x1df:
    goto switchD_01eb6714_default;
  case 0x1e0:
    goto switchD_01eb6714_default;
  case 0x1e1:
    goto switchD_01eb6714_default;
  case 0x1e2:
    goto switchD_01eb6714_default;
  case 0x1e3:
    goto switchD_01eb6714_default;
  case 0x1e4:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_get_Current__;
    break;
  case 0x1e5:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<TypeIdentifier>_get_Current__;
    break;
  case 0x1e6:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_MoveNext__;
    break;
  case 0x1e7:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<StyleSheet>_get_Current__;
    break;
  case 0x1e8:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_HashSet_Enumerator<TTSClipData>_MoveNext__
    ;
    break;
  case 0x1e9:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_MoveNext__;
    break;
  case 0x1ea:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<VisualElement>_get_Current__;
    break;
  case 0x1eb:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<VolumeComponent>_MoveNext__;
    break;
  case 0x1ec:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Vector4>_Dispose__;
    break;
  case 0x1ed:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<XRLoader>_get_Current__;
    break;
  case 0x1ee:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<HID_HIDCollectionDescriptor>_MoveNext__;
    break;
  case 0x1ef:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_get_Current__;
    break;
  case 0x1f0:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<XRDisplaySubsystem>_MoveNext__;
    break;
  case 0x1f1:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__;
    break;
  case 0x1f2:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Transform>_get_Current__;
    break;
  case 499:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_get_Current__
    ;
    break;
  case 500:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<TTSClipData>_MoveNext__;
    break;
  case 0x1f5:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_Queue_Enumerator<string>_get_Current__;
    break;
  case 0x1f6:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_HashSet_Enumerator<Transform>_Dispose__;
    break;
  case 0x1f7:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<Thread>_Dispose__;
    break;
  case 0x1f8:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<VisualElement>_MoveNext__;
    break;
  case 0x1f9:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputControlScheme_DeviceRequirement>_MoveNext__
    ;
    break;
  case 0x1fa:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<UIDocument>_MoveNext__;
    break;
  case 0x1fb:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<Loom_DelayedQueueItem>_MoveNext__;
    break;
  case 0x1fc:
    goto switchD_01eb6714_default;
  case 0x1fd:
    goto switchD_01eb6714_default;
  case 0x1fe:
    goto switchD_01eb6714_default;
  case 0x1ff:
    goto switchD_01eb6714_default;
  case 0x200:
    goto switchD_01eb6714_default;
  case 0x201:
    goto switchD_01eb6714_default;
  case 0x202:
    goto switchD_01eb6714_default;
  case 0x203:
    goto switchD_01eb6714_default;
  case 0x204:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<TTSClipData>_get_Current__
    ;
    break;
  case 0x205:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
    ;
    break;
  case 0x206:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<BodyPoseComparerActiveState_JointComparerConfig>_MoveNext__
    ;
    break;
  case 0x207:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<XRBaseGrabTransformer>_get_Current__;
    break;
  case 0x208:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_get_Current__
    ;
    break;
  case 0x209:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<HID_HIDCollectionDescriptor>_Dispose__;
    break;
  case 0x20a:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<VText>_MoveNext__;
    break;
  case 0x20b:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<ScriptableRenderPass>_get_Current__;
    break;
  case 0x20c:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_HashSet_Enumerator<VoiceServiceRequest>_get_Current__;
    break;
  case 0x20d:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)Method_System_Collections_Generic_HashSet_Enumerator<string>_Dispose__;
    break;
  case 0x20e:
    goto switchD_01eb6714_default;
  case 0x20f:
    goto switchD_01eb6714_default;
  case 0x210:
    goto switchD_01eb6714_default;
  case 0x211:
    goto switchD_01eb6714_default;
  case 0x212:
    goto switchD_01eb6714_default;
  case 0x213:
    goto switchD_01eb6714_default;
  case 0x214:
    goto switchD_01eb6714_default;
  case 0x215:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<MultiColumnCollectionHeader_SortedColumnState>_Dispose__
    ;
    break;
  case 0x216:
    *(undefined8 *)(unaff_x29 + -8) =
         *(undefined8 *)
          Method_System_Collections_Generic_List_Enumerator<HID_HIDElementDescriptor>_get_Current__;
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


