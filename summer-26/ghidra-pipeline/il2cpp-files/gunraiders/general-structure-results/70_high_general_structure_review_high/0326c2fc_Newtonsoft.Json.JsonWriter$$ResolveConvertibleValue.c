/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$ResolveConvertibleValue
ENTRY_POINT: 0326c2fc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


long Newtonsoft_Json_JsonWriter__ResolveConvertibleValue(void)

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
  
  FUN_01c5d288(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_SetStateMachine__
              );
  FUN_01c5d288(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_Start<HttpWebRequest_<MyGetResponseAsync>d__243>__
              );
  *(undefined1 *)(unaff_x20 + 0xb6d) = 1;
  lVar5 = thunk_FUN_01c496e0(*unaff_x23);
  FUN_03313b6c(lVar5,0);
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_Start<HttpWebRequest_<MyGetResponseAsync>d__243>__
  ;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = unaff_x22;
    *(undefined8 *)(lVar5 + 0x18) = unaff_x21;
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar6 = *(long *)puVar3;
    }
    puVar4 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<AsyncProtocolResult>,_MobileAuthenticatedStream_<StartOperation>d__57>__
    ;
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>,_HttpWebRequest_<MyGetResponseAsync>d__243>__
    ;
    puVar1 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HashGeneratorResult>_get_Task__;
    if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x18) == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar6 = *(long *)puVar3;
      }
      uVar8 = **(undefined8 **)(lVar6 + 0xb8);
      uVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebRequestStream>,_HttpWebRequest_<MyGetResponseAsync>d__243>__
                                );
      FUN_02b348e0(uVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_get_Task__
                   ,0);
      *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar7;
    }
    lVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_02b30b78();
    uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
    FUN_02b34780(uVar7,lVar5,*(undefined8 *)puVar4,0);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x30) = uVar7;
      return lVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


