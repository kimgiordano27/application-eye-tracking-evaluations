/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$get_HapticsClip
ENTRY_POINT: 057a7374
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__get_HapticsClip
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  *(long *)(param_2 + 0x28) = param_4;
  *(undefined8 *)(param_2 + 0x10) = param_1;
  *(long *)(param_2 + 0x20) = param_3;
  thunk_FUN_03048534();
  cVar1 = *(char *)(param_4 + 0x52);
  *(long *)(param_2 + 0x40) = param_2;
  uVar2 = FUN_02fe9358(param_4);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\x04') {
      if (param_3 == 0) {
        uVar3 = thunk_FUN_03022100(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar3,0);
      }
      goto LAB_057a73d4;
    }
    pcVar4 = FUN_02c64978;
  }
  else {
    if (cVar1 != '\x05') {
LAB_057a73d4:
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x20);
      goto LAB_057a73e4;
    }
    pcVar4 = FUN_02c64998;
  }
  *(code **)(param_2 + 0x18) = pcVar4;
LAB_057a73e4:
  *(code **)(param_2 + 0x38) = FUN_02c64900;
  return;
}


