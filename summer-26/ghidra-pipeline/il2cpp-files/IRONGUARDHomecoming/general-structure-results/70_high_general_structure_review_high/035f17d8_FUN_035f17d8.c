/*
FUNCTION_NAME: FUN_035f17d8
ENTRY_POINT: 035f17d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


bool FUN_035f17d8(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined4 uStack_68;
  undefined4 uStack_64;
  code *pcStack_60;
  
  if ((DAT_04833828 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    DAT_04833828 = 1;
  }
  puVar9 = Method_System_IO_CStreamReader_Read__;
  if (*(int *)(param_1 + 0x38) < 1) {
    if (*(long *)(param_1 + 0x30) != 0) {
      iVar2 = *(int *)(*(long *)(param_1 + 0x30) + 0x10);
      uVar1 = iVar2 + 1;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      *(int *)(param_1 + 0x38) = iVar2 >> 1;
      *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
      return 2 < uVar1;
    }
LAB_035f188c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_034fdd48(param_2,0);
  if (((uVar5 & 1) != 0) && (-1 < *(int *)(param_1 + 0x38))) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_035f188c;
    param_3 = 0;
    uVar4 = FUN_03409f80(*(long *)(param_1 + 0x30),*(int *)(param_1 + 0x3c) + 1,0);
    lVar10 = *(long *)puVar9;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar10);
    }
    uVar5 = FUN_034fde58(uVar4,0);
    if ((uVar5 & 1) != 0) {
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      iVar2 = *(int *)(param_1 + 0x3c);
      FUN_01bc50c0(uVar11);
      uVar4 = FUN_03409f80(uVar11,iVar2 + 1,0);
      FUN_01bc4c70(*(undefined8 *)puVar9);
      param_3 = 0;
      uVar5 = FUN_034fde88(param_2,uVar4,0);
      uVar5 = FUN_035f0c24(uVar5,uVar5 & 0xffffffff);
    }
  }
  auVar12 = FUN_035f0c24(uVar5,param_2 & 0xffff);
  puVar9 = Method_System_IO_CStreamReader_Read__;
  lVar10 = auVar12._0_8_;
  pcStack_60 = FUN_035f1918;
  uVar5 = auVar12._8_8_ & 0xffffffff;
  if ((DAT_04833829 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    DAT_04833829 = 1;
  }
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_034fdd48(uVar5,0);
  puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((uVar6 & 1) == 0) {
    uStack_64 = 0xd800;
    uVar11 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                               );
    uVar11 = thunk_FUN_01f113fc(uVar11,&uStack_64);
    uStack_68 = 0xdbff;
    uVar7 = thunk_FUN_01efb3a4(puVar3);
    uVar7 = thunk_FUN_01f113fc(uVar7,&uStack_68);
    uVar8 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
    uVar11 = FUN_033f1b0c(uVar8,uVar11,uVar7,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar7 = thunk_FUN_01f117cc();
    puVar9 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_42__;
  }
  else {
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_034fde58(param_3 & 0xffffffff,0);
    puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(lVar10 + 0x38) < 1) {
        if (*(long *)(lVar10 + 0x30) != 0) {
          iVar2 = *(int *)(*(long *)(lVar10 + 0x30) + 0x10);
          *(int *)(lVar10 + 0x38) = iVar2;
          *(undefined4 *)(lVar10 + 0x3c) = 0xffffffff;
          return iVar2 != 0;
        }
      }
      else {
        FUN_01bc4c70(*(undefined8 *)puVar9);
        uVar5 = FUN_034fde88(uVar5,param_3 & 0xffffffff,0);
        FUN_035f0c24(uVar5,uVar5 & 0xffffffff);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uStack_64 = 0xdc00;
    uVar11 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                               );
    uVar11 = thunk_FUN_01f113fc(uVar11,&uStack_64);
    uStack_68 = 0xdfff;
    uVar7 = thunk_FUN_01efb3a4(puVar3);
    uVar7 = thunk_FUN_01f113fc(uVar7,&uStack_68);
    uVar8 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_OnUnpairedDeviceUsed__);
    uVar11 = FUN_033f1b0c(uVar8,uVar11,uVar7,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar7 = thunk_FUN_01f117cc();
    puVar9 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_43__;
  }
  uVar8 = thunk_FUN_01efb3a4(puVar9);
  FUN_034f3578(uVar7,uVar8,uVar11,0);
  uVar11 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_59__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,uVar11);
}


