/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 02ca9314
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_rotation(void)

{
  void *pvVar1;
  long unaff_x29;
  undefined4 uStack000000000000000c;
  
  *(byte *)(unaff_x29 + -0x11) = *(byte *)(*(long *)(unaff_x29 + -8) + 0x40) & 1;
  if ((*(byte *)(unaff_x29 + -0x11) & 1) != 0) {
    OVRLipSyncContext_HandleKeyboard_m2553A2BAB8E5465F23892541906874AEF5408B2F
              (*(undefined8 *)(unaff_x29 + -8),0);
  }
  pvVar1 = (void *)OVRLipSyncContextBase_get_Frame_mD56E93629948BFC610036BEBC7734A9E7BF33615_inline
                             (*(OVRLipSyncContextBase_t14DA044608499BE2F9CBCA68404655A81C2D102C **)
                               (unaff_x29 + -8),(MethodInfo *)0x0);
  NullCheck(pvVar1);
  uStack000000000000000c = *(undefined4 *)((long)pvVar1 + 0x20);
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 100) = uStack000000000000000c;
  OVRLipSyncContext_DebugShowVisemesAndLaughter_m4786192F726A5C6643133DD6BC56C875A20BBC26
            (*(undefined8 *)(unaff_x29 + -8),0);
  return;
}


