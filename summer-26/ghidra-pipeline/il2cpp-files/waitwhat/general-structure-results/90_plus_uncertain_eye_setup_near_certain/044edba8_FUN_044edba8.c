/*
FUNCTION_NAME: FUN_044edba8
ENTRY_POINT: 044edba8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_044edba8(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    LipSyncMicInput__CanStartMic(0xd,0x1b,0);
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (uVar2 == *(uint *)(lVar1 + 0x18)) {
      Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Length
                (param_1,uVar2 + 1,
                 *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x78));
      uVar2 = *(uint *)(param_1 + 0x18);
      lVar1 = *(long *)(param_1 + 0x10);
    }
    if (uVar2 - param_2 != 0 && (int)param_2 <= (int)uVar2) {
      FUN_0595261c(lVar1,param_2,lVar1,param_2 + 1,uVar2 - param_2,0);
      lVar1 = *(long *)(param_1 + 0x10);
    }
    if (lVar1 != 0) {
      if (param_2 < *(uint *)(lVar1 + 0x18)) {
        lVar1 = lVar1 + (long)(int)param_2 * 0x10;
        *(undefined8 *)(lVar1 + 0x20) = param_3;
        *(undefined8 *)(lVar1 + 0x28) = param_4;
        *(ulong *)(param_1 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(param_1 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


