/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 01f5ff60
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 100
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRManager__get_fixedFoveatedRenderingSupported(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *unaff_x19;
  short unaff_w20;
  int unaff_w21;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  if ((DAT_0293dcb5 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b9de8);
    DAT_0293dcb5 = 1;
  }
  if (unaff_w21 < (int)*(uint *)(unaff_x19 + 1)) {
    uVar1 = *(uint *)(unaff_x19 + 2);
    if (*(uint *)(unaff_x19 + 1) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    if (*(short *)(*unaff_x19 + (long)(int)uVar1 * 2) == unaff_w20) {
      *(short *)((long)unaff_x19 + 0x14) = unaff_w20;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
      *(uint *)(unaff_x19 + 2) = uVar1 - 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


