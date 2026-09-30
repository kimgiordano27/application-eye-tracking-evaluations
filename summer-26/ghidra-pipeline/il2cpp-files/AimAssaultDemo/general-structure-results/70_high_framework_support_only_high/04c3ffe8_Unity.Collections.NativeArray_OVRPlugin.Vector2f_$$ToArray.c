/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$ToArray
ENTRY_POINT: 04c3ffe8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__ToArray(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  int in_w9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x29;
  
  if (-1 < in_w9) {
    unaff_x22 = (undefined8 *)*unaff_x22;
  }
  *(undefined8 *)(unaff_x29 + -0x20) = *unaff_x25;
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
                    /* try { // try from 04c40004 to 04d40013 has its CatchHandler @ 04c40014 */
                    /* catch() { ... } // from try @ 04c3ff90 with catch @ 04c40014
                       catch() { ... } // from try @ 04c40004 with catch @ 04c40014 */
                    /* try { // try from 04c40018 to 04d4001b has its CatchHandler @ 04c40024 */
  (**(code **)(param_2 + 0x10))();
                    /* try { // try from 04c4001c to 04d40027 has its CatchHandler @ 04c3fe84 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04c40018 with catch @ 04c40024
                        */
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20))();
  lVar3 = *unaff_x19;
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
  (**(code **)(*(long *)(lVar3 + 0x5f0) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 0x5f0) + 8));
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  puVar2 = *(undefined8 **)(lVar3 + 0x18);
  uVar1 = *puVar2;
  if (-1 < *(int *)(*(long *)(lVar3 + 8) + 0x28)) {
    unaff_x21 = (undefined8 *)*unaff_x21;
  }
  *(undefined8 *)(unaff_x29 + -0x20) = *unaff_x24;
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x21;
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


