/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingSupported
ENTRY_POINT: 0574bb14
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_foveatedRenderingSupported(long param_1)

{
  long in_x9;
  long *unaff_x19;
  
  if (in_x9 == param_1) {
    thunk_FUN_02ef195c();
    if (unaff_x19 == (long *)0x0) goto LAB_0574be90;
    (**(code **)(*unaff_x19 + 0x788))();
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06d06338 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_055b5920(0);
    if (*(int *)(*(long *)PTR_DAT_06d02200 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02200);
    }
    FUN_0556c8b4();
    if (unaff_x19 == (long *)0x0) {
LAB_0574be90:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    (**(code **)(*unaff_x19 + 0x778))();
  }
  return;
}


