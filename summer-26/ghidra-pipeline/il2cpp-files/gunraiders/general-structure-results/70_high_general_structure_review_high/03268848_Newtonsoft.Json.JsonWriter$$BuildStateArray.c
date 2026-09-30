/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$BuildStateArray
ENTRY_POINT: 03268848
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonWriter__BuildStateArray(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int unaff_w19;
  uint unaff_w20;
  undefined2 *unaff_x22;
  long lVar9;
  long unaff_x23;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  puVar2 = Oculus_Platform_Models_ProductList_TypeInfo;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  if (unaff_w20 == 0) {
LAB_03268a18:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  uVar1 = *(undefined2 *)(unaff_x23 + ((long)(((ulong)unaff_w20 << 0x20) + -0x100000000) >> 0x1f));
  if (*(int *)(*(long *)Oculus_Platform_Models_ProductList_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar5 = FUN_03227b38(uVar1,0);
  if ((uVar5 & 1) == 0) {
    if (unaff_w19 == 0) goto LAB_03268a18;
    uVar1 = *unaff_x22;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_03227b38(uVar1,0);
  }
  else {
    uVar4 = 1;
  }
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_ServicePointScheduler_<WaitAsync>d__46>__
  ;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__32>__
  ;
  uVar6 = FUN_02384d68();
  uVar7 = FUN_02384d68();
  uVar6 = FUN_0331c630(uVar6,0);
  uVar7 = FUN_0331c630(uVar7,0);
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  FUN_02687b68(&stack0x00000040,uVar6,unaff_w20,uVar7,unaff_w19,uVar4 & 1,*(undefined8 *)puVar3);
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar8 = *(long *)puVar2;
  }
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__32>__
  ;
  lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar9 == 0) {
    uStack0000000000000008 = in_stack_00000048;
    uStack0000000000000000 = in_stack_00000040;
    uStack0000000000000018 = in_stack_00000058;
    uStack0000000000000010 = in_stack_00000050;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar8 = *(long *)puVar2;
    }
    uVar6 = **(undefined8 **)(lVar8 + 0xb8);
    lVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_get_Task__
                              );
    FUN_030acb9c(lVar9,uVar6,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Stream>,_WebConnection_<CreateStream>d__18>__
                 ,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar9;
    in_stack_00000040 = uStack0000000000000000;
    in_stack_00000048 = uStack0000000000000008;
    in_stack_00000050 = uStack0000000000000010;
    in_stack_00000058 = uStack0000000000000018;
  }
  uStack0000000000000020 = in_stack_00000040;
  uStack0000000000000028 = in_stack_00000048;
  uStack0000000000000030 = in_stack_00000050;
  uStack0000000000000038 = in_stack_00000058;
  FUN_0242c3b8(unaff_w19 + unaff_w20 + (~uVar4 & 1),&stack0x00000040,lVar9,*(undefined8 *)puVar3);
  return;
}


