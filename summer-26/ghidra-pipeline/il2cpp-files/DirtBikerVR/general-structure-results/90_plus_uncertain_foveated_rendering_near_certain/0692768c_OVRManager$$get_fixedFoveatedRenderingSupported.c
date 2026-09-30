/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 0692768c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingSupported(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  puVar2 = PTR_DAT_084b5968;
  puVar1 = PTR_DAT_0848bab8;
  if ((DAT_0897cecd & 1) == 0) {
    FUN_03a8a718(PTR_DAT_0848bab8);
    FUN_03a8a718(PTR_DAT_084b5968);
    DAT_0897cecd = 1;
  }
  lVar3 = FUN_0447aad0(param_1,*(undefined8 *)puVar2);
  plVar5 = (long *)(param_1 + 0x30);
  *plVar5 = lVar3;
  thunk_FUN_03afed3c(plVar5,lVar3);
  uVar4 = FUN_0447b05c(param_1,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  thunk_FUN_03afed3c();
  if (*plVar5 != 0) {
    FUN_07fc8ac0(0x43480000,*plVar5,0);
    if (*plVar5 != 0) {
      fVar6 = (float)FUN_07fc8a0c(*plVar5,0);
      if (*plVar5 != 0) {
        fVar7 = (float)FUN_07fc83c4(*plVar5,0);
        if (*plVar5 != 0) {
          fVar8 = (float)FUN_07fc83c4(*plVar5,0);
          *(float *)(param_1 + 0xa0) = fVar6 * 0.5 * fVar7 * fVar8;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


