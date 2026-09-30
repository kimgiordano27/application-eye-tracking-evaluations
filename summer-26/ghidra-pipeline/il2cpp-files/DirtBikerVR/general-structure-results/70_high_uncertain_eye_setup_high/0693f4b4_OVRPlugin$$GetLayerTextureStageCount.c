/*
FUNCTION_NAME: OVRPlugin$$GetLayerTextureStageCount
ENTRY_POINT: 0693f4b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetLayerTextureStageCount(void)

{
  long lVar1;
  long *unaff_x19;
  float fVar2;
  
  fVar2 = (float)FUN_07c94120();
  lVar1 = unaff_x19[2];
  if (lVar1 != 0) {
    if (*(float *)((long)unaff_x19 + 0x44) * *(float *)((long)unaff_x19 + 0x3c) *
        *(float *)(lVar1 + 0x138) <= fVar2) {
      return;
    }
    if ((*(long *)(lVar1 + 0xe8) != 0) &&
       (lVar1 = *(long *)(*(long *)(lVar1 + 0xe8) + 0x40), lVar1 != 0)) {
      (**(code **)(*unaff_x19 + 0x318))
                (*(float *)((long)unaff_x19 + 0x24) * 0.5 + *(float *)(lVar1 + 0x130) * 0.5);
      FUN_0693f530();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


