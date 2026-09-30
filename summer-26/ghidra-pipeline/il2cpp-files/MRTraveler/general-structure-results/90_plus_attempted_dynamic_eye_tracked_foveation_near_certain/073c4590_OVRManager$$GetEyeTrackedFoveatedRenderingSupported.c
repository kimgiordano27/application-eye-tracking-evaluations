/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 073c4590
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


void OVRManager__GetEyeTrackedFoveatedRenderingSupported(long *param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  
  lVar3 = *param_1;
  bVar1 = *(byte *)(lVar3 + 0x130);
                    /* try { // try from 073c45a4 to 074c4603 has its CatchHandler @ 073c42d0 */
  if (*(byte *)(*unaff_x19 + 0x130) < bVar1) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = unaff_x19;
    if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
      plVar2 = (long *)0x0;
    }
  }
  *(long **)(unaff_x20 + 0x118) = plVar2;
  if (*(byte *)(*unaff_x19 + 0x130) < bVar1) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = unaff_x19;
    if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
      plVar2 = (long *)0x0;
    }
  }
  thunk_FUN_03d233cc(unaff_x20 + 0x118,plVar2);
  *(long **)(unaff_x20 + 0x120) = unaff_x19;
  thunk_FUN_03d233cc(unaff_x20 + 0x120);
  return;
}


