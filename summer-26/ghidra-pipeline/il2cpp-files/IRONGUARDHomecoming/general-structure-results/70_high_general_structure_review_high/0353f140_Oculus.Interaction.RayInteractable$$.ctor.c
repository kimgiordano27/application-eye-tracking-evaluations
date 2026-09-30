/*
FUNCTION_NAME: Oculus.Interaction.RayInteractable$$.ctor
ENTRY_POINT: 0353f140
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


void Oculus_Interaction_RayInteractable___ctor(ulong param_1,long param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x21;
  float unaff_s8;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    *(undefined1 *)(unaff_x21 + 0x106) = 1;
  }
  FUN_035ac8e8(param_2,0);
  puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (-1 < param_3) {
    if ((1.0 <= unaff_s8) && (unaff_s8 <= 10.0)) {
      uVar3 = FUN_01f08890(*(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                           ,param_3);
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      thunk_FUN_01f51358((undefined8 *)(param_2 + 0x10),uVar3);
      iVar1 = -0x80000000;
      if (unaff_s8 * 100.0 != INFINITY) {
        iVar1 = (int)(unaff_s8 * 100.0);
      }
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x20) = 0;
      *(int *)(param_2 + 0x24) = iVar1;
      return;
    }
    uStack000000000000000c = 1;
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar3 = thunk_FUN_01f113fc(uVar3,&stack0x0000000c);
    in_stack_00000008 = 10;
    uVar4 = thunk_FUN_01efb3a4(puVar2);
    uVar4 = thunk_FUN_01f113fc(uVar4,&stack0x00000008);
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


