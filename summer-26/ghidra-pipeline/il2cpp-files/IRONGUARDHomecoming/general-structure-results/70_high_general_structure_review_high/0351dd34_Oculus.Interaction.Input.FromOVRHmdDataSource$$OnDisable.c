/*
FUNCTION_NAME: Oculus.Interaction.Input.FromOVRHmdDataSource$$OnDisable
ENTRY_POINT: 0351dd34
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


undefined4 Oculus_Interaction_Input_FromOVRHmdDataSource__OnDisable(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  uint in_w9;
  uint in_w10;
  long in_x12;
  uint in_w13;
  int in_w14;
  long in_x15;
  long unaff_x19;
  undefined8 uVar7;
  ulong unaff_x20;
  undefined8 uVar8;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  while( true ) {
    if (*(long *)(in_x15 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar1 = *(int *)(*(long *)(in_x15 + 0x20) + 0x28);
    iVar2 = in_w14 - iVar1;
    if (iVar2 == 0 || in_w14 < iVar1) {
      return *(undefined4 *)(in_x12 + 0x20);
    }
    if ((int)in_w10 < 1) {
      if ((unaff_x20 & 1) == 0) {
        return 0xffffffff;
      }
      thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
      FUN_01bc4c70();
      uVar4 = FUN_03532fe0(0);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x20);
      FUN_01bc50c0(uVar8);
      lVar5 = FUN_01bc5c58(uVar8);
      FUN_01bc50c0();
      puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
      uStack000000000000000c = *(undefined4 *)(lVar5 + 0x24);
      uVar8 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar8 = thunk_FUN_01f113fc(uVar8,&stack0x0000000c);
      uVar7 = *(undefined8 *)(unaff_x19 + 0x20);
      FUN_01bc50c0(uVar7);
      lVar5 = FUN_01bc5c58(uVar7);
      FUN_01bc50c0();
      in_stack_00000008 = *(undefined4 *)(lVar5 + 0x28);
      uVar7 = thunk_FUN_01efb3a4(puVar3);
      uVar7 = thunk_FUN_01f113fc(uVar7,&stack0x00000008);
      uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
      uVar4 = FUN_0340f474(uVar4,uVar6,uVar8,uVar7,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar8 = thunk_FUN_01f117cc();
      uVar7 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_47__);
      FUN_034f3578(uVar8,uVar7,uVar4,0);
      uVar4 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_44__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar8,uVar4);
    }
    if (in_w9 <= in_w13) break;
    in_w10 = in_w10 - 1;
    in_x15 = param_1 + (ulong)in_w10 * 8;
    in_w14 = iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


