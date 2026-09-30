/*
FUNCTION_NAME: Oculus.Interaction.Input.FromOVRHmdDataSource$$OnEnable
ENTRY_POINT: 0351dc14
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined4 Oculus_Interaction_Input_FromOVRHmdDataSource__OnEnable(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint in_w9;
  uint in_w10;
  long in_x11;
  long lVar9;
  int iVar10;
  long lVar11;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  int unaff_w22;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  while (lVar9 = *(long *)(param_1 + in_x11 * 8 + 0x20), lVar9 != 0) {
    if (unaff_w22 == *(int *)(lVar9 + 0x10)) {
      if (unaff_w21 < *(int *)(lVar9 + 0x24)) goto LAB_0351dcfc;
      if (unaff_w21 <= *(int *)(lVar9 + 0x28)) goto LAB_0351dd54;
      if ((**(char **)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_107__ +
                      0xb8) != '\0') || (uVar2 = in_w10 - 1, (int)uVar2 < 0)) goto LAB_0351dcfc;
      iVar10 = unaff_w21 - *(int *)(lVar9 + 0x28);
      goto LAB_0351dd24;
    }
    in_w10 = in_w10 + 1;
    if ((int)in_w9 <= (int)in_w10) {
      if ((unaff_x20 & 1) == 0) {
        return 0xffffffff;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar5 = thunk_FUN_01f117cc();
      uVar6 = thunk_FUN_01efb3a4(Method_Unity_Mathematics_math_select_shuffle_component__);
      uVar7 = thunk_FUN_01efb3a4(Method_Unity_Mathematics_math_select_shuffle_component__);
      FUN_034f3578(uVar5,uVar6,uVar7,0);
      uVar6 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_44__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar5,uVar6);
    }
    if (in_w9 <= in_w10) goto LAB_0351dd60;
    in_x11 = (long)(int)in_w10;
  }
LAB_0351dd5c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_0351dd24:
  if (in_w9 <= uVar2) {
LAB_0351dd60:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  in_w10 = in_w10 - 1;
  lVar11 = *(long *)(param_1 + (ulong)in_w10 * 8 + 0x20);
  if (lVar11 == 0) goto LAB_0351dd5c;
  iVar1 = *(int *)(lVar11 + 0x28);
  iVar3 = iVar10 - iVar1;
  if (iVar3 == 0 || iVar10 < iVar1) {
LAB_0351dd54:
    return *(undefined4 *)(lVar9 + 0x20);
  }
  iVar10 = iVar3;
  if ((int)in_w10 < 1) {
LAB_0351dcfc:
    if ((unaff_x20 & 1) == 0) {
      return 0xffffffff;
    }
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    FUN_01bc4c70();
    uVar5 = FUN_03532fe0(0);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x20);
    FUN_01bc50c0(uVar6);
    lVar9 = FUN_01bc5c58(uVar6,in_x11);
    FUN_01bc50c0();
    puVar4 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    uStack000000000000000c = *(undefined4 *)(lVar9 + 0x24);
    uVar6 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar6 = thunk_FUN_01f113fc(uVar6,&stack0x0000000c);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x20);
    FUN_01bc50c0(uVar7);
    lVar9 = FUN_01bc5c58(uVar7,in_x11);
    FUN_01bc50c0();
    in_stack_00000008 = *(undefined4 *)(lVar9 + 0x28);
    uVar7 = thunk_FUN_01efb3a4(puVar4);
    uVar7 = thunk_FUN_01f113fc(uVar7,&stack0x00000008);
    uVar8 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
    uVar5 = FUN_0340f474(uVar5,uVar8,uVar6,uVar7,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_47__);
    FUN_034f3578(uVar6,uVar7,uVar5,0);
    uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_44__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,uVar5);
  }
  goto LAB_0351dd24;
}


