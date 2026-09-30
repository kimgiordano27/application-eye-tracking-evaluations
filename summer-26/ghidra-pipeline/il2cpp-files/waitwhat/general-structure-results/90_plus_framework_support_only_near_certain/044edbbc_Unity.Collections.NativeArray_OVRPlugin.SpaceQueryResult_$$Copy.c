/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 044edbbc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 117
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint in_w8;
  long unaff_x23;
  
  if (in_w8 < param_2) {
    LipSyncMicInput__CanStartMic(0xd,0x1b,0);
    in_w8 = *(uint *)(param_1 + 0x18);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (in_w8 == *(uint *)(lVar1 + 0x18)) {
      Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Length
                (param_1,in_w8 + 1,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x78));
      in_w8 = *(uint *)(param_1 + 0x18);
      lVar1 = *(long *)(param_1 + 0x10);
    }
    if (in_w8 - param_2 != 0 && (int)param_2 <= (int)in_w8) {
      FUN_0595261c(lVar1,param_2,lVar1,param_2 + 1,in_w8 - param_2,0);
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


