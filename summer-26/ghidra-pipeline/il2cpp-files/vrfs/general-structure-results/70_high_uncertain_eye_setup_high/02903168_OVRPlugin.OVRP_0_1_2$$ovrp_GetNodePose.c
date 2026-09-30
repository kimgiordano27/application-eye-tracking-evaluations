/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_GetNodePose
ENTRY_POINT: 02903168
PROGRAM: vrfs-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose(void)

{
  undefined8 uVar1;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xc3d) = in_w8;
  if (unaff_x19 != 0) {
    if (*(int *)(*(long *)PTR_DAT_06df2be8 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 02903110 with catch @ 02903188
                       try { // try from 02903188 to 02a0319f has its CatchHandler @ 029030b8 */
    uVar1 = FUN_028fc528();
    return uVar1;
  }
                    /* try { // try from 029031a0 to 02a031b7 has its CatchHandler @ 02903224 */
  return 0;
}


