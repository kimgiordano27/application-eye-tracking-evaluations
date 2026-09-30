/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Vector4f>
ENTRY_POINT: 01cc5864
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>(void)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  thunk_FUN_01ad9084();
  thunk_FUN_01ad9084(StringLiteral_1240);
  thunk_FUN_01ad9084(StringLiteral_1218);
  *(undefined1 *)(unaff_x23 + 0xaa1) = 1;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_00000090 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_01cac9a8();
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    uVar2 = FUN_02396888();
    FUN_01c9b9b8(uVar2 & 1,0);
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      FUN_023969d0(*(long *)(unaff_x20 + 0x30),&stack0x000000a0,&stack0x00000020,
                   *(undefined8 *)StringLiteral_1240);
      if (*(long *)(unaff_x20 + 0x30) != 0) {
        FUN_02396e54();
        auVar1._8_8_ = in_stack_000000a8;
        auVar1._0_8_ = in_stack_000000a0;
        return auVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


