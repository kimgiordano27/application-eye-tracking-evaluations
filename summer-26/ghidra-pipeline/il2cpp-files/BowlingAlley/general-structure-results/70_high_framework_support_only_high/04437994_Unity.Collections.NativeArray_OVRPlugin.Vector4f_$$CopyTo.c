/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyTo
ENTRY_POINT: 04437994
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyTo(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  if (param_1 != 0) {
    if (0x3f < *(int *)((long)unaff_x20 + 0xc)) {
      thunk_FUN_032e1da0(PTR_DAT_07279578);
      uVar1 = thunk_FUN_032a56a0();
      uVar2 = thunk_FUN_032e1da0(PTR_DAT_072835c8);
      FUN_0592371c(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar1);
    }
    if (*(int *)((long)unaff_x20 + 0xc) < 2) {
      *unaff_x20 = 0;
    }
    else {
      FUN_03a08ee4();
      *unaff_x20 = 0;
      *(undefined4 *)((long)unaff_x20 + 0xc) = 0;
    }
  }
                    /* try { // try from 044379dc to 04537a4f has its CatchHandler @ 04437a50 */
  return;
}


