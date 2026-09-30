/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 0379d300
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector3f>__Dispose
               (undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x10) < 1) {
      uVar1 = FUN_0379e544();
      *(undefined8 *)(param_2 + 0x10) = uVar1;
    }
    puVar3 = (undefined8 *)(param_2 + 0x18);
    uVar2 = FUN_02526f10(*puVar3,0);
    if ((uVar2 & 1) != 0) {
      uVar1 = FUN_0379c98c(param_1);
      *puVar3 = uVar1;
      thunk_FUN_01656ef8(puVar3,uVar1);
      return;
    }
  }
  return;
}


