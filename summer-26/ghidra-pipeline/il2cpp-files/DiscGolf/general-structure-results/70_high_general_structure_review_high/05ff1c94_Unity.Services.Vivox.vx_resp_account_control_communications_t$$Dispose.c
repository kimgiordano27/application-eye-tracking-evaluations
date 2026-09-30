/*
FUNCTION_NAME: Unity.Services.Vivox.vx_resp_account_control_communications_t$$Dispose
ENTRY_POINT: 05ff1c94
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_resp_account_control_communications_t__Dispose(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  ulong unaff_x22;
  long *unaff_x23;
  
                    /* try { // try from 05ff1c94 to 060f1ca3 has its CatchHandler @ 05ff1cf0 */
  __cxa_end_catch();
  if ((unaff_x22 & 1) == 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(int *)(unaff_x20 + 0x98) == 3) {
                    /* try { // try from 05ff1cdc to 060f1cdf has its CatchHandler @ 05ff1cec */
                    /* try { // try from 05ff1ce0 to 060f1ce3 has its CatchHandler @ 05ff1ce8 */
      thunk_FUN_02dfd288(
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<PlayerDataService_<>c__DisplayClass11_0_<<DeleteAllAsync>b__0>d>__
                        );
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05ff1c90 with catch @ 05ff1ce4
                       try { // try from 05ff1ce4 to 060f1d0f has its CatchHandler @ 05ff1b44 */
      FUN_05ff1e58();
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05ff1ce0 with catch @ 05ff1ce8
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05ff1cdc with catch @ 05ff1cec
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05ff1c94 with catch @ 05ff1cf0
                        */
      if (*(int *)(unaff_x20 + 0x98) != 2) {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05ff1c74 with catch @ 05ff1cf4
                        */
        *(undefined4 *)(unaff_x20 + 0x98) = 2;
        FUN_05ff04a0();
      }
      lVar2 = *(long *)(unaff_x20 + 0xa0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar3 = thunk_FUN_02dfd288(
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SessionHandler_<SavePlayerDataAsync>d__126>__
                                );
      iVar1 = FUN_0297bd6c(2,uVar3,lVar2);
      FUN_05fefcdc((double)iVar1);
    }
  }
  else {
                    /* try { // try from 05ff1ca4 to 060f1cdb has its CatchHandler @ 05ff1b44 */
    thunk_FUN_02dfd288(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<LobbyHandler_<>c__DisplayClass88_0_<<RemovePlayerAsync>g__RemovePlayerTask_0>d>__
                      );
    FUN_05ff1e58();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(int *)(unaff_x20 + 0x98) != 4) {
      FUN_05ff0254();
    }
  }
  lVar2 = *unaff_x23;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05410914(unaff_x19 + 2,0);
  return;
}


