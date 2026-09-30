/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcAudioSampleRate
ENTRY_POINT: 063aa830
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetMrcAudioSampleRate
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
               long *param_6)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_0825c6ad & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db2190);
    FUN_0373b518(PTR_DAT_07db2408);
    FUN_0373b518(PTR_DAT_07db2418);
    FUN_0373b518(PTR_DAT_07db6d60);
    FUN_0373b518(PTR_DAT_07db4c68);
    FUN_0373b518(PTR_DAT_07db4b20);
    FUN_0373b518(PTR_DAT_07db4c70);
                    /* try { // try from 063aa8c4 to 064aa8c7 has its CatchHandler @ 063aac18 */
    DAT_0825c6ad = 1;
  }
  uVar2 = FUN_063349dc(param_5,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = thunk_FUN_037a15ac(PTR_DAT_07db6e88);
    uVar3 = FUN_062d5fcc(param_2,uVar3,0);
    uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6e90);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar3,uVar4);
  }
                    /* try { // try from 063aa8d8 to 064aa8db has its CatchHandler @ 063aac1c */
  cVar1 = *(char *)(param_1 + 0x1a);
                    /* try { // try from 063aa8dc to 064aa8e3 has its CatchHandler @ 063aac14 */
  uVar2 = FUN_063acc10(uVar2,param_2);
  if (cVar1 == '\0') {
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_063acc5c(param_1,param_2,param_6);
                    /* try { // try from 063aa958 to 064aa95b has its CatchHandler @ 063aabf8 */
    }
    uVar4 = FUN_0632ed40(param_5,0);
                    /* try { // try from 063aa970 to 064aa983 has its CatchHandler @ 063aab5c */
    uVar2 = FUN_06335708(param_5,0x40,0);
    if ((uVar2 & 1) != 0) {
      if (param_5 != 0) {
        uVar3 = FUN_060c530c(param_5,1,0);
        uVar4 = FUN_0632ed40(uVar3,0);
LAB_063aa9a8:
        if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)PTR_DAT_07db2190);
        }
        FUN_063ad28c(param_2,param_3,param_4,param_5,uVar3,param_6,uVar4);
        return;
      }
      goto LAB_063aab74;
    }
    uVar2 = FUN_06335708(param_5,0x24,0);
    if ((uVar2 & 1) != 0) {
      uVar2 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                        (param_5,*(undefined8 *)PTR_DAT_07db4c68,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                          (param_5,*(undefined8 *)PTR_DAT_07db4b20,0);
        if (((((uVar2 & 1) != 0) ||
             (uVar2 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                (param_5,*(undefined8 *)PTR_DAT_07db4c70,0), (uVar2 & 1) != 0)) ||
            (uVar2 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                               (param_5,*(undefined8 *)PTR_DAT_07db2418,0), (uVar2 & 1) != 0)) ||
           (uVar2 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                              (param_5,*(undefined8 *)PTR_DAT_07db2408,0), (uVar2 & 1) != 0)) {
          if ((param_5 != 0) && (uVar3 = FUN_060c530c(param_5,1,0), param_6 != (long *)0x0)) {
            uVar4 = (**(code **)(*param_6 + 0x248))
                              (param_6,*(undefined8 *)PTR_DAT_07db6d60,
                               *(undefined8 *)(*param_6 + 0x250));
            goto LAB_063aa9a8;
          }
LAB_063aab74:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
      }
      else {
        if ((param_5 == 0) || (param_5 = FUN_060c530c(param_5,1,0), param_6 == (long *)0x0))
        goto LAB_063aab74;
        uVar4 = (**(code **)(*param_6 + 0x248))
                          (param_6,*(undefined8 *)PTR_DAT_07db6d60,*(undefined8 *)(*param_6 + 0x250)
                          );
      }
    }
  }
  else {
    if ((uVar2 & 1) != 0) {
      if (param_2 == 0) goto LAB_063aab74;
                    /* try { // try from 063aa8f4 to 064aa8ff has its CatchHandler @ 063aac1c */
      Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey(param_2,0);
    }
    uVar4 = 0;
    uVar3 = 0;
  }
  FUN_063ad608(param_1,param_2,param_3,param_4,param_5,param_6,uVar4,uVar3);
  return;
}


