/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 0515ef48
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__Invoke
               (long param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 0515eec0 with catch @ 0515ef48
                       catch() { ... } // from try @ 0515ef08 with catch @ 0515ef48 */
                    /* try { // try from 0515ef50 to 0525ef5b has its CatchHandler @ 0515e970 */
                    /* catch() { ... } // from try @ 0515ede8 with catch @ 0515ef58
                       catch() { ... } // from try @ 0515ee80 with catch @ 0515ef58
                       catch() { ... } // from try @ 0515ef18 with catch @ 0515ef58 */
  if ((DAT_06a70fa6 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    DAT_06a70fa6 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_065c8c40 + 0x130);
    if (bVar1 <= *(byte *)(*param_2 + 0x130)) {
      plVar2 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_065c8c40)
      {
        plVar2 = (long *)0x0;
      }
      goto LAB_0515efb8;
    }
  }
  plVar2 = (long *)0x0;
LAB_0515efb8:
  *(long **)(param_1 + 0x30) = plVar2;
  *(long **)(param_1 + 0x38) = param_2;
  return;
}


