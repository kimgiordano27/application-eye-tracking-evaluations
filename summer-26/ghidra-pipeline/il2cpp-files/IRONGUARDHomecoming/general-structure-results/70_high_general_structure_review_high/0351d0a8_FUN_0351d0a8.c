/*
FUNCTION_NAME: FUN_0351d0a8
ENTRY_POINT: 0351d0a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_0351d0a8(undefined8 param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_3 < 2) {
    if (param_2 - 1U < 9999) {
      return 0xc;
    }
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    FUN_01bc4c70();
    uVar1 = FUN_03532fe0(0);
    uVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
    uVar2 = FUN_035ac8e0(uVar2,0);
    puVar5 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    local_24 = 1;
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar3 = thunk_FUN_01f113fc(uVar3,&local_24);
    local_28 = 9999;
    uVar4 = thunk_FUN_01efb3a4(puVar5);
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_28);
    uVar1 = FUN_0340f474(uVar1,uVar2,uVar3,uVar4,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar2 = thunk_FUN_01f117cc();
    puVar5 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_47__;
  }
  else {
    uVar1 = thunk_FUN_01efb3a4(Method_Unity_Mathematics_math_select_shuffle_component__);
    uVar1 = FUN_035ac8e0(uVar1,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar2 = thunk_FUN_01f117cc();
    puVar5 = Method_Unity_Mathematics_math_select_shuffle_component__;
  }
  uVar3 = thunk_FUN_01efb3a4(puVar5);
  FUN_034f3578(uVar2,uVar3,uVar1,0);
  uVar1 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_38__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,uVar1);
}


