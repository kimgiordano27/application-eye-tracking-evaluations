/*
FUNCTION_NAME: OVRManager$$UpdateDynamicResolutionVersion
ENTRY_POINT: 07c5fd54
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateDynamicResolutionVersion
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  *(long *)(param_2 + 0x28) = param_4;
  *(undefined8 *)(param_2 + 0x10) = param_1;
  *(long *)(param_2 + 0x20) = param_3;
  thunk_FUN_044bb4b4();
  cVar1 = *(char *)(param_4 + 0x52);
  *(long *)(param_2 + 0x40) = param_2;
  uVar2 = FUN_04447ca8(param_4);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\x01') {
      if (param_3 == 0) {
        uVar4 = thunk_FUN_044915f0(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar4,0);
      }
      goto LAB_07c5fdd4;
    }
    if (*(char *)(param_2 + 0x70) == '\0') {
      pcVar5 = FUN_0436a2e8;
    }
    else {
      uVar2 = thunk_FUN_04498138(param_4);
      uVar3 = FUN_0444823c(param_4);
      if ((uVar2 & 1) == 0) {
        if ((uVar3 & 1) == 0) {
          pcVar5 = FUN_0436a370;
        }
        else {
          pcVar5 = FUN_0436a3d0;
        }
      }
      else if ((uVar3 & 1) == 0) {
        pcVar5 = FUN_0436a490;
      }
      else {
        pcVar5 = FUN_0436a500;
      }
    }
  }
  else {
    if (cVar1 != '\x02') {
LAB_07c5fdd4:
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x20);
      goto LAB_07c5fe1c;
    }
    pcVar5 = FUN_0436a330;
  }
  *(code **)(param_2 + 0x18) = pcVar5;
LAB_07c5fe1c:
  *(code **)(param_2 + 0x38) = FUN_0436a26c;
  return;
}


