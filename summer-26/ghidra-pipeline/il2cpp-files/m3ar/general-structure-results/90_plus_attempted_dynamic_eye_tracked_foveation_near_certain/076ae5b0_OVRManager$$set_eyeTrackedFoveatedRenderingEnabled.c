/*
FUNCTION_NAME: OVRManager$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 076ae5b0
PROGRAM: m3ar-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__set_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  byte bVar1;
  long *plVar2;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_0403162c(*(undefined8 *)(param_1 + 0x598));
  *(undefined1 *)(unaff_x21 + 0x81) = 1;
  if (unaff_x19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_08f65598 + 0x130);
    if (bVar1 <= *(byte *)(*unaff_x19 + 0x130)) {
      plVar2 = unaff_x19;
      if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_08f65598) {
        plVar2 = (long *)0x0;
      }
      goto LAB_076ae600;
    }
  }
  plVar2 = (long *)0x0;
LAB_076ae600:
  *(long **)(unaff_x20 + 0x20) = plVar2;
  *(long **)(unaff_x20 + 0x28) = unaff_x19;
  return;
}


