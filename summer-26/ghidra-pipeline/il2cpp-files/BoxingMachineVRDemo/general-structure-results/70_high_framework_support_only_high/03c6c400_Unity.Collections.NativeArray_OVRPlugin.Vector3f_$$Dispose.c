/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 03c6c400
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Dispose(void)

{
  undefined8 *puVar1;
  int in_w8;
  long lVar2;
  int in_w9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  while( true ) {
    unaff_x24 = unaff_x24 + 0x18;
    if (((long)in_w9 <= (long)unaff_x23) || (unaff_w22 != in_w8)) {
      if (unaff_w22 != in_w8) {
        FUN_05027c8c(0);
      }
      if (*(long *)(unaff_x21 + 0x28) == in_stack_00000038) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    puVar1 = (undefined8 *)(lVar2 + unaff_x24);
    if (unaff_x19 == 0) break;
    in_stack_00000020 = *puVar1;
    in_stack_00000028 = puVar1[1];
    in_stack_00000030 = puVar1[2];
    (**(code **)(unaff_x19 + 0x18))
              (*(undefined8 *)(unaff_x19 + 0x40),&stack0x00000020,*(undefined8 *)(unaff_x19 + 0x28))
    ;
    in_w9 = *(int *)(unaff_x20 + 0x18);
    in_w8 = *(int *)(unaff_x20 + 0x1c);
    unaff_x23 = unaff_x23 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


