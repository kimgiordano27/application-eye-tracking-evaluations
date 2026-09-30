/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Equals
ENTRY_POINT: 02e059b0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Equals(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  long unaff_x19;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  lVar4 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar4 != 0) {
    uVar3 = *(uint *)(unaff_x19 + 0x18);
    if (uVar3 < *(uint *)(lVar4 + 0x18)) {
      lVar4 = lVar4 + (long)(int)uVar3 * 0x10;
      *(uint *)(unaff_x19 + 0x18) = uVar3 + 1;
      *(undefined8 *)(lVar4 + 0x20) = uVar1;
      *(undefined8 *)(lVar4 + 0x28) = uVar2;
    }
    else {
      FUN_02e058d4();
    }
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


