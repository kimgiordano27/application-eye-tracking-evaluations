/*
FUNCTION_NAME: OVRManager$$set_useDynamicFoveatedRendering
ENTRY_POINT: 05cfc984
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFoveatedRendering(void)

{
  undefined4 *puVar1;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  undefined4 *unaff_x21;
  long unaff_x22;
  uint uStack000000000000000c;
  uint uStack0000000000000014;
  
  FUN_02fe925c();
  *(undefined1 *)(unaff_x22 + 0x669) = 1;
  puVar1 = *(undefined4 **)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
  uStack000000000000000c = 0;
  uStack0000000000000014 = 0;
  FUN_06902890(*puVar1,puVar1[1],puVar1[2]);
  *unaff_x21 = unaff_w20;
  unaff_x21[8] = 0;
  unaff_x21[9] = unaff_w19;
  *(ulong *)(unaff_x21 + 6) = (ulong)uStack0000000000000014;
  *(ulong *)(unaff_x21 + 4) = (ulong)uStack000000000000000c;
  *(ulong *)(unaff_x21 + 3) = (ulong)uStack000000000000000c << 0x20;
  *(undefined8 *)(unaff_x21 + 1) = 0;
  return;
}


