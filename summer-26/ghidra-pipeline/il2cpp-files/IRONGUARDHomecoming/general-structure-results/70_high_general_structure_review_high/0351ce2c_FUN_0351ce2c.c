/*
FUNCTION_NAME: FUN_0351ce2c
ENTRY_POINT: 0351ce2c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined4 FUN_0351ce2c(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_3 < 2) {
    if (param_2 - 1 < 9999) {
      if ((param_2 & 3) == 0) {
        uVar1 = (param_2 & 0xffff) * -0x3d70a3d7;
        uVar7 = 0x16d;
        if ((uVar1 >> 4 | (param_2 & 0xffff) * -0x70000000) < 0xa3d70b ||
            0x28f5c28 < (uVar1 >> 2 | param_2 * 0x40000000)) {
          uVar7 = 0x16e;
        }
      }
      else {
        uVar7 = 0x16d;
      }
      return uVar7;
    }
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    FUN_01bc4c70();
    uVar2 = FUN_03532fe0(0);
    uVar3 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
    uVar3 = FUN_035ac8e0(uVar3,0);
    puVar6 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    local_24 = 1;
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_24);
    local_28 = 9999;
    uVar5 = thunk_FUN_01efb3a4(puVar6);
    uVar5 = thunk_FUN_01f113fc(uVar5,&local_28);
    uVar2 = FUN_0340f474(uVar2,uVar3,uVar4,uVar5,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar3 = thunk_FUN_01f117cc();
    puVar6 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_47__;
  }
  else {
    uVar2 = thunk_FUN_01efb3a4(Method_Unity_Mathematics_math_select_shuffle_component__);
    uVar2 = FUN_035ac8e0(uVar2,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar3 = thunk_FUN_01f117cc();
    puVar6 = Method_Unity_Mathematics_math_select_shuffle_component__;
  }
  uVar4 = thunk_FUN_01efb3a4(puVar6);
  FUN_034f3578(uVar3,uVar4,uVar2,0);
  uVar2 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_37__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar2);
}


