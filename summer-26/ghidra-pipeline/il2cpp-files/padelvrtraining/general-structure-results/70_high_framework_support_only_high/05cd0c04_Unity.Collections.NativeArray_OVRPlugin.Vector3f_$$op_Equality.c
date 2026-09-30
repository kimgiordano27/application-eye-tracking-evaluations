/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$op_Equality
ENTRY_POINT: 05cd0c04
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__op_Equality(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  (*(code *)*param_1)();
  if (unaff_x20 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 200);
    uVar1 = *(undefined4 *)(unaff_x20 + 0x130);
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8) + 0x135) & 1) ==
        0) {
      FUN_03d8f26c();
    }
    uVar2 = thunk_FUN_03d2ef40();
    FUN_06dd8080(uVar2,0x32,uVar3,uVar1,5,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0));
    *(undefined8 *)(unaff_x20 + 0x138) = uVar2;
    thunk_FUN_03d1023c(unaff_x20 + 0x138,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


