/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 044f1a0c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_044f1a3c:
      (*(code *)*puVar1)();
      if (unaff_x19 == 0) {
                    /* try { // try from 044f1a50 to 045f1a9b has its CatchHandler @ 044f1a50
                       catch() { ... } // from try @ 044f1a50 with catch @ 044f1a50
                       catch() { ... } // from try @ 044f1acc with catch @ 044f1a50
                       catch() { ... } // from try @ 044f1b7c with catch @ 044f1a50
                       catch() { ... } // from try @ 044f1bac with catch @ 044f1a50
                       catch() { ... } // from try @ 044f1c20 with catch @ 044f1a50 */
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03188cd0();
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_031c0d08();
      goto LAB_044f1a3c;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


