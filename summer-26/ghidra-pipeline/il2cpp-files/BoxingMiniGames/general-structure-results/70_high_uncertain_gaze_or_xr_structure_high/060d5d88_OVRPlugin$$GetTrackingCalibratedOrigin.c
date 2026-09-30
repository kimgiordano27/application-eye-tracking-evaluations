/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 060d5d88
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetTrackingCalibratedOrigin
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  long unaff_x19;
  undefined4 uVar2;
  
  FUN_05ffd170();
  lVar1 = FUN_071bd0d0();
  if (lVar1 != 0) {
    uVar2 = FUN_071d0b40(lVar1,0);
    *(undefined4 *)(unaff_x19 + 100) = uVar2;
    *(undefined4 *)(unaff_x19 + 0x68) = param_2;
    *(undefined4 *)(unaff_x19 + 0x6c) = param_3;
    FUN_05ffd214();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


