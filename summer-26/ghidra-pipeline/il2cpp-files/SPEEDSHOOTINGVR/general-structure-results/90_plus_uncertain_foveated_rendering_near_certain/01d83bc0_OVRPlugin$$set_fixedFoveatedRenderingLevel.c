/*
FUNCTION_NAME: OVRPlugin$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 01d83bc0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__set_fixedFoveatedRenderingLevel(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  undefined8 *unaff_x23;
  
  thunk_FUN_01022c14();
  uVar2 = FUN_01d7ad74();
  uVar3 = FUN_01d79950();
  uVar1 = FUN_01110908(uVar2,uVar3,*unaff_x23);
  if ((int)uVar1 < 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar4 = FUN_01d7aea0();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    uVar2 = *(undefined8 *)(lVar4 + (ulong)uVar1 * 8 + 0x20);
  }
  return uVar2;
}


