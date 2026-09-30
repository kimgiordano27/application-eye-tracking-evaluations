/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_Length
ENTRY_POINT: 04438678
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_Length
               (undefined8 *param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (param_2 != 0) {
    lVar4 = *(long *)(param_4 + 0x20);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_032934b8();
    }
    FUN_0443878c(uVar3,param_3,param_1,**(undefined8 **)(lVar4 + 0xc0));
    lVar4 = *(long *)(param_4 + 0x20);
    uVar1 = *param_1;
    uVar2 = param_1[1];
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_032934b8();
    }
    FUN_04438f70(param_2,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


