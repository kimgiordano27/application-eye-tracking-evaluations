/*
FUNCTION_NAME: FUN_05d7e3fc
ENTRY_POINT: 05d7e3fc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05d7e3fc(long param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_24;
  
  local_24 = param_2;
  if ((DAT_06b82cf5 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067693c0);
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                );
    FUN_02d6084c(PTR_DAT_0676e8f8);
    FUN_02d6084c(PTR_DAT_0676ba80);
    FUN_02d6084c(
                Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__
                );
    DAT_06b82cf5 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = FUN_0371b670(*(long *)(param_1 + 0x18),param_2,*(undefined8 *)PTR_DAT_0676e8f8);
    puVar1 = Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__
    ;
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_047cadf0(*(long *)(param_1 + 0x10),param_2,param_3,
                     *(undefined8 *)
                      Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                    );
        return;
      }
    }
    else {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_NativeParallelHashMap<SharedInstanceHandle,_int>_TryGetValue__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05d7e758(param_3);
      if (param_3 != 0) {
        lVar3 = FUN_05d69ae4(param_3,0);
        uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
        uVar4 = FUN_050048bc(&local_24,0);
        uVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676ba80);
        FUN_05d684e8(uVar5,uVar4,0);
        if (lVar3 != 0) {
          FUN_048956dc(lVar3,uVar6,uVar5,*(undefined8 *)PTR_DAT_067693c0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


