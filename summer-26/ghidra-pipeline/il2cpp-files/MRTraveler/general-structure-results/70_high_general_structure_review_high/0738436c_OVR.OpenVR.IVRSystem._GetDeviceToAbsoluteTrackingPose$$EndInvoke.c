/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 0738436c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__EndInvoke(void)

{
  ulong uVar1;
  long lVar2;
  int in_w8;
  long *unaff_x20;
  
                    /* try { // try from 0738436c to 0748436f has its CatchHandler @ 07384394 */
  if (in_w8 == 0) {
                    /* try { // try from 07384370 to 07484373 has its CatchHandler @ 07384390 */
    thunk_FUN_03cd7500();
  }
                    /* try { // try from 07384374 to 0748437b has its CatchHandler @ 0738438c */
  uVar1 = FUN_085dfaac();
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_07384c3c();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar2 = FUN_0469cb0c(lVar2,*(undefined8 *)PTR_DAT_08e6b968);
    *unaff_x20 = lVar2;
    thunk_FUN_03d233cc();
    if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_085a044c(*unaff_x20,1,0);
    if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_085a002c(DAT_018b0d2c,*unaff_x20,0);
    if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_085a00b4(DAT_018b0230,*unaff_x20,0);
    if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_085a07f0(0,0,0,0,*unaff_x20,0);
    if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_085a08c4(*unaff_x20,2,0);
  }
  FUN_07384de4();
  FUN_07385060();
  FUN_07385124();
  return;
}


