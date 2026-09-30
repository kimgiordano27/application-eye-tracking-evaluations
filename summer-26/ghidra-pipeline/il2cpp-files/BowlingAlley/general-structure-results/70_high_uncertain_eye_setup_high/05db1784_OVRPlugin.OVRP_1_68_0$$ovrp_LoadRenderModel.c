/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_LoadRenderModel
ENTRY_POINT: 05db1784
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_68_0__ovrp_LoadRenderModel(void)

{
  long lVar1;
  undefined8 uVar2;
  int unaff_w19;
  undefined8 in_stack_00000018;
  
  uVar2 = in_stack_00000018;
  if (unaff_w19 == 0x521adf0d) {
    lVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d50);
    FUN_05db0920(lVar1,uVar2);
  }
  else {
                    /* try { // try from 05db1798 to 05eb179b has its CatchHandler @ 05db17bc */
                    /* try { // try from 05db179c to 05eb17c3 has its CatchHandler @ 05db1544 */
    if (unaff_w19 == 0x54e2d1f8) {
      lVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1d18);
      FUN_05db36e4(lVar1,uVar2);
    }
    else {
      lVar1 = FUN_05db39fc(in_stack_00000018,unaff_w19);
      if (lVar1 == 0) {
        uVar2 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_072b1b88,&stack0x0000000c);
        uVar2 = FUN_057a25c4(*(undefined8 *)PTR_DAT_072b1d58,uVar2,0);
        if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
        }
        FUN_06bb2a00(uVar2,0);
        lVar1 = 0;
      }
    }
  }
  return lVar1;
}


