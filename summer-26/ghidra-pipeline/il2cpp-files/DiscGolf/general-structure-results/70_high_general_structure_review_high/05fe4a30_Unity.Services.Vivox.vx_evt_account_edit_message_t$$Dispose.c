/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_account_edit_message_t$$Dispose
ENTRY_POINT: 05fe4a30
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_evt_account_edit_message_t__Dispose(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  int unaff_w21;
  long unaff_x22;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  FUN_02d965b8();
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
              );
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_DataHandler_<DeletePlayerData>d__11>__
              );
  FUN_02d965b8(PTR_DAT_069fb990);
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_PlayerDataService_<DeleteAllAsync>d__11>__
              );
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginSession_<SetTransmissionAsync>d__167>__
              );
  *(undefined1 *)(unaff_x22 + 0x8b6) = 1;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginSession_<SetTransmissionAsync>d__167>__
  ;
  lVar8 = *(long *)(unaff_x19 + 0x40);
  if (lVar8 != 0) {
    iVar1 = *(int *)(lVar8 + 0x18);
    if (iVar1 == 0) {
      return;
    }
    if (iVar1 <= unaff_w21) {
      unaff_w21 = iVar1 + -1;
    }
    lVar4 = *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginSession_<SetTransmissionAsync>d__167>__
    ;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar4 = *(long *)puVar3;
    }
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_PlayerAccountServiceInternal_<StartSignInAsync>d__53>__
    ;
    puVar7 = *(undefined8 **)(lVar4 + 0xb8);
    lVar9 = puVar7[2];
    if (lVar9 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar7 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar10 = *puVar7;
      lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_MatchmakerModule_<StopBackfillingAsync>d__36>__
                                );
      FUN_04be213c(lVar9,uVar10,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_PlayerDataService_<DeleteAllAsync>d__11>__
                   ,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      *plVar5 = lVar9;
      LeanTween__value(plVar5,lVar9);
    }
    FUN_04010bd8(lVar8,lVar9,*(undefined8 *)puVar2);
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_DataHandler_<DeletePlayerData>d__11>__
    ;
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      lVar8 = FUN_0400ff1c(*(long *)(unaff_x19 + 0x40),unaff_w21,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_DataHandler_<DeletePlayerData>d__11>__
                          );
      if ((lVar8 != 0) && (lVar8 = FUN_0634bbcc(lVar8,0), puVar2 = PTR_DAT_069fb990, lVar8 != 0)) {
        FUN_0634f038(lVar8,1,0);
        lVar8 = *(long *)puVar2;
        *(int *)(unaff_x19 + 0x48) = unaff_w21;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar6 = FUN_06350670();
        if ((uVar6 & 1) != 0) {
          if ((*(long *)(unaff_x19 + 0x40) == 0) ||
             (lVar8 = FUN_0400ff1c(*(long *)(unaff_x19 + 0x40),unaff_w21,*(undefined8 *)puVar3),
             lVar8 == 0)) goto LAB_05fe4bf0;
          FUN_05fe4d50();
        }
        FUN_05fe4da4();
        return;
      }
    }
  }
LAB_05fe4bf0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


