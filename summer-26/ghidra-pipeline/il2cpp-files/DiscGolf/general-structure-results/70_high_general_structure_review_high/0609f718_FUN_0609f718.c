/*
FUNCTION_NAME: FUN_0609f718
ENTRY_POINT: 0609f718
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_9;frame_or_lifecycle_behavior
*/


long FUN_0609f718(undefined8 param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_06dc4f0e & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SessionsManager_<LockActiveSession>d__73>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SessionsManager_<UnlockActiveSession>d__72>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SessionsManager_<UpdateKickedUsersList>d__67>__
                );
    FUN_02d965b8(Method_System_Enum_ToObject__);
    FUN_02d965b8(Method_UnityEngine_UIElements_EnumField_ProcessPointerDown<PointerMoveEvent>__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedAnchorManager_<CheckIfRetrievingAnchorServiceHung>d__25>__
                );
    FUN_02d965b8(Method_UnityEngine_UIElements_EnumField_<ShowMenu>b__42_0__);
    FUN_02d965b8(Method_UnityEngine_UIElements_EnumField_Init__);
    FUN_02d965b8(PTR_DAT_06a0aba0);
    DAT_06dc4f0e = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (param_2 != (long *)0x0) {
    iVar7 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    if (iVar7 == 0xb) {
      lVar13 = 0;
    }
    else {
      plVar8 = (long *)(**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
      lVar13 = thunk_FUN_02dd3144(*(undefined8 *)Method_UnityEngine_UIElements_EnumField_Init__);
      FUN_0400f984(lVar13,*(undefined8 *)Method_UnityEngine_UIElements_EnumField_<ShowMenu>b__42_0__
                  );
      if (plVar8 == (long *)0x0) goto LAB_0609f958;
      bVar1 = *(byte *)(*(long *)PTR_DAT_06a0aba0 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06a0aba0))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar8);
      }
      FUN_04010c90(&local_58,plVar8,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedAnchorManager_<CheckIfRetrievingAnchorServiceHung>d__25>__
                  );
      puVar5 = Method_UnityEngine_UIElements_EnumField_ProcessPointerDown<PointerMoveEvent>__;
      puVar4 = Method_System_Enum_ToObject__;
      puVar3 = 
      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SessionsManager_<UnlockActiveSession>d__72>__
      ;
      while (uVar9 = FUN_05156804(&local_58,*(undefined8 *)puVar3), uVar6 = local_48,
            (uVar9 & 1) != 0) {
        lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
        FUN_0552aca4(lVar10,0);
        *(undefined8 *)(lVar10 + 0x10) = uVar6;
        LeanTween__value((undefined8 *)(lVar10 + 0x10),uVar6);
        if (lVar13 == 0) {
LAB_0609f954:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar11 = *(long *)(lVar13 + 0x10);
        lVar12 = *(long *)puVar5;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_0609f954;
        uVar2 = *(uint *)(lVar13 + 0x18);
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar2 + 1;
          plVar8 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
          *plVar8 = lVar10;
          LeanTween__value(plVar8,lVar10);
        }
        else {
          FUN_040101ec(lVar13,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_05156800(&local_58,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SessionsManager_<LockActiveSession>d__73>__
                  );
    }
    return lVar13;
  }
LAB_0609f958:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


