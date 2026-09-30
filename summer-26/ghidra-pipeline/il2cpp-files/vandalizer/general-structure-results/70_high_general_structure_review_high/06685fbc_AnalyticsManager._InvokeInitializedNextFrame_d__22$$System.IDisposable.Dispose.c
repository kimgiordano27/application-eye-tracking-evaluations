/*
FUNCTION_NAME: AnalyticsManager.<InvokeInitializedNextFrame>d__22$$System.IDisposable.Dispose
ENTRY_POINT: 06685fbc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
AnalyticsManager_<InvokeInitializedNextFrame>d__22__System_IDisposable_Dispose(long *param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined2 in_stack_00000018;
  undefined1 uStack000000000000001a;
  undefined5 uStack000000000000001b;
  
  if (*(int *)(*param_1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar2 = FUN_05e764b0(in_stack_00000008,0);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  uStack000000000000001a = 0;
  uStack000000000000001b = 0;
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05e134d8(0x26,0);
  }
  in_stack_00000010 = uVar2;
  thunk_FUN_0329bf60(&stack0x00000010,uVar2);
  auVar1._8_2_ = 0;
  auVar1._0_8_ = in_stack_00000010;
  auVar1[10] = 1;
  auVar1._11_5_ = uStack000000000000001b;
  return auVar1;
}


