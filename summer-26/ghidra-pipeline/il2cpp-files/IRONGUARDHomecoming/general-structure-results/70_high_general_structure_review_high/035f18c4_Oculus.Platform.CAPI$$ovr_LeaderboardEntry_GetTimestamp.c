/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_LeaderboardEntry_GetTimestamp
ENTRY_POINT: 035f18c4
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


bool Oculus_Platform_CAPI__ovr_LeaderboardEntry_GetTimestamp
               (ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  uint unaff_w19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  undefined1 auVar11 [16];
  undefined4 uStack_38;
  undefined4 uStack_34;
  code *pcStack_30;
  
  if ((param_1 & 1) != 0) {
    uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
    iVar1 = *(int *)(unaff_x20 + 0x3c);
    FUN_01bc50c0(uVar10);
    uVar3 = FUN_03409f80(uVar10,iVar1 + 1,0);
    FUN_01bc4c70(*unaff_x22);
    param_3 = 0;
    uVar4 = FUN_034fde88(unaff_w19,uVar3,0);
    param_1 = FUN_035f0c24(uVar4,uVar4 & 0xffffffff);
  }
  auVar11 = FUN_035f0c24(param_1,unaff_w19 & 0xffff);
  puVar9 = Method_System_IO_CStreamReader_Read__;
  lVar5 = auVar11._0_8_;
  pcStack_30 = FUN_035f1918;
  uVar4 = auVar11._8_8_ & 0xffffffff;
  if ((DAT_04833829 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    DAT_04833829 = 1;
  }
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_034fdd48(uVar4,0);
  puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((uVar6 & 1) == 0) {
    uStack_34 = 0xd800;
    uVar10 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                               );
    uVar10 = thunk_FUN_01f113fc(uVar10,&uStack_34);
    uStack_38 = 0xdbff;
    uVar7 = thunk_FUN_01efb3a4(puVar2);
    uVar7 = thunk_FUN_01f113fc(uVar7,&uStack_38);
    uVar8 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
    uVar10 = FUN_033f1b0c(uVar8,uVar10,uVar7,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar7 = thunk_FUN_01f117cc();
    puVar9 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_42__;
  }
  else {
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_034fde58(param_3 & 0xffffffff,0);
    puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(lVar5 + 0x38) < 1) {
        if (*(long *)(lVar5 + 0x30) != 0) {
          iVar1 = *(int *)(*(long *)(lVar5 + 0x30) + 0x10);
          *(int *)(lVar5 + 0x38) = iVar1;
          *(undefined4 *)(lVar5 + 0x3c) = 0xffffffff;
          return iVar1 != 0;
        }
      }
      else {
        FUN_01bc4c70(*(undefined8 *)puVar9);
        uVar4 = FUN_034fde88(uVar4,param_3 & 0xffffffff,0);
        FUN_035f0c24(uVar4,uVar4 & 0xffffffff);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uStack_34 = 0xdc00;
    uVar10 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                               );
    uVar10 = thunk_FUN_01f113fc(uVar10,&uStack_34);
    uStack_38 = 0xdfff;
    uVar7 = thunk_FUN_01efb3a4(puVar2);
    uVar7 = thunk_FUN_01f113fc(uVar7,&uStack_38);
    uVar8 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
    uVar10 = FUN_033f1b0c(uVar8,uVar10,uVar7,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar7 = thunk_FUN_01f117cc();
    puVar9 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_43__;
  }
  uVar8 = thunk_FUN_01efb3a4(puVar9);
  FUN_034f3578(uVar7,uVar8,uVar10,0);
  uVar10 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_59__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,uVar10);
}


