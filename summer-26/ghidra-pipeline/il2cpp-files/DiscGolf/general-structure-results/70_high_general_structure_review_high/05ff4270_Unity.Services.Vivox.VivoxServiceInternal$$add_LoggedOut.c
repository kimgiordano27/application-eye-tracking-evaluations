/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxServiceInternal$$add_LoggedOut
ENTRY_POINT: 05ff4270
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


undefined8 Unity_Services_Vivox_VivoxServiceInternal__add_LoggedOut(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0xef0));
  FUN_02d965b8(PTR_DAT_06a0ab90);
  *(undefined1 *)(unaff_x20 + 0x96b) = 1;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = (long *)0x0;
  in_stack_00000028 = 0;
  uVar5 = 0;
  if (unaff_x19 != 0) {
    if (*(int *)(unaff_x19 + 0x18) < 1) {
      uVar5 = 0;
    }
    else {
      FUN_04010c90(&stack0x00000008);
      puVar3 = 
      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SessionsManager_<UpdateSelectedCoursePropertyAsync>d__68>__
      ;
      puVar2 = System_Action<string[],_int,_ReadingContext>_TypeInfo;
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000040 = in_stack_00000018;
      in_stack_00000010 = &stack0x00000030;
      in_stack_00000008 = 0;
      uVar4 = FUN_05156804(&stack0x00000030,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SessionsManager_<UnlockActiveSession>d__72>__
                          );
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        if (in_stack_00000040 != (long *)0x0) {
          lVar6 = *in_stack_00000040;
          bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
          if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
            uVar5 = 0;
          }
          else {
            uVar5 = (**(code **)(lVar6 + 0x168))(in_stack_00000040,*(undefined8 *)(lVar6 + 0x170));
          }
        }
        lVar6 = FUN_03681d8c(uVar5,*(undefined8 *)puVar3);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar5 = FUN_05ff49a0();
      }
      lVar6 = in_stack_00000008;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
      }
      FUN_05156800(in_stack_00000010,
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


