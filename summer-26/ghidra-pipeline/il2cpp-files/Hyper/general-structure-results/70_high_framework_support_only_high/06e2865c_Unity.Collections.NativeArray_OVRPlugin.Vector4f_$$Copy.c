/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 06e2865c
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy
               (undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
                    /* try { // try from 06e2865c to 06f28673 has its CatchHandler @ 06e28748 */
                    /* try { // try from 06e28674 to 06f28697 has its CatchHandler @ 06e284ec */
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_08d8ca5c(8);
  }
  uVar3 = *(uint *)(param_2 + 0x18);
  uVar4 = uVar3;
  do {
    uVar4 = uVar4 - 1;
    uVar3 = uVar3 - 1;
    if ((int)uVar3 < 0) {
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      return;
    }
    lVar2 = *(long *)(param_2 + 0x10);
                    /* try { // try from 06e28698 to 06f286af has its CatchHandler @ 06e28748 */
    if (lVar2 == 0) goto LAB_06e28738;
    if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_06e2873c;
    if (param_3 == 0) goto LAB_06e28738;
                    /* try { // try from 06e286b0 to 06f286c3 has its CatchHandler @ 06e284ec */
    lVar2 = lVar2 + (ulong)uVar4 * 0x40;
    in_stack_00000048 = *(undefined8 *)(lVar2 + 0x28);
    in_stack_00000040 = *(undefined8 *)(lVar2 + 0x20);
    in_stack_00000058 = *(undefined8 *)(lVar2 + 0x38);
    in_stack_00000050 = *(undefined8 *)(lVar2 + 0x30);
                    /* try { // try from 06e286c4 to 06f286db has its CatchHandler @ 06e28748 */
    in_stack_00000068 = *(undefined8 *)(lVar2 + 0x48);
    in_stack_00000060 = *(undefined8 *)(lVar2 + 0x40);
    in_stack_00000078 = *(undefined8 *)(lVar2 + 0x58);
    in_stack_00000070 = *(undefined8 *)(lVar2 + 0x50);
    uVar1 = (**(code **)(param_3 + 0x18))
                      (*(undefined8 *)(param_3 + 0x40),&stack0x00000040,
                       *(undefined8 *)(param_3 + 0x28));
  } while ((uVar1 & 1) == 0);
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 != 0) {
    if (uVar3 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (ulong)uVar4 * 0x40;
      uVar5 = *(undefined8 *)(lVar2 + 0x20);
      uVar7 = *(undefined8 *)(lVar2 + 0x38);
      uVar6 = *(undefined8 *)(lVar2 + 0x30);
      param_1[1] = *(undefined8 *)(lVar2 + 0x28);
      *param_1 = uVar5;
      param_1[3] = uVar7;
      param_1[2] = uVar6;
      uVar5 = *(undefined8 *)(lVar2 + 0x40);
      uVar7 = *(undefined8 *)(lVar2 + 0x58);
      uVar6 = *(undefined8 *)(lVar2 + 0x50);
      param_1[5] = *(undefined8 *)(lVar2 + 0x48);
      param_1[4] = uVar5;
      param_1[7] = uVar7;
      param_1[6] = uVar6;
      return;
    }
LAB_06e2873c:
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
LAB_06e28738:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


