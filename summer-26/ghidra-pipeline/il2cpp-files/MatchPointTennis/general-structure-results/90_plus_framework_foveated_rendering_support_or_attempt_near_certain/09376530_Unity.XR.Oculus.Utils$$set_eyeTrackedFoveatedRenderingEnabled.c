/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 09376530
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 122
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_Utils__set_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_09f1e538;
  if ((DAT_0a53e841 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1e538);
                    /* try { // try from 09376554 to 09476557 has its CatchHandler @ 093765a8 */
                    /* try { // try from 09376558 to 0947655b has its CatchHandler @ 093765a4 */
                    /* try { // try from 0937655c to 0947655f has its CatchHandler @ 0937658c */
    FUN_04447ba8(PTR_DAT_09fcd298);
                    /* try { // try from 09376560 to 09476563 has its CatchHandler @ 0937659c */
                    /* try { // try from 09376564 to 09476567 has its CatchHandler @ 09376594 */
                    /* try { // try from 09376568 to 0947656b has its CatchHandler @ 093765a0 */
    FUN_04447ba8(PTR_DAT_09f8d8c0);
                    /* try { // try from 0937656c to 0947656f has its CatchHandler @ 09376590 */
                    /* catch() { ... } // from try @ 093764c4 with catch @ 09376570
                       try { // try from 09376570 to 094765c3 has its CatchHandler @ 093762c4 */
    DAT_0a53e841 = 1;
  }
  puVar3 = PTR_DAT_09fcd298;
                    /* catch() { ... } // from try @ 093764d8 with catch @ 09376574 */
                    /* catch() { ... } // from try @ 093763f4 with catch @ 09376578 */
                    /* catch() { ... } // from try @ 093764a4 with catch @ 0937657c */
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
                    /* catch() { ... } // from try @ 09376498 with catch @ 09376580 */
                    /* catch() { ... } // from try @ 09376440 with catch @ 09376584 */
                    /* catch() { ... } // from try @ 09376424 with catch @ 09376588 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0937655c with catch @ 0937658c */
    thunk_FUN_044a54b4();
  }
                    /* catch() { ... } // from try @ 09376480 with catch @ 09376590
                       catch() { ... } // from try @ 0937656c with catch @ 09376590 */
                    /* catch() { ... } // from try @ 09376430 with catch @ 09376594
                       catch() { ... } // from try @ 09376564 with catch @ 09376594 */
                    /* catch() { ... } // from try @ 09376510 with catch @ 09376598 */
                    /* catch() { ... } // from try @ 093763c8 with catch @ 0937659c
                       catch() { ... } // from try @ 09376560 with catch @ 0937659c */
  uVar4 = FUN_0952c404(uVar6,0,0);
                    /* catch() { ... } // from try @ 0937645c with catch @ 093765a0
                       catch() { ... } // from try @ 09376568 with catch @ 093765a0 */
  uVar6 = *(undefined8 *)puVar3;
                    /* catch() { ... } // from try @ 09376390 with catch @ 093765a4
                       catch() { ... } // from try @ 09376558 with catch @ 093765a4 */
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
                    /* try { // try from 093765c4 to 094765db has its CatchHandler @ 0937663c */
    uVar5 = thunk_FUN_0952ff6c(*(long *)(param_1 + 0x38),0);
  }
  else {
                    /* catch() { ... } // from try @ 09376374 with catch @ 093765a8
                       catch() { ... } // from try @ 09376554 with catch @ 093765a8 */
                    /* catch() { ... } // from try @ 09376364 with catch @ 093765ac */
    uVar5 = *(undefined8 *)PTR_DAT_09f8d8c0;
  }
                    /* try { // try from 093765dc to 0947662b has its CatchHandler @ 093762c4 */
  FUN_078b5afc(uVar6,uVar1,uVar5,0);
  return;
}


