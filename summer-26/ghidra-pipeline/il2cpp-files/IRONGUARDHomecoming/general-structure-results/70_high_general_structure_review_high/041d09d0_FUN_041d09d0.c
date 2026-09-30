/*
FUNCTION_NAME: FUN_041d09d0
ENTRY_POINT: 041d09d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x041d0e84) */

undefined4 FUN_041d09d0(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long local_70;
  undefined1 local_68 [16];
  long local_58;
  undefined1 local_50 [16];
  undefined4 local_38;
  uint local_34;
  
  local_34 = param_2;
  if ((DAT_04840e6b & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458a368);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_DragEventsProcessor_RegisterCallbacksFromTarget__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanHandler_<>c_<_ctor>b__0_84__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_GetPooled__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_0458a370);
    DAT_04840e6b = 1;
  }
  puVar4 = PTR_DAT_0458a368;
  puVar2 = Method_UnityEngine_UIElements_DragEventsProcessor_RegisterCallbacksFromTarget__;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_68._8_8_ = 0;
  local_58 = 0;
  local_70 = 0;
  local_68._0_8_ = 0;
  local_38 = 0;
  if (param_2 == param_3) {
    uVar5 = FUN_03568324(&local_34,param_2,0);
    return uVar5;
  }
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_DragEventsProcessor_RegisterCallbacksFromTarget__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar3 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
  local_50 = FUN_029ea5d0(&local_58,*(undefined8 *)puVar4);
  while (param_2 != 0xffffffff) {
    if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *(long *)(local_58 + 0x10);
    lVar12 = *(long *)puVar3;
    *(int *)(local_58 + 0x1c) = *(int *)(local_58 + 0x1c) + 1;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = *(uint *)(local_58 + 0x18);
    if (uVar6 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(local_58 + 0x18) = uVar6 + 1;
      *(uint *)(lVar11 + (long)(int)uVar6 * 4 + 0x20) = param_2;
    }
    else {
      FUN_030ba904(local_58,param_2,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar8 = (long *)FUN_04132218(*(long *)(param_1 + 0x30),0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_2 = (**(code **)(*plVar8 + 0x2a8))(plVar8,param_2,*(undefined8 *)(*plVar8 + 0x2b0));
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  local_68 = FUN_029ea5d0(&local_70,*(undefined8 *)puVar4);
  uVar6 = param_3;
  while (uVar6 != 0xffffffff) {
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *(long *)(local_70 + 0x10);
    lVar12 = *(long *)puVar3;
    *(int *)(local_70 + 0x1c) = *(int *)(local_70 + 0x1c) + 1;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(local_70 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(local_70 + 0x18) = uVar1 + 1;
      *(uint *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = uVar6;
    }
    else {
      FUN_030ba904(local_70,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                  );
    }
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar8 = (long *)FUN_04132218(*(long *)(param_1 + 0x30),0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = (**(code **)(*plVar8 + 0x2a8))(plVar8,uVar6,*(undefined8 *)(*plVar8 + 0x2b0));
  }
  if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar11 = *(long *)(local_58 + 0x10);
  lVar12 = *(long *)puVar3;
  *(int *)(local_58 + 0x1c) = *(int *)(local_58 + 0x1c) + 1;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = *(uint *)(local_58 + 0x18);
  if (uVar6 < *(uint *)(lVar11 + 0x18)) {
    *(uint *)(local_58 + 0x18) = uVar6 + 1;
    *(undefined4 *)(lVar11 + (long)(int)uVar6 * 4 + 0x20) = 0xffffffff;
  }
  else {
    FUN_030ba904(local_58,0xffffffff,
                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
  }
  if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar11 = *(long *)(local_70 + 0x10);
  lVar12 = *(long *)puVar3;
  *(int *)(local_70 + 0x1c) = *(int *)(local_70 + 0x1c) + 1;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = *(uint *)(local_70 + 0x18);
  if (uVar6 < *(uint *)(lVar11 + 0x18)) {
    *(uint *)(local_70 + 0x18) = uVar6 + 1;
    *(undefined4 *)(lVar11 + (long)(int)uVar6 * 4 + 0x20) = 0xffffffff;
  }
  else {
    FUN_030ba904(local_70,0xffffffff,
                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
  }
  puVar4 = Method_Unity_VisualScripting_LessThanHandler_<>c_<_ctor>b__0_84__;
  puVar2 = Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_GetPooled__;
  if (local_58 != 0) {
    iVar13 = 0;
    do {
      if (*(int *)(local_58 + 0x18) <= iVar13) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar9 = thunk_FUN_01f117cc();
        uVar10 = thunk_FUN_01efb3a4(PTR_DAT_0458f4a0);
        FUN_034f7db4(uVar9,uVar10,0);
        uVar10 = thunk_FUN_01efb3a4(PTR_DAT_0458f4a8);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar9,uVar10);
      }
      uVar5 = FUN_030ba614(local_58,iVar13,*(undefined8 *)puVar2);
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(0,uVar5);
      }
      iVar7 = FUN_030bb4a4(local_70,uVar5,*(undefined8 *)puVar4);
      if (-1 < iVar7) {
        if (iVar13 == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar6 = local_34;
          if (0 < iVar13) {
            if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar6 = FUN_030ba614(local_58,iVar13 + -1,*(undefined8 *)puVar2);
          }
          if (0 < iVar7) {
            if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            param_3 = FUN_030ba614(local_70,iVar7 + -1,*(undefined8 *)puVar2);
          }
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar11 = FUN_04132218(*(long *)(param_1 + 0x30),0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          local_38 = FUN_04129fbc(lVar11,uVar6,0);
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar11 = FUN_04132218(*(long *)(param_1 + 0x30),0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar5 = FUN_04129fbc(lVar11,param_3,0);
          uVar5 = FUN_03568324(&local_38,uVar5,0);
        }
        puVar2 = PTR_DAT_0458a370;
        FUN_025ecf24(local_68,*(undefined8 *)PTR_DAT_0458a370);
        FUN_025ecf24(local_50,*(undefined8 *)puVar2);
        return uVar5;
      }
      iVar13 = iVar13 + 1;
    } while (local_58 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


