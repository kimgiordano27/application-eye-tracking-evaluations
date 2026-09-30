/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTracked
ENTRY_POINT: 0516ea94
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTracked(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x21;
  
  lVar1 = thunk_FUN_02d9d534();
  FUN_0504920c(lVar1,0);
                    /* try { // try from 0516eaa8 to 0526eaab has its CatchHandler @ 0516eab8 */
                    /* catch() { ... } // from try @ 0516e8f4 with catch @ 0516eaac
                       try { // try from 0516eaac to 0526eaf7 has its CatchHandler @ 0516e850 */
  *(undefined4 *)(lVar1 + 0x20) = 1;
                    /* catch() { ... } // from try @ 0516e9a0 with catch @ 0516eab0 */
  *(undefined8 *)(lVar1 + 0x10) = unaff_x21;
                    /* catch() { ... } // from try @ 0516e900 with catch @ 0516eab4 */
                    /* catch() { ... } // from try @ 0516e998 with catch @ 0516eab8
                       catch() { ... } // from try @ 0516eaa8 with catch @ 0516eab8 */
  thunk_FUN_02dd37b4();
                    /* catch() { ... } // from try @ 0516e97c with catch @ 0516eabc */
  *(long *)(unaff_x19 + 0x60) = lVar1;
                    /* catch() { ... } // from try @ 0516e970 with catch @ 0516eac0 */
                    /* catch() { ... } // from try @ 0516e8d0 with catch @ 0516eac4 */
                    /* catch() { ... } // from try @ 0516ea78 with catch @ 0516eac8 */
                    /* catch() { ... } // from try @ 0516e8b8 with catch @ 0516eacc */
                    /* catch() { ... } // from try @ 0516e8a8 with catch @ 0516ead0 */
  thunk_FUN_02dd37b4((long *)(unaff_x19 + 0x60),lVar1);
  return;
}


