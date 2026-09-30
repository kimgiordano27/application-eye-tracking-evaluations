/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriterException$$.ctor
ENTRY_POINT: 0326c65c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long Newtonsoft_Json_JsonWriterException___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar8;
  undefined8 *unaff_x23;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0x820));
  FUN_01c5d288(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ForceAsyncAwaiter,_CryptoStream_<ReadAsyncInternal>d__37>__
              );
  FUN_01c5d288(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebReadStream_<ReadAsync>d__28>__
              );
  FUN_01c5d288(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<BufferedReadStream_<ProcessReadAsync>d__2>__
              );
  FUN_01c5d288(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<CryptoStream_<ReadAsyncCore>d__42>__
              );
  FUN_01c5d288(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebSocketReceiveResult>,_MqttWebSocketChannel_<ReadAsync>d__18>__
              );
  FUN_01c5d288(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_Start<HttpWebRequest_<MyGetResponseAsync>d__243>__
              );
  *(undefined1 *)(unaff_x20 + 0xb6f) = 1;
  lVar5 = thunk_FUN_01c496e0(*unaff_x23);
  FUN_03313b6c(lVar5,0);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_Start<HttpWebRequest_<MyGetResponseAsync>d__243>__
  ;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = unaff_x22;
    *(undefined8 *)(lVar5 + 0x18) = unaff_x21;
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar6 = *(long *)puVar1;
    }
    puVar4 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<CryptoStream_<ReadAsyncCore>d__42>__
    ;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ForceAsyncAwaiter,_CryptoStream_<ReadAsyncInternal>d__37>__
    ;
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ValueTaskAwaiter<int>,_CryptoStream_<ReadAsyncCore>d__42>__
    ;
    if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x28) == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar6 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar6 + 0xb8);
      uVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebReadStream_<ReadAsync>d__28>__
                                );
      FUN_02b348e0(uVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<BufferedReadStream_<ProcessReadAsync>d__2>__
                   ,0);
      *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = uVar7;
    }
    lVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
    FUN_02b30b78();
    uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
    FUN_02b34780(uVar7,lVar5,*(undefined8 *)puVar4,0);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x30) = uVar7;
      return lVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


