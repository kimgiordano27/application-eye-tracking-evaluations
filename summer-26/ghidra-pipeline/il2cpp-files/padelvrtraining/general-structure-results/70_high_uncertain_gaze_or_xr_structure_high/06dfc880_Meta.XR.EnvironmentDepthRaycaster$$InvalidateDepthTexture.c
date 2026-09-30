/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$InvalidateDepthTexture
ENTRY_POINT: 06dfc880
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


uint Meta_XR_EnvironmentDepthRaycaster__InvalidateDepthTexture(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = iVar1 - 1;
  *(uint *)(param_2 + 0xc) = uVar2;
  if (-1 < (int)uVar2) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar3 = lVar3 + (ulong)uVar2 * 0x10;
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(param_2 + 0x10) = uVar4;
    thunk_FUN_03d1023c(param_2 + 0x18,0);
  }
  return (uint)-iVar1 >> 0x1f;
}


