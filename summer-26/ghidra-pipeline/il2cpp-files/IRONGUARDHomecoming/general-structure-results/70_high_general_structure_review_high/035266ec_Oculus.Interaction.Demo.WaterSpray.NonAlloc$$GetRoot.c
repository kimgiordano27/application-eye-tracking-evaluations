/*
FUNCTION_NAME: Oculus.Interaction.Demo.WaterSpray.NonAlloc$$GetRoot
ENTRY_POINT: 035266ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8
Oculus_Interaction_Demo_WaterSpray_NonAlloc__GetRoot
          (long *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined8 param_9,
          undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 in_stack_00000070;
  
  if ((DAT_04833091 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vabsq_s32__);
    DAT_04833091 = 1;
  }
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabsq_s32__;
  if (param_4 - 1U < 0x1d) {
    if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabsq_s32__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03525d0c(param_2,param_3,in_stack_00000070);
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x208))
                      (param_1,param_2,param_3,in_stack_00000070,*(undefined8 *)(*param_1 + 0x210));
    if ((param_4 < 1) || (iVar2 < param_4)) {
      thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
      FUN_01bc4c70();
      uVar3 = FUN_03532fe0(0);
      uVar4 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_<ToString>b__8_0__
                                );
      uVar4 = FUN_035ac8e0(uVar4,0);
      puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
      param_10._4_4_ = iVar2;
      uVar5 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar5 = thunk_FUN_01f113fc(uVar5,(long)&param_10 + 4);
      param_10._0_4_ = param_3;
      uVar6 = thunk_FUN_01efb3a4(puVar1);
      uVar6 = thunk_FUN_01f113fc(uVar6,&param_10);
      uVar3 = FUN_0340f474(uVar3,uVar4,uVar5,uVar6,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar5 = thunk_FUN_01f117cc();
      uVar4 = thunk_FUN_01efb3a4(
                                Method_System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtension_CopyFrom__
                                );
      goto LAB_03526904;
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar7 = FUN_035258a8(param_2,param_3,param_4);
  if (-1 < lVar7) {
    lVar8 = FUN_03519bf4(param_5,param_6,param_7,param_8,0);
    param_12 = 0;
    FUN_0354c030(&param_12,lVar8 + lVar7 * 864000000000,0);
    return param_12;
  }
  uVar3 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_33__);
  uVar3 = FUN_035ac8e0(uVar3,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar5 = thunk_FUN_01f117cc();
  uVar4 = 0;
LAB_03526904:
  FUN_034f3578(uVar5,uVar4,uVar3,0);
  uVar3 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vadd_s32__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar3);
}


