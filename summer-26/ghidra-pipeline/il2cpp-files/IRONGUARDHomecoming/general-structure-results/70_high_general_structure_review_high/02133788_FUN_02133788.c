/*
FUNCTION_NAME: FUN_02133788
ENTRY_POINT: 02133788
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_02133788(int *param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5,
                 int param_6,long param_7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 local_5c;
  int local_58;
  uint local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = param_2;
  uStack_48 = param_3;
  if (*(long *)(param_7 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Bootstring_Encode__);
    if (*(long *)(param_7 + 0x38) == 0) {
      FUN_01ecafa0(param_7);
    }
  }
  uVar10 = (uint)((ulong)param_3 >> 0x20);
  if ((int)param_4 < 0) {
    param_4 = uVar10;
  }
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (param_5 < 0) {
    if ((*(byte *)(*(long *)(param_7 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    param_5 = *param_1;
    puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  }
  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__ = puVar1;
  if (param_4 != 0) {
    if ((int)uVar10 < (int)(param_4 + param_6)) {
      local_54 = param_4;
      uVar5 = thunk_FUN_01efb3a4(puVar1);
      uVar5 = thunk_FUN_01f113fc(uVar5,&local_54);
      local_58 = param_6;
      uVar6 = thunk_FUN_01efb3a4(puVar1);
      uVar6 = thunk_FUN_01f113fc(uVar6,&local_58);
      local_5c = uStack_48._4_4_;
      uVar7 = thunk_FUN_01efb3a4(puVar1);
      uVar7 = thunk_FUN_01f113fc(uVar7,&local_5c);
      uVar8 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_0__);
      uVar5 = FUN_0340f334(uVar8,uVar5,uVar6,uVar7,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar6 = thunk_FUN_01f117cc();
      uVar7 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__);
      FUN_034f3578(uVar6,uVar7,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6,param_7);
    }
    lVar4 = *(long *)(param_7 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    iVar2 = FUN_02f1e588(param_1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x68));
    iVar9 = *param_1;
    if (iVar2 < (int)(iVar9 + param_4)) {
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_0356bc8c(iVar9 + param_4,10,0);
      lVar4 = *(long *)(param_7 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      FUN_02f1e5d4(param_1,uVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28));
    }
    if ((*(byte *)(*(long *)(param_7 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    iVar9 = *param_1;
    if (param_5 < iVar9) {
      uVar5 = *(undefined8 *)(param_1 + 2);
      uVar6 = *(undefined8 *)(param_1 + 4);
      if ((*(byte *)(*(long *)(param_7 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
        iVar9 = *param_1;
      }
      FUN_032ea8c8(uVar5,uVar6,param_5,uVar5,uVar6,param_5 + param_4,iVar9 - param_5,
                   *(undefined8 *)Method_System_Globalization_Bootstring_Encode__);
    }
    if (0 < (int)param_4) {
      uVar11 = (ulong)param_4;
      do {
        uVar5 = FUN_02617b44(&local_50,param_6,*(undefined8 *)(*(long *)(param_7 + 0x38) + 0x10));
        lVar4 = *(long *)(param_7 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44(lVar4);
        }
        uVar5 = FUN_02f1fe48(uVar5,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20));
        uVar11 = uVar11 - 1;
        param_6 = param_6 + 1;
        *(undefined8 *)(*(long *)(param_1 + 2) + (long)param_5 * 8) = uVar5;
        param_5 = param_5 + 1;
      } while (uVar11 != 0);
    }
    *param_1 = *param_1 + param_4;
  }
  return;
}


