/*
FUNCTION_NAME: FUN_0352024c
ENTRY_POINT: 0352024c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8
FUN_0352024c(long *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_58;
  int local_54;
  undefined8 local_48;
  
  iVar2 = (**(code **)(*param_1 + 0x208))();
  if ((param_4 < 1) || (iVar2 < param_4)) {
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    FUN_01bc4c70();
    uVar6 = FUN_03532fe0(0);
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_<ToString>b__8_0__
                              );
    uVar7 = FUN_035ac8e0(uVar7,0);
    puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    local_54 = iVar2;
    uVar8 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar8 = thunk_FUN_01f113fc(uVar8,&local_54);
    local_58 = param_3;
    uVar5 = thunk_FUN_01efb3a4(puVar1);
    uVar5 = thunk_FUN_01f113fc(uVar5,&local_58);
    uVar7 = FUN_0340f474(uVar6,uVar7,uVar8,uVar5,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar8 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(
                              Method_System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtension_CopyFrom__
                              );
  }
  else {
    lVar3 = FUN_0351f28c(param_1,param_2,param_3,param_4);
    if (-1 < lVar3) {
      lVar4 = FUN_03519bf4(param_5,param_6,param_7,param_8,0);
      local_48 = 0;
      FUN_0354c030(&local_48,lVar4 + lVar3 * 864000000000,0);
      return local_48;
    }
    uVar6 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_33__);
    uVar7 = FUN_035ac8e0(uVar6,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar8 = thunk_FUN_01f117cc();
    uVar6 = 0;
  }
  FUN_034f3578(uVar8,uVar6,uVar7,0);
  uVar6 = thunk_FUN_01efb3a4(Method_AnimationClipTextureBaker_<>c__DisplayClass5_0_<Bake>b__0__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar8,uVar6);
}


