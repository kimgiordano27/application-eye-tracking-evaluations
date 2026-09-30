/*
FUNCTION_NAME: OVRManager$$GetFixedFoveatedRenderingSupported
ENTRY_POINT: 069276d8
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


void OVRManager__GetFixedFoveatedRenderingSupported(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  plVar2 = (long *)(unaff_x19 + 0x30);
  *plVar2 = param_1;
  thunk_FUN_03afed3c(plVar2,param_1);
  uVar1 = FUN_0447b05c();
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  thunk_FUN_03afed3c();
  if (*plVar2 != 0) {
    FUN_07fc8ac0(0x43480000,*plVar2,0);
    if (*plVar2 != 0) {
      fVar3 = (float)FUN_07fc8a0c(*plVar2,0);
      if (*plVar2 != 0) {
        fVar4 = (float)FUN_07fc83c4(*plVar2,0);
        if (*plVar2 != 0) {
          fVar5 = (float)FUN_07fc83c4(*plVar2,0);
          *(float *)(unaff_x19 + 0xa0) = fVar3 * 0.5 * fVar4 * fVar5;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


