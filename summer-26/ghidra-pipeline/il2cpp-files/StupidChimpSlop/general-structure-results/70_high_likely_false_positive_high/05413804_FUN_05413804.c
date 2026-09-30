/*
FUNCTION_NAME: FUN_05413804
ENTRY_POINT: 05413804
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_8;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_21;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05413804(void)

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
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar4 = PurchaseService_TypeInfo;
  puVar3 = Oculus_Platform_Models_PurchaseList_TypeInfo;
  puVar1 = UnityEngine_InputSystem_ProximitySensor_TypeInfo;
  puVar2 = PTR_DAT_066526b0;
  if ((DAT_06a5363b & 1) == 0) {
    FUN_02d4dc40(Oculus_Platform_Models_PushNotificationResult_TypeInfo);
    FUN_02d4dc40(PurchaseService_TypeInfo);
    FUN_02d4dc40(Oculus_Platform_Models_PurchaseList_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06652b38);
    FUN_02d4dc40(System_Xml_Schema_QNameFacetsChecker_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06648670);
    FUN_02d4dc40(PTR_DAT_06648668);
    FUN_02d4dc40(System_Xml_Schema_QmarkNode_TypeInfo);
    FUN_02d4dc40(UnityEngine_QualitySettings_TypeInfo);
    FUN_02d4dc40(UnityEngine_InputSystem_ProximitySensor_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066526b0);
    FUN_02d4dc40(UnityEngine_Quaternion_TypeInfo);
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_Primitives_QuaternionTweenableVariable_TypeInfo
                );
    FUN_02d4dc40(Newtonsoft_Json_Linq_JsonPath_QueryFilter_TypeInfo);
    FUN_02d4dc40(System_Xml_QueryOutputWriter_TypeInfo);
    FUN_02d4dc40(Newtonsoft_Json_Linq_JsonPath_QueryScanFilter_TypeInfo);
    FUN_02d4dc40(UnityEngine_QueryTriggerInteraction_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f370);
    FUN_02d4dc40(System_Collections_Queue_TypeInfo);
    FUN_02d4dc40(System_Threading_QueueUserWorkItemCallback_TypeInfo);
    FUN_02d4dc40(System_Linq_Expressions_Interpreter_QuoteInstruction_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f378);
    FUN_02d4dc40(PTR_DAT_066520b0);
    FUN_02d4dc40(PTR_DAT_0664f8c8);
    FUN_02d4dc40(System_Security_Cryptography_RC2_TypeInfo);
    FUN_02d4dc40(System_Security_Cryptography_RC2CryptoServiceProvider_TypeInfo);
    FUN_02d4dc40(System_Security_Cryptography_RC2Transform_TypeInfo);
    FUN_02d4dc40(Mono_Security_Cryptography_RC4_TypeInfo);
    FUN_02d4dc40(System_Security_Cryptography_RIPEMD160_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f4b8);
    FUN_02d4dc40(PTR_DAT_0664f8b8);
    FUN_02d4dc40(System_Security_Cryptography_RIPEMD160Managed_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06652678);
    FUN_02d4dc40(System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f878);
    FUN_02d4dc40(System_Security_Cryptography_RSA_TypeInfo);
    FUN_02d4dc40(System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo);
    FUN_02d4dc40(System_Security_Cryptography_RSAEncryptionPadding_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066523b0);
    FUN_02d4dc40(PTR_DAT_0664f870);
    FUN_02d4dc40(System_Security_Cryptography_RSAEncryptionPaddingMode_TypeInfo);
    FUN_02d4dc40(Mono_Security_Cryptography_RSAManaged_TypeInfo);
    FUN_02d4dc40(Mono_Security_Cryptography_RSAManaged_TypeInfo);
    FUN_02d4dc40(System_Security_Cryptography_RSAOAEPKeyExchangeDeformatter_TypeInfo);
    FUN_02d4dc40(System_Security_Cryptography_RSAOAEPKeyExchangeFormatter_TypeInfo);
    FUN_02d4dc40(System_Security_Cryptography_RSAPKCS1KeyExchangeDeformatter_TypeInfo);
    FUN_02d4dc40(System_Security_Cryptography_RSAPKCS1KeyExchangeFormatter_TypeInfo);
    FUN_02d4dc40(System_Security_Cryptography_RSAPKCS1SHA1SignatureDescription_TypeInfo);
    FUN_02d4dc40(System_Security_Cryptography_RSAPKCS1SHA256SignatureDescription_TypeInfo);
    FUN_02d4dc40(System_Security_Cryptography_RSAPKCS1SHA384SignatureDescription_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f188);
    FUN_02d4dc40(PTR_DAT_0664f8d0);
    FUN_02d4dc40(System_Security_Cryptography_RSAPKCS1SHA512SignatureDescription_TypeInfo);
    FUN_02d4dc40(System_Security_Cryptography_RSAPKCS1SignatureDeformatter_TypeInfo);
    FUN_02d4dc40(System_Security_Cryptography_RSAPKCS1SignatureFormatter_TypeInfo);
    FUN_02d4dc40(System_Security_Cryptography_RSASignaturePadding_TypeInfo);
    FUN_02d4dc40(System_Security_Cryptography_RSASignaturePaddingMode_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_RTHandle_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_Universal_RTHandleResourcePool_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_RTHandleStaticHelpers_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_RTHandleSystem_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_RTHandles_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_RadioButton_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_RadioButtonGroup_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664d610);
    FUN_02d4dc40(PTR_DAT_0664f380);
    FUN_02d4dc40(Photon_Realtime_RaiseEventOptions_TypeInfo);
    FUN_02d4dc40(System_Random_TypeInfo);
    FUN_02d4dc40(System_Security_Cryptography_RandomNumberGenerator_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664ef60);
    FUN_02d4dc40(Cysharp_Threading_Tasks_Linq_Range_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f8b0);
    FUN_02d4dc40(PTR_DAT_0664f890);
    FUN_02d4dc40(System_Net_Http_Headers_RangeConditionHeaderValue_TypeInfo);
    FUN_02d4dc40(System_Xml_Schema_RangeContentValidator_TypeInfo);
    FUN_02d4dc40(System_Net_Http_Headers_RangeHeaderValue_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664ef68);
    FUN_02d4dc40(System_Net_Http_Headers_RangeItemHeaderValue_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f898);
    FUN_02d4dc40(System_RankException_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f388);
    FUN_02d4dc40(PTR_DAT_0664f4c0);
    FUN_02d4dc40(UnityEngine_UIElements_RareData_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_RasterCommandBuffer_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06651f30);
    FUN_02d4dc40(UnityEngine_Rendering_RenderGraphModule_RasterGraphContext_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_RasterState_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06651ad8);
    FUN_02d4dc40(UnityEngine_Rendering_Universal_RawColorHistory_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_Universal_RawDepthHistory_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f390);
    FUN_02d4dc40(UnityEngine_Ray_TypeInfo);
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_RayTracingAccelerationStructureHandle_TypeInfo
                );
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_RayTracingAccelerationStructureResource_TypeInfo
                );
    FUN_02d4dc40(UnityEngine_RaycastHit_TypeInfo);
    FUN_02d4dc40(UnityEngine_EventSystems_RaycasterManager_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f170);
    FUN_02d4dc40(System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066520b8);
    FUN_02d4dc40(System_ComponentModel_ReadOnlyAttribute_TypeInfo);
    FUN_02d4dc40(System_Data_ReadOnlyException_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f4c8);
    FUN_02d4dc40(UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_TypeInfo);
    FUN_02d4dc40(System_Collections_Specialized_ReadOnlyList_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f398);
    FUN_02d4dc40(System_Xml_ReaderPositionInfo_TypeInfo);
    FUN_02d4dc40(System_Threading_ReaderWriterCount_TypeInfo);
    FUN_02d4dc40(System_Threading_ReaderWriterLock_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06652690);
    FUN_02d4dc40(PTR_DAT_0664f3a0);
    FUN_02d4dc40(PTR_DAT_0664f4d0);
    FUN_02d4dc40(System_Threading_ReaderWriterLockSlim_TypeInfo);
    FUN_02d4dc40(Cysharp_Threading_Tasks_RealtimePlayerLoopTimer_TypeInfo);
    FUN_02d4dc40(System_Net_ReceiveState_TypeInfo);
    FUN_02d4dc40(System_ComponentModel_RecommendedAsConfigurableAttribute_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f3b0);
    FUN_02d4dc40(System_Data_RecordManager_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066467b0);
    FUN_02d4dc40(UnityEngine_Profiling_Recorder_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rect_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_RectField_TypeInfo);
    FUN_02d4dc40(UnityEngine_RectInt_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_RectIntField_TypeInfo);
    FUN_02d4dc40(Unity_Properties_Internal_RectIntPropertyBag_TypeInfo);
    FUN_02d4dc40(UnityEngine_UI_RectMask2D_TypeInfo);
    FUN_02d4dc40(UnityEngine_RectOffset_TypeInfo);
    FUN_02d4dc40(Unity_Properties_Internal_RectPropertyBag_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06652508);
    FUN_02d4dc40(UnityEngine_RectTransform_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f4d8);
    FUN_02d4dc40(UnityEngine_RectTransformUtility_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f4e0);
    FUN_02d4dc40(System_Drawing_Rectangle_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f4e8);
    FUN_02d4dc40(System_Drawing_RectangleF_TypeInfo);
    FUN_02d4dc40(UnityEngine_UI_RectangularVertexClipper_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06652530);
    FUN_02d4dc40(PlayFab_EconomyModels_RedeemAppleAppStoreInventoryItemsRequest_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f860);
    FUN_02d4dc40(PlayFab_EconomyModels_RedeemAppleAppStoreInventoryItemsResponse_TypeInfo);
    FUN_02d4dc40(PlayFab_EconomyModels_RedeemAppleAppStoreWithJwsInventoryItemsRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_EconomyModels_RedeemAppleAppStoreWithJwsInventoryItemsResponse_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_RedeemCouponRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_RedeemCouponResult_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f888);
    FUN_02d4dc40(PTR_DAT_0664f3b8);
    FUN_02d4dc40(PlayFab_EconomyModels_RedeemGooglePlayInventoryItemsRequest_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06652698);
    FUN_02d4dc40(PlayFab_EconomyModels_RedeemGooglePlayInventoryItemsResponse_TypeInfo);
    FUN_02d4dc40(PlayFab_EconomyModels_RedeemMicrosoftStoreInventoryItemsRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_EconomyModels_RedeemMicrosoftStoreInventoryItemsResponse_TypeInfo);
    FUN_02d4dc40(PlayFab_EconomyModels_RedeemNintendoEShopInventoryItemsRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_EconomyModels_RedeemNintendoEShopInventoryItemsResponse_TypeInfo);
    FUN_02d4dc40(PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f550);
    FUN_02d4dc40(PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsResponse_TypeInfo);
    FUN_02d4dc40(PlayFab_EconomyModels_RedeemSteamInventoryItemsRequest_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f4f0);
    FUN_02d4dc40(PlayFab_EconomyModels_RedeemSteamInventoryItemsResponse_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f8a8);
    FUN_02d4dc40(System_Xml_Schema_RedefineEntry_TypeInfo);
    FUN_02d4dc40(System_ComponentModel_ReferenceConverter_TypeInfo);
    FUN_02d4dc40(System_ComponentModel_ReflectEventDescriptor_TypeInfo);
    FUN_02d4dc40(System_ComponentModel_ReflectPropertyDescriptor_TypeInfo);
    FUN_02d4dc40(System_ComponentModel_ReflectTypeDescriptionProvider_TypeInfo);
    FUN_02d4dc40(Unity_Properties_Internal_ReflectedPropertyBagProvider_TypeInfo);
    FUN_02d4dc40(Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f4f8);
    FUN_02d4dc40(Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_TypeInfo);
    FUN_02d4dc40(System_Xml_Serialization_ReflectionHelper_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664ef38);
    FUN_02d4dc40(Newtonsoft_Json_Utilities_ReflectionMember_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f3d0);
    FUN_02d4dc40(PTR_DAT_0664f190);
    FUN_02d4dc40(UnityEngine_UI_ReflectionMethodsCache_TypeInfo);
    FUN_02d4dc40(Newtonsoft_Json_Utilities_ReflectionObject_TypeInfo);
    FUN_02d4dc40(System_ReflectionOnlyType_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f500);
    FUN_02d4dc40(UnityEngine_ReflectionProbe_TypeInfo);
    FUN_02d4dc40(System_Reflection_ReflectionTypeLoadException_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f3d8);
    FUN_02d4dc40(Newtonsoft_Json_Utilities_ReflectionUtils_TypeInfo);
    FUN_02d4dc40(PlayFab_Json_ReflectionUtils_TypeInfo);
    FUN_02d4dc40(Unity_XR_CoreUtils_ReflectionUtils_TypeInfo);
    FUN_02d4dc40(Newtonsoft_Json_Serialization_ReflectionValueProvider_TypeInfo);
    FUN_02d4dc40(System_ComponentModel_RefreshEventArgs_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f508);
    FUN_02d4dc40(System_ComponentModel_RefreshEventHandler_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_RefreshPSNAuthTokenRequest_TypeInfo);
    FUN_02d4dc40(System_ComponentModel_RefreshPropertiesAttribute_TypeInfo);
    FUN_02d4dc40(UnityEngine_RefreshRate_TypeInfo);
    FUN_02d4dc40(System_Text_RegularExpressions_Regex_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f510);
    FUN_02d4dc40(System_Text_RegularExpressions_RegexBoyerMoore_TypeInfo);
    FUN_02d4dc40(System_Text_RegularExpressions_RegexCharClass_TypeInfo);
    FUN_02d4dc40(System_Text_RegularExpressions_RegexCode_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f518);
    FUN_02d4dc40(Newtonsoft_Json_Converters_RegexConverter_TypeInfo);
    FUN_02d4dc40(System_Text_RegularExpressions_RegexFC_TypeInfo);
    FUN_02d4dc40(System_Text_RegularExpressions_RegexInterpreter_TypeInfo);
    FUN_02d4dc40(System_Text_RegularExpressions_RegexMatchTimeoutException_TypeInfo);
    FUN_02d4dc40(System_Text_RegularExpressions_RegexNode_TypeInfo);
    FUN_02d4dc40(System_Text_RegularExpressions_RegexOptions_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066520c0);
    FUN_02d4dc40(PTR_DAT_066526a0);
    FUN_02d4dc40(System_Text_RegularExpressions_RegexParser_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f880);
    FUN_02d4dc40(System_Text_RegularExpressions_RegexPrefix_TypeInfo);
    FUN_02d4dc40(System_Text_RegularExpressions_RegexReplacement_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f520);
    FUN_02d4dc40(System_Text_RegularExpressions_RegexTree_TypeInfo);
    FUN_02d4dc40(Photon_Realtime_Region_TypeInfo);
    FUN_02d4dc40(Photon_Realtime_RegionHandler_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f668);
    FUN_02d4dc40(System_Globalization_RegionInfo_TypeInfo);
    FUN_02d4dc40(Photon_Realtime_RegionPinger_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066513e0);
    FUN_02d4dc40(PTR_DAT_06652640);
    FUN_02d4dc40(PlayFab_CloudScriptModels_RegisterEventHubFunctionRequest_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f868);
    FUN_02d4dc40(PlayFab_ClientModels_RegisterForIOSPushNotificationRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_RegisterForIOSPushNotificationResult_TypeInfo);
    FUN_02d4dc40(PlayFab_CloudScriptModels_RegisterHttpFunctionRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_RegisterPlayFabUserRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_RegisterPlayFabUserResult_TypeInfo);
    FUN_02d4dc40(PlayFab_CloudScriptModels_RegisterQueuedFunctionRequest_TypeInfo);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_UI_RegisteredUIInteractorCache_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664f8c0);
    DAT_06a5363b = 1;
  }
  uVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
  FUN_046d1980(uVar11,*(undefined8 *)puVar4);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar11;
  thunk_FUN_02dc1ef0(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if (DAT_06a4e589 == '\0') {
    FUN_02d4dc40(PTR_DAT_066526b0);
    DAT_06a4e589 = '\x01';
  }
  puVar4 = Oculus_Platform_Models_PushNotificationResult_TypeInfo;
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar12 = *(long *)puVar2;
  }
  uVar15 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18);
  uVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary<int,_RenderInstancedDataLayout>__get_Count
            (uVar11,uVar15,*(undefined8 *)puVar4);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar13 = uVar11;
  thunk_FUN_02dc1ef0(puVar13,uVar11);
  if (DAT_06a4e589 == '\0') {
    FUN_02d4dc40(PTR_DAT_066526b0);
    DAT_06a4e589 = '\x01';
  }
  puVar3 = System_Xml_Schema_QNameFacetsChecker_TypeInfo;
  puVar1 = PTR_DAT_06648668;
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar12 = *(long *)puVar2;
  }
  uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18);
  lVar12 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
  FUN_0483b4d4(lVar12,uVar11,*(undefined8 *)puVar3);
  puVar10 = PlayFab_CloudScriptModels_RegisterQueuedFunctionRequest_TypeInfo;
  puVar9 = System_Globalization_RegionInfo_TypeInfo;
  puVar8 = System_Text_RegularExpressions_RegexInterpreter_TypeInfo;
  puVar7 = System_Text_RegularExpressions_RegexFC_TypeInfo;
  puVar6 = PlayFab_EconomyModels_RedeemGooglePlayInventoryItemsResponse_TypeInfo;
  puVar5 = System_Drawing_Rectangle_TypeInfo;
  puVar4 = UnityEngine_Rendering_RTHandleSystem_TypeInfo;
  puVar3 = System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo;
  puVar1 = Newtonsoft_Json_Linq_JsonPath_QueryFilter_TypeInfo;
  puVar2 = PTR_DAT_06652b38;
  if (lVar12 != 0) {
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_06652530,*(undefined8 *)PTR_DAT_06652678,
                 *(undefined8 *)PTR_DAT_06652b38);
    FUN_0483c224(lVar12,*(undefined8 *)puVar6,*(undefined8 *)puVar4,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)puVar8,*(undefined8 *)puVar7,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)puVar5,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)puVar9,*(undefined8 *)puVar10,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         PlayFab_ClientModels_RegisterForIOSPushNotificationRequest_TypeInfo,
                 *(undefined8 *)UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Text_RegularExpressions_RegexParser_TypeInfo,
                 *(undefined8 *)UnityEngine_EventSystems_RaycasterManager_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_TypeInfo,
                 *(undefined8 *)System_Data_ReadOnlyException_TypeInfo,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)UnityEngine_QueryTriggerInteraction_TypeInfo,
                 *(undefined8 *)UnityEngine_UI_ReflectionMethodsCache_TypeInfo,*(undefined8 *)puVar2
                );
    FUN_0483c224(lVar12,*(undefined8 *)
                         PlayFab_CloudScriptModels_RegisterEventHubFunctionRequest_TypeInfo,
                 *(undefined8 *)System_Net_Http_Headers_RangeConditionHeaderValue_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         UnityEngine_Rendering_RenderGraphModule_RasterGraphContext_TypeInfo,
                 *(undefined8 *)System_ComponentModel_ReadOnlyAttribute_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         PlayFab_ClientModels_RegisterForIOSPushNotificationResult_TypeInfo,
                 *(undefined8 *)UnityEngine_UIElements_RadioButtonGroup_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         PlayFab_EconomyModels_RedeemAppleAppStoreWithJwsInventoryItemsRequest_TypeInfo
                 ,*(undefined8 *)Newtonsoft_Json_Utilities_ReflectionUtils_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_ComponentModel_ReflectTypeDescriptionProvider_TypeInfo
                 ,*(undefined8 *)Newtonsoft_Json_Converters_RegexConverter_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Collections_Specialized_ReadOnlyList_TypeInfo,
                 *(undefined8 *)UnityEngine_Rendering_Universal_RawDepthHistory_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         PlayFab_CloudScriptModels_RegisterHttpFunctionRequest_TypeInfo,
                 *(undefined8 *)System_Net_Http_Headers_RangeHeaderValue_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         Newtonsoft_Json_Serialization_ReflectionValueProvider_TypeInfo,
                 *(undefined8 *)PlayFab_ClientModels_RegisterPlayFabUserRequest_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)Unity_XR_CoreUtils_ReflectionUtils_TypeInfo,
                 *(undefined8 *)PlayFab_EconomyModels_RedeemSteamInventoryItemsRequest_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)UnityEngine_Profiling_Recorder_TypeInfo,
                 *(undefined8 *)System_Security_Cryptography_RC2_TypeInfo,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         System_Security_Cryptography_RSAPKCS1SHA256SignatureDescription_TypeInfo,
                 *(undefined8 *)System_Threading_QueueUserWorkItemCallback_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Xml_QueryOutputWriter_TypeInfo,
                 *(undefined8 *)Photon_Realtime_Region_TypeInfo,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f3d8,*(undefined8 *)PTR_DAT_0664f8b0,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)UnityEngine_Ray_TypeInfo,*(undefined8 *)PTR_DAT_06652690,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         System_Security_Cryptography_RSAPKCS1SHA1SignatureDescription_TypeInfo,
                 *(undefined8 *)System_Reflection_ReflectionTypeLoadException_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f370,*(undefined8 *)PTR_DAT_0664f860,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Text_RegularExpressions_RegexBoyerMoore_TypeInfo,
                 *(undefined8 *)System_Security_Cryptography_RSASignaturePadding_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f3a0,*(undefined8 *)PTR_DAT_0664f898,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_066523b0,*(undefined8 *)PTR_DAT_066526a0,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_066513e0,
                 *(undefined8 *)Unity_Properties_Internal_RectPropertyBag_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)UnityEngine_Rendering_Universal_RawColorHistory_TypeInfo,
                 *(undefined8 *)Newtonsoft_Json_Linq_JsonPath_QueryScanFilter_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Security_Cryptography_RIPEMD160_TypeInfo,
                 *(undefined8 *)PTR_DAT_0664f8b8,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_06651ad8,*(undefined8 *)PTR_DAT_0664f170,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PlayFab_ClientModels_RedeemCouponResult_TypeInfo,
                 *(undefined8 *)System_Security_Cryptography_RC2CryptoServiceProvider_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f388,*(undefined8 *)PTR_DAT_0664f890,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)UnityEngine_ReflectionProbe_TypeInfo,
                 *(undefined8 *)Photon_Realtime_RegionPinger_TypeInfo,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)Cysharp_Threading_Tasks_Linq_Range_TypeInfo,
                 *(undefined8 *)PTR_DAT_0664f190,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         System_Security_Cryptography_RSAPKCS1SHA384SignatureDescription_TypeInfo,
                 *(undefined8 *)System_Net_Http_Headers_RangeItemHeaderValue_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)Mono_Security_Cryptography_RSAManaged_TypeInfo,
                 *(undefined8 *)
                  PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsRequest_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PlayFab_ClientModels_RefreshPSNAuthTokenRequest_TypeInfo,
                 *(undefined8 *)
                  PlayFab_EconomyModels_RedeemMicrosoftStoreInventoryItemsRequest_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)Photon_Realtime_RegionHandler_TypeInfo,
                 *(undefined8 *)UnityEngine_Rendering_RTHandle_TypeInfo,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         PlayFab_EconomyModels_RedeemAppleAppStoreWithJwsInventoryItemsResponse_TypeInfo
                 ,*(undefined8 *)Cysharp_Threading_Tasks_RealtimePlayerLoopTimer_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Text_RegularExpressions_RegexNode_TypeInfo,
                 *(undefined8 *)UnityEngine_Rendering_RTHandleStaticHelpers_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_ComponentModel_RefreshEventArgs_TypeInfo,
                 *(undefined8 *)System_ComponentModel_RefreshEventHandler_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664d610,*(undefined8 *)PTR_DAT_0664f8c8,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f398,*(undefined8 *)PTR_DAT_0664f8d0,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_066467b0,*(undefined8 *)PTR_DAT_0664f870,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f4d0,*(undefined8 *)PTR_DAT_0664ef68,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)Unity_Properties_Internal_RectIntPropertyBag_TypeInfo,
                 *(undefined8 *)PTR_DAT_0664f4f0,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f500,
                 *(undefined8 *)
                  PlayFab_EconomyModels_RedeemNintendoEShopInventoryItemsResponse_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Net_ReceiveState_TypeInfo,
                 *(undefined8 *)PTR_DAT_0664f520,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f4e0,*(undefined8 *)PTR_DAT_0664ef60,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)UnityEngine_RectTransform_TypeInfo,
                 *(undefined8 *)PTR_DAT_0664f510,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         PlayFab_EconomyModels_RedeemAppleAppStoreInventoryItemsRequest_TypeInfo,
                 *(undefined8 *)System_Security_Cryptography_RSAOAEPKeyExchangeDeformatter_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)Mono_Security_Cryptography_RSAManaged_TypeInfo,
                 *(undefined8 *)System_Xml_Schema_RedefineEntry_TypeInfo,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         System_Security_Cryptography_RSAOAEPKeyExchangeFormatter_TypeInfo,
                 *(undefined8 *)System_Threading_ReaderWriterLockSlim_TypeInfo,*(undefined8 *)puVar2
                );
    FUN_0483c224(lVar12,*(undefined8 *)
                         System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo,
                 *(undefined8 *)UnityEngine_UIElements_RadioButton_TypeInfo,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Xml_Schema_RangeContentValidator_TypeInfo,
                 *(undefined8 *)System_RankException_TypeInfo,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)Newtonsoft_Json_Utilities_ReflectionObject_TypeInfo,
                 *(undefined8 *)System_Text_RegularExpressions_RegexMatchTimeoutException_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f3b8,*(undefined8 *)PTR_DAT_0664f880,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f3d0,*(undefined8 *)PTR_DAT_0664f888,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Drawing_RectangleF_TypeInfo,
                 *(undefined8 *)System_ComponentModel_RecommendedAsConfigurableAttribute_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         PlayFab_EconomyModels_RedeemNintendoEShopInventoryItemsRequest_TypeInfo,
                 *(undefined8 *)System_Security_Cryptography_RC2Transform_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)UnityEngine_Rendering_Universal_RTHandleResourcePool_TypeInfo
                 ,*(undefined8 *)System_Security_Cryptography_RSASignaturePaddingMode_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_06652640,*(undefined8 *)PTR_DAT_06652698,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_ReflectionOnlyType_TypeInfo,
                 *(undefined8 *)System_Security_Cryptography_RSAEncryptionPadding_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_06651f30,*(undefined8 *)PTR_DAT_0664f188,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Data_RecordManager_TypeInfo,
                 *(undefined8 *)System_Collections_Queue_TypeInfo,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Xml_ReaderPositionInfo_TypeInfo,
                 *(undefined8 *)PlayFab_ClientModels_RegisterPlayFabUserResult_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f378,*(undefined8 *)PTR_DAT_0664f878,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Text_RegularExpressions_RegexOptions_TypeInfo,
                 *(undefined8 *)
                  PlayFab_EconomyModels_RedeemAppleAppStoreInventoryItemsResponse_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         System_Security_Cryptography_RSAPKCS1SignatureFormatter_TypeInfo,
                 *(undefined8 *)Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Security_Cryptography_RSA_TypeInfo,
                 *(undefined8 *)System_ComponentModel_RefreshPropertiesAttribute_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo_TypeInfo,
                 *(undefined8 *)System_ComponentModel_ReflectPropertyDescriptor_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)UnityEngine_RectTransformUtility_TypeInfo,
                 *(undefined8 *)PlayFab_ClientModels_RedeemCouponRequest_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Text_RegularExpressions_RegexTree_TypeInfo,
                 *(undefined8 *)Mono_Security_Cryptography_RC4_TypeInfo,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f390,*(undefined8 *)PTR_DAT_0664f868,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f4c0,*(undefined8 *)PTR_DAT_0664ef38,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_ComponentModel_ReferenceConverter_TypeInfo,
                 *(undefined8 *)PTR_DAT_0664f550,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         UnityEngine_Rendering_RenderGraphModule_RayTracingAccelerationStructureHandle_TypeInfo
                 ,*(undefined8 *)System_Security_Cryptography_RSAEncryptionPaddingMode_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)UnityEngine_RaycastHit_TypeInfo,
                 *(undefined8 *)PTR_DAT_0664f4b8,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f4d8,*(undefined8 *)PTR_DAT_066520b0,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)UnityEngine_UI_RectMask2D_TypeInfo,
                 *(undefined8 *)UnityEngine_UIElements_RareData_TypeInfo,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         System_Security_Cryptography_RSAPKCS1KeyExchangeFormatter_TypeInfo,
                 *(undefined8 *)PTR_DAT_0664f4c8,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f508,*(undefined8 *)PTR_DAT_066520c0,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)UnityEngine_Rendering_RasterState_TypeInfo,
                 *(undefined8 *)UnityEngine_Rendering_RTHandles_TypeInfo,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)UnityEngine_UIElements_RectIntField_TypeInfo,
                 *(undefined8 *)PTR_DAT_0664f4e8,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f518,*(undefined8 *)PTR_DAT_066520b8,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Text_RegularExpressions_RegexPrefix_TypeInfo,
                 *(undefined8 *)System_Threading_ReaderWriterLock_TypeInfo,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Random_TypeInfo,*(undefined8 *)PTR_DAT_0664f4f8,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f380,*(undefined8 *)PTR_DAT_0664f8c0,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_ComponentModel_ReflectEventDescriptor_TypeInfo,
                 *(undefined8 *)Newtonsoft_Json_Utilities_ReflectionMember_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_UI_RegisteredUIInteractorCache_TypeInfo,
                 *(undefined8 *)System_Text_RegularExpressions_RegexCharClass_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f3b0,*(undefined8 *)PTR_DAT_0664f8a8,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Threading_ReaderWriterCount_TypeInfo,
                 *(undefined8 *)
                  System_Security_Cryptography_RSAPKCS1SHA512SignatureDescription_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         System_Security_Cryptography_RSAPKCS1KeyExchangeDeformatter_TypeInfo,
                 *(undefined8 *)
                  UnityEngine_Rendering_RenderGraphModule_RayTracingAccelerationStructureResource_TypeInfo
                 ,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)UnityEngine_Rendering_RasterCommandBuffer_TypeInfo,
                 *(undefined8 *)System_Text_RegularExpressions_RegexCode_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)UnityEngine_UIElements_RectField_TypeInfo,
                 *(undefined8 *)System_Security_Cryptography_RIPEMD160Managed_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Xml_Serialization_ReflectionHelper_TypeInfo,
                 *(undefined8 *)UnityEngine_UI_RectangularVertexClipper_TypeInfo,
                 *(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)System_Security_Cryptography_RandomNumberGenerator_TypeInfo,
                 *(undefined8 *)PlayFab_Json_ReflectionUtils_TypeInfo,*(undefined8 *)puVar2);
    FUN_0483c224(lVar12,*(undefined8 *)
                         System_Security_Cryptography_RSAPKCS1SignatureDeformatter_TypeInfo,
                 *(undefined8 *)Photon_Realtime_RaiseEventOptions_TypeInfo,*(undefined8 *)puVar2);
    puVar3 = UnityEngine_InputSystem_ProximitySensor_TypeInfo;
    plVar14 = (long *)(*(long *)(*(long *)UnityEngine_InputSystem_ProximitySensor_TypeInfo + 0xb8) +
                      0x10);
    *plVar14 = lVar12;
    thunk_FUN_02dc1ef0(plVar14,lVar12);
    lVar12 = *(long *)puVar1;
    uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar12 = *(long *)puVar1;
    }
    puVar4 = UnityEngine_QualitySettings_TypeInfo;
    uVar16 = **(undefined8 **)(lVar12 + 0xb8);
    uVar15 = thunk_FUN_02d8a638(*(undefined8 *)UnityEngine_QualitySettings_TypeInfo);
    FUN_04c471d0(uVar15,uVar16,*(undefined8 *)UnityEngine_Quaternion_TypeInfo,0);
    uVar17 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    uVar16 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
    FUN_04c471d0(uVar16,uVar17,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_Primitives_QuaternionTweenableVariable_TypeInfo
                 ,0);
    uVar11 = FUN_03204868(uVar11,uVar15,uVar16,*(undefined8 *)System_Xml_Schema_QmarkNode_TypeInfo);
    puVar13 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
    *puVar13 = uVar11;
    thunk_FUN_02dc1ef0(puVar13,uVar11);
    lVar12 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06648668);
    FUN_0483b4a8(lVar12,*(undefined8 *)PTR_DAT_06648670);
    puVar10 = System_Text_RegularExpressions_RegexReplacement_TypeInfo;
    puVar9 = System_Text_RegularExpressions_Regex_TypeInfo;
    puVar8 = UnityEngine_RefreshRate_TypeInfo;
    puVar7 = Unity_Properties_Internal_ReflectedPropertyBagProvider_TypeInfo;
    puVar6 = PlayFab_EconomyModels_RedeemSteamInventoryItemsResponse_TypeInfo;
    puVar5 = PlayFab_EconomyModels_RedeemPlayStationStoreInventoryItemsResponse_TypeInfo;
    puVar4 = UnityEngine_RectOffset_TypeInfo;
    puVar3 = UnityEngine_Rect_TypeInfo;
    puVar1 = PTR_DAT_06652508;
    if (lVar12 != 0) {
      FUN_0483c224(lVar12,*(undefined8 *)
                           System_Linq_Expressions_Interpreter_QuoteInstruction_TypeInfo,
                   *(undefined8 *)UnityEngine_Rendering_Universal_RawColorHistory_TypeInfo,
                   *(undefined8 *)puVar2);
      FUN_0483c224(lVar12,*(undefined8 *)puVar10,*(undefined8 *)PTR_DAT_06651ad8,
                   *(undefined8 *)puVar2);
      FUN_0483c224(lVar12,*(undefined8 *)puVar3,
                   *(undefined8 *)System_ComponentModel_ReferenceConverter_TypeInfo,
                   *(undefined8 *)puVar2);
      FUN_0483c224(lVar12,*(undefined8 *)puVar7,*(undefined8 *)puVar4,*(undefined8 *)puVar2);
      FUN_0483c224(lVar12,*(undefined8 *)puVar9,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
      puVar1 = System_Net_ReceiveState_TypeInfo;
      FUN_0483c224(lVar12,*(undefined8 *)puVar8,*(undefined8 *)System_Net_ReceiveState_TypeInfo,
                   *(undefined8 *)puVar2);
      FUN_0483c224(lVar12,*(undefined8 *)puVar5,*(undefined8 *)puVar6,*(undefined8 *)puVar2);
      FUN_0483c224(lVar12,*(undefined8 *)PTR_DAT_0664f668,
                   *(undefined8 *)UnityEngine_RaycastHit_TypeInfo,*(undefined8 *)puVar2);
      FUN_0483c224(lVar12,*(undefined8 *)
                           PlayFab_EconomyModels_RedeemGooglePlayInventoryItemsRequest_TypeInfo,
                   *(undefined8 *)UnityEngine_RectTransform_TypeInfo,*(undefined8 *)puVar2);
      FUN_0483c224(lVar12,*(undefined8 *)
                           PlayFab_EconomyModels_RedeemMicrosoftStoreInventoryItemsResponse_TypeInfo
                   ,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
      FUN_0483c224(lVar12,*(undefined8 *)UnityEngine_RectInt_TypeInfo,
                   *(undefined8 *)Unity_Properties_Internal_RectIntPropertyBag_TypeInfo,
                   *(undefined8 *)puVar2);
      plVar14 = (long *)(*(long *)(*(long *)UnityEngine_InputSystem_ProximitySensor_TypeInfo + 0xb8)
                        + 0x20);
      *plVar14 = lVar12;
      thunk_FUN_02dc1ef0(plVar14,lVar12);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


