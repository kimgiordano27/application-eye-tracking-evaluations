/*
FUNCTION_NAME: OVRPlugin.<>c__DisplayClass528_0$$<GetVirtualKeyboardModelAnimationStates>b__1
ENTRY_POINT: 056ad74c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__DisplayClass528_0__<GetVirtualKeyboardModelAnimationStates>b__1(void)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x20;
  int iVar3;
  long *unaff_x24;
  
  uVar2 = FUN_056ad7dc();
  iVar1 = FUN_05542308(uVar2,0);
  if (0 < iVar1) {
                    /* try { // try from 056ad760 to 057ad77f has its CatchHandler @ 056ad168 */
    iVar3 = 0;
    do {
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
                    /* try { // try from 056ad780 to 057ad7b7 has its CatchHandler @ 056ad960 */
      FUN_056ad858();
      FUN_056ad8c0();
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04e935dc();
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return;
}


