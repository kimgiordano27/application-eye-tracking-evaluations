/*
FUNCTION_NAME: Oculus.Interaction.TouchShadowHand$$CheckTouchFingers
ENTRY_POINT: 0354c828
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_TouchShadowHand__CheckTouchFingers(void)

{
  ulong uVar1;
  undefined *puVar2;
  bool in_CY;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong unaff_x19;
  ulong *unaff_x20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  undefined4 unaff_w26;
  ulong uVar8;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  uint in_stack_00000060;
  
  puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
                    /* try { // try from 0354c828 to 0364c853 has its CatchHandler @ 0354c80c */
  if (in_CY) {
    uStack000000000000000c = 0;
    uVar7 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar7 = thunk_FUN_01f113fc(uVar7,&stack0x0000000c);
    in_stack_00000008 = 999;
    uVar5 = thunk_FUN_01efb3a4(puVar2);
    uVar5 = thunk_FUN_01f113fc(uVar5,&stack0x00000008);
    uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
    uVar7 = FUN_033f1b0c(uVar6,uVar7,uVar5,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_5__);
    FUN_034f3578(uVar5,uVar6,uVar7,0);
    uVar7 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmulx_laneq_f32__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar7);
  }
  uVar8 = (ulong)in_stack_00000060;
  if (in_stack_00000060 < 3) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0354c820 with catch @ 0354c83c
                        */
    if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
                    /* try { // try from 0354c854 to 0364c857 has its CatchHandler @ 0354c884 */
                    /* try { // try from 0354c858 to 0364c887 has its CatchHandler @ 0354c80c */
    lVar3 = FUN_0354c2c4(unaff_w26,unaff_w25,unaff_w24);
    lVar4 = FUN_0354c528(unaff_w23,unaff_w22,unaff_w21);
                    /* catch() { ... } // from try @ 0354c854 with catch @ 0354c884 */
                    /* try { // try from 0354c888 to 0364c893 has its CatchHandler @ 0354c8a8 */
    uVar1 = lVar3 + (unaff_x19 & 0xffffffff) * 10000 + lVar4;
                    /* try { // try from 0354c894 to 0364c89f has its CatchHandler @ 0354c80c */
    if (uVar1 < 0x2bca2875f4374000) {
      *unaff_x20 = uVar1 | uVar8 << 0x3e;
                    /* try { // try from 0354c8a0 to 0364c8a7 has its CatchHandler @ 0354c8a8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0354c888 with catch @ 0354c8a8
                       catch(type#2 @ 00000000) { ... } // from try @ 0354c8a0 with catch @ 0354c8a8
                        */
      return;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmulx_lane_f32__);
    FUN_034f6754(uVar6,uVar7,0);
  }
  else {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_s16__);
    uVar5 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_s32__);
    FUN_034efd98(uVar6,uVar7,uVar5,0);
  }
  uVar7 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmulx_laneq_f32__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar7);
}


