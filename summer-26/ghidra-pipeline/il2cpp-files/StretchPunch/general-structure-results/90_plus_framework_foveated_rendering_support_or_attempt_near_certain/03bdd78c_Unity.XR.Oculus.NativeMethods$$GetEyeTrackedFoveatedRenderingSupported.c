/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 03bdd78c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 109
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__GetEyeTrackedFoveatedRenderingSupported
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = StringLiteral_1259;
                    /* try { // try from 03bdd79c to 03cdd7b7 has its CatchHandler @ 03bdd824 */
  if ((DAT_044ac4a7 & 1) == 0) {
                    /* try { // try from 03bdd7bc to 03cdd7d7 has its CatchHandler @ 03bdd820 */
    FUN_01d7d918(StringLiteral_1259);
    FUN_01d7d918(PTR_DAT_042448c8);
    DAT_044ac4a7 = 1;
  }
                    /* try { // try from 03bdd7d8 to 03cdd83b has its CatchHandler @ 03bdd514 */
                    /* catch() { ... } // from try @ 03bdd724 with catch @ 03bdd7dc */
                    /* catch() { ... } // from try @ 03bdd640 with catch @ 03bdd7e0 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 03bdd70c with catch @ 03bdd7e4 */
    thunk_FUN_01dc4f30();
  }
                    /* catch() { ... } // from try @ 03bdd628 with catch @ 03bdd7e8 */
                    /* catch() { ... } // from try @ 03bdd6f4 with catch @ 03bdd7ec */
  uVar2 = FUN_0365c5d0(0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_042448c8 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    UNRECOVERED_JUMPTABLE = (code *)FUN_03bde550();
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03bdd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6);
      return;
    }
  }
  FUN_03be0ac4(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}


