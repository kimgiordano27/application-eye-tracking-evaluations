/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$BeginInvoke
ENTRY_POINT: 0515ef5c
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


void OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__BeginInvoke
               (ulong param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  long *unaff_x19;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    *(undefined1 *)(unaff_x21 + 0xfa6) = 1;
  }
  if (unaff_x19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_065c8c40 + 0x130);
    if (bVar1 <= *(byte *)(*unaff_x19 + 0x130)) {
      plVar2 = unaff_x19;
      if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_065c8c40) {
        plVar2 = (long *)0x0;
      }
      goto LAB_0515efb8;
    }
  }
  plVar2 = (long *)0x0;
LAB_0515efb8:
  *(long **)(param_2 + 0x30) = plVar2;
  *(long **)(param_2 + 0x38) = unaff_x19;
  return;
}


