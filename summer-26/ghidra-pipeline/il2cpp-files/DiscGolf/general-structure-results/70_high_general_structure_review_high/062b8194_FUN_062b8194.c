/*
FUNCTION_NAME: FUN_062b8194
ENTRY_POINT: 062b8194
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_062b8194(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_069fb990;
  if ((DAT_06dc772d & 1) == 0) {
    FUN_02d965b8(Method_Unity_Netcode_SceneEventData_CopySceneSynchronizationData__);
    FUN_02d965b8(Method_Unity_Netcode_SceneEventData_IsDoneWithSynchronization__);
    FUN_02d965b8(Method_Unity_Netcode_SceneEventData_SerializeObjectsMovedIntoNewScene__);
    FUN_02d965b8(Method_Unity_Netcode_SceneEventData_SortChildrenNetworkObjects__);
    FUN_02d965b8(Method_Unity_Netcode_SceneEventData_SortNetworkObjects__);
    FUN_02d965b8(Method_Unity_Netcode_SceneEventProgress_<SetAsyncOperation>b__37_0__);
    FUN_02d965b8(Method_Unity_Netcode_SceneEventProgress_OnClientDisconnectCallback__);
    FUN_02d965b8(Method_Meta_XR_ImmersiveDebugger_SceneSetup_SetupImmersiveDebugger__);
    FUN_02d965b8(Method_System_Xml_Schema_SchemaCollectionCompiler_CompileAttribute__);
    FUN_02d965b8(Method_System_Xml_Schema_SchemaCollectionCompiler_CompileBaseMemberTypes__);
    FUN_02d965b8(Method_System_Runtime_Serialization_SchemaExporter_InvokeSchemaProviderMethod__);
    FUN_02d965b8(Method_System_Xml_Schema_SchemaInfo_GetAttributeXdr__);
    FUN_02d965b8(Method_System_Xml_Schema_SchemaInfo_GetAttributeXsd__);
    FUN_02d965b8(Method_System_Linq_Expressions_Scope1_GetExpression__);
    FUN_02d965b8(Method_Assets_Scripts_Scoring_ScoreManagerProvider_HandleScoresUpdated__);
    FUN_02d965b8(PTR_DAT_069fb990);
    DAT_06dc772d = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar2 = FUN_06350670(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x1b8);
    if (lVar3 == 0) {
LAB_062b845c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *(long *)(lVar3 + 0x158);
    if (lVar5 != 0) {
      uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_Meta_XR_ImmersiveDebugger_SceneSetup_SetupImmersiveDebugger__
                                );
      FUN_04be213c(uVar4,param_1,
                   *(undefined8 *)Method_Unity_Netcode_SceneEventData_CopySceneSynchronizationData__
                   ,0);
      FUN_03ba14b4(lVar5,uVar4,
                   *(undefined8 *)
                    Method_Assets_Scripts_Scoring_ScoreManagerProvider_HandleScoresUpdated__);
      lVar3 = *(long *)(param_1 + 0x1b8);
      if (lVar3 == 0) goto LAB_062b845c;
    }
    lVar5 = *(long *)(lVar3 + 0x160);
    if (lVar5 != 0) {
      uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Xml_Schema_SchemaCollectionCompiler_CompileBaseMemberTypes__
                                );
      FUN_04be213c(uVar4,param_1,
                   *(undefined8 *)Method_Unity_Netcode_SceneEventData_IsDoneWithSynchronization__,0)
      ;
      FUN_03ba14b4(lVar5,uVar4,*(undefined8 *)Method_System_Linq_Expressions_Scope1_GetExpression__)
      ;
      lVar3 = *(long *)(param_1 + 0x1b8);
      if (lVar3 == 0) goto LAB_062b845c;
    }
    lVar5 = *(long *)(lVar3 + 0x170);
    if (lVar5 != 0) {
      uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_Unity_Netcode_SceneEventProgress_<SetAsyncOperation>b__37_0__
                                );
      FUN_04be213c(uVar4,param_1,
                   *(undefined8 *)
                    Method_Unity_Netcode_SceneEventData_SerializeObjectsMovedIntoNewScene__,0);
      FUN_03ba14b4(lVar5,uVar4,*(undefined8 *)Method_System_Xml_Schema_SchemaInfo_GetAttributeXsd__)
      ;
      lVar3 = *(long *)(param_1 + 0x1b8);
      if (lVar3 == 0) goto LAB_062b845c;
    }
    lVar5 = *(long *)(lVar3 + 0x178);
    if (lVar5 != 0) {
      uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Xml_Schema_SchemaCollectionCompiler_CompileAttribute__
                                );
      FUN_04be213c(uVar4,param_1,
                   *(undefined8 *)Method_Unity_Netcode_SceneEventData_SortChildrenNetworkObjects__,0
                  );
      FUN_03ba14b4(lVar5,uVar4,*(undefined8 *)Method_System_Xml_Schema_SchemaInfo_GetAttributeXdr__)
      ;
      lVar3 = *(long *)(param_1 + 0x1b8);
      if (lVar3 == 0) goto LAB_062b845c;
    }
    lVar3 = *(long *)(lVar3 + 0x168);
    if (lVar3 != 0) {
      uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_Unity_Netcode_SceneEventProgress_OnClientDisconnectCallback__
                                );
      FUN_04be213c(uVar4,param_1,
                   *(undefined8 *)Method_Unity_Netcode_SceneEventData_SortNetworkObjects__,0);
      FUN_03ba14b4(lVar3,uVar4,
                   *(undefined8 *)
                    Method_System_Runtime_Serialization_SchemaExporter_InvokeSchemaProviderMethod__)
      ;
      return;
    }
  }
  return;
}


