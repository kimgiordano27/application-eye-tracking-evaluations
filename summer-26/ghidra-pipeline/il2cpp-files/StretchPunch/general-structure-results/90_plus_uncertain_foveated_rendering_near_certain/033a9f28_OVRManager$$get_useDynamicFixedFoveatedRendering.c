/*
FUNCTION_NAME: OVRManager$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 033a9f28
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 91
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;frame_or_lifecycle_behavior;functionality_foveated_rendering
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRManager__get_useDynamicFixedFoveatedRendering(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar2 = StringLiteral_513;
  if ((DAT_044a68a9 & 1) == 0) {
    FUN_01d7d918(StringLiteral_513);
    DAT_044a68a9 = 1;
  }
  uVar1 = _DAT_00bb0020;
  puVar3 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
  puVar3[1] = _UNK_00bb0028;
  *puVar3 = uVar1;
  puVar3[2] = 0x8000000000000000;
  return;
}


