/*
FUNCTION_NAME: OVRFaceExpressions$$ToArray
ENTRY_POINT: 07690a8c
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions__ToArray(float param_1,float param_2,float param_3)

{
  char cVar1;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  cVar1 = DAT_09539e18;
                    /* try { // try from 07690a94 to 07790ab3 has its CatchHandler @ 07690ba8 */
  uVar4 = *(undefined8 *)(unaff_x19 + 0x178);
  uVar5 = *(undefined4 *)(unaff_x19 + 0x180);
  *(float *)(unaff_x19 + 0x194) = param_1;
  *(float *)(unaff_x19 + 0x198) = param_2;
  *(float *)(unaff_x19 + 0x19c) = param_3;
  if (cVar1 == '\0') {
                    /* try { // try from 07690ab8 to 07790abb has its CatchHandler @ 07690be4 */
                    /* try { // try from 07690abc to 07790abf has its CatchHandler @ 07690bdc */
    FUN_0403162c(PTR_DAT_08f65580);
                    /* try { // try from 07690ac0 to 07790ac3 has its CatchHandler @ 07690bf4 */
                    /* try { // try from 07690ac4 to 07790ac7 has its CatchHandler @ 07690bcc */
                    /* try { // try from 07690ac8 to 07790acb has its CatchHandler @ 07690bec */
    DAT_09539e18 = '\x01';
  }
                    /* try { // try from 07690acc to 07790acf has its CatchHandler @ 07690be8 */
                    /* try { // try from 07690ad0 to 07790ad3 has its CatchHandler @ 07690bbc */
                    /* try { // try from 07690ad4 to 07790ad7 has its CatchHandler @ 07690bb8 */
                    /* try { // try from 07690ad8 to 07790aef has its CatchHandler @ 07690ba4 */
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar3 = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
  if (fVar3 <= DAT_01a2ef28) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    uVar2 = **(undefined8 **)(*unaff_x20 + 0xb8);
    param_3 = *(float *)(*(undefined8 **)(*unaff_x20 + 0xb8) + 1);
  }
  else {
    uVar2 = CONCAT44(param_2 / fVar3,param_1 / fVar3);
    param_3 = param_3 / fVar3;
  }
  *(undefined4 *)(unaff_x19 + 0x1d4) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x1cc) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x1d8) = uVar2;
  *(float *)(unaff_x19 + 0x1e0) = param_3;
  return;
}


