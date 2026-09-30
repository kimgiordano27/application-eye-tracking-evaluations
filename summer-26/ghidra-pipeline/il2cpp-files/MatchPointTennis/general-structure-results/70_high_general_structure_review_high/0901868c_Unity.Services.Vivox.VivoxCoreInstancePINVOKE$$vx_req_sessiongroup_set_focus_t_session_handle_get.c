/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_focus_t_session_handle_get
ENTRY_POINT: 0901868c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_focus_t_session_handle_get
               (void)

{
  bool in_ZR;
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int in_w8;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  if (in_ZR) {
    unaff_x20 = 0;
  }
  if (in_w8 != 0) {
    if ((unaff_x20 != 0) &&
       (plVar1 = (long *)FUN_07b6d26c(unaff_x20,*unaff_x21,0), plVar1 != (long *)0x0)) {
      uVar2 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
                    /* try { // try from 090186bc to 091186e3 has its CatchHandler @ 090186f8 */
      if (*(int *)(*(long *)PTR_DAT_09fc0040 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09fc0040);
      }
                    /* try { // try from 090186e4 to 091186ef has its CatchHandler @ 09018308 */
      FUN_09018cdc(uVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
                    /* try { // try from 090186f0 to 091186f7 has its CatchHandler @ 090186f8 */
  thunk_FUN_044adef4(PTR_DAT_09f273a8);
                    /* catch() { ... } // from try @ 090186bc with catch @ 090186f8
                       catch() { ... } // from try @ 090186f0 with catch @ 090186f8 */
  uVar2 = thunk_FUN_0448520c();
  uVar3 = thunk_FUN_044adef4(PTR_DAT_09fc0050);
  uVar4 = thunk_FUN_044adef4(PTR_DAT_09f265f0);
  FUN_07a603a8(uVar2,uVar3,uVar4,0);
  uVar3 = thunk_FUN_044adef4(PTR_DAT_09fc0058);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar2,uVar3);
}


