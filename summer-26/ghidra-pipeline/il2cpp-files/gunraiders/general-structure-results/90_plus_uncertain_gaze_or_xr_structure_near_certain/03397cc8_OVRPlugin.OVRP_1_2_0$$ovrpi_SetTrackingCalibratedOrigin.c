/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 03397cc8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x23;
  
  FUN_03394994();
  lVar4 = *(long *)(unaff_x23 + 0x110);
  if (lVar4 == 0) {
    lVar4 = FUN_03390754();
  }
  lVar1 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
  if (lVar1 != 0) {
    if ((unaff_x20 != 0) && (lVar2 = thunk_FUN_01c495e4(), lVar2 == 0)) {
      uVar3 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar3,0);
    }
    if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    *(long *)(lVar1 + 0x20) = unaff_x20;
    if (lVar4 != 0) {
      uVar3 = (**(code **)(lVar4 + 0x18))
                        (*(undefined8 *)(lVar4 + 0x40),lVar1,*(undefined8 *)(lVar4 + 0x28));
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


