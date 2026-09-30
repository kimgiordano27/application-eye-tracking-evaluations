/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_CreateEyeTrackingContext
ENTRY_POINT: 0728d81c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


long Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateEyeTrackingContext(void)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  
  while( true ) {
    unaff_x20 = FUN_07268660(unaff_x20,0);
    if (unaff_x22 != 0) {
      return unaff_x22;
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar2 = FUN_0719124c(unaff_x20,0,0);
    if ((uVar2 & 1) == 0) break;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    plVar3 = (long *)FUN_07265e0c(unaff_x20);
    if (plVar3 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x25 + 0x130);
      if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x25)) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d8e4(plVar3);
      }
    }
    uVar2 = FUN_0709dd3c(plVar3,0,0);
    unaff_x22 = 0;
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar2 = FUN_07262d44(plVar3,0);
      unaff_x22 = 0;
      if ((uVar2 & 1) != 0) {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        unaff_x22 = FUN_06755110(plVar3,*unaff_x23);
      }
    }
  }
  return 0;
}


