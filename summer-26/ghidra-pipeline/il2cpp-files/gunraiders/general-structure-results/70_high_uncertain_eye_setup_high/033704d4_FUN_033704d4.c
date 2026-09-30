/*
FUNCTION_NAME: FUN_033704d4
ENTRY_POINT: 033704d4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_033704d4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  puVar1 = PTR_DAT_042305b8;
  if ((DAT_04533620 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042305b8);
    DAT_04533620 = 1;
  }
  plVar2 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar1,2);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if ((param_3 != 0) &&
     (lVar3 = thunk_FUN_01c495e4(param_3,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
OVRManager_InstantiateMrcCameraDelegate__Invoke:
    uVar4 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar4,0);
  }
  uVar5 = *(uint *)(plVar2 + 3);
  if (uVar5 != 0) {
    plVar2[4] = param_3;
    if (param_4 != 0) {
      lVar3 = thunk_FUN_01c495e4(param_4,*(undefined8 *)(*plVar2 + 0x40));
      if (lVar3 == 0) goto OVRManager_InstantiateMrcCameraDelegate__Invoke;
      uVar5 = *(uint *)(plVar2 + 3);
    }
    if (1 < uVar5) {
      plVar2[5] = param_4;
      FUN_03383e08(param_1,param_2,plVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


