/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 073c462c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__GetEyeTrackedFoveatedRenderingEnabled(long param_1)

{
  undefined *puVar1;
  
                    /* try { // try from 073c462c to 074c462f has its CatchHandler @ 073c4658 */
  puVar1 = PTR_DAT_08eb5638;
                    /* try { // try from 073c4630 to 074c4667 has its CatchHandler @ 073c42d0 */
  if ((DAT_0941e62e & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb5638);
    DAT_0941e62e = 1;
  }
                    /* catch() { ... } // from try @ 073c462c with catch @ 073c4658 */
  *(undefined4 *)(param_1 + 0x128) = 0x3f000000;
                    /* try { // try from 073c4668 to 074c466f has its CatchHandler @ 073c4684 */
                    /* try { // try from 073c4670 to 074c467b has its CatchHandler @ 073c42d0 */
  FUN_04ec3888(param_1,*(undefined8 *)puVar1);
  return;
}


