/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 027f1668
PROGRAM: vrlegs-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_useDynamicFixedFoveatedRendering(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long unaff_x19;
  uint unaff_w20;
  uint *puVar4;
  
  thunk_FUN_01a4b338();
  puVar1 = PTR_DAT_03cc0330;
  if ((unaff_w20 & 0x600000) == 0x400000) {
    puVar4 = (uint *)(unaff_x19 + 0x38);
    uVar2 = *puVar4;
    thunk_FUN_01a4b338();
    if ((uVar2 & 0x600000) != 0x400000) {
      thunk_FUN_01a4b338();
      uVar2 = *puVar4;
      thunk_FUN_01a4b338();
      uVar2 = FUN_01aa5300(puVar4,uVar2 | 0x400000);
      if ((uVar2 >> 0x16 & 1) == 0) {
        FUN_027ee644();
      }
    }
  }
  else {
    lVar3 = *(long *)PTR_DAT_03cc0330;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar1;
    }
    FUN_01ab69c8(lVar3);
    FUN_027f16f8();
  }
  return 1;
}


