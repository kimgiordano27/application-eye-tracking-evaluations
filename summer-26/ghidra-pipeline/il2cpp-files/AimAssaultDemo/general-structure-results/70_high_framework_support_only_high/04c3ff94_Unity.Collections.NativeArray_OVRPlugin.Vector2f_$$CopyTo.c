/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyTo
ENTRY_POINT: 04c3ff94
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopyTo(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  long *unaff_x19;
  long unaff_x20;
  long *plVar5;
  long *plVar6;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x29;
  
  uVar3 = param_1 + 0xfU & 0x1fffffff0;
  plVar6 = (long *)(in_x9 - uVar3);
                    /* try { // try from 04c3ffa8 to 04d40003 has its CatchHandler @ 04c3fe84 */
  plVar5 = (long *)((long)plVar6 - uVar3);
  lVar4 = *unaff_x19;
  *(long **)(unaff_x29 + -0x20) = plVar6;
  (**(code **)(*(long *)(lVar4 + 0x5e0) + 0x10))(*(undefined8 *)(*(long *)(lVar4 + 0x5e0) + 8));
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  puVar2 = *(undefined8 **)(lVar4 + 0x18);
  uVar1 = *puVar2;
  if (-1 < *(int *)(*(long *)(lVar4 + 8) + 0x28)) {
    plVar6 = (long *)*plVar6;
  }
  *(undefined8 *)(unaff_x29 + -0x20) = *unaff_x25;
  *(long **)(unaff_x29 + -0x18) = plVar6;
  (*(code *)puVar2[2])(uVar1);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20))();
  lVar4 = *unaff_x19;
  *(long **)(unaff_x29 + -0x20) = plVar5;
  (**(code **)(*(long *)(lVar4 + 0x5f0) + 0x10))(*(undefined8 *)(*(long *)(lVar4 + 0x5f0) + 8));
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  puVar2 = *(undefined8 **)(lVar4 + 0x18);
  uVar1 = *puVar2;
  if (-1 < *(int *)(*(long *)(lVar4 + 8) + 0x28)) {
    plVar5 = (long *)*plVar5;
  }
  *(undefined8 *)(unaff_x29 + -0x20) = *unaff_x24;
  *(long **)(unaff_x29 + -0x18) = plVar5;
  (*(code *)puVar2[2])(uVar1);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30))();
  FUN_0426ddd8(0);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38))();
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 0x135) & 1) == 0)
  {
    FUN_03775678();
  }
  thunk_FUN_037788cc();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50))();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58))();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60))();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68))();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70))();
  thunk_FUN_07331220();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78))();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70))();
  thunk_FUN_07331220();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80))();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70))();
  thunk_FUN_07331220();
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


