/*
FUNCTION_NAME: OVRManager$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 05cfc890
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


void OVRManager__set_fixedFoveatedRenderingLevel
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  uint uStack000000000000000c;
  uint uStack0000000000000014;
  
  if (DAT_0738e663 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d7e8);
    DAT_0738e663 = '\x01';
  }
  puVar1 = *(undefined4 **)(*(long *)PTR_DAT_06f6d7e8 + 0xb8);
  uStack000000000000000c = 0;
  uStack0000000000000014 = 0;
  FUN_06902890(param_1,param_2,param_3,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  *param_4 = param_5;
  param_4[8] = param_6;
  param_4[9] = 0;
  *(ulong *)(param_4 + 6) = (ulong)uStack0000000000000014;
  *(ulong *)(param_4 + 4) = (ulong)uStack000000000000000c;
  *(ulong *)(param_4 + 3) = (ulong)uStack000000000000000c << 0x20;
  *(undefined8 *)(param_4 + 1) = 0;
  return;
}


