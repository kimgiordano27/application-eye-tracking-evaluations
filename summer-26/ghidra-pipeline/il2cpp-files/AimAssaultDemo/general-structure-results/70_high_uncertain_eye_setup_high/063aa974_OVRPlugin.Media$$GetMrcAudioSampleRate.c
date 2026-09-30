/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcAudioSampleRate
ENTRY_POINT: 063aa974
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__GetMrcAudioSampleRate(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long unaff_x23;
  
  uVar1 = FUN_06335708();
  if ((uVar1 & 1) != 0) {
    if (unaff_x23 != 0) {
                    /* try { // try from 063aa990 to 064aa993 has its CatchHandler @ 063aabe4 */
      uVar2 = FUN_060c530c();
                    /* try { // try from 063aa9a0 to 064aa9a7 has its CatchHandler @ 063aabfc */
      FUN_0632ed40(uVar2,0);
LAB_063aa9a8:
      if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
                    /* try { // try from 063aa9c0 to 064aa9c3 has its CatchHandler @ 063aabe0 */
        thunk_FUN_03798b70(*(long *)PTR_DAT_07db2190);
      }
                    /* try { // try from 063aa9cc to 064aa9cf has its CatchHandler @ 063aabdc */
                    /* try { // try from 063aa9d8 to 064aa9db has its CatchHandler @ 063aabd8 */
                    /* try { // try from 063aa9e0 to 064aa9e7 has its CatchHandler @ 063aab58 */
                    /* try { // try from 063aa9e8 to 064aab3b has its CatchHandler @ 063aa77c */
      FUN_063ad28c();
      return;
    }
    goto LAB_063aab74;
  }
  uVar1 = FUN_06335708();
  if ((uVar1 & 1) != 0) {
    uVar1 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax();
    if ((uVar1 & 1) == 0) {
      uVar1 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax();
      if (((((uVar1 & 1) != 0) ||
           (uVar1 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(), (uVar1 & 1) != 0)
           ) || (uVar1 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(),
                (uVar1 & 1) != 0)) ||
         (uVar1 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(), (uVar1 & 1) != 0))
      {
        if ((unaff_x23 != 0) && (FUN_060c530c(), unaff_x19 != (long *)0x0)) {
          (**(code **)(*unaff_x19 + 0x248))();
          goto LAB_063aa9a8;
        }
LAB_063aab74:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    }
    else {
      if ((unaff_x23 == 0) || (FUN_060c530c(), unaff_x19 == (long *)0x0)) goto LAB_063aab74;
      (**(code **)(*unaff_x19 + 0x248))();
    }
  }
  FUN_063ad608();
  return;
}


