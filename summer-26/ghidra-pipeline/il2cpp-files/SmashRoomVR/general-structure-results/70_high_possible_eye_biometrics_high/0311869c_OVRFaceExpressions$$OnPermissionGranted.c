/*
FUNCTION_NAME: OVRFaceExpressions$$OnPermissionGranted
ENTRY_POINT: 0311869c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: weak_source_state;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions__OnPermissionGranted(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  
                    /* try { // try from 0311869c to 032186a3 has its CatchHandler @ 031186a4 */
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 1000));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03118684 with catch @ 031186a4
                       catch(type#2 @ 00000000) { ... } // from try @ 0311869c with catch @ 031186a4
                        */
                    /* catch() { ... } // from try @ 031186f8 with catch @ 031186a8
                       catch() { ... } // from try @ 03118730 with catch @ 031186a8
                       catch() { ... } // from try @ 03118774 with catch @ 031186a8 */
  *(undefined1 *)(unaff_x21 + 0xd5e) = 1;
  puVar1 = Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__;
  lVar5 = *(long *)(unaff_x20 + 0x170);
                    /* try { // try from 031186c8 to 032186d7 has its CatchHandler @ 03118730 */
  while ((plVar3 = (long *)Oculus_Interaction_HandGrab_HandGrabPose__UsesHandPose(lVar5),
         plVar3 == (long *)0x0 || (*plVar3 == *(long *)puVar1))) {
                    /* try { // try from 031186ec to 032186f7 has its CatchHandler @ 03118734 */
    lVar4 = FUN_01ace6a4(unaff_x20 + 0x170,plVar3,lVar5);
    bVar2 = lVar5 == lVar4;
    lVar5 = lVar4;
                    /* try { // try from 031186f8 to 0321872b has its CatchHandler @ 031186a8 */
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b4841c(plVar3);
}


