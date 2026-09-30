/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<GetClosestSeatPoseDebugger>b__56_0
ENTRY_POINT: 05b0d2f0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_SceneDebugger__<GetClosestSeatPoseDebugger>b__56_0(void)

{
  ushort uVar1;
  long lVar2;
  int in_w8;
  long *unaff_x19;
  long unaff_x20;
  undefined4 in_stack_00000008;
  
  if (in_w8 != 0) {
    if (*unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (in_w8 != *(int *)(*unaff_x19 + 0x20) + 1) goto LAB_05b0d314;
  }
  FUN_05e22a2c(0);
LAB_05b0d314:
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar2 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_0322bef4();
    lVar2 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
  }
  in_stack_00000008 = (undefined4)unaff_x19[2];
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_0322bef4();
  }
  thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x28),&stack0x00000008);
  return;
}


