/*
FUNCTION_NAME: FUN_05d7f7ac
ENTRY_POINT: 05d7f7ac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d7f7ac(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_24;
  
  local_24 = param_2;
  if ((DAT_06b82d0e & 1) == 0) {
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                );
    FUN_02d6084c(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneRoom_<LoadRoom>d__19>__
                );
    DAT_06b82d0e = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_047caff8(*(long *)(param_1 + 0x20),param_2,
                         *(undefined8 *)
                          Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                        );
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_050048bc(&local_24,0);
      uVar3 = thunk_FUN_02dc61f4(
                                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__
                                );
      uVar4 = thunk_FUN_02dc61f4(
                                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchAnchorsAsync>d__56>__
                                );
      uVar2 = FUN_04e8db00(uVar3,uVar2,uVar4,0);
      thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
      uVar3 = thunk_FUN_02d9d534();
      FUN_05007004(uVar3,uVar2,0);
      uVar2 = thunk_FUN_02dc61f4(
                                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar3,uVar2);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_047cad64(*(long *)(param_1 + 0x20),param_2,
                   *(undefined8 *)
                    Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneRoom_<LoadRoom>d__19>__
                  );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


