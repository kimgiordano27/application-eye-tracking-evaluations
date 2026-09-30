/*
FUNCTION_NAME: OVREyeGaze$$PrepareHeadDirection
ENTRY_POINT: 06301c8c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__PrepareHeadDirection(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined1 auVar4 [16];
  
                    /* try { // try from 06301c98 to 06401c9b has its CatchHandler @ 06301d18 */
  lVar1 = FUN_0631ab20();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  auVar4 = FUN_062b7d8c(lVar1,0,0);
                    /* try { // try from 06301cb0 to 06401cb7 has its CatchHandler @ 06301d20 */
  uVar2 = FUN_06166730();
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 06301cc8 to 06401ccf has its CatchHandler @ 06301d24 */
    *unaff_x19 = 3;
    *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar4;
    thunk_FUN_037aeb94(unaff_x19 + 0x10,0);
                    /* try { // try from 06301ce4 to 06401cf3 has its CatchHandler @ 06301d1c */
    if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
                    /* try { // try from 06301cf4 to 06401d3f has its CatchHandler @ 06301b3c */
      thunk_FUN_03798b70();
    }
    FUN_03e64d9c(unaff_x19 + 2);
  }
  else {
    FUN_0616674c();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
                    /* try { // try from 06301d40 to 06401d57 has its CatchHandler @ 06301de8 */
    if (*(char *)(unaff_x20 + 0x82) != '\0') {
      plVar3 = *(long **)(unaff_x20 + 0x68);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
                    /* try { // try from 06301d58 to 06401dd7 has its CatchHandler @ 06301b3c */
      lVar1 = (**(code **)(*plVar3 + 0x2b8))
                        (plVar3,*(undefined2 *)(unaff_x20 + 0x80),*(undefined8 *)(*plVar3 + 0x2c0));
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      auVar4 = FUN_062b7d8c(lVar1,0,0);
      uVar2 = FUN_06166730();
      if ((uVar2 & 1) == 0) {
        *unaff_x19 = 4;
        *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar4;
        thunk_FUN_037aeb94(unaff_x19 + 0x10,0);
        if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_03e64d9c(unaff_x19 + 2);
        return;
      }
      FUN_0616674c();
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    }
    plVar3 = *(long **)(unaff_x20 + 0x68);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar1 = (**(code **)(*plVar3 + 0x2b8))(plVar3,0x3a,*(undefined8 *)(*plVar3 + 0x2c0));
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    auVar4 = FUN_062b7d8c(lVar1,0,0);
    uVar2 = FUN_06166730();
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 5;
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar4;
      thunk_FUN_037aeb94(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_03e64d9c(unaff_x19 + 2);
    }
    else {
      FUN_0616674c();
      *unaff_x19 = 0xfffffffe;
                    /* try { // try from 06301eb4 to 06401ebf has its CatchHandler @ 06301fbc */
      if (*(int *)(*(long *)PTR_DAT_07d881d0 + 0xe4) == 0) {
                    /* try { // try from 06301ec0 to 06401f2f has its CatchHandler @ 06301dfc */
        thunk_FUN_03798b70();
      }
      FUN_06166f20(unaff_x19 + 2,0);
    }
  }
  return;
}


