/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetClosestSeatPoseDebugger>b__82_2
ENTRY_POINT: 06e19c64
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetClosestSeatPoseDebugger>b__82_2(long param_1)

{
  long lVar1;
  uint in_w10;
  long in_x11;
  int in_w12;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  uint uVar2;
  
  do {
    uVar2 = in_w10 + 1;
    if (-1 < in_w12) {
      *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(in_x11 + 0x38);
      thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x10));
      uVar2 = unaff_w21;
LAB_06e19c8c:
      return uVar2 < unaff_w20;
    }
    if (unaff_w20 <= uVar2) {
      *(uint *)(unaff_x19 + 8) = unaff_w20 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      goto LAB_06e19c8c;
    }
    lVar1 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = in_w10 + 2;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_w10 = in_w10 + 1;
    if (*(uint *)(lVar1 + 0x18) <= in_w10) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    in_x11 = lVar1 + (long)(int)uVar2 * 0x20;
    in_w12 = *(int *)(in_x11 + 0x20);
    unaff_w21 = uVar2;
  } while( true );
}


