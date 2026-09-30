/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$BeginInvoke
ENTRY_POINT: 052c8dbc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__BeginInvoke(long param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0xf0c) & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f20);
    *(undefined1 *)(unaff_x21 + 0xf0c) = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_067c8f20 + 0x130);
    if (bVar1 <= *(byte *)(*param_2 + 0x130)) {
      plVar2 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_067c8f20)
      {
        plVar2 = (long *)0x0;
      }
      goto LAB_052c8e20;
    }
  }
  plVar2 = (long *)0x0;
LAB_052c8e20:
  *(long **)(param_1 + 0x20) = plVar2;
  *(long **)(param_1 + 0x28) = param_2;
  return;
}


