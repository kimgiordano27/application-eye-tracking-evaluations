/*
FUNCTION_NAME: System.Data.DataTable$$CheckCascadingNamespaceConflict
ENTRY_POINT: 05320f4c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 78
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;negative_generic_rendering_without_foveation_or_eye_source
*/


void System_Data_DataTable__CheckCascadingNamespaceConflict(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x19;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  if (**(long **)(*param_1 + 0xb8) != 0) {
    lVar7 = *(long *)(**(long **)(*param_1 + 0xb8) + 0x1a90);
    puVar6 = (undefined8 *)Newtonsoft_Json_Bson_BsonObjectId_TypeInfo;
    if (lVar7 != 0) {
LAB_05313d58:
      uVar8 = FUN_02922484(*unaff_x19,*puVar6);
                    /* WARNING: Could not recover jumptable at 0x05313d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),uVar8,*(undefined8 *)(lVar7 + 0x28))
      ;
      return;
    }
    uVar8 = *(undefined8 *)Oculus_Platform_Models_BlockedUserList_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    puVar1 = Oculus_Platform_Models_ChallengeEntryList_TypeInfo;
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1aa0);
      puVar6 = (undefined8 *)UnityEngine_UIElements_BlurEvent_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)Oculus_Platform_Models_ChallengeEntryList_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1ab0);
      puVar6 = (undefined8 *)Oculus_Platform_Models_ChallengeList_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar1;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1ac0);
      puVar6 = (undefined8 *)Oculus_Platform_Models_ChallengeList_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar1;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1ad0);
      puVar6 = (undefined8 *)Oculus_Platform_Models_ChallengeList_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_ConsoleDriver_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1ae0);
      puVar6 = (undefined8 *)System_ConsoleKeyInfo_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar1;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1af0);
      puVar6 = (undefined8 *)Oculus_Platform_Models_ChallengeList_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Security_Cryptography_DSASignatureFormatter_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1b00);
      puVar6 = (undefined8 *)UnityEngine_UIElements_DataBinding_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Data_DataCommonEventSource_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1b10);
      puVar6 = (undefined8 *)System_Data_DataError_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Data_DataColumn_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1b20);
      puVar6 = (undefined8 *)System_Data_DataColumnChangeEventArgs_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Xml_Schema_Datatype_string_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1b30);
      puVar6 = (undefined8 *)System_Xml_Schema_Datatype_time_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Xml_Schema_Datatype_token_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1b40);
      puVar6 = (undefined8 *)System_Xml_Schema_Datatype_tokenV1Compat_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)PlayFab_MultiplayerModels_DeleteSecretRequest_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1b50);
      puVar6 = (undefined8 *)PlayFab_ProgressionModels_DeleteStatisticDefinitionRequest_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Net_DigestClient_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1b60);
      puVar6 = (undefined8 *)System_Net_DigestHeaderParser_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *unaff_x23;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1b70);
      puVar6 = (undefined8 *)Newtonsoft_Json_Bson_BsonObjectId_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *unaff_x23;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1b80);
      puVar6 = (undefined8 *)Newtonsoft_Json_Bson_BsonObjectId_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *unaff_x23;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1b90);
      puVar6 = (undefined8 *)Newtonsoft_Json_Bson_BsonObjectId_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *unaff_x23;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1ba0);
      puVar6 = (undefined8 *)Newtonsoft_Json_Bson_BsonObjectId_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *unaff_x23;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1bb0);
      puVar6 = (undefined8 *)Newtonsoft_Json_Bson_BsonObjectId_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)PlayFab_EconomyModels_GetInventoryCollectionIdsRequest_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1bc0);
      puVar6 = (undefined8 *)PlayFab_EconomyModels_GetInventoryCollectionIdsResponse_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_ComputeBuffer_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1440);
      puVar6 = (undefined8 *)UnityEngine_Rendering_ComputeCommandBuffer_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)Oculus_Platform_Models_AppDownloadResult_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1450);
      puVar6 = (undefined8 *)Photon_Realtime_AppSettings_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)Oculus_Platform_Models_ApplicationInvite_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1460);
      puVar6 = (undefined8 *)Oculus_Platform_Models_ApplicationInviteList_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)
             UnityEngine_XR_Interaction_Toolkit_Locomotion_ApplyBodyTransformationsEventArgs_TypeInfo
    ;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1470);
      puVar6 = (undefined8 *)PlayFab_GroupsModels_ApplyToGroupRequest_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_Events_ArgumentCache_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    puVar1 = System_AppContextSwitches_TypeInfo;
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1480);
      puVar6 = (undefined8 *)System_ArgumentException_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_AppContextSwitches_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1490);
      puVar6 = (undefined8 *)System_AppDomain_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Linq_Expressions_AssignBinaryExpression_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x14a0);
      puVar6 = (undefined8 *)
               System_Linq_Expressions_Interpreter_AssignLocalBoxedInstruction_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Xml_Schema_Asttree_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x14b0);
      puVar6 = (undefined8 *)System_Security_Cryptography_AsymmetricAlgorithm_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_AsyncCallback_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x14c0);
      puVar6 = (undefined8 *)System_ComponentModel_AsyncCompletedEventArgs_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Attribute_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    puVar2 = PlayFab_ClientModels_AttributeInstallResult_TypeInfo;
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x14d0);
      puVar6 = (undefined8 *)System_ComponentModel_AttributeCollection_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)PlayFab_ClientModels_AttributeInstallResult_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x14e0);
      puVar6 = (undefined8 *)System_Xml_AttributePSVIInfo_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Xml_Schema_AxisStack_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x14f0);
      puVar6 = (undefined8 *)UnityEngine_UIElements_UIR_BMPAlloc_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_UIElements_BackgroundPositionKeyword_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1500);
      puVar6 = (undefined8 *)UnityEngine_UIElements_BackgroundRepeat_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1510);
      puVar6 = (undefined8 *)System_Xml_AttributePSVIInfo_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_UIElements_BaseListViewController_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    puVar2 = System_Linq_Expressions_Interpreter_BranchLabel_TypeInfo;
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1520);
      puVar6 = (undefined8 *)System_Net_BaseLoggingObject_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Linq_Expressions_Interpreter_BranchLabel_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1530);
      puVar6 = (undefined8 *)System_Linq_Expressions_Interpreter_BranchTrueInstruction_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1540);
      puVar6 = (undefined8 *)System_Linq_Expressions_Interpreter_BranchTrueInstruction_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1550);
      puVar6 = (undefined8 *)System_Linq_Expressions_Interpreter_BranchTrueInstruction_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1560);
      puVar6 = (undefined8 *)System_Linq_Expressions_Interpreter_BranchTrueInstruction_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1570);
      puVar6 = (undefined8 *)System_Linq_Expressions_Interpreter_BranchTrueInstruction_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    puVar4 = System_DivideByZeroException_TypeInfo;
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1580);
      puVar6 = (undefined8 *)System_Linq_Expressions_Interpreter_BranchTrueInstruction_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_DivideByZeroException_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1590);
      puVar6 = (undefined8 *)System_Runtime_InteropServices_DllImportAttribute_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x15a0);
      puVar6 = (undefined8 *)System_Linq_Expressions_Interpreter_BranchTrueInstruction_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x15b0);
      puVar6 = (undefined8 *)System_Linq_Expressions_Interpreter_BranchTrueInstruction_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)Newtonsoft_Json_Bson_BsonValue_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x15c0);
      puVar6 = (undefined8 *)Newtonsoft_Json_Bson_BsonWriter_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)ExitGames_Client_Photon_ByteArraySlice_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x15d0);
      puVar6 = (undefined8 *)ExitGames_Client_Photon_ByteArraySlicePool_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_ByteMatcher_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x15e0);
      puVar6 = (undefined8 *)System_Xml_ByteStack_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_IO_CStreamReader_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x15f0);
      puVar6 = (undefined8 *)System_IO_CStreamWriter_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Xml_CachingEventHandler_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1600);
      puVar6 = (undefined8 *)System_Globalization_Calendar_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Runtime_CompilerServices_CallSiteBinder_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1610);
      puVar6 = (undefined8 *)Oculus_Platform_Callback_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar1;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1620);
      puVar6 = (undefined8 *)System_AppDomain_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Threading_CancellationToken_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1630);
      puVar6 = (undefined8 *)Cysharp_Threading_Tasks_Linq_CancellationTokenDisposable_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1640);
      puVar6 = (undefined8 *)System_Runtime_Remoting_Messaging_ConstructionResponse_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)PlayFab_ClientModels_ConsumeItemResult_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1650);
      puVar6 = (undefined8 *)PlayFab_ClientModels_ConsumeMicrosoftStoreEntitlementsRequest_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)PlayFab_ClientModels_ConsumePS5EntitlementsResult_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1660);
      puVar6 = (undefined8 *)PlayFab_ClientModels_ConsumePSNEntitlementsRequest_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)PlayFab_ClientModels_ConsumeXboxEntitlementsResult_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1670);
      puVar6 = (undefined8 *)UnityEngine_ContactFilter2D_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Runtime_Remoting_Contexts_Context_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    puVar3 = UnityEngine_UIElements_ContextClickEvent_TypeInfo;
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1680);
      puVar6 = (undefined8 *)System_Net_ContextAwareResult_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_UIElements_ContextClickEvent_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1690);
      puVar6 = (undefined8 *)UnityEngine_Rendering_ContextContainer_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x16a0);
      puVar6 = (undefined8 *)UnityEngine_Rendering_ContextContainer_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)ExitGames_Client_Photon_CustomType_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x16b0);
      puVar6 = (undefined8 *)Photon_Pun_CustomTypes_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_DBNull_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x16c0);
      puVar6 = (undefined8 *)UnityEngine_Rendering_Universal_DBufferCopyDepthPass_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Security_Cryptography_DES_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x16d0);
      puVar6 = (undefined8 *)System_Security_Cryptography_DESCryptoServiceProvider_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)Newtonsoft_Json_Converters_DataTableConverter_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x16e0);
      puVar6 = (undefined8 *)System_Data_DataTableNewRowEventArgs_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Data_DataTextWriter_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x16f0);
      puVar6 = (undefined8 *)UnityEngine_UIElements_StyleSheets_Syntax_DataType_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Data_DataViewManager_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1700);
      puVar6 = (undefined8 *)System_Data_DataViewManagerListItemTypeDescriptor_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    puVar3 = UnityEngine_DebugLogHandler_TypeInfo;
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1710);
      puVar6 = (undefined8 *)System_Runtime_InteropServices_DllImportAttribute_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_DebugLogHandler_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1720);
      puVar6 = (undefined8 *)UnityEngine_Rendering_DebugManager_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1730);
      puVar6 = (undefined8 *)UnityEngine_Rendering_DebugManager_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_Rendering_Universal_DebugHandler_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1740);
      puVar6 = (undefined8 *)System_Linq_Expressions_Interpreter_DebugInfo_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_Rendering_DebugRendererBatcherStats_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1750);
      puVar6 = (undefined8 *)UnityEngine_Rendering_Universal_DebugRendererLists_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1760);
      puVar6 = (undefined8 *)System_Runtime_InteropServices_DllImportAttribute_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    puVar3 = UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_TypeInfo;
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 6000);
      puVar6 = (undefined8 *)System_Runtime_InteropServices_DllImportAttribute_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1780);
      puVar6 = (undefined8 *)UnityEngine_Rendering_DepthState_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_Rendering_Universal_Internal_DeferredPass_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1790);
      puVar6 = (undefined8 *)System_IO_Compression_DeflateStream_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Net_DelayedRegex_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x17a0);
      puVar6 = (undefined8 *)System_Delegate_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_ComponentModel_DelegatingTypeDescriptionProvider_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x17b0);
      puVar6 = (undefined8 *)PlayFab_AddonModels_DeleteAppleRequest_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)PlayFab_MultiplayerModels_DeleteBuildAliasRequest_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x17c0);
      puVar6 = (undefined8 *)PlayFab_MultiplayerModels_DeleteBuildRegionRequest_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)PlayFab_EconomyModels_DeleteEntityItemReviewsResponse_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x17d0);
      puVar6 = (undefined8 *)PlayFab_ExperimentationModels_DeleteExclusionGroupRequest_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)PlayFab_MultiplayerModels_DeleteContainerImageRequest_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x17e0);
      puVar6 = (undefined8 *)PlayFab_EventsModels_DeleteDataConnectionRequest_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)PlayFab_AddonModels_DeleteSteamRequest_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x17f0);
      puVar6 = (undefined8 *)PlayFab_AddonModels_DeleteSteamResponse_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)PlayFab_AddonModels_DeleteToxModRequest_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1800);
      puVar6 = (undefined8 *)PlayFab_AddonModels_DeleteToxModResponse_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1810);
      puVar6 = (undefined8 *)UnityEngine_Rendering_DepthState_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Runtime_Serialization_DeserializationEventHandler_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1820);
      puVar6 = (undefined8 *)ExitGames_Client_Photon_DeserializeStreamMethod_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)Oculus_Platform_Models_DestinationList_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1830);
      puVar6 = (undefined8 *)UnityEngine_UIElements_DetachFromPanelEvent_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)Photon_Voice_DeviceFeatures_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1840);
      puVar6 = (undefined8 *)Photon_Voice_DeviceInfo_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Xml_Schema_DfaContentValidator_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1850);
      puVar6 = (undefined8 *)Cysharp_Threading_Tasks_Internal_DiagnosticsExtensions_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)ExitGames_Client_Photon_DisconnectMessage_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1860);
      puVar6 = (undefined8 *)UnityEngine_InputSystem_Controls_DiscreteButtonControl_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Runtime_Remoting_DisposerReplySink_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1870);
      puVar6 = (undefined8 *)System_Linq_Expressions_Interpreter_DivInstruction_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_InputForUI_EventConsumer_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1880);
      puVar6 = (undefined8 *)PlayFab_EventsModels_EventContents_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1890);
      puVar6 = (undefined8 *)System_Runtime_InteropServices_DllImportAttribute_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Text_RegularExpressions_ExclusiveReference_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x18a0);
      puVar6 = (undefined8 *)PlayFab_ClientModels_ExecuteCloudScriptRequest_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_UIElements_ExecuteCommandEvent_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x18b0);
      puVar6 = (undefined8 *)PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_ExpressionEvaluator_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x18c0);
      puVar6 = (undefined8 *)System_Data_ExpressionParser_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x18d0);
      puVar6 = (undefined8 *)System_IO_Enumeration_FileSystemName_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x18e0);
      puVar6 = (undefined8 *)System_Linq_Expressions_Interpreter_BranchTrueInstruction_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)
             UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_Primitives_FloatAffordanceTheme_TypeInfo
    ;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x18f0);
      puVar6 = (undefined8 *)UnityEngine_UIElements_FloatField_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)Unity_Burst_FloatPrecision_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1900);
      puVar6 = (undefined8 *)
               UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_Primitives_FloatTweenableVariable_TypeInfo
      ;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1910);
      puVar6 = (undefined8 *)System_Runtime_InteropServices_DllImportAttribute_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)PlayFab_AddonModels_GetAppleRequest_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1920);
      puVar6 = (undefined8 *)PlayFab_AddonModels_GetAppleResponse_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1930);
      puVar6 = (undefined8 *)System_Linq_Expressions_Interpreter_BranchTrueInstruction_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar1;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1940);
      puVar6 = (undefined8 *)System_AppDomain_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1950);
      puVar6 = (undefined8 *)System_Linq_Expressions_Interpreter_BranchTrueInstruction_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1960);
      puVar6 = (undefined8 *)System_Linq_Expressions_Interpreter_BranchTrueInstruction_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1970);
      puVar6 = (undefined8 *)System_Linq_Expressions_Interpreter_BranchTrueInstruction_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1980);
      puVar6 = (undefined8 *)System_Runtime_InteropServices_DllImportAttribute_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1990);
      puVar6 = (undefined8 *)System_Runtime_InteropServices_DllImportAttribute_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x19a0);
      puVar6 = (undefined8 *)System_Linq_Expressions_Interpreter_BranchTrueInstruction_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x19b0);
      puVar6 = (undefined8 *)System_Linq_Expressions_Interpreter_BranchTrueInstruction_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEditor_Analytics_CollabOperationAnalytic_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x19c0);
      puVar6 = (undefined8 *)System_ComponentModel_CollectionChangeEventArgs_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Xml_Schema_ChameleonKey_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x19d0);
      puVar6 = (undefined8 *)PlayFab_GroupsModels_ChangeMemberRoleRequest_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Runtime_Remoting_ChannelData_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x19e0);
      puVar6 = (undefined8 *)System_Runtime_Remoting_ChannelInfo_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Xml_Schema_Datatype_IDREF_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x19f0);
      puVar6 = (undefined8 *)System_Xml_Schema_Datatype_List_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Xml_Schema_Datatype_NCName_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1a00);
      puVar6 = (undefined8 *)System_Xml_Schema_Datatype_NMTOKEN_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)Newtonsoft_Json_Utilities_FSharpUtils_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1a10);
      puVar6 = (undefined8 *)TMPro_FastAction_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_IO_FileAccess_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1a20);
      puVar6 = (undefined8 *)System_Resources_FileBasedResourceGroveler_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_Rendering_Universal_Internal_FinalBlitPass_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1a30);
      puVar6 = (undefined8 *)PlayFab_DataModels_FinalizeFileUploadsRequest_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_FieldAccessException_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1a40);
      puVar6 = (undefined8 *)System_Linq_Expressions_Interpreter_FieldByRefUpdater_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)
             UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_Audio_AudioAffordanceThemeData_TypeInfo
    ;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x18);
      puVar6 = (undefined8 *)UnityEngine_AudioClip_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)Photon_Voice_IOS_AudioSessionParameters_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x28);
      puVar6 = (undefined8 *)Photon_Voice_IOS_AudioSessionParametersPresets_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)Photon_Voice_AudioInEnumeratorNotSupported_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x38);
      puVar6 = (undefined8 *)Photon_Voice_IOS_AudioSessionCategory_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)Photon_Realtime_AuthModeOption_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x48);
      puVar6 = (undefined8 *)PlayFab_AuthenticationModels_AuthenticateCustomIdRequest_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Net_Http_Headers_AuthenticationHeaderValue_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x58);
      puVar6 = (undefined8 *)System_Net_AuthenticationManager_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)Photon_Chat_AuthenticationValues_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x68);
      puVar6 = (undefined8 *)Photon_Realtime_AuthenticationValues_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Net_Authorization_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x78);
      puVar6 = (undefined8 *)UnityEngine_UIElements_Internal_AutoCompletePathVisitor_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Threading_AutoResetEvent_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x88);
      puVar6 = (undefined8 *)Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)Oculus_Platform_Models_AvatarEditorResult_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x98);
      puVar6 = (undefined8 *)System_Threading_Tasks_AwaitTaskContinuation_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)MS_Internal_Xml_XPath_Axis_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0xa8);
      puVar6 = (undefined8 *)UnityEngine_InputSystem_Controls_AxisControl_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Xml_Schema_BaseValidator_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0xb8);
      puVar6 = (undefined8 *)UnityEngine_UIElements_BaseVerticalCollectionView_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Runtime_Serialization_Formatters_Binary_BinaryArray_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 200);
      puVar6 = (undefined8 *)
               System_Runtime_Serialization_Formatters_Binary_BinaryArrayTypeEnum_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)Oculus_Platform_Models_BillingPlan_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0xd8);
      puVar6 = (undefined8 *)Oculus_Platform_Models_BillingPlanList_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)
             System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainString_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0xe8);
      puVar6 = (undefined8 *)System_Linq_Expressions_BinaryExpression_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_UIElements_BindingResult_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0xf8);
      puVar6 = (undefined8 *)UnityEngine_UIElements_BindingUpdateStage_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_Rendering_BitArray16_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x108);
      puVar6 = (undefined8 *)UnityEngine_Rendering_BitArray256_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_Rendering_BitArray8_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x118);
      puVar6 = (undefined8 *)System_BitConverter_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_ComponentModel_BooleanConverter_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x128);
      puVar6 = (undefined8 *)Newtonsoft_Json_Linq_JsonPath_BooleanQueryExpression_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_BoundsInt_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x138);
      puVar6 = (undefined8 *)UnityEngine_UIElements_BoundsIntField_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)Unity_XR_CoreUtils_BoundsUtils_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x148);
      puVar6 = (undefined8 *)UnityEngine_UIElements_Box_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_Rendering_CPUInstanceData_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x158);
      puVar6 = (undefined8 *)UnityEngine_Rendering_CPUPerCameraInstanceData_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Security_Claims_ClaimsPrincipal_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x168);
      puVar6 = (undefined8 *)UnityEngine_Rendering_ClampedFloatParameter_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Security_Cryptography_CipherMode_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x178);
      puVar6 = (undefined8 *)Mono_Security_Interface_CipherSuiteCode_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_UIElements_CollectionVirtualizationMethod_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x188);
      puVar6 = (undefined8 *)UnityEngine_Collider_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_ComponentModel_Component_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x198);
      puVar6 = (undefined8 *)UnityEngine_Component_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)UnityEngine_UIElements_ContextualMenuPopulateEvent_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1a8);
      puVar6 = (undefined8 *)Cysharp_Threading_Tasks_Internal_ContinuationQueue_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)Newtonsoft_Json_Utilities_ConvertUtils_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1b8);
      puVar6 = (undefined8 *)System_Runtime_Serialization_Formatters_Binary_Converter_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Data_DataKey_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1c8);
      puVar6 = (undefined8 *)System_ComponentModel_DataObjectAttribute_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Xml_Schema_Datatype_boolean_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1d8);
      puVar6 = (undefined8 *)System_Xml_Schema_Datatype_byte_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    uVar8 = *(undefined8 *)System_Xml_Schema_Datatype_floatXdr_TypeInfo;
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar8,0);
    uVar5 = FUN_0501afe8();
    if ((uVar5 & 1) != 0) {
      if (**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8) == 0)
      goto LAB_053299d8;
      lVar7 = *(long *)(**(long **)(*(long *)System_ComponentModel_EditorAttribute_TypeInfo + 0xb8)
                       + 0x1e8);
      puVar6 = (undefined8 *)System_Xml_Schema_Datatype_hexBinary_TypeInfo;
      if (lVar7 != 0) goto LAB_05313d58;
    }
    return;
  }
LAB_053299d8:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


