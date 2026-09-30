/*
FUNCTION_NAME: System.Data.DataTable$$get_EncodedTableName
ENTRY_POINT: 05320c80
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 163
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_6;strong_file_logging_hits_3;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_21;functionality_possible_biometrics_hits_8
*/


void System_Data_DataTable__get_EncodedTableName(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)Cysharp_Threading_Tasks_CancellationTokenSourceExtensions_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x10e8);
    puVar3 = (undefined8 *)UnityEngine_Canvas_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Data_DataRelationCollection_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x10f8);
    puVar3 = (undefined8 *)System_Data_DataRelationPropertyDescriptor_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_ExperimentationModels_DeleteExperimentRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1108);
    puVar3 = (undefined8 *)PlayFab_AddonModels_DeleteFacebookInstantGamesRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Net_DigestSession_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1118);
    puVar3 = (undefined8 *)UnityEngine_UIElements_StyleSheets_Dimension_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_UIElements_UIR_ExtraRenderData_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1128);
    puVar3 = (undefined8 *)UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Newtonsoft_Json_Serialization_ExtensionDataGetter_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1138);
    puVar3 = (undefined8 *)Newtonsoft_Json_Serialization_ExtensionDataSetter_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_DataModels_FinalizeFileUploadsResponse_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  puVar1 = PlayFab_MultiplayerModels_GetLobbyResult_TypeInfo;
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1148);
    puVar3 = (undefined8 *)UnityEngine_Rendering_FindDrawInstancesJob_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_MultiplayerModels_GetLobbyResult_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1158);
    puVar3 = (undefined8 *)PlayFab_MultiplayerModels_GetMatchRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1168);
    puVar3 = (undefined8 *)PlayFab_MultiplayerModels_GetMatchRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_AsyncInstantiateOperation_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1178);
    puVar3 = (undefined8 *)Cysharp_Threading_Tasks_AsyncLazy_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Mono_Net_Security_AsyncProtocolResult_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1188);
    puVar3 = (undefined8 *)Mono_Net_Security_AsyncReadRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Mono_Math_BigInteger_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1198);
    puVar3 = (undefined8 *)Mono_Math_BigInteger_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Photon_SocketServer_Numeric_BigInteger_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x11a8);
    puVar3 = (undefined8 *)System_Numerics_BigInteger_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)
           UnityEngine_XR_Interaction_Toolkit_Locomotion_CharacterControllerBodyManipulator_TypeInfo
  ;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x11b8);
    puVar3 = (undefined8 *)Photon_Chat_ChatChannel_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_CharEnumerator_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x11c8);
    puVar3 = (undefined8 *)System_Runtime_InteropServices_CharSet_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_ComponentModel_Design_CheckoutException_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x11d8);
    puVar3 = (undefined8 *)System_Data_ChildForeignKeyConstraintEnumerator_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_RenderGraphModule_ComputeGraphContext_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x11e8);
    puVar3 = (undefined8 *)UnityEngine_UIElements_ComputedTransitionUtils_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Xml_Schema_Datatype_decimal_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x11f8);
    puVar3 = (undefined8 *)System_Xml_Schema_Datatype_double_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_FindMaterialDrawInstancesJob_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1208);
    puVar3 = (undefined8 *)UnityEngine_Rendering_FindNonRegisteredMaterialsJob_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Unity_Collections_FixedString128Bytes_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1218);
    puVar3 = (undefined8 *)Unity_Collections_FixedString32Bytes_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_EconomyModels_GetDraftItemsRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1228);
    puVar3 = (undefined8 *)PlayFab_EconomyModels_GetDraftItemsResponse_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_EconomyModels_GetEntityDraftItemsRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  puVar1 = System_Xml_Schema_Datatype_unsignedShort_TypeInfo;
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1238);
    puVar3 = (undefined8 *)PlayFab_EconomyModels_GetEntityDraftItemsResponse_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Xml_Schema_Datatype_unsignedShort_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x13d8);
    puVar3 = (undefined8 *)System_Xml_Schema_Datatype_untypedAtomicType_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x13e8);
    puVar3 = (undefined8 *)System_Xml_Schema_Datatype_untypedAtomicType_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_DateTime_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x13f8);
    puVar3 = (undefined8 *)System_Xml_Schema_DateTimeFacetsChecker_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1408);
    puVar3 = (undefined8 *)System_DateTimeKind_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Data_Common_DateTimeStorage_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1418);
    puVar3 = (undefined8 *)Newtonsoft_Json_Utilities_DateTimeUtils_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_DayOfWeek_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1428);
    puVar3 = (undefined8 *)UnityEngine_XR_Interaction_Toolkit_DeactivateEvent_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_TypeInfo
  ;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1248);
    puVar3 = (undefined8 *)
             PlayFab_ClientModels_AndroidDevicePushNotificationRegistrationRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)
           PlayFab_ClientModels_AndroidDevicePushNotificationRegistrationResult_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1258);
    puVar3 = (undefined8 *)
             UnityEngine_InputSystem_Android_LowLevel_AndroidGameControllerState_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_AndroidReflection_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1268);
    puVar3 = (undefined8 *)UnityEngine_Android_AndroidScreenLayoutDirection_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Animations_AnimationMixerPlayable_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1278);
    puVar3 = (undefined8 *)UnityEngine_Animations_AnimationMotionXToDeltaPlayable_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_AppContext_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1288);
    puVar3 = (undefined8 *)System_AppContextDefaultValues_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Newtonsoft_Json_Linq_JsonPath_ArrayIndexFilter_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1298);
    puVar3 = (undefined8 *)System_Linq_Expressions_Interpreter_ArrayLengthInstruction_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Runtime_CompilerServices_AsyncTaskCache_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x12a8);
    puVar3 = (undefined8 *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Newtonsoft_Json_Utilities_AsyncUtils_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x12b8);
    puVar3 = (undefined8 *)Mono_Net_Security_AsyncWriteRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Xml_Schema_BinaryFacetsChecker_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x12c8);
    puVar3 = (undefined8 *)System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Linq_Expressions_Block3_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x12d8);
    puVar3 = (undefined8 *)System_Linq_Expressions_Block4_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Collider2D_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x12e8);
    puVar3 = (undefined8 *)UnityEngine_Collision_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_DeactivateEventArgs_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x12f8);
    puVar3 = (undefined8 *)UnityEngine_Debug_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1308);
    puVar3 = (undefined8 *)UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_EconomyModels_DeleteInventoryCollectionRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1318);
    puVar3 = (undefined8 *)PlayFab_EconomyModels_DeleteInventoryCollectionResponse_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_EconomyModels_DeleteItemRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1328);
    puVar3 = (undefined8 *)PlayFab_EconomyModels_DeleteItemResponse_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_ProgressionModels_DeleteLeaderboardDefinitionRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1338);
    puVar3 = (undefined8 *)PlayFab_ProgressionModels_DeleteLeaderboardEntriesRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_AddonModels_DeleteNintendoResponse_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1348);
    puVar3 = (undefined8 *)PlayFab_AddonModels_DeletePSNRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_InputSystem_Controls_DeltaControl_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1358);
    puVar3 = (undefined8 *)Cysharp_Threading_Tasks_DeltaTimePlayerLoopTimer_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_AddonModels_DeleteTwitchRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1368);
    puVar3 = (undefined8 *)PlayFab_AddonModels_DeleteTwitchResponse_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_UIElements_EventBase_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1378);
    puVar3 = (undefined8 *)Unity_XR_CoreUtils_Bindings_EventBinding_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_UIElements_EventCallbackList_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     5000);
    puVar3 = (undefined8 *)UnityEngine_UIElements_EventCallbackListPool_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_ComponentModel_EventDescriptorCollection_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1398);
    puVar3 = (undefined8 *)UnityEngine_UIElements_EventDispatcher_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_TextCore_Text_FontAssetUtilities_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x13a8);
    puVar3 = (undefined8 *)UnityEngine_UI_FontData_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_EconomyModels_GetEntityItemReviewRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x13b8);
    puVar3 = (undefined8 *)PlayFab_EconomyModels_GetEntityItemReviewResponse_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_ProfilesModels_GetEntityProfileRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x13c8);
    puVar3 = (undefined8 *)PlayFab_ProfilesModels_GetEntityProfileResponse_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_UIElements_AttachToPanelEvent_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1a48);
    puVar3 = (undefined8 *)UnityEngine_Rendering_AttachmentDescriptor_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Newtonsoft_Json_Utilities_Base64Encoder_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1a58);
    puVar3 = (undefined8 *)System_Net_Base64Stream_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_UIElements_BindingUpdater_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1a68);
    puVar3 = (undefined8 *)Unity_XR_CoreUtils_Bindings_BindingsGroup_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)RootMotion_FinalIK_BipedIKSolvers_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1a78);
    puVar3 = (undefined8 *)RootMotion_BipedLimbOrientations_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Linq_Expressions_BlockExpression_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1a88);
    puVar3 = (undefined8 *)System_Linq_Expressions_BlockExpressionList_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Linq_Expressions_BlockN_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1a98);
    puVar3 = (undefined8 *)Oculus_Platform_Models_BlockedUser_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Runtime_Remoting_Messaging_ClientContextTerminatorSink_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1aa8);
    puVar3 = (undefined8 *)System_Runtime_Remoting_ClientIdentity_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Oculus_Platform_Models_Challenge_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1ab8);
    puVar3 = (undefined8 *)Oculus_Platform_Models_ChallengeEntry_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)
           UnityEngine_XR_OpenXR_Features_ConformanceAutomation_ConformanceAutomationFeature_TypeInfo
  ;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1ac8);
    puVar3 = (undefined8 *)Photon_Realtime_ConnectionCallbacksContainer_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_ConsoleCancelEventArgs_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1ad8);
    puVar3 = (undefined8 *)System_ConsoleCancelEventHandler_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Data_ConstNode_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1ae8);
    puVar3 = (undefined8 *)UnityEngine_Rendering_ConstantBuffer_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Security_Cryptography_DSASignatureDeformatter_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1af8);
    puVar3 = (undefined8 *)System_Security_Cryptography_DSASignatureDescription_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Data_DataColumnCollection_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1b08);
    puVar3 = (undefined8 *)System_Data_DataColumnPropertyDescriptor_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_UIElements_DataBindingManager_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1b18);
    puVar3 = (undefined8 *)UnityEngine_UIElements_DataBindingUtility_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Xml_Schema_Datatype_positiveInteger_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1b28);
    puVar3 = (undefined8 *)System_Xml_Schema_Datatype_short_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Xml_Schema_Datatype_timeNoTimeZone_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1b38);
    puVar3 = (undefined8 *)System_Xml_Schema_Datatype_timeTimeZone_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_AuthenticationModels_DeleteRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1b48);
    puVar3 = (undefined8 *)PlayFab_GroupsModels_DeleteRoleRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Collections_DictionaryEntry_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     7000);
    puVar3 = (undefined8 *)Photon_SocketServer_Security_DiffieHellmanCryptoProvider_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_UIElements_FontDefinition_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1b68);
    puVar3 = (undefined8 *)UnityEngine_TextCore_LowLevel_FontEngine_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_GPUDrivenLODGroupDataNativeCallback_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1b78);
    puVar3 = (undefined8 *)UnityEngine_Rendering_GPUDrivenProcessor_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_ExperimentationModels_GetExclusionGroupsRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1b88);
    puVar3 = (undefined8 *)PlayFab_ExperimentationModels_GetExclusionGroupsResult_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_ExperimentationModels_GetExperimentsRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1b98);
    puVar3 = (undefined8 *)PlayFab_ExperimentationModels_GetExperimentsResult_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_AddonModels_GetGoogleRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1ba8);
    puVar3 = (undefined8 *)PlayFab_AddonModels_GetGoogleResponse_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_GroupsModels_GetGroupRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1bb8);
    puVar3 = (undefined8 *)PlayFab_GroupsModels_GetGroupResponse_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_ComponentModel_ComponentCollection_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1438);
    puVar3 = (undefined8 *)Newtonsoft_Json_Linq_JsonPath_CompositeExpression_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Runtime_Remoting_Activation_AppDomainLevelActivator_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1448);
    puVar3 = (undefined8 *)Oculus_Platform_Models_AppDownloadProgressResult_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Application_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1458);
    puVar3 = (undefined8 *)System_ApplicationException_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_ApplicationMemoryUsage_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1468);
    puVar3 = (undefined8 *)Oculus_Platform_Models_ApplicationVersion_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_GroupsModels_ApplyToGroupResponse_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1478);
    puVar3 = (undefined8 *)System_Runtime_Remoting_Messaging_ArgInfo_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Oculus_Platform_Models_AssetFileDownloadResult_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1488);
    puVar3 = (undefined8 *)Oculus_Platform_Models_AssetFileDownloadUpdate_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEditor_Analytics_AssetImportAnalytic_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1498);
    puVar3 = (undefined8 *)UnityEditor_Analytics_AssetImportStatusAnalytic_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Linq_Expressions_Interpreter_AssignLocalInstruction_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x14a8);
    puVar3 = (undefined8 *)
             System_Linq_Expressions_Interpreter_AssignLocalToClosureInstruction_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Security_Cryptography_AsymmetricSignatureDeformatter_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x14b8);
    puVar3 = (undefined8 *)System_Security_Cryptography_AsymmetricSignatureFormatter_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_AttachmentIndexArray_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x14c8);
    puVar3 = (undefined8 *)UnityEngine_InputSystem_AttitudeSensor_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_AttributeHelperEngine_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x14d8);
    puVar3 = (undefined8 *)PlayFab_ClientModels_AttributeInstallRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Xml_Schema_AxisElement_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x14e8);
    puVar3 = (undefined8 *)UnityEngine_EventSystems_AxisEventData_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_UIElements_Background_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x14f8);
    puVar3 = (undefined8 *)UnityEngine_UIElements_BackgroundPosition_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_UIElements_BackgroundSize_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1508);
    puVar3 = (undefined8 *)UnityEngine_UIElements_BackgroundSizeType_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Events_BaseInvokableCall_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1518);
    puVar3 = (undefined8 *)UnityEngine_UIElements_BaseListView_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_UIElements_BaseVisualElementPanel_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1528);
    puVar3 = (undefined8 *)System_Net_BasicClient_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_BatchCullingViewType_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1538);
    puVar3 = (undefined8 *)UnityEngine_Rendering_BatchID_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Mono_Security_X509_Extensions_BasicConstraintsExtension_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1548);
    puVar3 = (undefined8 *)UnityEngine_Rendering_BatchBufferTarget_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_BatchCullingContext_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1558);
    puVar3 = (undefined8 *)UnityEngine_Rendering_BatchCullingOutput_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_BatchMaterialID_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1568);
    puVar3 = (undefined8 *)UnityEngine_Rendering_BatchMeshID_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_BatchPackedCullingViewID_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1578);
    puVar3 = (undefined8 *)UnityEngine_Analytics_BatchRenderGroupUsageAnalytic_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)RootMotion_BipedNaming_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1588);
    puVar3 = (undefined8 *)RootMotion_BipedReferences_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Xml_Bits_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1598);
    puVar3 = (undefined8 *)UnityEngine_Rendering_BlendState_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Linq_Expressions_Block5_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x15a8);
    puVar3 = (undefined8 *)PlayFab_GroupsModels_BlockEntityRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Newtonsoft_Json_Bson_BsonString_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x15b8);
    puVar3 = (undefined8 *)Newtonsoft_Json_Bson_BsonType_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Linq_Expressions_Interpreter_ByRefNewInstruction_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x15c8);
    puVar3 = (undefined8 *)System_Linq_Expressions_ByRefParameterExpression_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Photon_Pun_UtilityScripts_ByteComparer_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x15d8);
    puVar3 = (undefined8 *)System_Collections_Generic_ByteEqualityComparer_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_CPUSharedInstanceData_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x15e8);
    puVar3 = (undefined8 *)Microsoft_CSharp_CSharpCodeProvider_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Net_Http_Headers_CacheControlHeaderValue_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x15f8);
    puVar3 = (undefined8 *)System_Linq_Expressions_CachedReflectionInfo_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Runtime_Remoting_Messaging_CallContextSecurityData_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1608);
    puVar3 = (undefined8 *)PlayFab_Internal_CallRequestContainer_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Globalization_CalendarData_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1618);
    puVar3 = (undefined8 *)System_Runtime_Remoting_Messaging_CallContextRemotingData_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Threading_CancellationCallbackCoreWorkArguments_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1628);
    puVar3 = (undefined8 *)System_Threading_CancellationCallbackInfo_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Runtime_Remoting_Messaging_ConstructionCall_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1638);
    puVar3 = (undefined8 *)System_Runtime_Remoting_Messaging_ConstructionCallDictionary_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Reflection_ConstructorInfo_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1648);
    puVar3 = (undefined8 *)PlayFab_ClientModels_ConsumeItemRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_ClientModels_ConsumeMicrosoftStoreEntitlementsResponse_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1658);
    puVar3 = (undefined8 *)PlayFab_ClientModels_ConsumePS5EntitlementsRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_ClientModels_ConsumePSNEntitlementsResult_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1668);
    puVar3 = (undefined8 *)PlayFab_ClientModels_ConsumeXboxEntitlementsRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Oculus_Platform_Models_ContentRating_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1678);
    puVar3 = (undefined8 *)System_Xml_Schema_ContentValidator_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Threading_ContextCallback_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1688);
    puVar3 = (undefined8 *)System_Runtime_Remoting_Contexts_ContextCallbackObject_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Net_ContextFlagsAdapterPal_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1698);
    puVar3 = (undefined8 *)System_Net_ContextFlagsPal_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Profiling_CustomSampler_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x16a8);
    puVar3 = (undefined8 *)UnityEngine_UIElements_CustomStyleResolvedEvent_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Photon_Realtime_CustomTypesUnity_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x16b8);
    puVar3 = (undefined8 *)UnityEngine_CustomYieldInstruction_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_Universal_DBufferRenderPass_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x16c8);
    puVar3 = (undefined8 *)UnityEngine_Rendering_Universal_DBufferSettings_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Data_DataTableClearEventArgs_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x16d8);
    puVar3 = (undefined8 *)System_Data_DataTableCollection_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Data_DataTablePropertyDescriptor_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x16e8);
    puVar3 = (undefined8 *)System_Data_DataTextReader_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Data_DataView_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x16f8);
    puVar3 = (undefined8 *)System_Data_DataViewListener_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1708);
    puVar3 = (undefined8 *)UnityEngine_Rendering_Universal_DebugDisplaySettingsCommon_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1718);
    puVar3 = (undefined8 *)UnityEngine_Rendering_DebugDisplaySettingsUI_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Linq_Expressions_DebugInfoExpression_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1728);
    puVar3 = (undefined8 *)UnityEngine_Rendering_Universal_DebugLightingFeatureFlags_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_DebugDisplaySettingsVolume_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1738);
    puVar3 = (undefined8 *)UnityEngine_Rendering_DebugFrameTiming_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_Universal_DebugPostProcessingMode_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1748);
    puVar3 = (undefined8 *)UnityEngine_Rendering_Universal_DebugRenderSetup_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_UI_DebugUIHandlerValue_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1758);
    puVar3 = (undefined8 *)UnityEngine_Rendering_UI_DebugUIHandlerValueTuple_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_DebugShapes_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  puVar1 = UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_TypeInfo;
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1768);
    puVar3 = (undefined8 *)UnityEngine_Rendering_UI_DebugUIHandlerMessageBox_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1778);
    puVar3 = (undefined8 *)UnityEngine_Rendering_Universal_DepthOfFieldModeParameter_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_Universal_Internal_DeferredConfig_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1788);
    puVar3 = (undefined8 *)UnityEngine_Rendering_Universal_Internal_DeferredLights_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_IO_Compression_DeflateStreamNative_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1798);
    puVar3 = (undefined8 *)POpusCodec_Enums_Delay_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_DelegateData_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x17a8);
    puVar3 = (undefined8 *)UnityEngine_Rendering_DelegateHashCodeUtils_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_AddonModels_DeleteAppleResponse_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x17b8);
    puVar3 = (undefined8 *)PlayFab_MultiplayerModels_DeleteAssetRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_EventsModels_DeleteDataConnectionResponse_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x17c8);
    puVar3 = (undefined8 *)PlayFab_EconomyModels_DeleteEntityItemReviewsRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_MultiplayerModels_DeleteBuildRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x17d8);
    puVar3 = (undefined8 *)PlayFab_MultiplayerModels_DeleteCertificateRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_ProgressionModels_DeleteStatisticsRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x17e8);
    puVar3 = (undefined8 *)PlayFab_ProgressionModels_DeleteStatisticsResponse_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_EventsModels_DeleteTelemetryKeyRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x17f8);
    puVar3 = (undefined8 *)PlayFab_EventsModels_DeleteTelemetryKeyResponse_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1808);
    puVar3 = (undefined8 *)UnityEngine_Rendering_Universal_DepthOfFieldModeParameter_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Security_Cryptography_DerSequenceReader_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1818);
    puVar3 = (undefined8 *)System_ComponentModel_DescriptionAttribute_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_ComponentModel_DesignerSerializationVisibilityAttribute_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1828);
    puVar3 = (undefined8 *)Oculus_Platform_Models_Destination_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)
           UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousTurnProvider_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1838);
    puVar3 = (undefined8 *)UnityEngine_XR_Interaction_Toolkit_DeviceBasedSnapTurnProvider_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_ClientModels_DeviceInfoRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1848);
    puVar3 = (undefined8 *)UnityEngine_DeviceType_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_IO_DirectoryNotFoundException_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1858);
    puVar3 = (undefined8 *)Photon_Realtime_DisconnectCause_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_Utilities_DisplayUtility_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1868);
    puVar3 = (undefined8 *)
             UnityEngine_XR_Interaction_Toolkit_Utilities_DisposableManagerSingleton_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_UIElements_EventCallbackRegistry_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1878);
    puVar3 = (undefined8 *)UnityEngine_UIElements_EventCategoryAttribute_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)ExitGames_Client_Photon_EventData_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1888);
    puVar3 = (undefined8 *)System_ComponentModel_EventDescriptor_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_ExceptionResource_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1898);
    puVar3 = (undefined8 *)System_Linq_Expressions_Interpreter_ExclusiveOrInstruction_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_ClientModels_ExecuteCloudScriptResult_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x18a8);
    puVar3 = (undefined8 *)PlayFab_CloudScriptModels_ExecuteCloudScriptResult_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Linq_Expressions_Expression_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x18b8);
    puVar3 = (undefined8 *)UnityEngine_UIElements_StyleSheets_Syntax_Expression_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_IO_FileStream_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x18c8);
    puVar3 = (undefined8 *)System_IO_FileStreamAsyncResult_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_MultiplayerModels_FindLobbiesRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x18d8);
    puVar3 = (undefined8 *)PlayFab_MultiplayerModels_FindLobbiesResult_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Runtime_Serialization_FixupHolderList_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x18e8);
    puVar3 = (undefined8 *)Photon_Voice_Flip_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Unity_Burst_FloatMode_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x18f8);
    puVar3 = (undefined8 *)UnityEngine_Rendering_FloatParameter_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_ClientModels_GetAccountInfoRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1908);
    puVar3 = (undefined8 *)PlayFab_ClientModels_GetAccountInfoResult_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_ClientModels_GetAdPlacementsRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1918);
    puVar3 = (undefined8 *)PlayFab_ClientModels_GetAdPlacementsResult_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Linq_Expressions_Interpreter_GetArrayItemInstruction_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1928);
    puVar3 = (undefined8 *)PlayFab_MultiplayerModels_GetAssetDownloadUrlRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_MultiplayerModels_GetAssetUploadUrlResponse_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1938);
    puVar3 = (undefined8 *)PlayFab_MultiplayerModels_GetBuildAliasRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_MultiplayerModels_GetBuildRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1948);
    puVar3 = (undefined8 *)PlayFab_MultiplayerModels_GetBuildResponse_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_EconomyModels_GetCatalogConfigRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1958);
    puVar3 = (undefined8 *)PlayFab_EconomyModels_GetCatalogConfigResponse_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_ClientModels_GetCatalogItemsRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1968);
    puVar3 = (undefined8 *)PlayFab_ClientModels_GetCatalogItemsResult_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_AddonModels_GetFacebookRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1978);
    puVar3 = (undefined8 *)PlayFab_AddonModels_GetFacebookResponse_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_AddonModels_GetFacebookInstantGamesRequest_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1988);
    puVar3 = (undefined8 *)PlayFab_AddonModels_GetFacebookInstantGamesResponse_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_EconomyModels_GetItemModerationStateResponse_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1998);
    puVar3 = (undefined8 *)PlayFab_EconomyModels_GetItemPublishStatusRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_EconomyModels_GetItemPublishStatusResponse_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x19a8);
    puVar3 = (undefined8 *)PlayFab_EconomyModels_GetItemRequest_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Mono_Globalization_Unicode_CodePointIndexer_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x19b8);
    puVar3 = (undefined8 *)Photon_Voice_Codec_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Mono_Security_Protocol_Ntlm_ChallengeResponse_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x19c8);
    puVar3 = (undefined8 *)Mono_Security_Protocol_Ntlm_ChallengeResponse2_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Cysharp_Threading_Tasks_ChannelClosedException_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x19d8);
    puVar3 = (undefined8 *)Photon_Chat_ChannelCreationOptions_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Xml_Schema_Datatype_ENUMERATION_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x19e8);
    puVar3 = (undefined8 *)System_Xml_Schema_Datatype_ID_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Xml_Schema_Datatype_NOTATION_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x19f8);
    puVar3 = (undefined8 *)System_Xml_Schema_Datatype_Name_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)RootMotion_FinalIK_FBIKChain_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1a08);
    puVar3 = (undefined8 *)Newtonsoft_Json_Utilities_FSharpFunction_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1a18);
    puVar3 = (undefined8 *)System_Runtime_InteropServices_FieldOffsetAttribute_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_UIElements_FilterParameter_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1a28);
    puVar3 = (undefined8 *)UnityEngine_Rendering_FilteringSettings_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_TextCore_Text_FastAction_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1a38);
    puVar3 = (undefined8 *)System_Resources_FastResourceComparer_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_ComponentModel_AttributeProviderAttribute_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x10);
    puVar3 = (undefined8 *)System_AttributeUsageAttribute_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Photon_Voice_IOS_AudioSessionCategoryOption_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x20);
    puVar3 = (undefined8 *)Photon_Voice_IOS_AudioSessionMode_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Photon_Voice_Unity_AudioClipWrapper_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x30);
    puVar3 = (undefined8 *)Photon_Voice_AudioInChangeNotifierNotSupported_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_AudioSettings_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x40);
    puVar3 = (undefined8 *)UnityEngine_AudioSpeakerMode_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)PlayFab_AuthenticationModels_AuthenticateCustomIdResult_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x50);
    puVar3 = (undefined8 *)System_Security_Authentication_AuthenticationException_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Net_AuthenticationSchemes_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x60);
    puVar3 = (undefined8 *)AuthenticationService_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Mono_Security_Authenticode_AuthenticodeDeformatter_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x70);
    puVar3 = (undefined8 *)Mono_Security_X509_Extensions_AuthorityKeyIdentifierExtension_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Data_AutoIncrementBigInteger_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x80);
    puVar3 = (undefined8 *)System_Data_AutoIncrementInt64_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Xml_Schema_AutoValidator_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x90);
    puVar3 = (undefined8 *)System_Net_AutoWebProxyScriptEngine_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Awaitable_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0xa0);
    puVar3 = (undefined8 *)Cysharp_Threading_Tasks_AwaiterActions_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_UIElements_BaseTreeViewController_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0xb0);
    puVar3 = (undefined8 *)System_Xml_Linq_BaseUriAnnotation_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Xml_BinXmlDateTime_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0xc0);
    puVar3 = (undefined8 *)System_Xml_BinXmlSqlDecimal_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Numerics_BigIntegerCalculator_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0xd0);
    puVar3 = (undefined8 *)System_Data_Common_BigIntegerStorage_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)
           System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainAssembly_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0xe0);
    puVar3 = (undefined8 *)
             System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainMap_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_UIElements_BindingId_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0xf0);
    puVar3 = (undefined8 *)System_Dynamic_BindingRestrictions_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Collections_BitArray_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x100);
    puVar3 = (undefined8 *)UnityEngine_Rendering_BitArray128_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Rendering_BitArray32_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x110);
    puVar3 = (undefined8 *)UnityEngine_Rendering_BitArray64_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_XR_Bone_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x120);
    puVar3 = (undefined8 *)UnityEngine_Rendering_BoolParameter_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)UnityEngine_Bounds_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x130);
    puVar3 = (undefined8 *)UnityEngine_UIElements_BoundsField_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Unity_Properties_Internal_BoundsIntPropertyBag_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x140);
    puVar3 = (undefined8 *)Unity_Properties_Internal_BoundsPropertyBag_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Collections_Concurrent_CDSCollectionETWBCLProvider_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x150);
    puVar3 = (undefined8 *)UnityEngine_Rendering_CPUDrawInstanceData_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Security_Claims_Claim_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x160);
    puVar3 = (undefined8 *)System_Security_Claims_ClaimsIdentity_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Net_ChunkedInputStream_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x170);
    puVar3 = (undefined8 *)System_IO_ChunkedMemoryStream_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_ComponentModel_CollectionChangeEventHandler_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x180);
    puVar3 = (undefined8 *)Unity_XR_CoreUtils_CollectionExtensions_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Threading_Tasks_CompletionActionInvoker_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     400);
    puVar3 = (undefined8 *)System_ComponentModel_ComplexBindingPropertiesAttribute_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Runtime_Remoting_Activation_ContextLevelActivator_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1a0);
    puVar3 = (undefined8 *)UnityEngine_UIElements_ContextualMenuManipulator_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)Unity_Properties_ConversionRegistry_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1b0);
    puVar3 = (undefined8 *)System_Convert_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Data_DataException_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1c0);
    puVar3 = (undefined8 *)System_Data_DataExpression_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Xml_Schema_Datatype_anyURI_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
    goto LAB_053299d8;
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1d0);
    puVar3 = (undefined8 *)System_Xml_Schema_Datatype_base64Binary_TypeInfo;
    if (lVar5 != 0) goto LAB_05313d58;
  }
  uVar4 = *(undefined8 *)System_Xml_Schema_Datatype_fixed_TypeInfo;
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_050121a8(uVar4,0);
  uVar2 = FUN_0501afe8();
  if ((uVar2 & 1) != 0) {
    if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0) {
LAB_053299d8:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar5 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) +
                     0x1e0);
    puVar3 = (undefined8 *)System_Xml_Schema_Datatype_float_TypeInfo;
    if (lVar5 != 0) {
LAB_05313d58:
      uVar4 = FUN_02922484(*unaff_x19,*puVar3);
                    /* WARNING: Could not recover jumptable at 0x05313d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),uVar4,*(undefined8 *)(lVar5 + 0x28))
      ;
      return;
    }
  }
  return;
}


