/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_StartKeyboardTracking
ENTRY_POINT: 05db1a3c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_68_0__ovrp_StartKeyboardTracking(void)

{
  bool in_ZR;
  long lVar1;
  undefined8 uVar2;
  int unaff_w19;
  undefined8 in_stack_00000018;
  
  uVar2 = in_stack_00000018;
  if (in_ZR) {
                    /* catch() { ... } // from try @ 05db1b50 with catch @ 05db1b7c */
    lVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c18);
                    /* try { // try from 05db1b8c to 05eb1b93 has its CatchHandler @ 05db1ba8 */
                    /* try { // try from 05db1b94 to 05eb1b9f has its CatchHandler @ 05db1a34 */
    FUN_05db2be4(lVar1,uVar2);
  }
  else if (unaff_w19 == 0x117fc8fe) {
    lVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1c80);
    FUN_05db3164(lVar1,uVar2);
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
  return lVar1;
}


