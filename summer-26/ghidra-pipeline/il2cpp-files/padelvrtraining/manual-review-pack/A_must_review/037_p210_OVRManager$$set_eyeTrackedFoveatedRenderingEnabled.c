/*
FUNCTION_NAME: OVRManager$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0745cbec
PROGRAM: padelvrtraining-libil2cpp.so
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
  undefined8 uVar1;
  undefined8 *puVar2;
  int in_w8;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    thunk_FUN_03db619c();
    param_1 = *unaff_x22;
  }
  uVar3 = **(undefined8 **)(param_1 + 0xb8);
                    /* try { // try from 0745cc0c to 0755ccff has its CatchHandler @ 0745cc0c
                       catch() { ... } // from try @ 0745cc0c with catch @ 0745cc0c
                       catch() { ... } // from try @ 0745cd50 with catch @ 0745cc0c
                       catch() { ... } // from try @ 0745cd9c with catch @ 0745cc0c
                       catch() { ... } // from try @ 0745cdcc with catch @ 0745cc0c
                       catch() { ... } // from try @ 0745ce0c with catch @ 0745cc0c */
  uVar1 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_StringLiteral_51754_09222a38);
  FUN_06aee7bc(uVar1,uVar3,*(undefined8 *)PTR_DAT_09222ed8,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_03d1023c(puVar2,uVar1);
  *(undefined8 *)(unaff_x19 + 0x68) = uVar1;
  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x68),uVar1);
  thunk_FUN_08a4cf1c();
  return;
}


