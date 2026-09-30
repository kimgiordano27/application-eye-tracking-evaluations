/*
FUNCTION_NAME: OVRFaceExpressions.FaceExpressionsEnumerator$$Dispose
ENTRY_POINT: 05d16b18
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


float OVRFaceExpressions_FaceExpressionsEnumerator__Dispose
                (undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  float fVar3;
  float unaff_s8;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000e8;
  
  while( true ) {
    FUN_05d729b0(param_1,param_2,param_3,0);
    uVar1 = unaff_x26 + 1;
    in_stack_000000a8 = in_stack_00000088;
    in_stack_000000a0 = in_stack_00000080;
    *(undefined8 *)(unaff_x20 + 0x34) = *(undefined8 *)(unaff_x20 + 0x14);
    *(undefined8 *)(unaff_x20 + 0x2c) = *(undefined8 *)(unaff_x20 + 0xc);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) break;
    if (in_stack_000000e8 == 0) {
LAB_05d16c08:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_05d729b0(&stack0x00000060,in_stack_000000e8,
                 *(undefined4 *)(unaff_x19 + (unaff_x23 >> 0x1e) + 0x20),0);
    in_stack_00000088 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    lVar2 = *unaff_x24;
    in_stack_00000080 = in_stack_00000060;
    *(undefined8 *)(unaff_x20 + 0x14) = uStack0000000000000074;
    *(ulong *)(unaff_x20 + 0xc) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uStack0000000000000054 = *(undefined8 *)(unaff_x20 + 0x54);
    uStack0000000000000034 = *(undefined8 *)(unaff_x20 + 0x34);
    uStack0000000000000048 = (undefined4)in_stack_000000c8;
    in_stack_00000040 = in_stack_000000c0;
    uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x20 + 0x4c);
    uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x4c) >> 0x20);
    uStack0000000000000028 = (undefined4)in_stack_000000a8;
    in_stack_00000020 = in_stack_000000a0;
    uStack000000000000002c = (undefined4)*(undefined8 *)(unaff_x20 + 0x2c);
    uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x2c) >> 0x20);
    fVar3 = (float)FUN_05d166f4(&stack0x00000040,&stack0x00000020);
    unaff_s8 = unaff_s8 + fVar3;
    unaff_x25 = unaff_x25 + unaff_x22;
    unaff_x23 = unaff_x23 + unaff_x22;
    if ((long)((int)*(ulong *)(unaff_x19 + 0x18) + -2) <= (long)unaff_x26) {
      return unaff_s8;
    }
    if ((*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) <= unaff_x26) break;
    if (in_stack_000000e8 == 0) goto LAB_05d16c08;
    FUN_05d729b0(&stack0x000000a0,in_stack_000000e8,*(undefined4 *)(unaff_x21 + unaff_x26 * 4),0);
    in_stack_000000c8 = in_stack_000000a8;
    in_stack_000000c0 = in_stack_000000a0;
    *(undefined8 *)(unaff_x20 + 0x54) = *(undefined8 *)(unaff_x20 + 0x34);
    *(undefined8 *)(unaff_x20 + 0x4c) = *(undefined8 *)(unaff_x20 + 0x2c);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) break;
    if (in_stack_000000e8 == 0) goto LAB_05d16c08;
    param_3 = (ulong)*(uint *)(unaff_x19 + (unaff_x25 >> 0x1e) + 0x20);
    param_1 = &stack0x00000080;
    param_2 = in_stack_000000e8;
    unaff_x26 = uVar1;
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


