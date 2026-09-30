/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopySafe
ENTRY_POINT: 05ebd0ac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopySafe(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x21;
  
  puVar2 = PTR_DAT_092b92f0;
  puVar1 = PTR_DAT_09285e40;
  if (unaff_x21 != 0) {
                    /* catch() { ... } // from try @ 05ebd20c with catch @ 05ebd0c0
                       catch() { ... } // from try @ 05ebd248 with catch @ 05ebd0c0
                       catch() { ... } // from try @ 05ebd284 with catch @ 05ebd0c0
                       catch() { ... } // from try @ 05ebd2b0 with catch @ 05ebd0c0
                       catch() { ... } // from try @ 05ebd324 with catch @ 05ebd0c0 */
    FUN_08ce64b0();
    uVar3 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
                    /* try { // try from 05ebd0f4 to 05fbd0f7 has its CatchHandler @ 05ebd20c */
    FUN_075d444c();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
                    /* try { // try from 05ebd114 to 05fbd20b has its CatchHandler @ 05ebd218 */
    FUN_07303384(uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


