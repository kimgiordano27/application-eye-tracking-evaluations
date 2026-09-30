/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$SetTrackingSpacePose
ENTRY_POINT: 05b06f8c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


uint Meta_XR_MRUtilityKit_MRUK__SetTrackingSpacePose(undefined1 *param_1)

{
  ulong uVar1;
  uint unaff_w19;
  void *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  void *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  code *pcVar2;
  
  while( true ) {
    pcVar2 = *(code **)(unaff_x25 + 0x1b8);
    memcpy(param_1,unaff_x23,0x58);
    memcpy(&stack0x00000000,unaff_x20,0x58);
    uVar1 = (*pcVar2)();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x24 = unaff_x24 + -1;
    unaff_x23 = (void *)((long)unaff_x23 + 0x58);
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x24 == 0) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    unaff_x25 = *unaff_x22;
    param_1 = &stack0x00000058;
  }
  return 0xffffffff;
}


