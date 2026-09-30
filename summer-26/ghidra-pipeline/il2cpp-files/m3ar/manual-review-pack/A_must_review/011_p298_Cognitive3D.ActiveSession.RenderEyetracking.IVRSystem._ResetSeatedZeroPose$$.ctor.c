/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._ResetSeatedZeroPose$$.ctor
ENTRY_POINT: 04316b10
PROGRAM: m3ar-libil2cpp.so
SCORE: 179
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_4;functionality_possible_biometrics_hits_4
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__ResetSeatedZeroPose___ctor(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x21;
  long *plVar7;
  
  plVar7 = *(long **)(unaff_x21 + 0x738);
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *plVar7) {
                    /* try { // try from 04316b58 to 04416b5f has its CatchHandler @ 04316f54 */
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_04316b60;
      }
      uVar4 = uVar4 - 1;
                    /* try { // try from 04316b38 to 04416b3b has its CatchHandler @ 04316f44 */
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_0406ae20();
LAB_04316b60:
  uVar4 = (*(code *)*puVar1)();
  if ((uVar4 & 1) != 0) {
    return;
  }
  plVar6 = *(long **)(unaff_x19 + 0x68);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar3 = *plVar6;
  lVar2 = *plVar7;
                    /* try { // try from 04316b8c to 04416be7 has its CatchHandler @ 04316fac */
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar2) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto 
        Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose___ctor
        ;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_0406ae20(plVar6,lVar2,4);

  Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose___ctor
  :
                    /* WARNING: Could not recover jumptable at 0x04316be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar6,2,puVar1[1]);
  return;
}


