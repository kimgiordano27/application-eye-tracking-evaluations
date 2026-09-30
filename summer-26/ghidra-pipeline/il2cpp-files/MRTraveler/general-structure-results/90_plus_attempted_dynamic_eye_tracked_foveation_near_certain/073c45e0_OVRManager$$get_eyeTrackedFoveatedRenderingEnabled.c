/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 073c45e0
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


void OVRManager__get_eyeTrackedFoveatedRenderingEnabled(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long in_x9;
  long in_x10;
  undefined8 unaff_x19;
  long unaff_x20;
  
  if ((uint)*(byte *)(in_x10 + 0x130) < (uint)in_x9) {
    uVar1 = 0;
  }
  else {
    uVar1 = unaff_x19;
                    /* try { // try from 073c4604 to 074c4607 has its CatchHandler @ 073c4608 */
    if (*(long *)(*(long *)(in_x10 + 200) + in_x9 * 8 + -8) != param_1) {
      uVar1 = 0;
    }
  }
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 073c4604 with catch @ 073c4608
                       try { // try from 073c4608 to 074c462b has its CatchHandler @ 073c42d0 */
  thunk_FUN_03d233cc(param_2,uVar1);
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 073c4534 with catch @ 073c460c
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 073c4510 with catch @ 073c4610
                        */
  *(undefined8 *)(unaff_x20 + 0x120) = unaff_x19;
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 073c457c with catch @ 073c4614
                        */
  thunk_FUN_03d233cc(unaff_x20 + 0x120);
  return;
}


