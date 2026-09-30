/*
FUNCTION_NAME: FUN_01da9ee4
ENTRY_POINT: 01da9ee4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01da9ee4(long param_1,long param_2,long param_3)

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
  thunk_FUN_0106e12c();
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  uVar2 = FUN_00fdc398(param_3);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\0') {
      if (param_2 == 0) {
        uVar4 = thunk_FUN_01058748(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar4,0);
      }
      goto LAB_01da9f40;
    }
    if (*(char *)(param_1 + 0x70) == '\0') {
      pcVar5 = FUN_00f943d4;
    }
    else {
      uVar2 = thunk_FUN_00ffc278(param_3);
      uVar3 = FUN_00fdc928(param_3);
      if ((uVar2 & 1) == 0) {
        if ((uVar3 & 1) == 0) {
          pcVar5 = FUN_00f94404;
        }
        else {
          pcVar5 = FUN_00f94430;
        }
      }
      else if ((uVar3 & 1) == 0) {
        pcVar5 = FUN_00f944b4;
      }
      else {
        pcVar5 = FUN_00f944f0;
      }
    }
  }
  else {
    if (cVar1 != '\x01') {
LAB_01da9f40:
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
      goto OVRPlugin_Media__Initialize;
    }
    pcVar5 = FUN_00f943f4;
  }
  *(code **)(param_1 + 0x18) = pcVar5;
OVRPlugin_Media__Initialize:
  *(code **)(param_1 + 0x38) = FUN_00f9438c;
  return;
}


