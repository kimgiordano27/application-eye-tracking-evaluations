/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 02343230
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Dispose
               (code *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 in_x9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  
  uVar4 = param_4._8_8_;
  uVar3 = param_4._0_8_;
  while( true ) {
    uStack0000000000000060 = uVar3;
    uStack0000000000000068 = uVar4;
    uStack0000000000000070 = in_x9;
    (*param_1)(param_5,&stack0x00000040,*(undefined8 *)(unaff_x19 + 0x28));
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 0x38;
    if (((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x22) ||
       (unaff_w21 != *(int *)(unaff_x20 + 0x1c))) {
      if (unaff_w21 != *(int *)(unaff_x20 + 0x1c)) {
        FUN_033b33b0(0);
      }
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    puVar1 = (undefined8 *)(lVar2 + unaff_x23);
    in_x9 = puVar1[6];
    uVar4 = puVar1[5];
    uVar3 = puVar1[4];
    if (unaff_x19 == 0) break;
    param_1 = *(code **)(unaff_x19 + 0x18);
    param_5 = *(undefined8 *)(unaff_x19 + 0x40);
    in_stack_00000040 = *puVar1;
    in_stack_00000048 = puVar1[1];
    in_stack_00000050 = puVar1[2];
    in_stack_00000058 = puVar1[3];
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


