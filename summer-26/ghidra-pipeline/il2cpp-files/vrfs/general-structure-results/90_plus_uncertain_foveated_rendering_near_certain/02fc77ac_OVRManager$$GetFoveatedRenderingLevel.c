/*
FUNCTION_NAME: OVRManager$$GetFoveatedRenderingLevel
ENTRY_POINT: 02fc77ac
PROGRAM: vrfs-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFoveatedRenderingLevel(code *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long *unaff_x26;
  
  while( true ) {
    (*param_1)();
    unaff_x23 = unaff_x23 + 1;
    if ((long)*(int *)(unaff_x22 + 0x18) <= (long)unaff_x23) break;
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    param_1 = *(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 8);
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  lVar1 = FUN_03f038c8(0);
  if (lVar1 != 0) {
    FUN_04d772fc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


