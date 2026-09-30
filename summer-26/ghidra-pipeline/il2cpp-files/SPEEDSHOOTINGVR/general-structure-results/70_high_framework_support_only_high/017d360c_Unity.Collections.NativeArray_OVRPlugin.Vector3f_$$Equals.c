/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Equals
ENTRY_POINT: 017d360c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Equals
               (long param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)*(long *)(param_1 + 0x18);
  if (iVar3 < (int)param_3) {
    uVar2 = iVar3 << 1;
    if (0x7feffffe < uVar2) {
      uVar2 = 0x7fefffff;
    }
    uVar1 = 4;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar1 = uVar2;
    }
    if ((int)param_3 <= (int)uVar1) {
      param_3 = uVar1;
    }
    FUN_017d2bbc(param_2,param_3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xf0)
                );
    return;
  }
  return;
}


