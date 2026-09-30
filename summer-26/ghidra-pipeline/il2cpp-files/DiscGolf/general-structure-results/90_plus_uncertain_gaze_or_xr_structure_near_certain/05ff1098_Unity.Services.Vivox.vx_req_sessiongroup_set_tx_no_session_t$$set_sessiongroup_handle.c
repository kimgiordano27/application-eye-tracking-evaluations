/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_sessiongroup_set_tx_no_session_t$$set_sessiongroup_handle
ENTRY_POINT: 05ff1098
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;telemetry_or_network_hits_12;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_12
*/


void Unity_Services_Vivox_vx_req_sessiongroup_set_tx_no_session_t__set_sessiongroup_handle(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 *unaff_x19;
  long *plVar10;
  long lVar11;
  long *unaff_x23;
  long unaff_x24;
  int in_stack_00000018;
  
  puVar4 = (undefined8 *)__cxa_begin_catch();
  uVar5 = thunk_FUN_02dfd288(PTR_DAT_06a0d3f8);
  uVar6 = thunk_FUN_02df8d3c(uVar5,*(undefined8 *)*puVar4);
  if ((uVar6 & 1) == 0) {
    uVar5 = thunk_FUN_02dfd288(PTR_DAT_069fcb10);
    uVar7 = thunk_FUN_02df8d3c(uVar5,*(undefined8 *)*puVar4);
    if ((uVar7 & 1) == 0) {
      puVar8 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar8 = *puVar4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&PTR_PTR_066567d8,0);
    }
  }
  iVar2 = in_stack_00000018;
  plVar10 = (long *)*puVar4;
  *(long **)(&stack0x00000008 + (long)in_stack_00000018 * 8) = plVar10;
  in_stack_00000018 = in_stack_00000018 + 1;
  __cxa_end_catch();
  if ((uVar6 & 1) == 0) {
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar11 = *(long *)(unaff_x24 + 0xb8);
    uVar5 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar9 = thunk_FUN_02dfd288(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<<LeaveAsync>g__LeaveAndReset_116_0>d>__
                              );
    uVar5 = FUN_029899d8(2,uVar9,lVar11,uVar5);
    in_stack_00000018 = iVar2;
    uVar9 = thunk_FUN_02dfd288(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteRequestAsync>d__38>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar5,uVar9);
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar11 = plVar10[0x12];
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar5 = thunk_FUN_02dfd288(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebResponseStream_<InitReadAsync>d__52>__
                            );
  iVar3 = FUN_0297bd6c(0,uVar5,lVar11);
  if (iVar3 != 0x194) {
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar11 = *(long *)(unaff_x24 + 0xb8);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = thunk_FUN_02dfd288(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<<LeaveAsync>g__LeaveAndReset_116_0>d>__
                              );
    uVar5 = FUN_029899d8(4,uVar5,lVar11,plVar10);
    in_stack_00000018 = iVar2;
    uVar9 = thunk_FUN_02dfd288(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteRequestAsync>d__38>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar5,uVar9);
  }
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(unaff_x24 + 0x80) != 0) {
    FUN_05ff55e8(*(long *)(unaff_x24 + 0x80),0);
    puVar1 = OVRPlugin_SkeletonType_TypeInfo;
    iVar3 = *(int *)(*unaff_x23 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    in_stack_00000018 = iVar2;
    if (iVar3 == 0) {
      thunk_FUN_02df485c();
    }
    FUN_040b19d8(unaff_x19 + 2,0,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


