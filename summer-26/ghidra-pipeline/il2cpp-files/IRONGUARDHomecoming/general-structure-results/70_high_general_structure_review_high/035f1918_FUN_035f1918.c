/*
FUNCTION_NAME: FUN_035f1918
ENTRY_POINT: 035f1918
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


bool FUN_035f1918(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar7 = Method_System_IO_CStreamReader_Read__;
  if ((DAT_04833829 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    DAT_04833829 = 1;
  }
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = FUN_034fdd48(param_2,0);
  puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((uVar3 & 1) == 0) {
    local_34 = 0xd800;
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_34);
    local_38 = 0xdbff;
    uVar5 = thunk_FUN_01efb3a4(puVar2);
    uVar5 = thunk_FUN_01f113fc(uVar5,&local_38);
    uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
    uVar4 = FUN_033f1b0c(uVar6,uVar4,uVar5,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar5 = thunk_FUN_01f117cc();
    puVar7 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_42__;
  }
  else {
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_034fde58(param_3,0);
    puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(param_1 + 0x38) < 1) {
        if (*(long *)(param_1 + 0x30) != 0) {
          iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0x10);
          *(int *)(param_1 + 0x38) = iVar1;
          *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
          return iVar1 != 0;
        }
      }
      else {
        FUN_01bc4c70(*(undefined8 *)puVar7);
        uVar3 = FUN_034fde88(param_2,param_3,0);
        FUN_035f0c24(uVar3,uVar3 & 0xffffffff);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    local_34 = 0xdc00;
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_34);
    local_38 = 0xdfff;
    uVar5 = thunk_FUN_01efb3a4(puVar2);
    uVar5 = thunk_FUN_01f113fc(uVar5,&local_38);
    uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
    uVar4 = FUN_033f1b0c(uVar6,uVar4,uVar5,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar5 = thunk_FUN_01f117cc();
    puVar7 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_43__;
  }
  uVar6 = thunk_FUN_01efb3a4(puVar7);
  FUN_034f3578(uVar5,uVar6,uVar4,0);
  uVar4 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_59__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar4);
}


