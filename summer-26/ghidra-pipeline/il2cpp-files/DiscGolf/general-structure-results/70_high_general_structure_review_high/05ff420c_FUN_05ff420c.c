/*
FUNCTION_NAME: FUN_05ff420c
ENTRY_POINT: 05ff420c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_11;frame_or_lifecycle_behavior
*/


undefined8 FUN_05ff420c(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long local_88;
  undefined8 *puStack_80;
  long *local_78;
  undefined4 local_68;
  long local_60;
  undefined8 uStack_58;
  long *local_50;
  
                    /* try { // try from 05ff420c to 060f422f has its CatchHandler @ 05ff40a0 */
  if ((DAT_06dc496b & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SessionsManager_<LockActiveSession>d__73>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SessionsManager_<UnlockActiveSession>d__72>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SessionsManager_<UpdateKickedUsersList>d__67>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SessionsManager_<UpdateSelectedCoursePropertyAsync>d__68>__
                );
    FUN_02d965b8(System_Action<string[],_int,_ReadingContext>_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedAnchorManager_<CheckIfRetrievingAnchorServiceHung>d__25>__
                );
    FUN_02d965b8(PTR_DAT_06a0ab90);
    DAT_06dc496b = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (long *)0x0;
  local_68 = 0;
  uVar5 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) < 1) {
      uVar5 = 0;
    }
    else {
      FUN_04010c90(&local_88,param_1,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedAnchorManager_<CheckIfRetrievingAnchorServiceHung>d__25>__
                  );
      puVar3 = 
      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SessionsManager_<UpdateSelectedCoursePropertyAsync>d__68>__
      ;
      puVar2 = System_Action<string[],_int,_ReadingContext>_TypeInfo;
      uStack_58 = puStack_80;
      local_60 = local_88;
      local_50 = local_78;
      puStack_80 = &local_60;
      local_88 = 0;
      uVar4 = FUN_05156804(&local_60,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SessionsManager_<UnlockActiveSession>d__72>__
                          );
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        if (local_50 != (long *)0x0) {
          lVar6 = *local_50;
          bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
          if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
            uVar5 = 0;
          }
          else {
            uVar5 = (**(code **)(lVar6 + 0x168))(local_50,*(undefined8 *)(lVar6 + 0x170));
          }
        }
        lVar6 = FUN_03681d8c(uVar5,*(undefined8 *)puVar3);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar5 = FUN_05ff49a0();
      }
      lVar6 = local_88;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
      }
      FUN_05156800(puStack_80,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SessionsManager_<LockActiveSession>d__73>__
                  );
      if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(lVar6);
      }
    }
  }
  return uVar5;
}


