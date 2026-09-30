/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$EndInvoke
ENTRY_POINT: 0913c920
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__PollNextEventWithPose__EndInvoke(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 *unaff_x24;
  
  lVar4 = *(long *)(unaff_x20 + 0x98);
  do {
    lVar2 = FUN_08dc2b6c(lVar4);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      uVar5 = *unaff_x24;
      lVar3 = thunk_FUN_04983e64(lVar2,uVar5);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(lVar2,uVar5);
      }
    }
    lVar2 = FUN_04980500((long *)(unaff_x20 + 0x98),lVar3,lVar4);
    bVar1 = lVar2 != lVar4;
    lVar4 = lVar2;
  } while (bVar1);
  return;
}


