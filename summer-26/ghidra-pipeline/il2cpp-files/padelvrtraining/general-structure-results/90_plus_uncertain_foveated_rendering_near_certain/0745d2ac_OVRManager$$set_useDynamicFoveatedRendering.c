/*
FUNCTION_NAME: OVRManager$$set_useDynamicFoveatedRendering
ENTRY_POINT: 0745d2ac
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFoveatedRendering(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam00000000098457f2 & 1) == 0) {
                    /* try { // try from 0745d2c8 to 0755d30b has its CatchHandler @ 0745d13c */
    FUN_03d2d2b0(PTR_StringLiteral_51850_09222b88);
    FUN_03d2d2b0(PTR_DAT_09222ef0);
    bRam00000000098457f2 = 1;
  }
  puVar1 = PTR_DAT_09222ef0;
  if (*(char *)(param_1 + 0x48) != '\0') {
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_StringLiteral_51850_09222b88);
    FUN_06bcef5c(uVar2,param_1,*(undefined8 *)puVar1,0);
    if (lVar3 != 0) {
      FUN_0744db1c(lVar3,uVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  return;
}


