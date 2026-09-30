/*
FUNCTION_NAME: FUN_0354c7cc
ENTRY_POINT: 0354c7cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0354c7cc(ulong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,uint param_9)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_58;
  undefined4 local_54;
  
                    /* catch() { ... } // from try @ 0354c828 with catch @ 0354c80c
                       catch() { ... } // from try @ 0354c858 with catch @ 0354c80c
                       catch() { ... } // from try @ 0354c894 with catch @ 0354c80c */
  if ((DAT_04833167 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
                    /* try { // try from 0354c820 to 0364c827 has its CatchHandler @ 0354c83c */
    DAT_04833167 = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (999 < param_8) {
    local_54 = 0;
    uVar7 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar7 = thunk_FUN_01f113fc(uVar7,&local_54);
    local_58 = 999;
    uVar5 = thunk_FUN_01efb3a4(puVar2);
    uVar5 = thunk_FUN_01f113fc(uVar5,&local_58);
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
  if (param_9 < 3) {
    if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    lVar3 = FUN_0354c2c4(param_2,param_3,param_4);
    lVar4 = FUN_0354c528(param_5,param_6,param_7);
    uVar1 = lVar3 + (ulong)param_8 * 10000 + lVar4;
    if (uVar1 < 0x2bca2875f4374000) {
      *param_1 = uVar1 | (ulong)param_9 << 0x3e;
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


