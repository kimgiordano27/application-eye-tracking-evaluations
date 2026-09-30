/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 0369be14
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long unaff_x19;
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float unaff_s8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  float fVar6;
  float fVar7;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000030;
  float in_stack_00000038;
  
  fVar7 = *(float *)(unaff_x19 + 0x94);
  fStack0000000000000008 = in_stack_00000030._4_4_;
  fStack0000000000000004 = in_stack_00000038;
  fStack000000000000000c = param_2;
  if (*(int *)(param_4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar1 = (float)FUN_0407bc20(&stack0x00000030,0);
  fVar6 = *(float *)(unaff_x19 + 0x90);
  uVar2 = FUN_0407bc20(&stack0x00000030,0);
  uVar4 = unaff_d9;
  uVar5 = unaff_d10;
  uVar3 = FUN_04067568(0);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_0407de3c((fStack000000000000000c - unaff_s8 * fVar7) + fVar1 * fVar6,
                 (fStack0000000000000008 - (float)unaff_d9 * fVar7) + param_2 * fVar6,
                 (fStack0000000000000004 - (float)unaff_d10 * fVar7) + param_3 * fVar6,uVar3,uVar4,
                 uVar5,uVar2,*(long *)(unaff_x19 + 0x48),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


