/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopEyeTracking
ENTRY_POINT: 036a4944
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StopEyeTracking(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xfa3) = in_w8;
  lVar2 = FUN_040703d4();
                    /* try { // try from 036a4954 to 037a495b has its CatchHandler @ 036a4968 */
  if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 036a4808 with catch @ 036a495c
                       try { // try from 036a495c to 037a499b has its CatchHandler @ 036a473c */
                    /* catch() { ... } // from try @ 036a47ec with catch @ 036a4960 */
                    /* catch() { ... } // from try @ 036a47bc with catch @ 036a4964 */
    uVar1 = FUN_04073294(lVar2,0);
                    /* catch() { ... } // from try @ 036a48f8 with catch @ 036a4968
                       catch() { ... } // from try @ 036a4954 with catch @ 036a4968 */
    *(undefined4 *)(unaff_x19 + 0x3c) = uVar1;
                    /* catch() { ... } // from try @ 036a47cc with catch @ 036a4974 */
                    /* catch() { ... } // from try @ 036a4830 with catch @ 036a4980 */
    FUN_022c6ae8();
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 036a4844 with catch @ 036a4984 */
  FUN_01f08a3c();
}


