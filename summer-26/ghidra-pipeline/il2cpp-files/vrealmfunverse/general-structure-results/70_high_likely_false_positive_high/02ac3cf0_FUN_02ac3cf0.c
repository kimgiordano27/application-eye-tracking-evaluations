/*
FUNCTION_NAME: FUN_02ac3cf0
ENTRY_POINT: 02ac3cf0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_6
*/


void FUN_02ac3cf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar8 = System_ComponentModel_DesignerCategoryAttribute_TypeInfo;
  puVar7 = System_ComponentModel_DesignTimeVisibleAttribute_TypeInfo;
  puVar6 = System_ComponentModel_DesignOnlyAttribute_TypeInfo;
  puVar5 = System_Runtime_Serialization_DeserializationEventHandler_TypeInfo;
  puVar4 = Firebase_Firestore_DeserializationContext_TypeInfo;
  puVar3 = System_ComponentModel_DescriptionAttribute_TypeInfo;
  puVar2 = System_Security_Cryptography_DerSequenceReader_TypeInfo;
  puVar1 = UnityEngine_Rendering_DepthState_TypeInfo;
  if ((DAT_066cd9b8 & 1) == 0) {
    FUN_02b3c81c(System_ComponentModel_DesignerSerializationVisibilityAttribute_TypeInfo);
    FUN_02b3c81c(Oculus_Platform_Models_Destination_TypeInfo);
    FUN_02b3c81c(Pico_Platform_Models_Destination_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_DeserializationContext_TypeInfo);
    FUN_02b3c81c(Oculus_Platform_Models_DestinationList_TypeInfo);
    FUN_02b3c81c(Pico_Platform_Models_DestinationList_TypeInfo);
    FUN_02b3c81c(Meta_XR_MRUtilityKit_DestructibleGlobalMesh_TypeInfo);
    FUN_02b3c81c(Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_DetachFromPanelEvent_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_UIR_DetachedAllocator_TypeInfo);
    FUN_02b3c81c(Pico_Platform_Message<RtcUserPublishInfo>_TypeInfo);
    FUN_02b3c81c(Pico_Platform_Message<RtcUserLeaveInfo>_TypeInfo);
    FUN_02b3c81c(System_ComponentModel_DesignTimeVisibleAttribute_TypeInfo);
    FUN_02b3c81c(System_ComponentModel_DesignerCategoryAttribute_TypeInfo);
    FUN_02b3c81c(Pico_Platform_Models_DetectSensitiveResult_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousMoveProvider_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_DeserializationEventHandler_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousTurnProvider_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_DeviceBasedSnapTurnProvider_TypeInfo);
    FUN_02b3c81c(System_Xml_Schema_DfaContentValidator_TypeInfo);
    FUN_02b3c81c(System_Runtime_Diagnostics_DiagnosticTraceBase_TypeInfo);
    FUN_02b3c81c(System_Runtime_Diagnostics_DiagnosticTraceSource_TypeInfo);
    FUN_02b3c81c(System_Security_Cryptography_DerSequenceReader_TypeInfo);
    FUN_02b3c81c(System_ComponentModel_DescriptionAttribute_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_DiagnosticUtility_TypeInfo);
    FUN_02b3c81c(System_Runtime_Diagnostics_DiagnosticsEventProvider_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_DepthState_TypeInfo);
    FUN_02b3c81c(Unity_Services_Core_Telemetry_Internal_DiagnosticsFactory_TypeInfo);
    FUN_02b3c81c(System_Collections_DictionaryEntry_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_DictionaryGlobals_TypeInfo);
    FUN_02b3c81c(System_ComponentModel_DesignOnlyAttribute_TypeInfo);
    FUN_02b3c81c(System_Runtime_Diagnostics_DictionaryTraceRecord_TypeInfo);
    FUN_02b3c81c(Difficulty_TypeInfo);
    FUN_02b3c81c(DifficultyLevel_TypeInfo);
    FUN_02b3c81c(System_Net_DigestClient_TypeInfo);
    FUN_02b3c81c(System_Net_DigestHeaderParser_TypeInfo);
    FUN_02b3c81c(System_Net_DigestSession_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_StyleSheets_Dimension_TypeInfo);
    FUN_02b3c81c(VRBeats_Direction_TypeInfo);
    FUN_02b3c81c(System_IO_DirectoryInfo_TypeInfo);
    FUN_02b3c81c(System_IO_DirectoryNotFoundException_TypeInfo);
    FUN_02b3c81c(Pico_Platform_Message<RtcRoomWarn>_TypeInfo);
    FUN_02b3c81c(DiscOfHanoiGameManager_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputSystem_Controls_DiscreteButtonControl_TypeInfo);
    FUN_02b3c81c(Unity_IntegerTime_DiscreteTime_TypeInfo);
    FUN_02b3c81c(UnityEngine_Timeline_DiscreteTime_TypeInfo);
    FUN_02b3c81c(Newtonsoft_Json_Converters_DiscriminatedUnionConverter_TypeInfo);
    DAT_066cd9b8 = 1;
  }
  uVar9 = thunk_FUN_02b7a758(*param_1,*(undefined8 *)puVar1);
  uVar10 = *param_1;
  *param_2 = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar10,*(undefined8 *)puVar1);
  thunk_FUN_02bb0e9c(param_2,uVar9);
  uVar9 = thunk_FUN_02b7a758(param_1[1],*(undefined8 *)puVar2);
  uVar11 = param_1[1];
  uVar10 = *(undefined8 *)puVar2;
  param_2[1] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 1,uVar9);
  uVar9 = thunk_FUN_02b7a758(param_1[2],*(undefined8 *)puVar3);
  uVar11 = param_1[2];
  uVar10 = *(undefined8 *)puVar3;
  param_2[2] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 2,uVar9);
  uVar9 = thunk_FUN_02b7a758(param_1[3],*(undefined8 *)puVar4);
  uVar11 = param_1[3];
  uVar10 = *(undefined8 *)puVar4;
  param_2[3] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 3,uVar9);
  uVar9 = thunk_FUN_02b7a758(param_1[4],*(undefined8 *)puVar5);
  uVar11 = param_1[4];
  uVar10 = *(undefined8 *)puVar5;
  param_2[4] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 4,uVar9);
  uVar9 = thunk_FUN_02b7a758(param_1[5],*(undefined8 *)puVar6);
  uVar11 = param_1[5];
  uVar10 = *(undefined8 *)puVar6;
  param_2[5] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 5,uVar9);
  uVar9 = thunk_FUN_02b7a758(param_1[6],*(undefined8 *)puVar7);
  uVar11 = param_1[6];
  uVar10 = *(undefined8 *)puVar7;
  param_2[6] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 6,uVar9);
  uVar9 = thunk_FUN_02b7a758(param_1[7],*(undefined8 *)puVar8);
  uVar11 = param_1[7];
  uVar10 = *(undefined8 *)puVar8;
  param_2[7] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 7,uVar9);
  puVar1 = System_Runtime_Diagnostics_DiagnosticTraceSource_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[8],
                             *(undefined8 *)
                              System_Runtime_Diagnostics_DiagnosticTraceSource_TypeInfo);
  uVar11 = param_1[8];
  uVar10 = *(undefined8 *)puVar1;
  param_2[8] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 8,uVar9);
  puVar1 = System_Net_DigestHeaderParser_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[9],*(undefined8 *)System_Net_DigestHeaderParser_TypeInfo);
  uVar11 = param_1[9];
  uVar10 = *(undefined8 *)puVar1;
  param_2[9] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 9,uVar9);
  puVar1 = UnityEngine_InputSystem_Controls_DiscreteButtonControl_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[10],
                             *(undefined8 *)
                              UnityEngine_InputSystem_Controls_DiscreteButtonControl_TypeInfo);
  uVar11 = param_1[10];
  uVar10 = *(undefined8 *)puVar1;
  param_2[10] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 10,uVar9);
  puVar1 = Pico_Platform_Models_DetectSensitiveResult_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0xb],
                             *(undefined8 *)Pico_Platform_Models_DetectSensitiveResult_TypeInfo);
  uVar11 = param_1[0xb];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0xb] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0xb,uVar9);
  puVar1 = DiscOfHanoiGameManager_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0xc],*(undefined8 *)DiscOfHanoiGameManager_TypeInfo);
  uVar11 = param_1[0xc];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0xc] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0xc,uVar9);
  puVar1 = Unity_Services_Core_Telemetry_Internal_DiagnosticsFactory_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0xd],
                             *(undefined8 *)
                              Unity_Services_Core_Telemetry_Internal_DiagnosticsFactory_TypeInfo);
  uVar11 = param_1[0xd];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0xd] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0xd,uVar9);
  puVar1 = System_Runtime_Diagnostics_DiagnosticsEventProvider_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0xe],
                             *(undefined8 *)
                              System_Runtime_Diagnostics_DiagnosticsEventProvider_TypeInfo);
  uVar11 = param_1[0xe];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0xe] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0xe,uVar9);
  puVar1 = System_Collections_DictionaryEntry_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0xf],*(undefined8 *)System_Collections_DictionaryEntry_TypeInfo
                            );
  uVar11 = param_1[0xf];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0xf] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0xf,uVar9);
  puVar1 = System_Runtime_Diagnostics_DictionaryTraceRecord_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x10],
                             *(undefined8 *)
                              System_Runtime_Diagnostics_DictionaryTraceRecord_TypeInfo);
  uVar11 = param_1[0x10];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x10] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x10,uVar9);
  puVar1 = Pico_Platform_Models_Destination_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x11],*(undefined8 *)Pico_Platform_Models_Destination_TypeInfo)
  ;
  uVar11 = param_1[0x11];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x11] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x11,uVar9);
  puVar1 = DifficultyLevel_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x12],*(undefined8 *)DifficultyLevel_TypeInfo);
  uVar11 = param_1[0x12];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x12] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x12,uVar9);
  puVar1 = UnityEngine_UIElements_UIR_DetachedAllocator_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x13],
                             *(undefined8 *)UnityEngine_UIElements_UIR_DetachedAllocator_TypeInfo);
  uVar11 = param_1[0x13];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x13] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x13,uVar9);
  puVar1 = Difficulty_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x14],*(undefined8 *)Difficulty_TypeInfo);
  uVar11 = param_1[0x14];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x14] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x14,uVar9);
  puVar1 = VRBeats_Direction_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x15],*(undefined8 *)VRBeats_Direction_TypeInfo);
  uVar11 = param_1[0x15];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x15] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x15,uVar9);
  puVar1 = Meta_XR_MRUtilityKit_DestructibleGlobalMesh_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x16],
                             *(undefined8 *)Meta_XR_MRUtilityKit_DestructibleGlobalMesh_TypeInfo);
  uVar11 = param_1[0x16];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x16] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x16,uVar9);
  puVar1 = UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousTurnProvider_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x17],
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousTurnProvider_TypeInfo
                            );
  uVar11 = param_1[0x17];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x17] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x17,uVar9);
  puVar1 = System_Xml_Schema_DfaContentValidator_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x18],
                             *(undefined8 *)System_Xml_Schema_DfaContentValidator_TypeInfo);
  uVar11 = param_1[0x18];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x18] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x18,uVar9);
  puVar1 = System_Net_DigestClient_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x19],*(undefined8 *)System_Net_DigestClient_TypeInfo);
  uVar11 = param_1[0x19];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x19] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x19,uVar9);
  puVar1 = System_Runtime_Diagnostics_DiagnosticTraceBase_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x1a],
                             *(undefined8 *)System_Runtime_Diagnostics_DiagnosticTraceBase_TypeInfo)
  ;
  uVar11 = param_1[0x1a];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x1a] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x1a,uVar9);
  puVar1 = Pico_Platform_Models_DestinationList_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x1b],
                             *(undefined8 *)Pico_Platform_Models_DestinationList_TypeInfo);
  uVar11 = param_1[0x1b];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x1b] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x1b,uVar9);
  puVar1 = System_Runtime_Serialization_DictionaryGlobals_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x1c],
                             *(undefined8 *)System_Runtime_Serialization_DictionaryGlobals_TypeInfo)
  ;
  uVar11 = param_1[0x1c];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x1c] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x1c,uVar9);
  puVar1 = System_Runtime_Serialization_DiagnosticUtility_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x1d],
                             *(undefined8 *)System_Runtime_Serialization_DiagnosticUtility_TypeInfo)
  ;
  uVar11 = param_1[0x1d];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x1d] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x1d,uVar9);
  puVar1 = Pico_Platform_Message<RtcRoomWarn>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x1e],
                             *(undefined8 *)Pico_Platform_Message<RtcRoomWarn>_TypeInfo);
  uVar11 = param_1[0x1e];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x1e] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x1e,uVar9);
  puVar1 = System_IO_DirectoryNotFoundException_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x1f],
                             *(undefined8 *)System_IO_DirectoryNotFoundException_TypeInfo);
  uVar11 = param_1[0x1f];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x1f] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x1f,uVar9);
  puVar1 = UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousMoveProvider_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x20],
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousMoveProvider_TypeInfo
                            );
  uVar11 = param_1[0x20];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x20] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x20,uVar9);
  puVar1 = UnityEngine_XR_Interaction_Toolkit_DeviceBasedSnapTurnProvider_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x21],
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_DeviceBasedSnapTurnProvider_TypeInfo
                            );
  uVar11 = param_1[0x21];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x21] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x21,uVar9);
  puVar1 = Pico_Platform_Message<RtcUserLeaveInfo>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x22],
                             *(undefined8 *)Pico_Platform_Message<RtcUserLeaveInfo>_TypeInfo);
  uVar11 = param_1[0x22];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x22] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x22,uVar9);
  puVar1 = Pico_Platform_Message<RtcUserPublishInfo>_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x23],
                             *(undefined8 *)Pico_Platform_Message<RtcUserPublishInfo>_TypeInfo);
  uVar11 = param_1[0x23];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x23] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x23,uVar9);
  puVar1 = Newtonsoft_Json_Converters_DiscriminatedUnionConverter_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x24],
                             *(undefined8 *)
                              Newtonsoft_Json_Converters_DiscriminatedUnionConverter_TypeInfo);
  uVar11 = param_1[0x24];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x24] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x24,uVar9);
  puVar1 = Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x25],
                             *(undefined8 *)
                              Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_TypeInfo);
  uVar11 = param_1[0x25];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x25] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x25,uVar9);
  puVar1 = UnityEngine_UIElements_DetachFromPanelEvent_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x26],
                             *(undefined8 *)UnityEngine_UIElements_DetachFromPanelEvent_TypeInfo);
  uVar11 = param_1[0x26];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x26] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x26,uVar9);
  puVar1 = System_Net_DigestSession_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x27],*(undefined8 *)System_Net_DigestSession_TypeInfo);
  uVar11 = param_1[0x27];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x27] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x27,uVar9);
  puVar1 = UnityEngine_UIElements_StyleSheets_Dimension_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x28],
                             *(undefined8 *)UnityEngine_UIElements_StyleSheets_Dimension_TypeInfo);
  uVar11 = param_1[0x28];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x28] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x28,uVar9);
  puVar1 = Unity_IntegerTime_DiscreteTime_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x29],*(undefined8 *)Unity_IntegerTime_DiscreteTime_TypeInfo);
  uVar11 = param_1[0x29];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x29] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x29,uVar9);
  puVar1 = UnityEngine_Timeline_DiscreteTime_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x2a],*(undefined8 *)UnityEngine_Timeline_DiscreteTime_TypeInfo
                            );
  uVar11 = param_1[0x2a];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x2a] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x2a,uVar9);
  puVar1 = Oculus_Platform_Models_DestinationList_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x2b],
                             *(undefined8 *)Oculus_Platform_Models_DestinationList_TypeInfo);
  uVar11 = param_1[0x2b];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x2b] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x2b,uVar9);
  puVar1 = System_IO_DirectoryInfo_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x2c],*(undefined8 *)System_IO_DirectoryInfo_TypeInfo);
  uVar11 = param_1[0x2c];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x2c] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x2c,uVar9);
  puVar1 = System_ComponentModel_DesignerSerializationVisibilityAttribute_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x2d],
                             *(undefined8 *)
                              System_ComponentModel_DesignerSerializationVisibilityAttribute_TypeInfo
                            );
  uVar11 = param_1[0x2d];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x2d] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x2d,uVar9);
  puVar1 = Oculus_Platform_Models_Destination_TypeInfo;
  uVar9 = thunk_FUN_02b7a758(param_1[0x2e],
                             *(undefined8 *)Oculus_Platform_Models_Destination_TypeInfo);
  uVar11 = param_1[0x2e];
  uVar10 = *(undefined8 *)puVar1;
  param_2[0x2e] = uVar9;
  uVar9 = thunk_FUN_02b7a758(uVar11,uVar10);
  thunk_FUN_02bb0e9c(param_2 + 0x2e,uVar9);
  return;
}


