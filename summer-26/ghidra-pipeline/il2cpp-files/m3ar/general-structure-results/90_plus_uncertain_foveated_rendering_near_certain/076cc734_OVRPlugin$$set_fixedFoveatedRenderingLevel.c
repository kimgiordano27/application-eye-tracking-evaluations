/*
FUNCTION_NAME: OVRPlugin$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 076cc734
PROGRAM: m3ar-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRPlugin__set_fixedFoveatedRenderingLevel(void)

{
  long lVar1;
  undefined8 uVar2;
  int in_w8;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  if (in_w8 == 0) {
    thunk_FUN_0408f364();
  }
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0406aaec();
  }
  uVar3 = **(undefined8 **)(lVar1 + 0xb8);
  uVar2 = thunk_FUN_0406deb8(*unaff_x23);
  FUN_057d4cdc(uVar2,uVar3,*unaff_x22);
  lVar1 = thunk_FUN_0406deb8(*unaff_x21);
  FUN_075273c0(lVar1,0);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  return lVar1;
}


