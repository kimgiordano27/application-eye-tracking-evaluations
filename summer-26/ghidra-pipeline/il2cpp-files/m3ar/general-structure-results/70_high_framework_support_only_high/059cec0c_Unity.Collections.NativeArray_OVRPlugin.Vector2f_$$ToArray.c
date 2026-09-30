/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$ToArray
ENTRY_POINT: 059cec0c
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__ToArray(ulong param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while ((param_1 & 1) == 0) {
    unaff_w22 = unaff_w22 - 1;
    if ((int)unaff_w22 < 0) {
      unaff_x19[1] = 0;
      *unaff_x19 = 0;
      unaff_x19[3] = 0;
      unaff_x19[2] = 0;
      return;
    }
    lVar1 = *(long *)(unaff_x20 + 0x10);
    if (lVar1 == 0) goto LAB_059cec54;
    if (*(uint *)(lVar1 + 0x18) <= unaff_w22) goto LAB_059cec58;
    if (unaff_x21 == 0) goto LAB_059cec54;
    unaff_x24 = unaff_x23 & 0xffffffff;
    lVar1 = lVar1 + unaff_x24 * 0x20;
    in_stack_00000028 = *(undefined8 *)(lVar1 + 0x28);
    in_stack_00000020 = *(undefined8 *)(lVar1 + 0x20);
    in_stack_00000038 = *(undefined8 *)(lVar1 + 0x38);
    in_stack_00000030 = *(undefined8 *)(lVar1 + 0x30);
    param_1 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000020,
                         *(undefined8 *)(unaff_x21 + 0x28));
    unaff_x23 = unaff_x23 - 1;
  }
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
                    /* try { // try from 059cec1c to 05acec2b has its CatchHandler @ 059cec2c */
    if (unaff_w22 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + unaff_x24 * 0x20;
      uVar2 = *(undefined8 *)(lVar1 + 0x20);
      uVar4 = *(undefined8 *)(lVar1 + 0x38);
      uVar3 = *(undefined8 *)(lVar1 + 0x30);
                    /* catch() { ... } // from try @ 059cebdc with catch @ 059cec2c
                       catch() { ... } // from try @ 059cec1c with catch @ 059cec2c */
      unaff_x19[1] = *(undefined8 *)(lVar1 + 0x28);
      *unaff_x19 = uVar2;
      unaff_x19[3] = uVar4;
      unaff_x19[2] = uVar3;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059cec30 with catch @ 059cec3c
                        */
      return;
                    /* try { // try from 059cec30 to 05acec33 has its CatchHandler @ 059cec3c */
    }
LAB_059cec58:
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
LAB_059cec54:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


