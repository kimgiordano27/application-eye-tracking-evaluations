/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 0694621c
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


void OVRPlugin__get_foveatedRenderingLevel(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *in_x9;
  long unaff_x19;
  long lVar3;
  undefined8 *unaff_x22;
  
  (*in_x9)(param_2,param_3,*(undefined8 *)(param_1 + 0x210));
  lVar3 = *(long *)(unaff_x19 + 0x38);
  uVar2 = thunk_FUN_03ac74bc(*unaff_x22);
  FUN_05e38d24();
  puVar1 = PTR_DAT_084b64f0;
  if (lVar3 != 0) {
    FUN_04de9000(lVar3,uVar2,*(undefined8 *)PTR_DAT_084b64f8);
    lVar3 = *(long *)(unaff_x19 + 0x58);
    uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    FUN_05e38d24();
    if (lVar3 != 0) {
      FUN_04de9000(lVar3,uVar2,*(undefined8 *)PTR_DAT_084b6500);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


