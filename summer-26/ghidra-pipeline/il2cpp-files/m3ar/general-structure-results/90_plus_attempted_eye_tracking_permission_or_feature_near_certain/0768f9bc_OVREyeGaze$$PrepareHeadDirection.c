/*
FUNCTION_NAME: OVREyeGaze$$PrepareHeadDirection
ENTRY_POINT: 0768f9bc
PROGRAM: m3ar-libil2cpp.so
SCORE: 91
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__PrepareHeadDirection(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  puVar1 = (undefined8 *)FUN_0406ae20();
  (*(code *)*puVar1)();
  uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar2 = FUN_0858df34(uVar3,0);
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 0768fa14 to 0778fa23 has its CatchHandler @ 0768fa24 */
    uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
                    /* catch() { ... } // from try @ 0768f994 with catch @ 0768fa24
                       catch() { ... } // from try @ 0768fa14 with catch @ 0768fa24 */
                    /* try { // try from 0768fa28 to 0778fa2b has its CatchHandler @ 0768fa34 */
                    /* try { // try from 0768fa2c to 0778fa37 has its CatchHandler @ 0768f7f0 */
    uVar2 = FUN_0858816c(uVar3,0,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0768fa28 with catch @ 0768fa34
                        */
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x48);
      uVar3 = FUN_0768f300();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_054b4d04(lVar4,uVar3,*(undefined8 *)PTR_DAT_08fab608);
    }
    *(undefined8 *)(unaff_x19 + 0x48) = 0;
    FUN_0768fa94();
    return;
  }
  return;
}


