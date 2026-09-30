/*
FUNCTION_NAME: Oculus.Interaction.Body.Input.OVRSkeletonMapping$$GetJointMapping
ENTRY_POINT: 03522e50
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


void Oculus_Interaction_Body_Input_OVRSkeletonMapping__GetJointMapping(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long lVar6;
  int unaff_w20;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  FUN_03519634();
  if (0x62 < unaff_w20) {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (unaff_w20 <= *(int *)(*(long *)(unaff_x19 + 0x20) + 0x10)) {
      *(int *)(unaff_x19 + 0x18) = unaff_w20;
      return;
    }
  }
  thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
  FUN_01bc4c70();
  uVar2 = FUN_03532fe0(0);
  uVar3 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
  uVar3 = FUN_035ac8e0(uVar3,0);
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  uStack000000000000000c = 99;
  uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar4 = thunk_FUN_01f113fc(uVar4,&stack0x0000000c);
  lVar6 = *(long *)(unaff_x19 + 0x20);
  FUN_01bc50c0(lVar6);
  in_stack_00000008 = *(undefined4 *)(lVar6 + 0x10);
  uVar5 = thunk_FUN_01efb3a4(puVar1);
  uVar5 = thunk_FUN_01f113fc(uVar5,&stack0x00000008);
  uVar2 = FUN_0340f474(uVar2,uVar3,uVar4,uVar5,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar3 = thunk_FUN_01f117cc();
  uVar4 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_47__);
  FUN_034f3578(uVar3,uVar4,uVar2,0);
  uVar2 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vabdl_high_u16__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar2);
}


