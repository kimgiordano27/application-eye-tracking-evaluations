/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 06946434
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingLevel(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x23;
  
  if (param_1[3] == 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      param_1 = *(undefined8 **)(*unaff_x23 + 0xb8);
    }
    uVar3 = *param_1;
    uVar1 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b64f0);
    FUN_05e38d24(uVar1,uVar3,*(undefined8 *)PTR_DAT_084b6520,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
    *puVar2 = uVar1;
    thunk_FUN_03afed3c(puVar2,uVar1);
  }
  if (unaff_x19 != 0) {
    FUN_04de9000();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


