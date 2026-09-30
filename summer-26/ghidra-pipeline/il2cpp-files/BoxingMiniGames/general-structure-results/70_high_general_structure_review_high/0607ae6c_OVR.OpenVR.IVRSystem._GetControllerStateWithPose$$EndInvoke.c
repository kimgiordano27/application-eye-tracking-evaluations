/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$EndInvoke
ENTRY_POINT: 0607ae6c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__EndInvoke(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_06089bfc();
  if (unaff_x20 != 0) {
                    /* try { // try from 0607ae78 to 0617ae7b has its CatchHandler @ 0607af1c */
    lVar1 = *(long *)(unaff_x19 + 0x18);
                    /* try { // try from 0607ae7c to 0617af1f has its CatchHandler @ 0607a518 */
    *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
    if (lVar1 != 0) {
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (*(long *)(lVar1 + 0x28) != 0) {
        *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(*(long *)(lVar1 + 0x28) + 0x10);
        thunk_FUN_036b7ad0();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


