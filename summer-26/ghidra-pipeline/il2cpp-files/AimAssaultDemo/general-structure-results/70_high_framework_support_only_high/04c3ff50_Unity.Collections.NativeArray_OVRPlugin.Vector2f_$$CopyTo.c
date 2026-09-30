/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyTo
ENTRY_POINT: 04c3ff50
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
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar6;
  undefined8 *puVar7;
  long unaff_x23;
  undefined8 *unaff_x25;
  long unaff_x29;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0xe0));
  FUN_0373b518(PTR_DAT_07d98798);
  FUN_0373b518(PTR_DAT_07d990d8);
  *(undefined1 *)(unaff_x21 + 0x7b3) = 1;
  puVar1 = PTR_DAT_07d98798;
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 04c3fec8 with catch @ 04c3ff78
                       try { // try from 04c3ff78 to 04d3ff8f has its CatchHandler @ 04c3fe84 */
                    /* try { // try from 04c3ff90 to 04d3ffa7 has its CatchHandler @ 04c40014 */
  uVar4 = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 0xfc) +
          0xf & 0x1fffffff0;
  puVar7 = (undefined8 *)(&stack0x00000000 + -uVar4);
  plVar6 = (long *)((long)puVar7 - uVar4);
  lVar5 = *unaff_x19;
  *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
  (**(code **)(*(long *)(lVar5 + 0x5e0) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 0x5e0) + 8));
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  puVar3 = *(undefined8 **)(lVar5 + 0x18);
  uVar2 = *puVar3;
  if (-1 < *(int *)(*(long *)(lVar5 + 8) + 0x28)) {
    puVar7 = (undefined8 *)*puVar7;
  }
  *(undefined8 *)(unaff_x29 + -0x20) = *unaff_x25;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
  (*(code *)puVar3[2])(uVar2);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20))();
  lVar5 = *unaff_x19;
  *(long **)(unaff_x29 + -0x20) = plVar6;
  (**(code **)(*(long *)(lVar5 + 0x5f0) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 0x5f0) + 8));
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  puVar3 = *(undefined8 **)(lVar5 + 0x18);
  uVar2 = *puVar3;
  if (-1 < *(int *)(*(long *)(lVar5 + 8) + 0x28)) {
    plVar6 = (long *)*plVar6;
  }
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)puVar1;
  *(long **)(unaff_x29 + -0x18) = plVar6;
  (*(code *)puVar3[2])(uVar2);
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


