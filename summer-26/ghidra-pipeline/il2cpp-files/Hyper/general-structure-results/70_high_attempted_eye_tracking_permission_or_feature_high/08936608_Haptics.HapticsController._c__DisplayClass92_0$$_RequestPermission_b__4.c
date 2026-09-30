/*
FUNCTION_NAME: Haptics.HapticsController.<>c__DisplayClass92_0$$<RequestPermission>b__4
ENTRY_POINT: 08936608
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void Haptics_HapticsController_<>c__DisplayClass92_0__<RequestPermission>b__4(undefined8 param_1)

{
  long *unaff_x20;
  long unaff_x21;
  
                    /* catch() { ... } // from try @ 08936600 with catch @ 0893660c */
                    /* try { // try from 08936610 to 08a36617 has its CatchHandler @ 08936620 */
  if ((*(byte *)(unaff_x21 + 0x7ba) & 1) == 0) {
                    /* try { // try from 08936618 to 08a36623 has its CatchHandler @ 089364f0 */
    FUN_04947ee4(PTR_DAT_0ac496a8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 08936610 with catch @ 08936620
                        */
    *(undefined1 *)(unaff_x21 + 0x7ba) = 1;
  }
  if (unaff_x20 == (long *)0x0) {
    unaff_x20 = (long *)0x0;
  }
  else if (*unaff_x20 != *(long *)PTR_DAT_0ac496a8) {
    unaff_x20 = (long *)0x0;
  }
  FUN_0893665c(param_1,unaff_x20);
  return;
}


