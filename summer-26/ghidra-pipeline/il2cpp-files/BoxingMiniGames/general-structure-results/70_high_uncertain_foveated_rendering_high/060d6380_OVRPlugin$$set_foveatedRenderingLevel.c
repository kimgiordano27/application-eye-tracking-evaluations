/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 060d6380
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_foveatedRenderingLevel(long param_1)

{
  byte bVar1;
  long *plVar2;
  long in_x10;
  long *unaff_x19;
  long *unaff_x20;
  
  bVar1 = *(byte *)(param_1 + 0x130);
  if (*(byte *)(in_x10 + 0x130) < bVar1) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = unaff_x19;
    if (*(long *)(*(long *)(in_x10 + 200) + (ulong)bVar1 * 8 + -8) != param_1) {
      plVar2 = (long *)0x0;
    }
  }
  unaff_x20[7] = (long)plVar2;
  if (*(byte *)(*unaff_x19 + 0x130) < bVar1) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = unaff_x19;
    if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != param_1) {
      plVar2 = (long *)0x0;
    }
  }
  thunk_FUN_036b7ad0(unaff_x20 + 7,plVar2);
  unaff_x20[8] = (long)unaff_x19;
  thunk_FUN_036b7ad0();
                    /* WARNING: Could not recover jumptable at 0x060d641c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x188))();
  return;
}


