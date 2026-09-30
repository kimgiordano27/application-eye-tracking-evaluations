/*
FUNCTION_NAME: System.Xml.Schema.NamespaceListNode$$.ctor
ENTRY_POINT: 054c34f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void System_Xml_Schema_NamespaceListNode___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar13;
  undefined8 *unaff_x23;
  undefined8 uVar14;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  
  *(undefined8 *)(unaff_x21 + 0x20) = unaff_x20;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x21 + 0x20));
  uVar7 = thunk_FUN_02b79644(*unaff_x24);
  FUN_054c3ca4(uVar7,0,*(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_get_Task__
              );
  uVar8 = thunk_FUN_02b79644(*unaff_x23);
  FUN_054c3d58(uVar8,0x2a,7,uVar7);
  if ((*(uint *)(unaff_x21 + 0x18) & 0xfffffffe) != 0) {
    *(undefined8 *)(unaff_x19 + 0x28) = uVar8;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x28),uVar8);
    uVar7 = thunk_FUN_02b79644(*unaff_x24);
    FUN_054c3ca4(uVar7,0,*unaff_x26);
    uVar8 = thunk_FUN_02b79644(*unaff_x23);
    FUN_054c3d58(uVar8,0x2b,0,uVar7);
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x30) = uVar8;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x30),uVar8);
      uVar7 = thunk_FUN_02b79644(*unaff_x24);
      FUN_054c3ca4(uVar7,0,*unaff_x28);
      uVar8 = thunk_FUN_02b79644(*unaff_x23);
      FUN_054c3d58(uVar8,0x2c,0,uVar7);
      puVar3 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetResult__;
      puVar2 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_SetException__;
      if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
        *(undefined8 *)(unaff_x19 + 0x38) = uVar8;
        thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x38),uVar8);
        *(long *)(*(long *)(*unaff_x27 + 0xb8) + 0x60) = unaff_x19;
        thunk_FUN_02bb0e9c();
        lVar9 = FUN_02b3c908(*(undefined8 *)puVar3,9);
        uVar8 = **(undefined8 **)(*unaff_x27 + 0xb8);
        uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
        FUN_054c3e1c(uVar7,0,uVar8,0,0,0,0,0);
        puVar6 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__;
        puVar1 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetException__;
        puVar5 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Create__;
        puVar4 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_SetStateMachine__
        ;
        puVar3 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_Start<XmlUrlResolver_<GetEntityAsync>d__15>__
        ;
        puVar2 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
        ;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(int *)(lVar9 + 0x18) != 0) {
          *(undefined8 *)(lVar9 + 0x20) = uVar7;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20),uVar7);
          uVar13 = *(undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 8);
          uVar14 = *(undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 0x28);
          uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
          FUN_054c3ec8(uVar7,0,*(undefined8 *)puVar5);
          uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
          FUN_054c3f7c(uVar8,0,*(undefined8 *)puVar3);
          uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
          FUN_054c402c(uVar10,0,*(undefined8 *)puVar4);
          uVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_SetException__
                                     );
          FUN_054c3e1c(uVar11,0x1f,uVar13,uVar14,uVar7,uVar8,uVar10,0);
          puVar5 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_MonoTlsStream_<CreateStream>d__18>__
          ;
          puVar4 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Create__
          ;
          puVar3 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Stream>,_XmlUrlResolver_<GetEntityAsync>d__15>__
          ;
          if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar9 + 0x28) = uVar11;
            thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x28),uVar11);
            puVar6 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__;
            puVar1 = 
            UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassScriptInfo_TypeInfo;
            uVar13 = *(undefined8 *)
                      (*(long *)(*(long *)
                                  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassScriptInfo_TypeInfo
                                + 0xb8) + 0x10);
            uVar14 = *(undefined8 *)
                      (*(long *)(*(long *)
                                  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassScriptInfo_TypeInfo
                                + 0xb8) + 0x30);
            uVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
                                      );
            FUN_054c3ec8(uVar7,0,*(undefined8 *)puVar5);
            uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
            FUN_054c3f7c(uVar8,0,*(undefined8 *)puVar3);
            uVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetException__
                                       );
            FUN_054c402c(uVar10,0,*(undefined8 *)puVar4);
            uVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_SetException__
                                       );
            FUN_054c3e1c(uVar11,0x20,uVar13,uVar14,uVar7,uVar8,uVar10,0);
            puVar5 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_SetException__;
            puVar4 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_StreamingAssetsConfigurationLoader_<GetConfigAsync>d__2>__
            ;
            puVar3 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetStateMachine__
            ;
            if (2 < *(uint *)(lVar9 + 0x18)) {
              *(undefined8 *)(lVar9 + 0x30) = uVar11;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x30),uVar11);
              uVar13 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
              uVar14 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
              uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
              FUN_054c3ec8(uVar7,0,*(undefined8 *)puVar5);
              uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
              FUN_054c3f7c(uVar8,0,*(undefined8 *)puVar3);
              uVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetException__
                                         );
              FUN_054c402c(uVar10,0,*(undefined8 *)puVar4);
              uVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_SetException__
                                         );
              FUN_054c3e1c(uVar11,0x23,uVar13,uVar14,uVar7,uVar8,uVar10,0);
              puVar3 = 
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<MonoTlsStream_<CreateStream>d__18>__
              ;
              puVar2 = 
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_SetException__
              ;
              if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
                *(undefined8 *)(lVar9 + 0x38) = uVar11;
                thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x38),uVar11);
                uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
                uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                FUN_054c3ec8(uVar7,0,*(undefined8 *)puVar3);
                uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetException__
                                          );
                FUN_054c402c(uVar8,0,*(undefined8 *)puVar2);
                puVar2 = 
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_SetException__
                ;
                uVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_SetException__
                                           );
                FUN_054c3e1c(uVar10,0x21,0,uVar11,uVar7,0,uVar8,0);
                puVar5 = 
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_SetResult__;
                puVar4 = 
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Start<CorePackageInitializer_<GetSerializedConfigOrEmptyAsync>d__54>__
                ;
                puVar3 = 
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
                ;
                if (4 < *(uint *)(lVar9 + 0x18)) {
                  *(undefined8 *)(lVar9 + 0x40) = uVar10;
                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x40),uVar10);
                  uVar13 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
                  uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                  FUN_054c3ec8(uVar7,0,*(undefined8 *)puVar5);
                  uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                                            );
                  FUN_054c3f7c(uVar8,0,*(undefined8 *)puVar3);
                  uVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetException__
                                             );
                  FUN_054c402c(uVar10,0,*(undefined8 *)puVar4);
                  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                  FUN_054c3e1c(uVar11,0x24,0,uVar13,uVar7,uVar8,uVar10,0);
                  puVar4 = 
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
                  ;
                  puVar3 = 
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_SetResult__
                  ;
                  if (5 < *(uint *)(lVar9 + 0x18)) {
                    *(undefined8 *)(lVar9 + 0x48) = uVar11;
                    thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x48),uVar11);
                    uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
                    uVar13 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
                    uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                    FUN_054c3ec8(uVar7,0,*(undefined8 *)puVar4);
                    uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetException__
                                              );
                    FUN_054c402c(uVar8,0,*(undefined8 *)puVar3);
                    uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                    FUN_054c3e1c(uVar10,0x22,uVar11,uVar13,uVar7,0,uVar8,0);
                    puVar4 = 
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebResponse>,_XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
                    ;
                    puVar3 = 
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Start<StreamingAssetsConfigurationLoader_<GetConfigAsync>d__2>__
                    ;
                    if (6 < *(uint *)(lVar9 + 0x18)) {
                      *(undefined8 *)(lVar9 + 0x50) = uVar10;
                      thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x50),uVar10);
                      uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58);
                      uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                      FUN_054c3ec8(uVar7,0,*(undefined8 *)puVar4);
                      uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetException__
                                                );
                      FUN_054c402c(uVar8,0,*(undefined8 *)puVar3);
                      uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                      FUN_054c3e1c(uVar10,0x25,0,uVar11,uVar7,0,uVar8,1);
                      puVar4 = 
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_get_Task__
                      ;
                      puVar3 = 
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_AwaitUnsafeOnCompleted<TaskAwaiter<SerializableProjectConfiguration>,_CorePackageInitializer_<GetSerializedConfigOrEmptyAsync>d__54>__
                      ;
                      if ((*(uint *)(lVar9 + 0x18) & 0xfffffff8) != 0) {
                        *(undefined8 *)(lVar9 + 0x58) = uVar10;
                        thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x58),uVar10);
                        uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60);
                        uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                        FUN_054c3ec8(uVar7,0,*(undefined8 *)puVar4);
                        uVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetException__
                                                  );
                        FUN_054c402c(uVar8,0,*(undefined8 *)puVar3);
                        uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                        FUN_054c3e1c(uVar10,0x25,0,uVar11,uVar7,0,uVar8,1);
                        if (8 < *(uint *)(lVar9 + 0x18)) {
                          *(undefined8 *)(lVar9 + 0x60) = uVar10;
                          thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x60),uVar10);
                          plVar12 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
                          *plVar12 = lVar9;
                          thunk_FUN_02bb0e9c(plVar12,lVar9);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


