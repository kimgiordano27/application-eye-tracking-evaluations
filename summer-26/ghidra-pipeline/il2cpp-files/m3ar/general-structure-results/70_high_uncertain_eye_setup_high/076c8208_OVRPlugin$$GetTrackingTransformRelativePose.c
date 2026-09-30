/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRelativePose
ENTRY_POINT: 076c8208
PROGRAM: m3ar-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackingTransformRelativePose(long param_1)

{
  byte bVar1;
  long *plVar2;
  long *unaff_x19;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0x1b6) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f65598);
    *(undefined1 *)(unaff_x21 + 0x1b6) = 1;
  }
  if (unaff_x19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_08f65598 + 0x130);
    if (bVar1 <= *(byte *)(*unaff_x19 + 0x130)) {
      plVar2 = unaff_x19;
      if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_08f65598) {
        plVar2 = (long *)0x0;
      }
      goto LAB_076c8268;
    }
  }
  plVar2 = (long *)0x0;
LAB_076c8268:
  *(long **)(param_1 + 0x38) = plVar2;
  *(long **)(param_1 + 0x40) = unaff_x19;
  return;
}


