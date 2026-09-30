/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$op_Implicit
ENTRY_POINT: 03c6e124
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03c6e18c) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__op_Implicit
               (long param_1,undefined4 param_2,long param_3)

{
  char cStack000000000000000c;
  
  cStack000000000000000c = '\0';
  FUN_0506ac34();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_047cc274(*(long *)(param_1 + 0x18),param_2,
                 *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x68));
    if (cStack000000000000000c != '\0') {
      thunk_FUN_02d6ec70();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


