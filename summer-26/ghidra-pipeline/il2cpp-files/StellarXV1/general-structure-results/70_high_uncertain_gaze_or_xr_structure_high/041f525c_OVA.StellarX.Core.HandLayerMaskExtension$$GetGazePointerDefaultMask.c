/*
FUNCTION_NAME: OVA.StellarX.Core.HandLayerMaskExtension$$GetGazePointerDefaultMask
ENTRY_POINT: 041f525c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVA_StellarX_Core_HandLayerMaskExtension__GetGazePointerDefaultMask(void)

{
  int iVar1;
  long unaff_x20;
  long unaff_x21;
  
  FUN_04077588();
  *(undefined1 *)(unaff_x21 + 0x8a1) = 1;
  iVar1 = *(int *)(unaff_x20 + 0x10);
  if (iVar1 == 1) {
    if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_041f52d4;
    FUN_043b3984();
    iVar1 = *(int *)(unaff_x20 + 0x10);
  }
  if (iVar1 != 2) {
    return;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    FUN_043b3984();
    return;
  }
LAB_041f52d4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


