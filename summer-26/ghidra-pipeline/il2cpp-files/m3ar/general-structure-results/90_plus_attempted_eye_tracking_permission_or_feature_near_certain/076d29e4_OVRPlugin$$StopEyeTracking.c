/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 076d29e4
PROGRAM: m3ar-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StopEyeTracking(undefined4 *param_1,long param_2)

{
  undefined4 *in_x9;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 unaff_w21;
  
  if (param_2 != 0) {
                    /* try { // try from 076d29f8 to 077d29fb has its CatchHandler @ 076d2bac */
                    /* try { // try from 076d29fc to 077d2a07 has its CatchHandler @ 076d2c10 */
    FUN_085503b8(*param_1,*in_x9,*(undefined4 *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x34)
                 ,param_2,0);
    *unaff_x20 = unaff_w21;
                    /* try { // try from 076d2a20 to 077d2a23 has its CatchHandler @ 076d2bb8 */
                    /* try { // try from 076d2a24 to 077d2a3b has its CatchHandler @ 076d2bf8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


