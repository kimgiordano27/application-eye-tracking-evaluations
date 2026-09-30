/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._PollNextEventWithPose$$.ctor
ENTRY_POINT: 043183c8
PROGRAM: m3ar-libil2cpp.so
SCORE: 162
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__PollNextEventWithPose___ctor(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xe0b) = 1;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_0859e95c(*(long *)(unaff_x19 + 0x40),0);
  }
  plVar5 = *(long **)(unaff_x19 + 0x50);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
                    /* try { // try from 04318404 to 04418413 has its CatchHandler @ 04318414 */
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08f73878) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_0431843c;
      }
                    /* catch() { ... } // from try @ 0431839c with catch @ 04318414
                       catch() { ... } // from try @ 04318404 with catch @ 04318414 */
      uVar3 = uVar3 - 1;
                    /* try { // try from 04318418 to 0441841b has its CatchHandler @ 04318424 */
      piVar4 = piVar4 + 4;
                    /* try { // try from 0431841c to 04418427 has its CatchHandler @ 0431803c */
    } while (uVar3 != 0);
  }
                    /* catch() { ... } // from try @ 04318418 with catch @ 04318424 */
  puVar1 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f73878,0);
LAB_0431843c:
                    /* WARNING: Could not recover jumptable at 0x0431844c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}


