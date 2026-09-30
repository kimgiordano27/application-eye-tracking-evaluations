/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$ToArray
ENTRY_POINT: 03c6e71c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__ToArray
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03448878(*(undefined8 *)(param_1 + 0x10),param_2,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                      0x40) + 0x20) + 0xc0) + 0x38));
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_03aac218(*(long *)(param_1 + 0x10),uVar1,0,
                 *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48));
    if (*(int *)(param_1 + 0x24) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_03aadb8c(*(long *)(param_1 + 0x10),uVar1,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50));
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_03aadfbc(*(long *)(param_1 + 0x10),
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x58));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


