/*
FUNCTION_NAME: FUN_02cbe410
ENTRY_POINT: 02cbe410
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_02cbe410(undefined8 *param_1,long param_2)

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
  
  puVar8 = ExitGames_Client_Photon_ParameterDictionary_TypeInfo;
  puVar7 = System_Linq_Expressions_Interpreter_ParameterByRefUpdater_TypeInfo;
  puVar6 = UnityEngine_UIElements_PanelTextSettings_TypeInfo;
  puVar5 = UnityEngine_UIElements_PanelSettings_TypeInfo;
  puVar4 = UnityEngine_UIElements_PanelRootElement_TypeInfo;
  puVar3 = UnityEngine_UIElements_PanelRaycaster_TypeInfo;
  puVar2 = UnityEngine_UIElements_PanelInputConfiguration_TypeInfo;
  puVar1 = UnityEngine_UIElements_PanelEventHandler_TypeInfo;
  if ((DAT_06a535d1 & 1) == 0) {
    FUN_02d4dc40(UnityEngine_UIElements_PanelEventHandler_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_PanelInputConfiguration_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_PanelTextSettings_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_PanelRaycaster_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_PanelRootElement_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_PanelSettings_TypeInfo);
    FUN_02d4dc40(System_Linq_Expressions_ParameterExpression_TypeInfo);
    FUN_02d4dc40(System_Reflection_ParameterInfo_TypeInfo);
    FUN_02d4dc40(System_ParameterizedStrings_TypeInfo);
    FUN_02d4dc40(System_Threading_ParameterizedThreadStart_TypeInfo);
    FUN_02d4dc40(System_ParamsArray_TypeInfo);
    FUN_02d4dc40(System_Data_ParentForeignKeyConstraintEnumerator_TypeInfo);
    FUN_02d4dc40(System_ComponentModel_ParenthesizePropertyNameAttribute_TypeInfo);
    FUN_02d4dc40(System_Runtime_Serialization_Formatters_Binary_ParseRecord_TypeInfo);
    FUN_02d4dc40(System_Security_Util_Parser_TypeInfo);
    FUN_02d4dc40(System_Xml_Schema_Parser_TypeInfo);
    FUN_02d4dc40(System_Xml_Schema_ParticleContentValidator_TypeInfo);
    FUN_02d4dc40(Oculus_Platform_Models_Party_TypeInfo);
    FUN_02d4dc40(Oculus_Platform_Models_PartyID_TypeInfo);
    FUN_02d4dc40(Oculus_Platform_Models_PartyUpdateNotification_TypeInfo);
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_PassBreakAudit_TypeInfo
                );
    FUN_02d4dc40(System_ComponentModel_PasswordPropertyTextAttribute_TypeInfo);
    FUN_02d4dc40(System_Linq_Expressions_Interpreter_ParameterByRefUpdater_TypeInfo);
    FUN_02d4dc40(ExitGames_Client_Photon_ParameterDictionary_TypeInfo);
    FUN_02d4dc40(System_IO_Path_TypeInfo);
    FUN_02d4dc40(System_IO_PathInternal_TypeInfo);
    FUN_02d4dc40(System_Net_PathList_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_PathRef_TypeInfo);
    FUN_02d4dc40(System_IO_PathTooLongException_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_PayForPurchaseRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_PayForPurchaseResult_TypeInfo);
    FUN_02d4dc40(ExitGames_Client_Photon_PeerBase_TypeInfo);
    DAT_06a535d1 = 1;
  }
  uVar9 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0x10) = *param_1;
  *(undefined8 *)(param_2 + 0x18) = param_1[1];
  uVar9 = thunk_FUN_02d8b74c(param_1[2],uVar9);
  uVar11 = param_1[2];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0x20) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0x20),uVar9);
  uVar9 = thunk_FUN_02d8b74c(param_1[3],*(undefined8 *)puVar2);
  uVar11 = param_1[3];
  uVar10 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_2 + 0x28) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0x28),uVar9);
  uVar9 = thunk_FUN_02d8b74c(param_1[4],*(undefined8 *)puVar3);
  uVar11 = param_1[4];
  uVar10 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_2 + 0x30) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0x30),uVar9);
  uVar9 = thunk_FUN_02d8b74c(param_1[5],*(undefined8 *)puVar4);
  uVar11 = param_1[5];
  uVar10 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_2 + 0x38) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0x38),uVar9);
  uVar9 = thunk_FUN_02d8b74c(param_1[6],*(undefined8 *)puVar5);
  uVar11 = param_1[6];
  uVar10 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_2 + 0x40) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0x40),uVar9);
  uVar9 = thunk_FUN_02d8b74c(param_1[7],*(undefined8 *)puVar6);
  uVar11 = param_1[7];
  uVar10 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0x48),uVar9);
  uVar9 = thunk_FUN_02d8b74c(param_1[8],*(undefined8 *)puVar7);
  uVar11 = param_1[8];
  uVar10 = *(undefined8 *)puVar7;
  *(undefined8 *)(param_2 + 0x50) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0x50),uVar9);
  puVar1 = UnityEngine_UIElements_PathRef_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[9],*(undefined8 *)UnityEngine_UIElements_PathRef_TypeInfo);
  uVar11 = param_1[9];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0x58) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0x58),uVar9);
  puVar1 = System_IO_PathTooLongException_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[10],*(undefined8 *)System_IO_PathTooLongException_TypeInfo);
  uVar11 = param_1[10];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0x60) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0x60),uVar9);
  puVar1 = System_IO_PathInternal_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0xb],*(undefined8 *)System_IO_PathInternal_TypeInfo);
  uVar11 = param_1[0xb];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0x68) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0x68),uVar9);
  puVar1 = System_IO_Path_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0xc],*(undefined8 *)System_IO_Path_TypeInfo);
  uVar11 = param_1[0xc];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0x70) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0x70),uVar9);
  uVar9 = thunk_FUN_02d8b74c(param_1[0xd],*(undefined8 *)puVar8);
  uVar11 = param_1[0xd];
  uVar10 = *(undefined8 *)puVar8;
  *(undefined8 *)(param_2 + 0x78) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0x78),uVar9);
  uVar9 = thunk_FUN_02d8b74c(param_1[0xe],*(undefined8 *)puVar8);
  uVar11 = param_1[0xe];
  uVar10 = *(undefined8 *)puVar8;
  *(undefined8 *)(param_2 + 0x80) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0x80),uVar9);
  puVar1 = System_Net_PathList_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0xf],*(undefined8 *)System_Net_PathList_TypeInfo);
  uVar11 = param_1[0xf];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0x88) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0x88),uVar9);
  puVar1 = PlayFab_ClientModels_PayForPurchaseRequest_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x10],
                             *(undefined8 *)PlayFab_ClientModels_PayForPurchaseRequest_TypeInfo);
  uVar11 = param_1[0x10];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0x90) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0x90),uVar9);
  puVar1 = PlayFab_ClientModels_PayForPurchaseResult_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x11],
                             *(undefined8 *)PlayFab_ClientModels_PayForPurchaseResult_TypeInfo);
  uVar11 = param_1[0x11];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0x98) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0x98),uVar9);
  puVar1 = System_ParameterizedStrings_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x12],*(undefined8 *)System_ParameterizedStrings_TypeInfo);
  uVar11 = param_1[0x12];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0xa0) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0xa0),uVar9);
  puVar1 = System_Reflection_ParameterInfo_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x13],*(undefined8 *)System_Reflection_ParameterInfo_TypeInfo);
  uVar11 = param_1[0x13];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0xa8) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0xa8),uVar9);
  puVar1 = System_Xml_Schema_Parser_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x14],*(undefined8 *)System_Xml_Schema_Parser_TypeInfo);
  uVar11 = param_1[0x14];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0xb0) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0xb0),uVar9);
  puVar1 = System_Xml_Schema_ParticleContentValidator_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x15],
                             *(undefined8 *)System_Xml_Schema_ParticleContentValidator_TypeInfo);
  uVar11 = param_1[0x15];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0xb8) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0xb8),uVar9);
  puVar1 = Oculus_Platform_Models_PartyID_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x16],*(undefined8 *)Oculus_Platform_Models_PartyID_TypeInfo);
  uVar11 = param_1[0x16];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0xc0) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0xc0),uVar9);
  puVar1 = UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_PassBreakAudit_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x17],
                             *(undefined8 *)
                              UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_PassBreakAudit_TypeInfo
                            );
  uVar11 = param_1[0x17];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 200) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 200),uVar9);
  puVar1 = Oculus_Platform_Models_Party_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x18],*(undefined8 *)Oculus_Platform_Models_Party_TypeInfo);
  uVar11 = param_1[0x18];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0xd0) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0xd0),uVar9);
  puVar1 = System_ParamsArray_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x19],*(undefined8 *)System_ParamsArray_TypeInfo);
  uVar11 = param_1[0x19];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0xd8) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0xd8),uVar9);
  puVar1 = System_Data_ParentForeignKeyConstraintEnumerator_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x1a],
                             *(undefined8 *)
                              System_Data_ParentForeignKeyConstraintEnumerator_TypeInfo);
  uVar11 = param_1[0x1a];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0xe0) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0xe0),uVar9);
  puVar1 = System_Runtime_Serialization_Formatters_Binary_ParseRecord_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x1b],
                             *(undefined8 *)
                              System_Runtime_Serialization_Formatters_Binary_ParseRecord_TypeInfo);
  uVar11 = param_1[0x1b];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0xe8) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0xe8),uVar9);
  puVar1 = System_Security_Util_Parser_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x1c],*(undefined8 *)System_Security_Util_Parser_TypeInfo);
  uVar11 = param_1[0x1c];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0xf0) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0xf0),uVar9);
  puVar1 = System_ComponentModel_PasswordPropertyTextAttribute_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x1d],
                             *(undefined8 *)
                              System_ComponentModel_PasswordPropertyTextAttribute_TypeInfo);
  uVar11 = param_1[0x1d];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0xf8) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0((undefined8 *)(param_2 + 0xf8),uVar9);
  puVar1 = System_ComponentModel_ParenthesizePropertyNameAttribute_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x1e],
                             *(undefined8 *)
                              System_ComponentModel_ParenthesizePropertyNameAttribute_TypeInfo);
  uVar11 = param_1[0x1e];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0x100) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0(param_2 + 0x100,uVar9);
  puVar1 = System_Threading_ParameterizedThreadStart_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x1f],
                             *(undefined8 *)System_Threading_ParameterizedThreadStart_TypeInfo);
  uVar11 = param_1[0x1f];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0x108) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0(param_2 + 0x108,uVar9);
  puVar1 = System_Linq_Expressions_ParameterExpression_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x20],
                             *(undefined8 *)System_Linq_Expressions_ParameterExpression_TypeInfo);
  uVar11 = param_1[0x20];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0x110) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0(param_2 + 0x110,uVar9);
  puVar1 = ExitGames_Client_Photon_PeerBase_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x21],*(undefined8 *)ExitGames_Client_Photon_PeerBase_TypeInfo)
  ;
  uVar11 = param_1[0x21];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0x118) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0(param_2 + 0x118,uVar9);
  puVar1 = Oculus_Platform_Models_PartyUpdateNotification_TypeInfo;
  uVar9 = thunk_FUN_02d8b74c(param_1[0x22],
                             *(undefined8 *)Oculus_Platform_Models_PartyUpdateNotification_TypeInfo)
  ;
  uVar11 = param_1[0x22];
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_2 + 0x120) = uVar9;
  uVar9 = thunk_FUN_02d8b74c(uVar11,uVar10);
  thunk_FUN_02dc1ef0(param_2 + 0x120,uVar9);
  return;
}


