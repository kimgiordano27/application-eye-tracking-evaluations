/*
FUNCTION_NAME: OVRManager$$set_useDynamicFoveatedRendering
ENTRY_POINT: 05d65c2c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFoveatedRendering(ulong param_1,long param_2,long *param_3)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    *(undefined1 *)(unaff_x21 + 0x623) = 1;
  }
  if (param_3 == (long *)0x0) {
    *(undefined8 *)(param_2 + 0x28) = 0;
    plVar2 = (long *)0x0;
  }
  else {
    lVar3 = *(long *)PTR_DAT_072794f0;
    bVar1 = *(byte *)(lVar3 + 0x130);
    if (*(byte *)(*param_3 + 0x130) < bVar1) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_3;
      if (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
        plVar2 = (long *)0x0;
      }
    }
    *(long **)(param_2 + 0x28) = plVar2;
    if (*(byte *)(*param_3 + 0x130) < bVar1) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_3;
      if (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
        plVar2 = (long *)0x0;
      }
    }
  }
  thunk_FUN_0333a630(param_2 + 0x28,plVar2);
  *(long *)(param_2 + 0x30) = (long)param_3;
  thunk_FUN_0333a630((long *)(param_2 + 0x30),param_3);
  return;
}


