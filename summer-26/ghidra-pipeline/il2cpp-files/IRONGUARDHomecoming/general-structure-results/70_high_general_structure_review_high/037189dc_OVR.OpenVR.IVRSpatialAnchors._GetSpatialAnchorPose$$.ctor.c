/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$.ctor
ENTRY_POINT: 037189dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose___ctor(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_WaitWhileUnit_<>c__DisplayClass5_0_<Await>b__0__);
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_WaitWhileUnit_<Await>d__5_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_01efb3a4(Method_System_Net_FtpWebRequest_SetException__);
  thunk_FUN_01efb3a4(Method_DefaultNamespace_WallOpener_<>c_<Start>b__23_0__);
  *(undefined1 *)(unaff_x21 + 0x13b) = 1;
  if (unaff_x20 != (long *)0x0) {
    uVar1 = FUN_036dae98();
    if ((uVar1 & 1) == 0) {
      FUN_037184fc();
      if (unaff_x20[5] == 0) goto LAB_03718aac;
      puVar3 = (undefined8 *)(unaff_x20[5] + 0x10);
      puVar4 = (undefined8 *)Method_DefaultNamespace_WallOpener_<>c_<Start>b__23_0__;
    }
    else {
      FUN_037184fc();
      lVar2 = (**(code **)(*unaff_x20 + 0x178))();
      if (lVar2 == 0) goto LAB_03718aac;
      puVar3 = (undefined8 *)(lVar2 + 0x18);
      puVar4 = (undefined8 *)Method_System_Net_FtpWebRequest_SetException__;
    }
    FUN_03405678(*puVar4,*puVar3,0);
    FUN_037184fc();
    return;
  }
LAB_03718aac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


