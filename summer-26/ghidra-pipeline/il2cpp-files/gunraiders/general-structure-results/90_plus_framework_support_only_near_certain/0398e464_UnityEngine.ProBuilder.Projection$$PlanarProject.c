/*
FUNCTION_NAME: UnityEngine.ProBuilder.Projection$$PlanarProject
ENTRY_POINT: 0398e464
PROGRAM: gunraiders-libil2cpp.so
SCORE: 265
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_7;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_8;strong_file_logging_hits_3;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_8;functionality_data_collection_or_telemetry_hits_21;functionality_possible_biometrics_hits_6
*/


long UnityEngine_ProBuilder_Projection__PlanarProject(void)

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
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_01c5d288();
  FUN_01c5d288(System_Predicate<ConstructorInfo>_TypeInfo);
  FUN_01c5d288(
              Method_System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier__
              );
  FUN_01c5d288(System_Runtime_Remoting_Messaging_Header___TypeInfo);
  FUN_01c5d288(Method_System_Xml_Linq_XAttribute__ctor__);
  FUN_01c5d288(PTR_DAT_042378b0);
  FUN_01c5d288(Method_System_Xml_Linq_XAttribute__ctor__);
  FUN_01c5d288(TMPro_HorizontalAlignmentOptions___TypeInfo);
  FUN_01c5d288(Method_System_Xml_Linq_XAttribute_ValidateAttribute__);
  FUN_01c5d288(VoxelBusters_EssentialKit_IAchievement___TypeInfo);
  FUN_01c5d288(Method_System_Xml_Linq_XCData_WriteTo__);
  FUN_01c5d288(VoxelBusters_EssentialKit_IAchievementDescription___TypeInfo);
  FUN_01c5d288(Method_System_Xml_Linq_XComment__ctor__);
  FUN_01c5d288(Method_System_Xml_Linq_XComment__ctor__);
  FUN_01c5d288(System_ComponentModel_IComponent___TypeInfo);
  FUN_01c5d288(Method_System_Xml_Linq_XComment_WriteTo__);
  FUN_01c5d288(Method_System_Xml_Linq_XContainer__ctor__);
  FUN_01c5d288(UnityEngine_UIElements_IEventHandler___TypeInfo);
  FUN_01c5d288(Method_System_Xml_Linq_XContainer_AddString__);
  FUN_01c5d288(Method_System_Xml_Linq_XContainer_AppendNode__);
  FUN_01c5d288(Method_System_Xml_Linq_XContainer_GetStringValue__);
  FUN_01c5d288(Method_System_Xml_Linq_XContainer_ReadContentFrom__);
  FUN_01c5d288(Method_System_Xml_Linq_XContainer_ReadContentFrom__);
  FUN_01c5d288(Method_System_Xml_Linq_XContainer_RemoveNode__);
  FUN_01c5d288(RootMotion_FinalIK_IKMappingBone___TypeInfo);
  FUN_01c5d288(Method_System_Data_XDRSchema_FindNameType__);
  FUN_01c5d288(Method_System_Data_XDRSchema_GetInstanceName__);
  FUN_01c5d288(Method_System_Data_XDRSchema_GetMinMax__);
  FUN_01c5d288(UnityEngine_UIElements_IMouseEvent___TypeInfo);
  FUN_01c5d288(Method_System_Data_XDRSchema_HandleColumn__);
  FUN_01c5d288(UnityEngine_UIElements_IPanel___TypeInfo);
  FUN_01c5d288(VoxelBusters_EssentialKit_IPlayer___TypeInfo);
  FUN_01c5d288(UnityEngine_UIElements_IPointerEvent___TypeInfo);
  FUN_01c5d288(Method_System_Data_XDRSchema_InstantiateSimpleTable__);
  FUN_01c5d288(Method_System_Data_XDRSchema_IsTextOnlyContent__);
  FUN_01c5d288(UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation___TypeInfo);
  FUN_01c5d288(Method_System_Data_XDRSchema_ParseDataType__);
  FUN_01c5d288(Method_System_Xml_Linq_XDeclaration__ctor__);
  FUN_01c5d288(System_ComponentModel_ISite___TypeInfo);
  FUN_01c5d288(System_Runtime_CompilerServices_IStrongBox___TypeInfo);
  FUN_01c5d288(System_Runtime_Remoting_Services_ITrackingHandler___TypeInfo);
  FUN_01c5d288(Method_System_Xml_Linq_XDocument_GetFirstNode<XElement>__);
  FUN_01c5d288(UnityEngine_UIElements_IUxmlFactory___TypeInfo);
  FUN_01c5d288(Method_System_Xml_Linq_XDocument_AddAttribute__);
  FUN_01c5d288(Method_System_Xml_Linq_XDocument_AddAttributeSkipNotify__);
  FUN_01c5d288(System_Threading_Tasks_IndexRange___TypeInfo);
  FUN_01c5d288(Method_System_Xml_Linq_XDocument_ValidateDocument__);
  FUN_01c5d288(Method_System_Xml_Linq_XDocument_ValidateNode__);
  FUN_01c5d288(Method_System_Xml_Linq_XDocument_ValidateString__);
                    /* try { // try from 0398e6ac to 03a8e6db has its CatchHandler @ 0398e6ac
                       catch() { ... } // from try @ 0398e6ac with catch @ 0398e6ac
                       catch() { ... } // from try @ 0398e6e8 with catch @ 0398e6ac
                       catch() { ... } // from try @ 0398e784 with catch @ 0398e6ac
                       catch() { ... } // from try @ 0398e800 with catch @ 0398e6ac */
  FUN_01c5d288(short___TypeInfo);
  FUN_01c5d288(Method_System_Xml_Linq_XDocument_WriteTo__);
  FUN_01c5d288(Method_System_Xml_Linq_XDocumentType__ctor__);
  FUN_01c5d288(Method_System_Xml_Linq_XDocumentType_WriteTo__);
                    /* try { // try from 0398e6dc to 03a8e6e7 has its CatchHandler @ 0398e754 */
  FUN_01c5d288(long___TypeInfo);
                    /* try { // try from 0398e6e8 to 03a8e76b has its CatchHandler @ 0398e6ac */
  FUN_01c5d288(IntPtr___TypeInfo);
  FUN_01c5d288(Method_System_Xml_Linq_XElement__ctor__);
  FUN_01c5d288(Method_System_Xml_Linq_XElement__ctor__);
  FUN_01c5d288(System_Globalization_InternalCodePageDataItem___TypeInfo);
  FUN_01c5d288(Method_System_Xml_Linq_XElement_AddAttribute__);
  FUN_01c5d288(System_Runtime_Serialization_Formatters_Binary_InternalPrimitiveTypeE___TypeInfo);
  FUN_01c5d288(Method_System_Xml_Linq_XElement_AddAttributeSkipNotify__);
  FUN_01c5d288(InventoryItem___TypeInfo);
  FUN_01c5d288(System_Predicate<CustomEvent>_TypeInfo);
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0398e6dc with catch @ 0398e754
                        */
  FUN_01c5d288(Newtonsoft_Json_Linq_JTokenType___TypeInfo);
  FUN_01c5d288(Reign_MobileInputCapture_Key___TypeInfo);
                    /* try { // try from 0398e76c to 03a8e783 has its CatchHandler @ 0398e7f8 */
  FUN_01c5d288(System_Security_Cryptography_KeySizes___TypeInfo);
  FUN_01c5d288(Method_System_Xml_Linq_XElement_AppendAttribute__);
                    /* try { // try from 0398e784 to 03a8e7e7 has its CatchHandler @ 0398e6ac */
  FUN_01c5d288(UnityEngine_Keyframe___TypeInfo);
  FUN_01c5d288(Method_System_Xml_Linq_XElement_GetPrefixOfNamespace__);
  FUN_01c5d288(Method_System_Xml_Linq_XElement_ReadElementFromImpl__);
  FUN_01c5d288(Method_System_Xml_Linq_XElement_System_Xml_Serialization_IXmlSerializable_ReadXml__);
  FUN_01c5d288(UnityEngine_Rendering_Universal_LayerBatch___TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xe4d) = 1;
  lVar11 = thunk_FUN_01c496e0(*unaff_x21);
  FUN_0290befc(lVar11,0x112,*unaff_x19);
  puVar10 = 
  Method_System_Security_Cryptography_X509Certificates_X509EnhancedKeyUsageExtension__ctor__;
  puVar9 = Method_UnityEngine_ResourceManagement_WebRequestQueue_OnWebAsyncOpComplete__;
  puVar8 = Method_WeaponHands_UpdateGloveSkin__;
  puVar7 = Method_System_WeakReference_GetObjectData__;
  puVar6 = short___TypeInfo;
  puVar5 = System_Runtime_CompilerServices_IStrongBox___TypeInfo;
  puVar4 = UnityEngine_Vector3_____TypeInfo;
  puVar3 = System_ValueTuple<int,_int>___TypeInfo;
  puVar2 = 
  UnityEngine_Experimental_Rendering_RenderGraphModule_RenderFunc<MainLightShadowCasterPass_PassData>_TypeInfo
  ;
  puVar1 = System_Predicate<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo;
  if (lVar11 != 0) {
                    /* try { // try from 0398e7e8 to 03a8e7f7 has its CatchHandler @ 0398e7f8 */
                    /* catch() { ... } // from try @ 0398e76c with catch @ 0398e7f8
                       catch() { ... } // from try @ 0398e7e8 with catch @ 0398e7f8 */
                    /* try { // try from 0398e7fc to 03a8e7ff has its CatchHandler @ 0398e808 */
                    /* try { // try from 0398e800 to 03a8e80b has its CatchHandler @ 0398e6ac */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0398e7fc with catch @ 0398e808
                        */
    FUN_0290c838(lVar11,*(undefined8 *)
                         System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>___TypeInfo
                 ,*(undefined8 *)System_Runtime_Remoting_Messaging_Header___TypeInfo,
                 *(undefined8 *)
                  System_Predicate<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_Mono_Security_X509_X509CertificateCollection_AddRange__,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_X509Certificates_X509ChainImplMono_CheckRevocationOnChain__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)System_Threading_Tasks_IndexRange___TypeInfo,
                 *(undefined8 *)System_Collections_Generic_Stack<InteriorNode>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Data_XDRSchema_GetInstanceName__,
                 *(undefined8 *)Method_System_Net_WebReadStream_BeginRead__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebRequestModuleElementCollection_set_Item__
                 ,*(undefined8 *)Method_System_Net_WebRequest_set_Proxy__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_VoxelBusters_EssentialKit_WebView_HandleOnURLSchemeMatchFound__,
                 *(undefined8 *)Method_System_Net_WebReadStream_set_Position__,*(undefined8 *)puVar1
                );
    FUN_0290c838(lVar11,*(undefined8 *)VoxelBusters_EssentialKit_BillingProductDefinition___TypeInfo
                 ,*(undefined8 *)System_Attribute_____TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XDocumentType__ctor__,
                 *(undefined8 *)IntPtr___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XContainer_ReadContentFrom__,
                 *(undefined8 *)
                  UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_AeLa_EasyFeedback_Web_WebInterface__getRequestMethodString__,
                 *(undefined8 *)TMPro_TMP_TextProcessingStack<int>___TypeInfo,*(undefined8 *)puVar1)
    ;
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509EnhancedKeyUsageExtension_CopyFrom__
                 ,*(undefined8 *)Oculus_Platform_Request<LaunchUnblockFlowResult>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_WebSockets_WebSocketValidate_ValidateSubprotocol__,
                 *(undefined8 *)object_____TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XDocument_WriteTo__,
                 *(undefined8 *)Oculus_Platform_Request<ChallengeList>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_POpusCodec_Wrapper_opus_encode__,
                 *(undefined8 *)Oculus_Platform_Request<Party>_TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebUtilityElement_get_UnicodeDecodingConformance__
                 ,*(undefined8 *)puVar3,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)puVar10,*(undefined8 *)puVar5,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)puVar7,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)puVar9,*(undefined8 *)puVar4,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)puVar8,*(undefined8 *)puVar6,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebRequestModuleElementCollection_RemoveAt__
                 ,*(undefined8 *)UnityEngine_ExecuteInEditMode___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtension_get_HasPathLengthConstraint__
                 ,*(undefined8 *)
                   UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebRequestModulesSection_PostDeserialize__,
                 *(undefined8 *)UnityEngine_Events_UnityAction<GameObject>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WindowsAuthenticationElement__ctor__,
                 *(undefined8 *)System_Globalization_InternalCodePageDataItem___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Mono_Math_BigInteger___TypeInfo,
                 *(undefined8 *)UnityEngine_AndroidJavaProxy___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509ExtensionCollection_get_Item__
                 ,*(undefined8 *)Method_System_Net_WebRequest_get_ContentLength__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_Oculus_Platform_WindowsPlatform_Initialize__,
                 *(undefined8 *)
                  Method_System_Net_Configuration_WebRequestModulesSection_InitializeDefault__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XElement__ctor__,
                 *(undefined8 *)
                  System_Runtime_CompilerServices_TrueReadOnlyCollection<Expression>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_WeaponsRackWeapon_PlayPickUpSFX__,
                 *(undefined8 *)
                  Method_System_Net_Configuration_WebProxyScriptElement_get_Properties__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Principal_WindowsIdentity_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
                 ,*(undefined8 *)Method_System_Net_WebRequest_GetResponse__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509ChainPolicy_set_VerificationFlags__
                 ,*(undefined8 *)
                   Method_System_Security_Cryptography_X509Certificates_X509Certificate2Collection_get_Item__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)System_Globalization_EraInfo___TypeInfo,
                 *(undefined8 *)System_Func<Object[]>_TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebConnectionStream_set_WriteTimeout__,
                 *(undefined8 *)UnityEngine_ProBuilder_CSG_Vertex___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)UnityEngine_UIElements_ComputedTransitionProperty___TypeInfo,
                 *(undefined8 *)System_Reflection_CustomAttributeTypedArgument___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_UnityEngine_Rendering_VolumeStack_GetComponent<ColorLookup>__,
                 *(undefined8 *)Method_UnityEngine_Rendering_VolumeProfile_TryGet<VolumeComponent>__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_POpusCodec_Wrapper_get_opus_encoder_ctl__,
                 *(undefined8 *)Method_VoxelBusters_EssentialKit_WebView_HandleOnWebViewLoadStart__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebRequest_get_Proxy__,
                 *(undefined8 *)Method_System_Net_WebConnectionStream_set_Position__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_GetMemberInfo__
                 ,*(undefined8 *)Method_Photon_Voice_Unity_UtilityScripts_WaveWriter__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebRequest_Abort__,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_X509Certificates_X509CertificateCollection_AddRange__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_Photon_Voice_Unity_WebRtcAudioDsp_OnAudioOutFrameFloat__,
                 *(undefined8 *)Method_UnityEngine_Rendering_VolumeStack_GetComponent<MotionBlur>__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XAttribute__ctor__,
                 *(undefined8 *)PTR_DAT_04234a18,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_Mono_Security_X509_X509CertificateCollection_Add__,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_X509Certificates_X509Certificate_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)System_Threading_Tasks_Task<int>_TypeInfo,
                 *(undefined8 *)UnityEngine_Rendering_DebugActionDesc___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_WebSockets_WebSocketValidate_ThrowIfInvalidState__,
                 *(undefined8 *)Method_WeaponPickup_NetworkRaiseEvent__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_WebSockets_WebSocketValidate_ValidateCloseStatus__,
                 *(undefined8 *)UnityEngine_Rendering_Universal_LayerBatch___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebRequestModuleElement__ctor__,
                 *(undefined8 *)System_Data_DataTable___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebConnectionStream_EndWrite__,
                 *(undefined8 *)byte___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)System_ParameterizedStrings_FormatParam___TypeInfo,
                 *(undefined8 *)System_Xml_Schema_XmlSchemaObjectEnumerator_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebRequest_get_RequestUri__,
                 *(undefined8 *)UnityEngine_UI_CoroutineTween_TweenRunner<ColorTween>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<UIRLayoutUpdater>__
                 ,*(undefined8 *)VoxelBusters_EssentialKit_DeepLinkDefinition___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)OVRPlugin_Vector3f___TypeInfo,
                 *(undefined8 *)System_Xml_Schema_XmlSchemaParticle_TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebRequestStream_WriteAsync__,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_X509Certificates_X509CertificateImpl_ThrowIfContextInvalid__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         UnityEngine_Events_UnityAction<ProbeBrickIndex_VoxelMeta>_TypeInfo,
                 *(undefined8 *)UnityEngine_Audio_AudioMixerSnapshot___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_POpusCodec_Wrapper_set_opus_decoder_ctl__,
                 *(undefined8 *)Method_System_Security_Principal_WindowsIdentity_SetToken__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_GetMemberType__
                 ,*(undefined8 *)
                   System_Collections_Generic_Stack<BaseStyleMatcher_MatchContext>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         UnityEngine_Experimental_Rendering_RenderGraphModule_RenderFunc<DeferredPass_PassData>_TypeInfo
                 ,*(undefined8 *)Reign_MobileInputCapture_Button___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebProxyScriptElement_set_AutoConfigUrlRetryInterval__
                 ,*(undefined8 *)Method_VoxelBusters_EssentialKit_Demo_WebViewDemo_OnWebViewShow__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)System_Net_FtpMethodInfo___TypeInfo,
                 *(undefined8 *)
                  UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector2,_FloatField,_float>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_VivePlayerController_ResetOrientation__,
                 *(undefined8 *)Method_System_Net_WebConnectionStream_get_Length__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebRequestModulesSection__ctor__,
                 *(undefined8 *)Method_System_Threading_WaitHandle_InternalWaitOne__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)DarkTonic_MasterAudio_DynamicSoundGroupCreator___TypeInfo,
                 *(undefined8 *)Oculus_Platform_Request<Dictionary<string,_string>>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XDeclaration__ctor__,
                 *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Threading_WaitHandle_ThrowAbandonedMutexException__,
                 *(undefined8 *)
                  UnityEngine_Experimental_Rendering_RenderGraphModule_RenderFunc<RenderGraph_ProfilingScopePassData>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_VoxelBusters_EssentialKit_Demo_WebViewDemo_OnWebViewHide__,
                 *(undefined8 *)System_Runtime_CompilerServices_Ephemeron___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)System_Predicate<ConstructorInfo>_TypeInfo,
                 *(undefined8 *)System_Predicate<KerningPair>_TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XElement_GetPrefixOfNamespace__,
                 *(undefined8 *)System_Data_Function___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509EnhancedKeyUsageExtension_Decode__
                 ,*(undefined8 *)System_Runtime_CompilerServices_DecimalConstantAttribute___TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509Store__ctor__,
                 *(undefined8 *)UnityEngine_Events_UnityAction<Scene,_Scene>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebProxyScriptElement_PostDeserialize__,
                 *(undefined8 *)
                  Method_System_Net_WebSockets_WebSocketValidate_ValidateArraySegment__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_UnityEngine_ProBuilder_WingedEdge_SortEdgesByAdjacency__,
                 *(undefined8 *)Method_System_Xml_Linq_XComment_WriteTo__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebReadStream_Read__,
                 *(undefined8 *)
                  Newtonsoft_Json_Utilities_ThreadSafeStore<string,_CallSite<Func<CallSite,_object,_object>>>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509Certificate2ImplMono__ctor__
                 ,*(undefined8 *)
                   System_Tuple<TaskCompletionSource<int>,_Memory<byte>,_byte[]>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WindowsAuthenticationElement_get_Properties__
                 ,*(undefined8 *)
                   Method_System_Net_Configuration_WebRequestModuleElementCollection_GetElementKey__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_Mono_Security_X509_X509Crl__ctor__,
                 *(undefined8 *)RootMotion_FinalIK_Finger___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_VoxelBusters_EssentialKit_WebViewCore_Android_WebView_<_ctor>b__1_5__
                 ,*(undefined8 *)UnityEngine_Splines_SplineDataDictionary<Object>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebRequestStream_Close_internal__,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_X509Certificates_X509Certificate__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XCData_WriteTo__,
                 *(undefined8 *)UnityEngine_GradientColorKey___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_Mono_Security_X509_X509Certificate__ctor__,
                 *(undefined8 *)UnityEngine_AnimationEvent___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_Mono_X509PalImpl_GetCertContentType__,
                 *(undefined8 *)int_____TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509Certificate2Collection_Find__
                 ,*(undefined8 *)System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509Extension_CopyFrom__
                 ,*(undefined8 *)Oculus_Platform_Request<ProductList>_TypeInfo,*(undefined8 *)puVar1
                );
    FUN_0290c838(lVar11,*(undefined8 *)System_Reflection_ConstructorInfo___TypeInfo,
                 *(undefined8 *)UnityEngine_TextCore_Text_FontWeightPair___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_Mono_Security_X509_X509Certificate_get_Signature__,
                 *(undefined8 *)Method_System_Net_Configuration_WebRequestModuleElement_set_Prefix__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebRequestModuleElementCollection_get_Item__
                 ,*(undefined8 *)
                   UnityEngine_UIElements_UxmlEnumAttributeDescription<HelpBoxMessageType>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebProxy_GetProxy__,
                 *(undefined8 *)Method_POpusCodec_Wrapper_opus_decoder_create__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Data_XDRSchema_GetMinMax__,
                 *(undefined8 *)Method_System_Xml_Linq_XElement_AddAttribute__,*(undefined8 *)puVar1
                );
    FUN_0290c838(lVar11,*(undefined8 *)
                         UnityEngine_Events_UnityAction<List<ProbeBrickIndex_VoxelMeta>>_TypeInfo,
                 *(undefined8 *)System_Linq_Expressions_Interpreter_Instruction_____TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XContainer_ReadContentFrom__,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_X509Certificates_X509Certificate2__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)System_Predicate<CustomEvent>_TypeInfo,
                 *(undefined8 *)Oculus_Platform_Request<CloudStorageData>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebRequest_get_Credentials__,
                 *(undefined8 *)System_Collections_Generic_Stack<JSONNode>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebHeaderCollection_CheckBadChars__,
                 *(undefined8 *)System_Runtime_CompilerServices_DateTimeConstantAttribute___TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_VoxelBusters_EssentialKit_WebViewCore_Android_WebView_<_ctor>b__1_3__
                 ,*(undefined8 *)
                   UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebReadStream_get_Position__,
                 *(undefined8 *)UnityEngine_Keyframe___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_VoxelBusters_EssentialKit_WebView_HandleOnWebViewShow__,
                 *(undefined8 *)UnityEngine_Rendering_GraphicsDeviceType___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebReadStream_EndRead__,
                 *(undefined8 *)UnityEngine_UIElements_StyleSheets_Syntax_Expression___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XDocument_ValidateNode__,
                 *(undefined8 *)Method_System_Threading_WaitHandle_WaitOne__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)System_Threading_Tasks_Task<int>___TypeInfo,
                 *(undefined8 *)Oculus_Platform_Request<SdkAccountList>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Principal_WindowsImpersonationContext__ctor__,
                 *(undefined8 *)System_Collections_Generic_Queue<Vector3>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)TMPro_TMP_ListPool<Canvas>_TypeInfo,
                 *(undefined8 *)System_Tuple<Task,_Task,_TaskContinuation>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebReadStream_SetLength__,
                 *(undefined8 *)Method_Mono_Security_X509_X509ExtensionCollection__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)UnityEngine_Events_UnityAction<Selectable>_TypeInfo,
                 *(undefined8 *)System_Text_RegularExpressions_Group___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebReadStream_Write__,
                 *(undefined8 *)System_Collections_ObjectModel_ReadOnlyCollection<int>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509Certificate2Collection_AddRange__
                 ,*(undefined8 *)
                   UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector3Int,_IntegerField,_int>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_Configuration_WebUtilityElement__ctor__,
                 *(undefined8 *)
                  System_Collections_Generic_Stack<StyleVariableResolver_ResolveContext>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebProxy_IsBypassed__,
                 *(undefined8 *)System_Net_WebCompletionSource<WebRequestStream>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_POpusCodec_Wrapper_HandleStatusCode__,
                 *(undefined8 *)UnityEngine_TextCore_GlyphRect___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         System_Runtime_Serialization_Formatters_Binary_InternalPrimitiveTypeE___TypeInfo
                 ,*(undefined8 *)
                   Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_Mono_Security_X509_X509Crl_GetCrlEntry__,
                 *(undefined8 *)Method_System_Net_WebRequest_<GetResponseAsync>b__79_0__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XContainer_AppendNode__,
                 *(undefined8 *)Method_Photon_Voice_WebRTCAudioProcessor_ReverseStreamThread__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)TMPro_TMP_ListPool<IMaterialModifier>_TypeInfo,
                 *(undefined8 *)byte_____TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebRequest_EndGetResponse__,
                 *(undefined8 *)Method_VoxelBusters_EssentialKit_WebView_HandleOnWebViewHide__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Data_XDRSchema_HandleColumn__,
                 *(undefined8 *)Method_System_Net_WebHeaderCollection_Remove__,*(undefined8 *)puVar1
                );
    FUN_0290c838(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>_TypeInfo
                 ,*(undefined8 *)
                   UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<RectInt,_IntegerField,_int>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XDocument_ValidateString__,
                 *(undefined8 *)Method_UnityEngine_UIElements_BaseField<int>_get_visualInput__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Mono_Math_BigInteger___TypeInfo,
                 *(undefined8 *)System_Runtime_Remoting_Services_ITrackingHandler___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509ChainImplMono_Build__
                 ,*(undefined8 *)
                   Method_System_Net_Configuration_WebProxyScriptElement_get_AutoConfigUrlRetryInterval__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Oculus_Platform_Request<CloudStorageMetadataList>_TypeInfo,
                 *(undefined8 *)Oculus_Platform_Request<CloudStorageUpdateResponse>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509ChainPolicy_set_RevocationMode__
                 ,*(undefined8 *)Method_System_Net_WebRequest_get_Method__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         UnityEngine_Experimental_Rendering_RenderGraphModule_RenderFunc<RenderObjectsPass_PassData>_TypeInfo
                 ,*(undefined8 *)double___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebRequestModuleElementCollection_set_Item__
                 ,*(undefined8 *)Method_System_Security_Principal_WindowsImpersonationContext_Undo__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_VoxelBusters_EssentialKit_WebViewCore_Android_WebView_<_ctor>b__1_1__
                 ,*(undefined8 *)
                   Method_System_Security_Cryptography_X509Certificates_X509Certificate_System_Runtime_Serialization_ISerializable_GetObjectData__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_Column_UxmlObjectFactory<Column>_TypeInfo,
                 *(undefined8 *)System_Func<Scale,_Scale,_bool>_TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509Certificate__ctor__
                 ,*(undefined8 *)Method_System_Net_WebConnectionStream_Write__,*(undefined8 *)puVar1
                );
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X500DistinguishedName_Decode__
                 ,*(undefined8 *)
                   Method_System_Net_Configuration_WebRequestModuleElement_get_Prefix__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebResponseStream_GetResponse__,
                 *(undefined8 *)Method_System_Runtime_Remoting_WellKnownServiceTypeEntry__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_Oculus_Platform_Models_DeserializableList<RoomInviteNotification>__ctor__
                 ,*(undefined8 *)PTR_DAT_04230f30,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_UnityEngine_Rendering_VolumeStack_GetComponent<SplitToning>__,
                 *(undefined8 *)
                  Method_OculusSampleFramework_WindmillController_StartStopStateChanged__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509Certificate2Collection_Add__
                 ,*(undefined8 *)Method_System_Threading_WaitHandle_ThrowAbandonedMutexException__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebResponse_GetResponseStream__,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtension_CopyFrom__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)UnityEngine_Splines_SplineDataDictionary<float>_TypeInfo,
                 *(undefined8 *)Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebRequestModuleElementCollection__ctor__,
                 *(undefined8 *)System_Xml_Linq_XHashtable<WeakReference>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_Mono_Security_X509_X509Crl_VerifySignature__,
                 *(undefined8 *)System_Linq_Expressions_Interpreter_GotoInstruction___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)UnityEngine_Splines_SplineDataDictionary<float4>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_Experimental_Rendering_RenderGraphModule_RenderFunc<CopyDepthPass_PassData>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebHeaderCollection_Remove__,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ReceivedMqttPacket>_SetException__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_UnityEngine_Rendering_VolumeStack_GetComponent<DepthOfField>__,
                 *(undefined8 *)Method_System_Net_WebRequest_Create__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Oculus_Platform_Request<bool>_TypeInfo,
                 *(undefined8 *)VoxelBusters_EssentialKit_IPlayer___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_UnityEngine_Rendering_VolumeStack_GetComponent<ChromaticAberration>__
                 ,*(undefined8 *)Method_POpusCodec_Wrapper_opus_encode__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Oculus_Platform_Request<UserProof>_TypeInfo,
                 *(undefined8 *)PTR_DAT_042378b0,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebRequestModuleElement__ctor__,
                 *(undefined8 *)Method_System_Net_WebReadStream_Flush__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_UnityEngine_Rendering_VolumeStack_GetComponent<ChannelMixer>__,
                 *(undefined8 *)
                  Method_System_Net_Configuration_WebRequestModuleElementCollection_IndexOf__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_WebSockets_WebSocketHandle_ValidateAndTrackHeader__,
                 *(undefined8 *)Method_POpusCodec_Wrapper_opus_decode__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XContainer_AddString__,
                 *(undefined8 *)
                  System_Collections_Generic_List<UIRStylePainter_RepeatRectUV>___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509ExtensionCollection_System_Collections_ICollection_CopyTo__
                 ,*(undefined8 *)Method_System_Net_Configuration_WebUtilityElement_get_Properties__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_Mono_Security_X509_X509ExtensionCollection_IndexOf__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Action,_LinkedListNode<Action>>_set_Item__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_POpusCodec_Wrapper_set_opus_encoder_ctl__,
                 *(undefined8 *)Method_System_Net_Configuration_WebRequestModuleElement_set_Type__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)RootMotion_FinalIK_IKMappingBone___TypeInfo,
                 *(undefined8 *)ExitGames_Client_Photon_StructWrapping_StructWrapper<byte>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebUtilityElement_get_UnicodeEncodingConformance__
                 ,*(undefined8 *)Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebRequestModuleElement_get_Type__,
                 *(undefined8 *)
                  UnityEngine_Experimental_Rendering_RenderGraphModule_RenderFunc<InvokeOnRenderObjectCallbackPass_PassData>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_VoxelBusters_EssentialKit_Demo_WebViewDemo_OnWebViewLoadStart__,
                 *(undefined8 *)Method_Mono_Security_X509_X509Extension__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_VoxelBusters_EssentialKit_WebViewCore_Android_WebView_<_ctor>b__1_4__
                 ,*(undefined8 *)
                   Method_System_Net_Configuration_WebRequestModuleElementCollection_CreateNewElement__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Reign_MobileInputCapture_Key___TypeInfo,
                 *(undefined8 *)long___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_UnityEngine_ResourceManagement_WebRequestQueue_SetMaxConcurrentRequests__
                 ,*(undefined8 *)
                   Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualTreeBindingsUpdater>__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)System_Collections_Generic_Queue<string>_TypeInfo,
                 *(undefined8 *)
                  System_Buffers_SpanAction<char,_ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualElementAnimationSystem>__
                 ,*(undefined8 *)Method_System_Threading_WaitHandle_WaitAny__,*(undefined8 *)puVar1)
    ;
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebHeaderCollection_SetInternal__,
                 *(undefined8 *)
                  Method_System_Net_Configuration_WebRequestModuleElementCollection_Remove__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_Mono_Security_X509_X509Crl_VerifySignature__,
                 *(undefined8 *)Method_System_Net_WebExceptionMapping_GetWebStatusString__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)CodeStage_AntiCheat_Genuine_CodeHash_FileHash___TypeInfo,
                 *(undefined8 *)System_Xml_Schema_BitSet___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XDocument_AddAttribute__,
                 *(undefined8 *)Method_System_Net_WebOperation_<RegisterRequest>b__48_0__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)RootMotion_FinalIK_FABRIKChain___TypeInfo,
                 *(undefined8 *)
                  System_Tuple<OVRGLTFAnimatinonNode_ThumbstickDirection,_OVRGLTFAnimatinonNode_ThumbstickDirection>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebHeaderCollection_Add__,
                 *(undefined8 *)
                  UnityEngine_Experimental_Rendering_RenderGraphModule_RenderFunc<ScriptableRenderer_BeginXRPassData>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_UnityEngine_Rendering_VolumeStack_GetComponent<LensDistortion>__,
                 *(undefined8 *)InventoryItem___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_UnityEngine_ProBuilder_WingedEdge_GetWingedEdges__,
                 *(undefined8 *)Method_Mono_Security_X509_X509Certificate_get_DSA__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebRequest_BeginGetResponse__,
                 *(undefined8 *)Method_System_Net_WebRequestStream_CheckWriteOverflow__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebConnectionStream_Read__,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_VolumeStack_GetComponent<LiftGammaGain>__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509Certificate2_get_PrivateKey__
                 ,*(undefined8 *)
                   Method_System_Security_Cryptography_X509Certificates_X509KeyUsageExtension_get_KeyUsages__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Oculus_Platform_Request<UserAndRoomList>_TypeInfo,
                 *(undefined8 *)System_ComponentModel_ISite___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_Photon_Voice_Unity_UtilityScripts_WaveWriter_WriteSample__,
                 *(undefined8 *)Method_System_Xml_Linq_XElement_ReadElementFromImpl__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebHeaderCollection_Add__,
                 *(undefined8 *)Method_System_Data_XDRSchema_ParseDataType__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)TMPro_HorizontalAlignmentOptions___TypeInfo,
                 *(undefined8 *)UnityEngine_UIElements_IMouseEvent___TypeInfo,*(undefined8 *)puVar1)
    ;
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_AeLa_EasyFeedback_Web_WebInterface__remoteCertificateValidationCallback__
                 ,*(undefined8 *)
                   Method_System_Security_Cryptography_X509Certificates_X509Certificate2Collection_Contains__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebRequest_set_Method__,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_X509Certificates_X509ChainImpl_ThrowIfContextInvalid__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_WeaponPickup_OnLeftRoom__,
                 *(undefined8 *)
                  Method_System_Net_Configuration_WebUtilityElement_set_UnicodeDecodingConformance__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)UnityEngine_UIElements_IPointerEvent___TypeInfo,
                 *(undefined8 *)System_WeakReference<SslStream>_TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_Mono_Security_X509_X509Crl_Parse__,
                 *(undefined8 *)Method_System_Net_Configuration_WebProxyScriptElement__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509ChainPolicy_set_RevocationFlag__
                 ,*(undefined8 *)Method_System_Data_XDRSchema_InstantiateSimpleTable__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_Photon_Voice_Unity_WebRtcAudioDsp_OnAudioConfigurationChanged__,
                 *(undefined8 *)Method_System_Xml_Linq_XElement_AppendAttribute__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_UnityEngine_Rendering_VolumeProfile_Add__,
                 *(undefined8 *)
                  Method_VoxelBusters_EssentialKit_Demo_WebViewDemo_<OnActionSelectInternal>b__10_0__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_Mono_Security_X509_X509Crl_GetCrlEntry__,
                 *(undefined8 *)Method_POpusCodec_Wrapper_opus_encoder_create__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)UnityEngine_UIElements_IUxmlFactory___TypeInfo,
                 *(undefined8 *)UnityEngine_ProBuilder_FaceRebuildData___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebProxyScriptElement_get_DownloadTimeout__
                 ,*(undefined8 *)Method_UnityEngine_UIElements_BaseField<int>_get_rawValue__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         UnityEngine_Experimental_Rendering_GraphicsFormat_____TypeInfo,
                 *(undefined8 *)System_Runtime_InteropServices_GCHandle___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebRequestModuleElementCollection_Remove__,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_VolumeParameter_GetValue<AnimationCurve>__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)UnityEngine_UIElements_IPanel___TypeInfo,
                 *(undefined8 *)
                  System_Threading_Tasks_TaskReplicator_ReplicatableUserAction<RangeWorker>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebConnectionStream_BeginWrite__,
                 *(undefined8 *)Oculus_Platform_Request<LaunchFriendRequestFlowResult>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebRequestModuleElementCollection_Clear__,
                 *(undefined8 *)UnityEngine_AndroidJavaObject___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Oculus_Platform_Request<RoomInviteNotificationList>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_UIElements_UxmlObjectAttributeDescription<Columns>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebConnectionStream_BeginRead__,
                 *(undefined8 *)Method_System_Net_WebSockets_WebSocket_CreateClientWebSocket__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebOperation_RegisterRequest__,
                 *(undefined8 *)Method_System_Net_Configuration_WebRequestModuleElement__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebConnectionStream_get_Position__,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtension_get_PathLengthConstraint__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XComment__ctor__,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_VolumeStack_GetComponent<PaniniProjection>__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         System_Collections_ObjectModel_ReadOnlyCollection<Color>_TypeInfo,
                 *(undefined8 *)System_Collections_ObjectModel_ReadOnlyCollection<Spline>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebConnectionStream_set_ReadTimeout__,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_VolumeStack_GetComponent<WhiteBalance>__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtension_get_CertificateAuthority__
                 ,*(undefined8 *)
                   Method_VoxelBusters_EssentialKit_WebView_HandleOnWebViewLoadFinish__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Oculus_Platform_Request<UserList>_TypeInfo,
                 *(undefined8 *)System_Collections_DictionaryEntry___TypeInfo,*(undefined8 *)puVar1)
    ;
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebRequestModulesSection_get_Properties__,
                 *(undefined8 *)Method_System_Net_WebHeaderCollection_Set__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualTreeViewDataUpdater>__
                 ,*(undefined8 *)Method_System_Net_WebRequest_set_Credentials__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_CopyFrom__
                 ,*(undefined8 *)Method_System_Net_WebRequest_Create__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_WebRequestStream_TryReadFromBufferedContent__,
                 *(undefined8 *)Method_System_Xml_Linq_XContainer__ctor__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509ExtensionCollection_Add__
                 ,*(undefined8 *)Method_UnityEngine_ProBuilder_WingedEdge_SortEdgesByAdjacency__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebSockets_WebSocketReceiveResult__ctor__,
                 *(undefined8 *)Method_System_Net_WebOperation_SetPriorityRequest__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Data_XDRSchema_IsTextOnlyContent__,
                 *(undefined8 *)Method_System_Net_WebRequest_get_Timeout__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_CheckTypeForwardedFrom__
                 ,*(undefined8 *)Method_System_Net_WebRequest_get_UseDefaultCredentials__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebResponse_get_ResponseUri__,
                 *(undefined8 *)
                  Method_VoxelBusters_EssentialKit_WebViewCore_Android_WebView_<_ctor>b__1_2__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_VoxelBusters_EssentialKit_Demo_WebViewDemo_OnURLSchemeMatchFound__,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension__ctor__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Oculus_Platform_Request<string>_TypeInfo,
                 *(undefined8 *)UnityEngine_UIElements_UIR_TempAllocator<ushort>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XDocument_ValidateDocument__,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_X509Certificates_X509Store_Open__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Newtonsoft_Json_Linq_JTokenType___TypeInfo,
                 *(undefined8 *)
                  UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebProxyScriptElement_set_DownloadTimeout__
                 ,*(undefined8 *)
                   Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualTreeStyleUpdater>__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebReadStream_get_Length__,
                 *(undefined8 *)Method_UnityEngine_Rendering_VolumeStack_GetComponent<FilmGrain>__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_UnityEngine_Rendering_VolumeStack_GetComponent<Tonemapping>__,
                 *(undefined8 *)Method_System_Data_XDRSchema_FindNameType__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_Photon_Voice_VoiceClient_CreateLocalVoiceAudio<float>__,
                 *(undefined8 *)Method_System_Xml_Linq_XDocument_GetFirstNode<XElement>__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_UnityEngineInternal_WebRequestUtils_MakeInitialUrl__,
                 *(undefined8 *)
                  Method_System_Net_Configuration_WebUtilityElement_set_UnicodeEncodingConformance__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XElement__ctor__,
                 *(undefined8 *)
                  Method_System_Net_Configuration_WebRequestModuleElement_get_Properties__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X500DistinguishedName__ctor__
                 ,*(undefined8 *)Method_UnityEngine_Rendering_VolumeStack_GetComponent<Bloom>__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)System_Threading_Tasks_Task<bool>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_UIElements_BaseCompositeField_FieldDescription<RectInt,_IntegerField,_int>___TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WindowsAuthenticationElement_get_DefaultCredentialsHandleCacheSize__
                 ,*(undefined8 *)Method_System_Runtime_Remoting_WellKnownClientTypeEntry__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         System_Collections_ObjectModel_ReadOnlyCollection<CustomAttributeTypedArgument>_TypeInfo
                 ,*(undefined8 *)UnityEngine_ProBuilder_Edge___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_UnityEngine_Rendering_VolumeStack_GetComponent<ColorAdjustments>__,
                 *(undefined8 *)
                  Method_Photon_Voice_Unity_VoiceConnection_InstantiateSpeakerForRemoteVoice__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)System_Predicate<CustomEventCategory>_TypeInfo,
                 *(undefined8 *)System_Predicate<int>_TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebConnectionStream_Seek__,
                 *(undefined8 *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo,*(undefined8 *)puVar1)
    ;
    FUN_0290c838(lVar11,*(undefined8 *)Method_Mono_Security_X509_X509Certificate_Parse__,
                 *(undefined8 *)UnityEngine_Canvas___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebRequest_get_Headers__,
                 *(undefined8 *)GrabbableObject___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_WeaponSpawnerTrigger_TeamChangeColors__,
                 *(undefined8 *)System_Security_Cryptography_KeySizes___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebHeaderCollection_GetAsString__,
                 *(undefined8 *)Oculus_Platform_Request<LeaderboardList>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier__
                 ,*(undefined8 *)
                   UnityEngine_UIElements_UxmlEnumAttributeDescription<CollectionVirtualizationMethod>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_POpusCodec_Wrapper_get_opus_decoder_ctl__,
                 *(undefined8 *)
                  System_Collections_Generic_Stack<BindingRestrictions_TestBuilder_AndNode>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_WindowsConsoleDriver_ReadKey__,
                 *(undefined8 *)ExitGames_Client_Photon_StructWrapping_StructWrapper<bool>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebRequestModulesSection_get_WebRequestModules__
                 ,*(undefined8 *)VoxelBusters_EssentialKit_IAchievement___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_UnityEngine_Rendering_VolumeStack_GetComponent<ColorCurves>__,
                 *(undefined8 *)System_WeakReference<RegexReplacement>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XDocument_AddAttributeSkipNotify__,
                 *(undefined8 *)System_Reflection_CustomAttributeData___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XDocumentType_WriteTo__,
                 *(undefined8 *)System_ComponentModel_IComponent___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WindowsAuthenticationElement_set_DefaultCredentialsHandleCacheSize__
                 ,*(undefined8 *)Oculus_Platform_Request<AchievementProgressList>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebRequestModuleElementCollection_Add__,
                 *(undefined8 *)System_Collections_Generic_Stack<int>_TypeInfo,*(undefined8 *)puVar1
                );
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_UnityEngine_Rendering_VolumeComponentMenuForRenderPipeline__ctor__,
                 *(undefined8 *)System_Collections_Generic_List<RectTransform>___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_WebHeaderCollection_ThrowOnRestrictedHeader__,
                 *(undefined8 *)System_Threading_Tasks_TaskCompletionSource<int>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Threading_WaitHandle_WaitMultiple__,
                 *(undefined8 *)
                  UnityEngine_Experimental_Rendering_RenderGraphModule_RenderFunc<ScriptableRenderer_VFXProcessCameraPassData>_TypeInfo
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509KeyUsageExtension_CopyFrom__
                 ,*(undefined8 *)
                   UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_UnityEngine_Rendering_VolumeStack_GetComponent<Vignette>__,
                 *(undefined8 *)
                  System_Collections_ObjectModel_ReadOnlyCollection<ExceptionDispatchInfo>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_UnityEngine_Rendering_VolumeStack_GetComponent<ShadowsMidtonesHighlights>__
                 ,*(undefined8 *)System_Collections_Generic_Stack<JSONNode>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         UnityEngine_Events_UnityAction<InteractableStateArgs>_TypeInfo,
                 *(undefined8 *)System_Threading_CancellationToken___TypeInfo,*(undefined8 *)puVar1)
    ;
    FUN_0290c838(lVar11,*(undefined8 *)Method_UnityEngine_ProBuilder_WingedEdge_GetSpokes__,
                 *(undefined8 *)UnityEngine_Color___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Threading_WaitHandle_WaitAny__,
                 *(undefined8 *)UnityEngine_Splines_DistanceToInterpolation___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_WeaponHotbar_SignInComplete__,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtension__ctor__
                 ,*(undefined8 *)Method_System_ComponentModel_Win32Exception_GetObjectData__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509Helper2_ThrowIfContextInvalid__
                 ,*(undefined8 *)
                   Method_System_Security_Cryptography_X509Certificates_X509Certificate2ImplMono_Verify__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebReadStream_Seek__,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension__ctor__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Oculus_Platform_Request<AssetDetails>_TypeInfo,
                 *(undefined8 *)System_Numerics_BigInteger___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XAttribute__ctor__,
                 *(undefined8 *)Method_System_Threading_WaitHandle_WaitOne__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)VoxelBusters_EssentialKit_IAchievementDescription___TypeInfo,
                 *(undefined8 *)PTR_DAT_04237888,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_VoxelBusters_EssentialKit_Demo_WebViewDemo_OnWebViewLoadFinish__,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_X509Certificates_X509Certificate2ImplMono_set_PrivateKey__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         UnityEngine_UIElements_Experimental_ValueAnimation<StyleValues>_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_UIElements_UxmlEnumAttributeDescription<Columns_StretchMode>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<VisualTreeHierarchyFlagsUpdater>__
                 ,*(undefined8 *)
                   Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<UIRRepaintUpdater>__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Febucci_UI_Core_Character___TypeInfo,
                 *(undefined8 *)System_Collections_Generic_List<RaycastResult>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_Photon_Voice_VoiceClient_CreateLocalVoiceAudio<short>__,
                 *(undefined8 *)Method_UnityEngine_UIElements_BaseField<int>_get_labelElement__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_UnityEngine_ProBuilder_WingedEdge_GetWingedEdges__,
                 *(undefined8 *)Method_Mono_Security_X509_X509Extension__ctor__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         UnityEngine_Experimental_Rendering_RenderGraphModule_RenderFunc<DrawObjectsPass_PassData>_TypeInfo
                 ,*(undefined8 *)UnityEngine_UIElements_TextInputBaseField<Hash128>_TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XElement_AddAttributeSkipNotify__,
                 *(undefined8 *)Method_System_Net_WebResponse_get_Headers__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_POpusCodec_Wrapper_opus_decode__,
                 *(undefined8 *)Method_System_Xml_Linq_XContainer_GetStringValue__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebRequest_Create__,
                 *(undefined8 *)Method_System_WeakReference__ctor__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)System_DateTimeOffset___TypeInfo,
                 *(undefined8 *)System_Globalization_CalendarData___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension__ctor__
                 ,*(undefined8 *)Method_Wisp_EndGameRevive__,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509Chain__ctor__,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_OnProcessMatchResult__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Oculus_Platform_Request<MatchmakingStats>_TypeInfo,
                 *(undefined8 *)UnityEngine_TextCore_Glyph___TypeInfo,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Security_Cryptography_X509Certificates_X509Certificate2ImplMono_get_PrivateKey__
                 ,*(undefined8 *)Method_Photon_Voice_Unity_VoiceConnection_OnRemoteVoiceInfo__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         System_Collections_Generic_KeyValuePair<byte[],_Encoding>___TypeInfo,
                 *(undefined8 *)UnityEngine_UIElements_IEventHandler___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Net_Configuration_WebRequestModuleElementCollection_get_Item__
                 ,*(undefined8 *)Method_Mono_Security_X509_X509Certificate_VerifySignature__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_VoxelBusters_EssentialKit_WebViewCore_Android_WebView_<_ctor>b__1_0__
                 ,*(undefined8 *)
                   Method_System_Security_Cryptography_X509Certificates_X509Helper_ThrowIfContextInvalid__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)ExitGames_Client_Photon_EnetChannel___TypeInfo,
                 *(undefined8 *)UnityEngine_TextCore_Text_TextProcessingStack<int>___TypeInfo,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)
                         Method_System_Xml_Linq_XElement_System_Xml_Serialization_IXmlSerializable_ReadXml__
                 ,*(undefined8 *)Method_System_Xml_Linq_XAttribute_ValidateAttribute__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_Mono_Security_X509_X509Stores_Open__,
                 *(undefined8 *)
                  Method_System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_InitSerialize__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Xml_Linq_XComment__ctor__,
                 *(undefined8 *)Method_System_Net_WebConnectionStream_EndRead__,
                 *(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_Mono_Security_X509_X509Store_Load__,
                 *(undefined8 *)Method_System_Xml_Linq_XContainer_RemoveNode__,*(undefined8 *)puVar1
                );
    FUN_0290c838(lVar11,*(undefined8 *)Method_Oculus_Platform_WindowsPlatform_AsyncInitialize__,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_X509Certificates_X509Certificate2_GetCertContentType__
                 ,*(undefined8 *)puVar1);
    FUN_0290c838(lVar11,*(undefined8 *)Method_System_Net_WebConnectionStream_SetLength__,
                 *(undefined8 *)Method_Mono_Security_X509_X509CertificateCollection_IndexOf__,
                 *(undefined8 *)puVar1);
    return lVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


