/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 0740bb74
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 *puVar4;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  
  puVar3 = *(undefined8 **)(unaff_x21 + 0x490);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x498);
  if ((param_1 & 1) == 0) {
                    /* try { // try from 0740bb80 to 0750bbf7 has its CatchHandler @ 0740bd38 */
    FUN_03c8f898(PTR_DAT_08e68ce0);
    FUN_03c8f898(PTR_DAT_08eb6490);
    FUN_03c8f898(PTR_DAT_08eb6498);
    *(undefined1 *)(unaff_x20 + 0xa37) = 1;
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  uVar1 = FUN_03c8f97c(*unaff_x23,0x27f1);
  FUN_0701f51c(uVar1,*puVar3,0);
  thunk_FUN_03d233cc();
  uVar2 = FUN_03c8f97c(*unaff_x23,0x29fd);
  FUN_0701f51c(uVar2,*puVar4,0);
  in_stack_00000008 = uVar2;
  thunk_FUN_03d233cc(&stack0x00000008,uVar2);
  uVar2 = DAT_018afa20;
  in_stack_00000018 = in_stack_00000018 & 0xffffffffffffff00;
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = uVar1;
  unaff_x19[3] = in_stack_00000018;
  unaff_x19[2] = uVar2;
  return;
}


