/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 027d7654
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingSupported(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  long *plVar4;
  
  puVar1 = PTR_DAT_03ccafc0;
  plVar4 = *(long **)(unaff_x21 + 0xe10);
  if ((unaff_x20 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(long *)PTR_DAT_03ccafc0;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *(long *)puVar1;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
  }
                    /* try { // try from 027d7688 to 028d769b has its CatchHandler @ 027d76ec */
  if (*(int *)(*plVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  *unaff_x19 = uVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  return;
}


