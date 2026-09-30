/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0402450c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__System_Collections_IEnumerator_get_Current
               (void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int *unaff_x19;
  int *unaff_x20;
  long *plVar4;
  long unaff_x23;
  
  plVar4 = (long *)(unaff_x20 + 4);
                    /* catch() { ... } // from try @ 040244ec with catch @ 0402450c */
                    /* try { // try from 04024514 to 04124527 has its CatchHandler @ 040245d8 */
  if (*plVar4 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(*plVar4 + 0x18) + 1;
  }
                    /* catch() { ... } // from try @ 04023f40 with catch @ 04024528
                       try { // try from 04024528 to 0412453f has its CatchHandler @ 04023cf8 */
  iVar2 = *unaff_x19;
  if ((iVar3 < iVar2) && (iVar2 + -1 != 0 && 0 < iVar2)) {
    lVar1 = *(long *)(unaff_x23 + 0x20);
                    /* try { // try from 04024540 to 04124543 has its CatchHandler @ 04024564 */
                    /* try { // try from 04024544 to 0412456b has its CatchHandler @ 04023cf8 */
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
                    /* catch() { ... } // from try @ 04024540 with catch @ 04024564 */
    lVar1 = FUN_02fe9340(lVar1,iVar2 + -1);
                    /* try { // try from 0402456c to 0412457f has its CatchHandler @ 040245d8 */
    *plVar4 = lVar1;
    thunk_FUN_03048534(plVar4,lVar1);
    iVar2 = *unaff_x19;
  }
                    /* catch() { ... } // from try @ 04024250 with catch @ 04024580
                       try { // try from 04024580 to 04124597 has its CatchHandler @ 04023cf8 */
  *unaff_x20 = iVar2;
  if (0 < iVar2) {
    *(undefined8 *)(unaff_x20 + 2) = *(undefined8 *)(unaff_x19 + 2);
    thunk_FUN_03048534();
    if (1 < *unaff_x20) {
      FUN_05b1314c(*(undefined8 *)(unaff_x19 + 4),*plVar4,*unaff_x20 + -1,0);
      return;
    }
  }
  return;
}


