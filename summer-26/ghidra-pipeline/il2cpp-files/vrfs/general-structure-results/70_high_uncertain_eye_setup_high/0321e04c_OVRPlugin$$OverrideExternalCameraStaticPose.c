/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 0321e04c
PROGRAM: vrfs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__OverrideExternalCameraStaticPose(void)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined4 unaff_w19;
  long *unaff_x23;
  
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  if (DAT_07233a0b == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dc3990);
                    /* try { // try from 0321e078 to 0331e07b has its CatchHandler @ 0321e084 */
    DAT_07233a0b = '\x01';
  }
  puVar2 = PTR_DAT_06dd80b0;
                    /* try { // try from 0321e07c to 0331e0a7 has its CatchHandler @ 0321dbc8 */
  lVar3 = *unaff_x23;
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0321e078 with catch @ 0321e084
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0321dfa8 with catch @ 0321e088
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0321ded8 with catch @ 0321e08c
                        */
  if (*(int *)(lVar3 + 0xe0) == 0) {
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0321df18 with catch @ 0321e090
                        */
    thunk_FUN_016466fc();
    lVar3 = *unaff_x23;
  }
  cVar1 = **(char **)(lVar3 + 0xb8);
                    /* try { // try from 0321e0a8 to 0331e0ab has its CatchHandler @ 0321e12c */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar2);
  }
  plVar4 = (long *)FUN_03ef90bc(0);
  if (plVar4 != (long *)0x0) {
    lVar3 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
    if (lVar3 != 0) {
      if (cVar1 == '\0') {
                    /* try { // try from 0321e0f0 to 0331e117 has its CatchHandler @ 0321e138 */
        FUN_040fa400();
      }
      else {
        FUN_040fa370();
      }
                    /* try { // try from 0321e118 to 0331e123 has its CatchHandler @ 0321dbc8 */
      return unaff_w19;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0321e124 to 0331e12b has its CatchHandler @ 0321e138 */
  FUN_0160eeb4();
}


