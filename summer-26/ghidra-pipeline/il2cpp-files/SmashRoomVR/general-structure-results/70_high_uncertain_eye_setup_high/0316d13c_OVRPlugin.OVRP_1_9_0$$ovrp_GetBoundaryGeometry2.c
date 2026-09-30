/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetBoundaryGeometry2
ENTRY_POINT: 0316d13c
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


void OVRPlugin_OVRP_1_9_0__ovrp_GetBoundaryGeometry2(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((DAT_03ff20bf & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d80658);
    DAT_03ff20bf = 1;
  }
  plVar4 = (long *)(param_1 + 0x68);
  lVar2 = Oculus_Interaction_HandGrab_HandGrabPose__UsesHandPose(*plVar4,param_2,0);
  puVar1 = PTR_DAT_03d80658;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_03d80658;
    lVar3 = thunk_FUN_01afa9e0(lVar2,uVar5);
    if (lVar3 != 0) {
      *plVar4 = lVar3;
      uVar5 = *(undefined8 *)puVar1;
      lVar3 = thunk_FUN_01afa9e0(lVar2,uVar5);
      if (lVar3 != 0) goto LAB_0316d1cc;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b4841c(lVar2,uVar5);
  }
  lVar3 = 0;
  *plVar4 = 0;
LAB_0316d1cc:
  thunk_FUN_01b4f09c(plVar4,lVar3);
  return;
}


