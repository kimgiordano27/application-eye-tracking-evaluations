/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_QplMarkerPointCached
ENTRY_POINT: 03169bac
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


void OVRPlugin_OVRP_1_79_0__ovrp_QplMarkerPointCached(ulong param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  undefined8 uVar5;
  
                    /* catch() { ... } // from try @ 03169b58 with catch @ 03169bac
                       catch() { ... } // from try @ 03169b94 with catch @ 03169bac */
                    /* try { // try from 03169bb4 to 03269bb7 has its CatchHandler @ 03169c84 */
  if ((param_1 & 1) == 0) {
                    /* try { // try from 03169bb8 to 03269c27 has its CatchHandler @ 031692d0 */
                    /* catch() { ... } // from try @ 03169708 with catch @ 03169bbc */
                    /* catch() { ... } // from try @ 031696b0 with catch @ 03169bc0 */
    thunk_FUN_01ad9084(PTR_DAT_03d808a8);
                    /* catch() { ... } // from try @ 03169698 with catch @ 03169bc4 */
                    /* catch() { ... } // from try @ 03169878 with catch @ 03169bc8 */
    *(undefined1 *)(unaff_x21 + 0x9c) = 1;
  }
                    /* catch() { ... } // from try @ 031694e0 with catch @ 03169bcc */
                    /* catch() { ... } // from try @ 03169874 with catch @ 03169bd0 */
                    /* catch() { ... } // from try @ 03169494 with catch @ 03169bd4 */
                    /* catch() { ... } // from try @ 0316986c with catch @ 03169bd8 */
  plVar1 = (long *)(param_2 + 0x168);
                    /* catch() { ... } // from try @ 03169838 with catch @ 03169bdc */
  lVar3 = Oculus_Interaction_HandGrab_HandGrabPose__UsesHandPose
                    (*(undefined8 *)(param_2 + 0x168),param_3,0);
  puVar2 = PTR_DAT_03d808a8;
                    /* catch() { ... } // from try @ 0316972c with catch @ 03169be0
                       catch() { ... } // from try @ 031698b8 with catch @ 03169be0 */
  if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 031694b4 with catch @ 03169be4 */
                    /* catch() { ... } // from try @ 031695c0 with catch @ 03169be8 */
                    /* catch() { ... } // from try @ 03169658 with catch @ 03169bec */
                    /* catch() { ... } // from try @ 031695f4 with catch @ 03169bf0 */
    uVar5 = *(undefined8 *)PTR_DAT_03d808a8;
                    /* catch() { ... } // from try @ 03169814 with catch @ 03169bf4 */
                    /* catch() { ... } // from try @ 03169810 with catch @ 03169bf8 */
    lVar4 = thunk_FUN_01afa9e0(lVar3,uVar5);
                    /* catch() { ... } // from try @ 0316980c with catch @ 03169bfc */
    if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 03169804 with catch @ 03169c00 */
      *plVar1 = lVar4;
                    /* catch() { ... } // from try @ 03169820 with catch @ 03169c04 */
      uVar5 = *(undefined8 *)puVar2;
                    /* catch() { ... } // from try @ 03169818 with catch @ 03169c08
                       catch() { ... } // from try @ 0316982c with catch @ 03169c08 */
                    /* catch() { ... } // from try @ 03169520 with catch @ 03169c0c */
      lVar4 = thunk_FUN_01afa9e0(lVar3,uVar5);
      if (lVar4 != 0) goto LAB_03169c30;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b4841c(lVar3,uVar5);
  }
                    /* try { // try from 03169c28 to 03269c3f has its CatchHandler @ 03169c74 */
  lVar4 = 0;
  *plVar1 = 0;
LAB_03169c30:
                    /* try { // try from 03169c40 to 03269c63 has its CatchHandler @ 031692d0 */
  thunk_FUN_01b4f09c(plVar1,lVar4);
  return;
}


