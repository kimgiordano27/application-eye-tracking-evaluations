/*
FUNCTION_NAME: FUN_058aa8ac
ENTRY_POINT: 058aa8ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined1  [16] FUN_058aa8ac(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((DAT_066d31c1 & 1) == 0) {
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                );
    DAT_066d31c1 = 1;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0x44);
    lVar4 = *(long *)
             Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
    ;
    lVar3 = *(long *)(lVar4 + 0x38);
    if (lVar3 == 0) {
      FUN_02b76274(lVar4);
      lVar3 = *(long *)(lVar4 + 0x38);
    }
    lVar3 = FUN_0322b7a0(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar3 + 0x10));
    if (iVar2 < 0) {
      FUN_04d9bcc4(0);
    }
    auVar5._0_8_ = lVar3 + (long)iVar1 * 0x18;
    auVar5._8_4_ = iVar2;
    auVar5._12_4_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


