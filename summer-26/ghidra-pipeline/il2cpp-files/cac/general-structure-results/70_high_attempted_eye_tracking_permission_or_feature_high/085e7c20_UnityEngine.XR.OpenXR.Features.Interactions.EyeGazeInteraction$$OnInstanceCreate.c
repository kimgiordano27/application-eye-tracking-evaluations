/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$OnInstanceCreate
ENTRY_POINT: 085e7c20
PROGRAM: cac-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__OnInstanceCreate(long param_1)

{
  long lVar1;
  int in_w9;
  long unaff_x20;
  
                    /* catch() { ... } // from try @ 085e7828 with catch @ 085e7c20 */
                    /* catch() { ... } // from try @ 085e7884 with catch @ 085e7c24 */
                    /* catch() { ... } // from try @ 085e7800 with catch @ 085e7c28 */
                    /* catch() { ... } // from try @ 085e77d0 with catch @ 085e7c2c */
                    /* catch() { ... } // from try @ 085e7a3c with catch @ 085e7c30 */
                    /* catch() { ... } // from try @ 085e7754 with catch @ 085e7c34 */
  (**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
                    /* catch() { ... } // from try @ 085e780c with catch @ 085e7c38 */
  lVar1 = *(long *)(unaff_x20 + 0x20);
                    /* catch() { ... } // from try @ 085e7b60 with catch @ 085e7c3c */
  if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 085e7b5c with catch @ 085e7c40 */
                    /* catch() { ... } // from try @ 085e77a0 with catch @ 085e7c44 */
                    /* catch() { ... } // from try @ 085e7b58 with catch @ 085e7c48 */
                    /* catch() { ... } // from try @ 085e78e4 with catch @ 085e7c4c */
                    /* catch() { ... } // from try @ 085e7770 with catch @ 085e7c50 */
                    /* catch() { ... } // from try @ 085e7b54 with catch @ 085e7c54 */
                    /* WARNING: Could not recover jumptable at 0x085e7c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 085e7b50 with catch @ 085e7c58 */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40));
    return;
  }
                    /* catch() { ... } // from try @ 085e7ab8 with catch @ 085e7c5c */
                    /* catch() { ... } // from try @ 085e7720 with catch @ 085e7c60 */
                    /* catch() { ... } // from try @ 085e76bc with catch @ 085e7c64 */
  return;
}


