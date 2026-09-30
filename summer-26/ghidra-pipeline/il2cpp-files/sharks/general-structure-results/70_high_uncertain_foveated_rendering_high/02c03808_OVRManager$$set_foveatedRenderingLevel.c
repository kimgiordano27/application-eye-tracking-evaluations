/*
FUNCTION_NAME: OVRManager$$set_foveatedRenderingLevel
ENTRY_POINT: 02c03808
PROGRAM: sharks-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_foveatedRenderingLevel(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_015d7b20();
  thunk_FUN_01851c08(PTR_DAT_0380a1b8);
  uVar1 = FUN_02c12818();
  thunk_FUN_01851c08(PTR_DAT_037f87a8);
  uVar2 = thunk_FUN_01861bbc();
  System_Threading_Tasks_Task__Finish(uVar2,uVar1,0);
  uVar1 = thunk_FUN_01851c08(PTR_DAT_0380ad58);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar2,uVar1);
}


