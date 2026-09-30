/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_OverrideExternalCameraStaticPose
ENTRY_POINT: 02c52320
PROGRAM: sharks-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_44_0__ovrp_OverrideExternalCameraStaticPose(void)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x21;
  
  plVar3 = *(long **)(unaff_x20 + 0x10);
  if (plVar3 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar3 + 0x318))(plVar3,*(undefined8 *)(*plVar3 + 800));
    if (unaff_x21 != 0) {
      plVar3 = *(long **)(unaff_x21 + 0x10);
      if (plVar3 != (long *)0x0) {
        iVar2 = (**(code **)(*plVar3 + 0x318))(plVar3,*(undefined8 *)(*plVar3 + 800));
        return iVar1 == iVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


