/*
FUNCTION_NAME: FUN_05b40990
ENTRY_POINT: 05b40990
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 FUN_05b40990(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_Start<WrappedLobbyService_<UpdateLobbyAsync>d__23>__
  ;
  if ((DAT_06dc2130 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_Start<WrappedLobbyService_<UpdatePlayerAsync>d__24>__
                );
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<TextShadow>_AddProperty<Vector2>__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<DeletePublicItemsAsync>d__16>__
                );
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<TextShadow>__ctor__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_Start<WrappedLobbyService_<UpdateLobbyAsync>d__23>__
                );
    DAT_06dc2130 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar4 = *(long *)puVar2;
  }
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_Start<WrappedLobbyService_<UpdatePlayerAsync>d__24>__
  ;
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  if ((long *)*puVar6 == param_1) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
  }
  else {
    lVar4 = *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_Start<WrappedLobbyService_<UpdatePlayerAsync>d__24>__
    ;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar4 = *(long *)puVar3;
    }
    puVar2 = Method_Unity_Properties_ContainerPropertyBag<TextShadow>_AddProperty<Vector2>__;
    puVar6 = *(undefined8 **)(lVar4 + 0xb8);
    if ((long *)*puVar6 == param_1) {
      lVar4 = *(long *)
               Method_Unity_Properties_ContainerPropertyBag<TextShadow>_AddProperty<Vector2>__;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar4 = *(long *)puVar2;
      }
      return **(undefined8 **)(lVar4 + 0xb8);
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar6 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    puVar2 = Method_Unity_Properties_ContainerPropertyBag<TextShadow>_AddProperty<Vector2>__;
    if ((long *)puVar6[1] != param_1) {
      uVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_Unity_Properties_ContainerPropertyBag<TextShadow>__ctor__);
      if (param_1 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<DeletePublicItemsAsync>d__16>__
                         + 0x130);
        if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<DeletePublicItemsAsync>d__16>__
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(param_1);
        }
      }
      FUN_05b40564(uVar5,param_1);
      return uVar5;
    }
    lVar4 = *(long *)Method_Unity_Properties_ContainerPropertyBag<TextShadow>_AddProperty<Vector2>__
    ;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar4 = *(long *)puVar2;
    }
    puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  }
  return puVar6[1];
}


