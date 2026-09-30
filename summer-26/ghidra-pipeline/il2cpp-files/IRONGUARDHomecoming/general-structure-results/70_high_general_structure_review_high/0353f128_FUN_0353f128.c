/*
FUNCTION_NAME: FUN_0353f128
ENTRY_POINT: 0353f128
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0353f128(float param_1,long param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((DAT_04833106 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_04833106 = 1;
  }
  FUN_035ac8e8(param_2,0);
  puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (-1 < param_3) {
    if ((1.0 <= param_1) && (param_1 <= 10.0)) {
      uVar3 = FUN_01f08890(*(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                           ,param_3);
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      thunk_FUN_01f51358((undefined8 *)(param_2 + 0x10),uVar3);
      iVar1 = -0x80000000;
      if (param_1 * 100.0 != INFINITY) {
        iVar1 = (int)(param_1 * 100.0);
      }
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x20) = 0;
      *(int *)(param_2 + 0x24) = iVar1;
      return;
    }
    local_24 = 1;
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar3 = thunk_FUN_01f113fc(uVar3,&local_24);
    local_28 = 10;
    uVar4 = thunk_FUN_01efb3a4(puVar2);
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_28);
    uVar5 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_s8__);
    uVar3 = FUN_033f1b0c(uVar5,uVar3,uVar4,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmls_f32__);
    FUN_034f3578(uVar4,uVar5,uVar3,0);
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_s32__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar3);
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar3 = thunk_FUN_01f117cc();
  uVar4 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_13__
                            );
  uVar5 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                            );
  FUN_034f3578(uVar3,uVar4,uVar5,0);
  uVar4 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_s32__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar4);
}


