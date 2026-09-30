/*
FUNCTION_NAME: OVRManager$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 02fc7d3c
PROGRAM: vrfs-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRManager__set_useDynamicFixedFoveatedRendering(long param_1)

{
  undefined4 in_w9;
  long unaff_x19;
  undefined4 unaff_w24;
  undefined4 *unaff_x25;
  long unaff_x26;
  long unaff_x28;
  int unaff_w29;
  
  *(undefined4 *)(param_1 + (long)unaff_w29 * 0x10 + 0x24) = in_w9;
  *unaff_x25 = 0xffffffff;
  *(undefined4 *)(unaff_x26 + unaff_x28 * 0x10 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
  *(undefined4 *)(unaff_x19 + 0x24) = unaff_w24;
  *(ulong *)(unaff_x19 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
  return 1;
}


