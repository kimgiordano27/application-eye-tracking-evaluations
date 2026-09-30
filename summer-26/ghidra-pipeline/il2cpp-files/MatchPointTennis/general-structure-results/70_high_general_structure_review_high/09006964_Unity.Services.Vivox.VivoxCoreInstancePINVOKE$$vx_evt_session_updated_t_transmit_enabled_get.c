/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_updated_t_transmit_enabled_get
ENTRY_POINT: 09006964
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_transmit_enabled_get
               (code *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *unaff_x19;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  lVar2 = (*param_1)();
  if (lVar2 != 0) {
    in_stack_00000008 = FUN_068a4fb0(lVar2,*(undefined8 *)PTR_DAT_09fbf080);
                    /* try { // try from 09006994 to 0910699b has its CatchHandler @ 09006acc */
    uVar3 = FUN_067804ac(&stack0x00000008,*(undefined8 *)PTR_DAT_09fbf050);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_047b7034(unaff_x19 + 2,&stack0x00000008);
    }
    else {
      uVar4 = FUN_067804f0(&stack0x00000008,*(undefined8 *)PTR_DAT_09fbf048);
      uVar5 = FUN_04f491a0(uVar4,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_09fbf640);
                    /* try { // try from 090069dc to 091069df has its CatchHandler @ 09006a04 */
      uVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fbf650);
      FUN_0666a738(uVar6,uVar4,uVar5,*(undefined8 *)PTR_DAT_09fbf648);
      puVar1 = PTR_DAT_09fbf630;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_044bb4b4(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_066f3a60(unaff_x19 + 2,uVar6,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 09006ac8 to 09106aeb has its CatchHandler @ 090068ac */
  FUN_04447e44();
}


