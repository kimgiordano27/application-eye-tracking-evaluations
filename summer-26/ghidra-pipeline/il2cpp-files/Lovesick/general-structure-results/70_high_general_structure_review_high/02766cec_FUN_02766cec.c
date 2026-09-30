/*
FUNCTION_NAME: FUN_02766cec
ENTRY_POINT: 02766cec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_3;telemetry_or_network_hits_10
*/


void FUN_02766cec(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_0378856d & 1) == 0) {
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass6_0_<DOJump>b__0__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_get_Task__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Regex_CachedCodeEntryKey,_Regex_CachedCodeEntry>_Add__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<bool>>_AwaitUnsafeOnCompleted<TaskAwaiter<VRequestResponse<bool>>,_WitTTSVRequest_<RequestStream>d__24>__
                      );
    thunk_FUN_00d48444(System_Globalization_CultureInfo_var);
    thunk_FUN_00d48444(FullSerializer_fsJsonParser_TypeInfo);
    thunk_FUN_00d48444(Method_System_Diagnostics_Process_get_ExitCode__);
    DAT_0378856d = 1;
  }
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<Regex_CachedCodeEntryKey,_Regex_CachedCodeEntry>_Add__
  ;
  puVar2 = System_Globalization_CultureInfo_var;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  lVar5 = FUN_012c4efc(*(undefined8 *)puVar3);
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<bool>>_AwaitUnsafeOnCompleted<TaskAwaiter<VRequestResponse<bool>>,_WitTTSVRequest_<RequestStream>d__24>__
  ;
  puVar2 = FullSerializer_fsJsonParser_TypeInfo;
  if (lVar4 == lVar5) {
    lVar4 = *param_2;
    bVar1 = *(byte *)(*(long *)
                       Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass6_0_<DOJump>b__0__ +
                     300);
    if ((bVar1 <= *(byte *)(lVar4 + 300)) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass6_0_<DOJump>b__0__)) {
      if (*(int *)(*(long *)Method_System_Diagnostics_Process_get_ExitCode__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_027f33e8(0);
      *(undefined8 *)(param_1 + 0x3c0) = uVar6;
      goto LAB_02766e48;
    }
  }
  else {
    lVar4 = *param_2;
  }
  (**(code **)(lVar4 + 0x188))(param_2,*(undefined8 *)(lVar4 + 400));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_012c4efc(*(undefined8 *)puVar3);
LAB_02766e48:
  FUN_027fe724(param_1,param_2,0);
  return;
}


