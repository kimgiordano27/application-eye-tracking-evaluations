/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 079ea164
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__BeginInvoke
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000020;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xd60));
  lVar3 = *(long *)(unaff_x19 + 0x18);
  *(undefined1 *)(unaff_x21 + 0x4f1) = 1;
  puVar2 = PTR_DAT_092977d0;
  puVar1 = PTR_DAT_092977c8;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar5 = *(undefined8 *)PTR_DAT_09285d60;
  FUN_05d104c4(&stack0x00000010,lVar3,*(undefined8 *)PTR_DAT_092977e0);
  do {
    uVar4 = FUN_0718c88c(&stack0x00000010,*(undefined8 *)puVar2);
  } while ((uVar4 & 1) != 0);
  FUN_0718c888(&stack0x00000010,*(undefined8 *)puVar1);
  return;
}


