/*
FUNCTION_NAME: OVRFaceExpressions$$ToArray
ENTRY_POINT: 03648ebc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions__ToArray(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  undefined4 uVar2;
  
  FUN_036a9e74(param_1,*(undefined8 *)(unaff_x19 + 0x120),0,0);
  FUN_036a9e74(*(undefined8 *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x120),0,0);
  lVar1 = *(long *)(unaff_x19 + 0x1c0);
  if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 03648cc8 with catch @ 03648ef0
                       try { // try from 03648ef0 to 03748f5b has its CatchHandler @ 03648a60 */
                    /* catch() { ... } // from try @ 03648c44 with catch @ 03648ef4 */
    uVar2 = (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28))
    ;
                    /* catch() { ... } // from try @ 03648bf8 with catch @ 03648ef8 */
    *(undefined4 *)(unaff_x19 + 0x1cc) = uVar2;
                    /* catch() { ... } // from try @ 03648db4 with catch @ 03648efc */
    *(undefined4 *)(unaff_x19 + 0x1d0) = 0;
                    /* catch() { ... } // from try @ 03648d08 with catch @ 03648f00 */
                    /* catch() { ... } // from try @ 03648ccc with catch @ 03648f04 */
                    /* catch() { ... } // from try @ 03648c80 with catch @ 03648f08 */
                    /* catch() { ... } // from try @ 03648c48 with catch @ 03648f0c */
                    /* catch() { ... } // from try @ 03648bfc with catch @ 03648f10 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03648ea8 with catch @ 03648f14 */
  FUN_01f08a3c();
}


