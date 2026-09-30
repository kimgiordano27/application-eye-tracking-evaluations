/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 06387fbc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__set_useDynamicFixedFoveatedRendering(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined8 *)(param_1 + 0x30) = param_2;
  thunk_FUN_037aeb94();
  plVar1 = (long *)(unaff_x19 + 0x30);
  lVar3 = *plVar1;
                    /* try { // try from 06387fec to 0648815f has its CatchHandler @ 06387fec
                       catch() { ... } // from try @ 06387fec with catch @ 06387fec
                       catch() { ... } // from try @ 063881f8 with catch @ 06387fec
                       catch() { ... } // from try @ 0638825c with catch @ 06387fec
                       catch() { ... } // from try @ 06388294 with catch @ 06387fec
                       catch() { ... } // from try @ 063882dc with catch @ 06387fec */
  if ((lVar3 == unaff_x20) || (lVar3 == 0)) {
    *plVar1 = 0;
    thunk_FUN_037aeb94(plVar1,0);
    uVar2 = 0;
  }
  else {
    *(long *)(unaff_x19 + 0x18) = lVar3;
    thunk_FUN_037aeb94((long *)(unaff_x19 + 0x18));
    uVar2 = 1;
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
  }
  return uVar2;
}


