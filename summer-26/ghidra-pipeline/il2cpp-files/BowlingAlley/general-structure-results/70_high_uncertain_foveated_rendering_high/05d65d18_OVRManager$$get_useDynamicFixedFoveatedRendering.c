/*
FUNCTION_NAME: OVRManager$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 05d65d18
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


void OVRManager__get_useDynamicFixedFoveatedRendering(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_076d8624 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727ee10);
    DAT_076d8624 = 1;
  }
  puVar1 = PTR_DAT_0727ee10;
  lVar5 = *(long *)(param_1 + 0x18);
  while ((plVar3 = (long *)FUN_059692bc(lVar5,param_2,0), plVar3 == (long *)0x0 ||
         (*plVar3 == *(long *)puVar1))) {
    lVar4 = FUN_032ef8c0((long *)(param_1 + 0x18),plVar3,lVar5);
    bVar2 = lVar5 == lVar4;
    lVar5 = lVar4;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d618c(plVar3);
}


