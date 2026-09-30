/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$EndInvoke
ENTRY_POINT: 05fb5264
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__PollNextEventWithPose__EndInvoke(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 unaff_w19;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar1) {
    lVar3 = 0;
    do {
      if (uVar1 <= (uint)lVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      lVar2 = *(long *)(param_1 + 0x20 + lVar3 * 8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      FUN_0713da98(lVar2,unaff_w19,0);
      uVar1 = *(uint *)(param_1 + 0x18);
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < (int)uVar1);
  }
  return;
}


