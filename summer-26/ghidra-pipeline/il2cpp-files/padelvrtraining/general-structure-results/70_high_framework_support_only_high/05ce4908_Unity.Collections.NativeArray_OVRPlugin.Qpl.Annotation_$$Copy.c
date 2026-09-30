/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 05ce4908
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05ce4988) */

undefined4 Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(ulong param_1)

{
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined4 uVar1;
  long unaff_x22;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    uVar1 = 0;
    *unaff_x21 = 0;
  }
  else {
    if (*(long *)(unaff_x22 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_05d0f52c(*(long *)(unaff_x22 + 0x20),in_stack_00000008,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x98));
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    *unaff_x21 = *(undefined8 *)(in_stack_00000008 + 0x10);
    thunk_FUN_03d1023c();
    uVar1 = 1;
  }
  if (in_stack_00000000._4_1_ != '\0') {
    thunk_FUN_03d180a8();
  }
  return uVar1;
}


