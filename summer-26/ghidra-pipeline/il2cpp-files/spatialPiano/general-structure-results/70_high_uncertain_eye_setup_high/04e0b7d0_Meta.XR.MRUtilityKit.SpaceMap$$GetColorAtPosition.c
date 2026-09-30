/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap$$GetColorAtPosition
ENTRY_POINT: 04e0b7d0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMap__GetColorAtPosition(long param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  uVar4 = *(undefined8 *)(param_3 + 8);
  *(long *)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = param_3;
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  uVar2 = FUN_02f08824(param_3);
  if ((uVar2 & 1) == 0) {
    if (cVar1 == '\x05') {
      if (*(char *)(param_1 + 0x70) == '\0') {
        pcVar5 = FUN_02ba7cf8;
      }
      else {
        uVar2 = thunk_FUN_02f59140(param_3);
        uVar3 = FUN_02f08da0(param_3);
        if ((uVar2 & 1) == 0) {
          if ((uVar3 & 1) == 0) {
            pcVar5 = FUN_02ba7d40;
          }
          else {
            pcVar5 = FUN_02ba7d94;
          }
        }
        else if ((uVar3 & 1) == 0) {
          pcVar5 = FUN_02ba7e70;
        }
        else {
          pcVar5 = FUN_02ba7f00;
        }
      }
    }
    else {
      if (param_2 == 0) {
        uVar4 = thunk_FUN_02f523a8(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar4,0);
      }
      pcVar5 = FUN_02ba7cb8;
    }
  }
  else if (cVar1 == '\x06') {
    pcVar5 = FUN_02ba7c38;
  }
  else {
    pcVar5 = FUN_02ba7c74;
  }
  *(code **)(param_1 + 0x18) = pcVar5;
  *(code **)(param_1 + 0x38) = FUN_02ba7b9c;
  return;
}


