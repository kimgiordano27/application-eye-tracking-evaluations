/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcInputVideoBufferType
ENTRY_POINT: 0316620c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetMrcInputVideoBufferType(ulong param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar5;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d80658);
    *(undefined1 *)(unaff_x21 + 0x75) = 1;
  }
  plVar1 = (long *)(unaff_x19 + 0x170);
  lVar3 = Oculus_Interaction_HandGrab_HandGrabPose__UsesHandPose(*(undefined8 *)(unaff_x19 + 0x170))
  ;
  puVar2 = PTR_DAT_03d80658;
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_03d80658;
    lVar4 = thunk_FUN_01afa9e0(lVar3,uVar5);
    if (lVar4 != 0) {
      *plVar1 = lVar4;
      uVar5 = *(undefined8 *)puVar2;
      lVar4 = thunk_FUN_01afa9e0(lVar3,uVar5);
      if (lVar4 != 0) goto LAB_03166288;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b4841c(lVar3,uVar5);
  }
  lVar4 = 0;
  *plVar1 = 0;
LAB_03166288:
  thunk_FUN_01b4f09c(plVar1,lVar4);
  return;
}


