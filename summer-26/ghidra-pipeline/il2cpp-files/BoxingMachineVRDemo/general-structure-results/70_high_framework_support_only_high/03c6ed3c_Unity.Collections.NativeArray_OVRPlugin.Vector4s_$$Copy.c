/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 03c6ed3c
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


undefined8 Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  thunk_FUN_02d6ec50(param_1,0);
  uVar1 = *(int *)(param_1 + 0x18) - 1;
  if (*(int *)(param_1 + 0x18) < 1) {
    uVar4 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x18) = uVar1;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    puVar2 = (undefined8 *)(lVar3 + (ulong)uVar1 * 8 + 0x20);
    uVar4 = *puVar2;
    *puVar2 = 0;
    thunk_FUN_02dd37b4(puVar2,0);
  }
  thunk_FUN_02d6ec70(param_1,0);
  return uVar4;
}


