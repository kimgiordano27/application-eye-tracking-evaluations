/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$EndInvoke
ENTRY_POINT: 06344438
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__EndInvoke(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = (**(code **)(*param_1 + 0x188))();
  *unaff_x20 = lVar1;
  thunk_FUN_037aeb94();
  lVar4 = *unaff_x20;
  lVar1 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d882c0,1);
  if (lVar1 != 0) {
    if ((unaff_x19 != 0) && (lVar2 = thunk_FUN_037787d0(), lVar2 == 0)) {
      uVar3 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar3,0);
    }
    if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    *(long *)(lVar1 + 0x20) = unaff_x19;
    thunk_FUN_037aeb94();
    if (lVar4 != 0) {
      lVar1 = (**(code **)(lVar4 + 0x18))
                        (*(undefined8 *)(lVar4 + 0x40),lVar1,*(undefined8 *)(lVar4 + 0x28));
      if (lVar1 != 0) {
        uVar3 = *(undefined8 *)PTR_DAT_07db4988;
        lVar4 = thunk_FUN_037787d0(lVar1,uVar3);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(lVar1,uVar3);
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


