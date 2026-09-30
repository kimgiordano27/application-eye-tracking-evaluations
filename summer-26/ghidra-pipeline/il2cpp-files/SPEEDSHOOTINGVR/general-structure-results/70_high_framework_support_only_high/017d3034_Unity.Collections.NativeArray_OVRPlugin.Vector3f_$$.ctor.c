/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 017d3034
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_017d3600(param_1,uVar1 + 1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78)
              );
  lVar3 = *(long *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x18) = uVar1 + 1;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  if (uVar1 < *(uint *)(lVar3 + 0x18)) {
    puVar2 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
    *puVar2 = param_2;
    thunk_FUN_0106e12c(puVar2,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


