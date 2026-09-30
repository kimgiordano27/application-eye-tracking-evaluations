/*
FUNCTION_NAME: OVRManager$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 073c467c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__set_eyeTrackedFoveatedRenderingEnabled(undefined8 param_1)

{
  undefined *puVar1;
  
                    /* try { // try from 073c467c to 074c4683 has its CatchHandler @ 073c4684 */
  puVar1 = PTR_DAT_08eb5640;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 073c4668 with catch @ 073c4684
                       catch(type#2 @ 00000000) { ... } // from try @ 073c467c with catch @ 073c4684
                        */
  if ((DAT_0941e62f & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb5640);
    DAT_0941e62f = 1;
  }
  FUN_04ec1d40(param_1,*(undefined8 *)puVar1);
  return;
}


