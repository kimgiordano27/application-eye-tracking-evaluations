/*
FUNCTION_NAME: FUN_07313554
ENTRY_POINT: 07313554
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07313554(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_08eb2548;
  puVar1 = PTR_DAT_08eb1b58;
  if ((DAT_0941df74 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb2548);
    FUN_03c8f898(PTR_DAT_08eb1b58);
    DAT_0941df74 = 1;
  }
  plVar3 = (long *)FUN_03c8f97c(*(undefined8 *)puVar2,2);
  lVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  OVRPlugin_Media__GetMrcActivationMode(lVar4,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_03cf5138(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_07313670:
    uVar6 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_03d233cc(plVar3 + 4,lVar4);
    lVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    OVRPlugin_Media__GetMrcActivationMode(lVar4,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03cf5138(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_07313670;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      thunk_FUN_03d233cc(plVar3 + 5,lVar4);
      *(long *)(param_1 + 0x20) = (long)plVar3;
      thunk_FUN_03d233cc((long *)(param_1 + 0x20),plVar3);
      thunk_FUN_085db0ec(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


