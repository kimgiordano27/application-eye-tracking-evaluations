/*
FUNCTION_NAME: FUN_03526a84
ENTRY_POINT: 03526a84
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


ulong FUN_03526a84(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar7 = (int)param_2;
  if (iVar7 < 0) {
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                              );
    uVar3 = FUN_035ac8e0(uVar3,0);
  }
  else {
    if (iVar7 < 100) {
      uVar2 = FUN_03519afc(param_1,param_2,0);
      return uVar2;
    }
    if (iVar7 - 0x526U < 0xb7) {
      return param_2 & 0xffffffff;
    }
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    FUN_01bc4c70();
    uVar3 = FUN_03532fe0(0);
    uVar4 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
    uVar4 = FUN_035ac8e0(uVar4,0);
    puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    local_24 = 0x526;
    uVar5 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar5 = thunk_FUN_01f113fc(uVar5,&local_24);
    local_28 = 0x5dc;
    uVar6 = thunk_FUN_01efb3a4(puVar1);
    uVar6 = thunk_FUN_01f113fc(uVar6,&local_28);
    uVar3 = FUN_0340f474(uVar3,uVar4,uVar5,uVar6,0);
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar4 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_47__);
  FUN_034f3578(uVar4,uVar5,uVar3,0);
  uVar3 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vadd_s8__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar3);
}


