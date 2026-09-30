/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_sessiongroup_set_tx_no_session_t$$.ctor
ENTRY_POINT: 05ff1104
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_7
*/


void Unity_Services_Vivox_vx_req_sessiongroup_set_tx_no_session_t___ctor(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *unaff_x19;
  long unaff_x21;
  long lVar5;
  long *unaff_x23;
  long unaff_x24;
  
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar3 = thunk_FUN_02dfd288(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebResponseStream_<InitReadAsync>d__52>__
                            );
  iVar2 = FUN_0297bd6c(0,uVar3);
  if (iVar2 != 0x194) {
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *(long *)(unaff_x24 + 0xb8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar3 = thunk_FUN_02dfd288(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<<LeaveAsync>g__LeaveAndReset_116_0>d>__
                              );
    uVar3 = FUN_029899d8(4,uVar3,lVar5);
    uVar4 = thunk_FUN_02dfd288(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteRequestAsync>d__38>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar3,uVar4);
  }
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(unaff_x24 + 0x80) != 0) {
    FUN_05ff55e8(*(long *)(unaff_x24 + 0x80),0);
    puVar1 = OVRPlugin_SkeletonType_TypeInfo;
    iVar2 = *(int *)(*unaff_x23 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar2 == 0) {
      thunk_FUN_02df485c();
    }
    FUN_040b19d8(unaff_x19 + 2,0,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


