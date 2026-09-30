/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetEnumerator
ENTRY_POINT: 027682a8
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetEnumerator
               (long param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 == param_3) {
    return;
  }
  if (param_1 != 0) {
    if (param_2 < *(uint *)(param_1 + 0x18)) {
      lVar1 = param_1 + (long)(int)param_2 * 0x10;
      uVar5 = *(undefined8 *)(lVar1 + 0x28);
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      if (param_3 < *(uint *)(param_1 + 0x18)) {
        puVar2 = (undefined8 *)(param_1 + 0x20 + (long)(int)param_3 * 0x10);
        uVar4 = *puVar2;
        *(undefined8 *)(lVar1 + 0x28) = puVar2[1];
        *(undefined8 *)(lVar1 + 0x20) = uVar4;
        thunk_FUN_0188fd20(param_1 + 0x20 + (long)(int)param_2 * 0x10,0);
        if (param_3 < *(uint *)(param_1 + 0x18)) {
          puVar2[1] = uVar5;
          *puVar2 = uVar3;
          thunk_FUN_0188fd20(param_1 + (long)(int)param_3 * 0x10 + 0x20,0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_017fc5b0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


