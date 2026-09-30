/*
FUNCTION_NAME: FUN_058a7208
ENTRY_POINT: 058a7208
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_058a7208(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_06312a80;
  if ((DAT_066d31b4 & 1) == 0) {
    FUN_02b3c81c(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRFuture_<When>d__0>__
                );
    FUN_02b3c81c(PTR_DAT_06312a80);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
                );
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__);
    DAT_066d31b4 = 1;
  }
  puVar3 = Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__;
  puVar2 = 
  Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
  ;
  uVar6 = *(undefined8 *)puVar1;
  if (-1 < *(int *)(param_2 + 0xcc)) {
    if ((param_1 == 0) || (*(long *)(param_1 + 0x28) == 0)) goto LAB_058a7320;
    puVar4 = (undefined8 *)
             FUN_0463ca1c(*(long *)(param_1 + 0x28),*(int *)(param_2 + 0xcc),
                          *(undefined8 *)
                           Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                         );
    uVar6 = FUN_04c0ab28(uVar6,*(undefined8 *)puVar3,*puVar4,*(undefined8 *)puVar2,0);
  }
  puVar1 = 
  Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRFuture_<When>d__0>__
  ;
  lVar5 = *(long *)
           Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRFuture_<When>d__0>__
  ;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar5 = *(long *)puVar1;
  }
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 != 0) {
    if (*(uint *)(param_2 + 200) < *(uint *)(lVar5 + 0x18)) {
      FUN_04bffdac(uVar6,*(undefined8 *)(lVar5 + (long)(int)*(uint *)(param_2 + 200) * 8 + 0x20),0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
LAB_058a7320:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


