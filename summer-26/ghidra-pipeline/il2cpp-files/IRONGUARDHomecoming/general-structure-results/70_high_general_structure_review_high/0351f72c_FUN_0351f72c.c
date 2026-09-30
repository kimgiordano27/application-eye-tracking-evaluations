/*
FUNCTION_NAME: FUN_0351f72c
ENTRY_POINT: 0351f72c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_0351f72c(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar1 = Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_54__;
  if ((DAT_04833046 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_54__);
    DAT_04833046 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0351f660(param_2);
  if (param_1 - 1U < 0x25c2) {
    return;
  }
  thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
  FUN_01bc4c70();
  uVar2 = FUN_03532fe0(0);
  uVar3 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
  uVar3 = FUN_035ac8e0(uVar3,0);
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  local_34 = 1;
  uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar4 = thunk_FUN_01f113fc(uVar4,&local_34);
  local_38 = 0x25c2;
  uVar5 = thunk_FUN_01efb3a4(puVar1);
  uVar5 = thunk_FUN_01f113fc(uVar5,&local_38);
  uVar2 = FUN_0340f474(uVar2,uVar3,uVar4,uVar5,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar3 = thunk_FUN_01f117cc();
  uVar4 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_47__);
  FUN_034f3578(uVar3,uVar4,uVar2,0);
  uVar2 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_6__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar2);
}


