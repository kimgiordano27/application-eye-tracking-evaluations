/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopEyeTracking
ENTRY_POINT: 0516ed94
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StopEyeTracking(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
                    /* try { // try from 0516ed98 to 0526eda3 has its CatchHandler @ 0516ec9c */
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x780));
  *(undefined1 *)(unaff_x21 + 0xe9e) = 1;
                    /* try { // try from 0516eda4 to 0526edab has its CatchHandler @ 0516edac */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0516ed90 with catch @ 0516edac
                       catch(type#2 @ 00000000) { ... } // from try @ 0516eda4 with catch @ 0516edac
                        */
  FUN_050d0ef8();
  uVar1 = thunk_FUN_02d9d534(*unaff_x20);
  FUN_0516e57c();
  FUN_0516eef8();
  *(undefined8 *)(unaff_x19 + 0x70) = uVar1;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x70),uVar1);
  return;
}


