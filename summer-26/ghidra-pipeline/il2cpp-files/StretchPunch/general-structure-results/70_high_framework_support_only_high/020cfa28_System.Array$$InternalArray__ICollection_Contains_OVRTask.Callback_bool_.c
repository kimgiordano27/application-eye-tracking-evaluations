/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRTask.Callback<bool>>
ENTRY_POINT: 020cfa28
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array__InternalArray__ICollection_Contains<OVRTask_Callback<bool>>(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long in_x4;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  FUN_01d7d918(StringLiteral_1109);
  if (*(long *)(in_x4 + 0x38) == 0) {
    FUN_01dde854(in_x4);
  }
  in_stack_00000028 = 0;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar2 = FUN_033fa93c();
  if ((uVar2 & 1) == 0) {
    FUN_033fa900();
  }
  lVar3 = FUN_033f9ca0(0);
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  FUN_032ff418(0);
  if (lVar3 != 0) {
    in_stack_00000028 = FUN_033fa3e0(lVar3,0);
    uVar2 = OVRPlugin_OVRP_1_103_0__ovrp_StartColocationAdvertisement(&stack0x00000028,0);
    if (((((uVar2 & 1) == 0) &&
         (uVar2 = FUN_033fad88(&stack0x00000028,unaff_w21 & 1,0), (uVar2 & 1) == 0)) ||
        (uVar2 = FUN_033fada4(), (uVar2 & 1) == 0)) ||
       (uVar2 = FUN_033fadf4(&stack0x00000028), (uVar2 & 1) == 0)) {
      uVar2 = FUN_033fa93c();
      puVar1 = StringLiteral_1109;
      if ((uVar2 & 1) != 0) {
        unaff_x22 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_1109);
        FUN_033fa948(unaff_x22,0);
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033fae88(&stack0x00000008,unaff_x22,unaff_w21 & 1,0);
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000018;
    }
    else {
      if (*(int *)(*(long *)StringLiteral_1109 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033fae1c(lVar3,1,&stack0x00000030,0);
    }
    if (unaff_x20 != 0) {
      (**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x40));
      FUN_033fa324(&stack0x00000030,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


