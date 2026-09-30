/*
FUNCTION_NAME: OVRManager$$GetFoveatedRenderingLevel
ENTRY_POINT: 0511c298
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFoveatedRenderingLevel(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_DAT_06780ab0;
  puVar2 = PTR_DAT_06780a88;
  puVar1 = PTR_DAT_06779690;
  if ((DAT_06b79bd1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06780ab0);
    FUN_02d6084c(PTR_DAT_06780a88);
    FUN_02d6084c(PTR_DAT_06779690);
    DAT_06b79bd1 = 1;
  }
  FUN_050f136c(param_2,*(undefined8 *)puVar1,0);
  FUN_050f136c(param_3,*(undefined8 *)puVar2,0);
  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  FUN_0511c35c(lVar4,param_2,param_3);
  if (lVar4 != 0) {
    FUN_0511c3e4(lVar4,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


