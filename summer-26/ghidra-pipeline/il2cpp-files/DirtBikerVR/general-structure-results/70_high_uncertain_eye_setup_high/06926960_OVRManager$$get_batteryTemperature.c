/*
FUNCTION_NAME: OVRManager$$get_batteryTemperature
ENTRY_POINT: 06926960
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_batteryTemperature(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0x8d8));
  *(undefined1 *)(unaff_x20 + 0xec8) = 1;
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_07cb2910(*(long *)(unaff_x19 + 0x48),0);
    puVar2 = PTR_DAT_084b5910;
    puVar1 = PTR_DAT_084b58d8;
    if (*(char *)(unaff_x19 + 0x30) == '\0') {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_084b58d8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar3 = FUN_06926324();
    lVar5 = **(long **)(*(long *)puVar1 + 0xb8);
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    FUN_053f151c();
    if (lVar5 != 0) {
      FUN_04de9c0c(lVar5,uVar4,*(undefined8 *)PTR_DAT_084b5908);
      uVar4 = FUN_06926324();
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      if (lVar5 != 0) {
        FUN_059fbb6c(lVar5,uVar3,uVar4,*(undefined8 *)PTR_DAT_084b5900);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


