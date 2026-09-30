/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 044f1f98
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined4 unaff_w21;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  uVar2 = FUN_03188b1c(lVar1,unaff_w21);
                    /* try { // try from 044f1fbc to 045f1ffb has its CatchHandler @ 044f1fbc
                       catch() { ... } // from try @ 044f1fbc with catch @ 044f1fbc
                       catch() { ... } // from try @ 044f2010 with catch @ 044f1fbc
                       catch() { ... } // from try @ 044f204c with catch @ 044f1fbc
                       catch() { ... } // from try @ 044f208c with catch @ 044f1fbc */
  if (0 < *(int *)(unaff_x19 + 0x18)) {
    FUN_0595261c(*(undefined8 *)(unaff_x19 + 0x10),0,uVar2,0,*(int *)(unaff_x19 + 0x18),0);
  }
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  return;
}


