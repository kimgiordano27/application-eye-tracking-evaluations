/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetDeviceToAbsoluteTrackingPose$$BeginInvoke
ENTRY_POINT: 04316a34
PROGRAM: m3ar-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetDeviceToAbsoluteTrackingPose__BeginInvoke
               (void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar2;
  undefined8 *unaff_x24;
  
  plVar2 = *(long **)(unaff_x20 + 0x28);
  uVar1 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x48),&stack0x00000008);
  uVar1 = FUN_0735fe18(*unaff_x24,uVar1,0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x558))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x560));
    plVar2 = *(long **)(unaff_x20 + 0x38);
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 04316aac to 04416abb has its CatchHandler @ 04316fa8 */
      (**(code **)(*plVar2 + 0x178))
                (plVar2,unaff_x19 & 0xffffffff | unaff_x21 << 0x20,0,1,
                 *(undefined8 *)PTR_DAT_08f68760,*(undefined8 *)(*plVar2 + 0x180));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


