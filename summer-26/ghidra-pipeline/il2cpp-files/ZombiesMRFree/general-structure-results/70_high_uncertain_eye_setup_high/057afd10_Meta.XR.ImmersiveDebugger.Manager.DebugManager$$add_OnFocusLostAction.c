/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$add_OnFocusLostAction
ENTRY_POINT: 057afd10
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_DebugManager__add_OnFocusLostAction
               (long param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  uVar4 = *(undefined8 *)(param_3 + 8);
  *(long *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(long *)(param_1 + 0x20) = param_2;
  thunk_FUN_03048534();
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  uVar2 = FUN_02fe9358(param_3);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\0') {
      if (param_2 == 0) {
        uVar4 = thunk_FUN_03022100(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar4,0);
      }
      goto LAB_057afd68;
    }
    if (*(char *)(param_1 + 0x70) == '\0') {
      pcVar5 = FUN_02c6ace8;
    }
    else {
      uVar2 = thunk_FUN_02fc078c(param_3);
      uVar3 = FUN_02fe98dc(param_3);
      if ((uVar2 & 1) == 0) {
        if ((uVar3 & 1) == 0) {
          pcVar5 = FUN_02c6ad18;
        }
        else {
          pcVar5 = FUN_02c6ad44;
        }
      }
      else if ((uVar3 & 1) == 0) {
        pcVar5 = FUN_02c6adc8;
      }
      else {
        pcVar5 = FUN_02c6ae04;
      }
    }
  }
  else {
    if (cVar1 != '\x01') {
LAB_057afd68:
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
      goto LAB_057afde0;
    }
    pcVar5 = FUN_02c6ad08;
  }
  *(code **)(param_1 + 0x18) = pcVar5;
LAB_057afde0:
  *(code **)(param_1 + 0x38) = FUN_02c6ac98;
  return;
}


