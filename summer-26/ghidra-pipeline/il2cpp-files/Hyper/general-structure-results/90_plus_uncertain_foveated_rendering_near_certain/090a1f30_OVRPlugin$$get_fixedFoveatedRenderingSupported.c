/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 090a1f30
PROGRAM: Hyper-libil2cpp.so
SCORE: 100
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRPlugin__get_fixedFoveatedRenderingSupported(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  if ((unaff_x19 != 0) && (uVar2 = FUN_05b00274(), puVar1 = PTR_DAT_0ac78d28, param_1 != 0)) {
    *(undefined8 *)(param_1 + 200) = uVar2;
    thunk_FUN_049ee3d8();
    uVar2 = FUN_05b00274();
    FUN_0717c458(param_1,uVar2,*(undefined8 *)puVar1);
    FUN_0a17ba14();
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


