/*
FUNCTION_NAME: FUN_0351d274
ENTRY_POINT: 0351d274
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


bool FUN_0351d274(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_3 < 2) {
    if (param_2 - 1 < 9999) {
      if ((param_2 & 3) == 0) {
        uVar1 = (param_2 & 0xffff) * -0x3d70a3d7;
        if ((uVar1 >> 2 | param_2 * 0x40000000) < 0x28f5c29) {
          bVar2 = (uVar1 >> 4 | (param_2 & 0xffff) * -0x70000000) < 0xa3d70b;
        }
        else {
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
      }
      return bVar2;
    }
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    FUN_01bc4c70();
    uVar3 = FUN_03532fe0(0);
    uVar4 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
    uVar4 = FUN_035ac8e0(uVar4,0);
    puVar7 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    local_24 = 1;
    uVar5 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar5 = thunk_FUN_01f113fc(uVar5,&local_24);
    local_28 = 9999;
    uVar6 = thunk_FUN_01efb3a4(puVar7);
    uVar6 = thunk_FUN_01f113fc(uVar6,&local_28);
    uVar3 = FUN_0340f474(uVar3,uVar4,uVar5,uVar6,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    puVar7 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_47__;
  }
  else {
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_Mathematics_math_select_shuffle_component__);
    uVar3 = FUN_035ac8e0(uVar3,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    puVar7 = Method_Unity_Mathematics_math_select_shuffle_component__;
  }
  uVar5 = thunk_FUN_01efb3a4(puVar7);
  FUN_034f3578(uVar4,uVar5,uVar3,0);
  uVar3 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_39__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar3);
}


