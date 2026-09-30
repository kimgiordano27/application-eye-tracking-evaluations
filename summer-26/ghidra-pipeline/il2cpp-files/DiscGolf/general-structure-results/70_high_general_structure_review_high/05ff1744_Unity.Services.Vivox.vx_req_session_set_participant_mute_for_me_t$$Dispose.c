/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_session_set_participant_mute_for_me_t$$Dispose
ENTRY_POINT: 05ff1744
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_req_session_set_participant_mute_for_me_t__Dispose(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar2 = FUN_029899d8();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar1 = *(int *)(lVar2 + 0x8c);
  lVar3 = thunk_FUN_02dfd288(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WrappedMatchmakerService_<DeleteBackfillTicketAsync>d__13>__
                            );
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar3 = thunk_FUN_02dfd288(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WrappedMatchmakerService_<DeleteBackfillTicketAsync>d__13>__
                            );
  if (iVar1 == *(int *)(*(long *)(lVar3 + 0xb8) + 0x20)) {
    if (*(long *)(unaff_x20 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_05ff5a50(*(long *)(unaff_x20 + 0x88),0);
    thunk_FUN_02dfd288(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WrappedMatchmakerService_<UpdateBackfillTicketAsync>d__14>__
                      );
    FUN_05ff1838();
  }
  FUN_05fef02c();
  uVar4 = thunk_FUN_02dfd288(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<CoreRegistryInitializer_<>c__DisplayClass3_0_<<InitializeRegistryAsync>g__InitializePackageAsync_2>d>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(lVar2,uVar4);
}


