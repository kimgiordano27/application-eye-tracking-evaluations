/*
FUNCTION_NAME: System.Xml.Schema.NamespaceListNode$$ConstructPos
ENTRY_POINT: 054c39b4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void System_Xml_Schema_NamespaceListNode__ConstructPos(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 unaff_x21;
  undefined8 uVar7;
  long unaff_x23;
  undefined8 *puVar8;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Start<CorePackageInitializer_<GetSerializedConfigOrEmptyAsync>d__54>__
  ;
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__;
  puVar8 = *(undefined8 **)(unaff_x23 + 0xb48);
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x21;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x40));
  uVar7 = *(undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 0x48);
  uVar3 = thunk_FUN_02b79644(*unaff_x27);
  FUN_054c3ec8(uVar3,0,*puVar8);
  uVar4 = thunk_FUN_02b79644(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                            );
  FUN_054c3f7c(uVar4,0,*(undefined8 *)puVar1);
  uVar5 = thunk_FUN_02b79644(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetException__
                            );
  FUN_054c402c(uVar5,0,*(undefined8 *)puVar2);
  uVar6 = thunk_FUN_02b79644(*unaff_x26);
  FUN_054c3e1c(uVar6,0x24,0,uVar7,uVar3,uVar4,uVar5,0);
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
  ;
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_SetResult__
  ;
  if (5 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x48) = uVar6;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x48),uVar6);
    uVar6 = *(undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 0x20);
    uVar7 = *(undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 0x50);
    uVar3 = thunk_FUN_02b79644(*unaff_x27);
    FUN_054c3ec8(uVar3,0,*(undefined8 *)puVar2);
    uVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetException__
                              );
    FUN_054c402c(uVar4,0,*(undefined8 *)puVar1);
    uVar5 = thunk_FUN_02b79644(*unaff_x26);
    FUN_054c3e1c(uVar5,0x22,uVar6,uVar7,uVar3,0,uVar4,0);
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebResponse>,_XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
    ;
    puVar1 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Start<StreamingAssetsConfigurationLoader_<GetConfigAsync>d__2>__
    ;
    if (6 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x50) = uVar5;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x50),uVar5);
      uVar6 = *(undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 0x58);
      uVar3 = thunk_FUN_02b79644(*unaff_x27);
      FUN_054c3ec8(uVar3,0,*(undefined8 *)puVar2);
      uVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetException__
                                );
      FUN_054c402c(uVar4,0,*(undefined8 *)puVar1);
      uVar5 = thunk_FUN_02b79644(*unaff_x26);
      FUN_054c3e1c(uVar5,0x25,0,uVar6,uVar3,0,uVar4,1);
      puVar2 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_get_Task__
      ;
      puVar1 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_AwaitUnsafeOnCompleted<TaskAwaiter<SerializableProjectConfiguration>,_CorePackageInitializer_<GetSerializedConfigOrEmptyAsync>d__54>__
      ;
      if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff8) != 0) {
        *(undefined8 *)(unaff_x19 + 0x58) = uVar5;
        thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x58),uVar5);
        uVar6 = *(undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 0x60);
        uVar3 = thunk_FUN_02b79644(*unaff_x27);
        FUN_054c3ec8(uVar3,0,*(undefined8 *)puVar2);
        uVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetException__
                                  );
        FUN_054c402c(uVar4,0,*(undefined8 *)puVar1);
        uVar5 = thunk_FUN_02b79644(*unaff_x26);
        FUN_054c3e1c(uVar5,0x25,0,uVar6,uVar3,0,uVar4,1);
        if (8 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x60) = uVar5;
          thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x60),uVar5);
          *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x68) = unaff_x19;
          thunk_FUN_02bb0e9c();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


