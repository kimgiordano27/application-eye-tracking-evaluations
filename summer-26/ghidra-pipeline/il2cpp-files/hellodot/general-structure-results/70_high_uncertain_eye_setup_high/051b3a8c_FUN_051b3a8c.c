/*
FUNCTION_NAME: FUN_051b3a8c
ENTRY_POINT: 051b3a8c
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_8
*/


undefined8 FUN_051b3a8c(float param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  long local_58;
  long lStack_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  
  if ((DAT_06a7130c & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608728);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608730);
    DAT_06a7130c = 1;
  }
  puVar1 = PTR_DAT_06608730;
  local_40 = 0;
  local_38 = 0;
  local_44 = 0;
  if (param_3 == 0) goto OVRPlugin__GetNodeOrientationTracked;
  iVar4 = *(int *)(param_3 + 0x18);
  if (iVar4 == 1) {
    lVar2 = FUN_03968108(param_3,0,*(undefined8 *)PTR_DAT_06608730);
    if (lVar2 == 0) goto OVRPlugin__GetNodeOrientationTracked;
    if ((*(char *)(lVar2 + 0x38) == '\0') || (*(long *)(lVar2 + 0x40) == 0)) {
      iVar4 = *(int *)(param_3 + 0x18);
      goto LAB_051b3b50;
    }
    lVar2 = *param_4;
    lVar3 = FUN_03968108(param_3,0,*(undefined8 *)puVar1);
    if (lVar3 == 0) goto OVRPlugin__GetNodeOrientationTracked;
    if (*(char *)(lVar3 + 0x38) == '\0') {
      lStack_50 = 0;
    }
    else {
      lStack_50 = *(long *)(lVar3 + 0x40);
    }
  }
  else {
LAB_051b3b50:
    if (iVar4 < 2) {
      return 0;
    }
    lVar2 = FUN_05ef2cb4(param_2,0);
    if (lVar2 == 0) goto OVRPlugin__GetNodeOrientationTracked;
    fVar5 = (float)FUN_05f04738(lVar2,0);
    FUN_051ad490(param_1 / fVar5,param_3,&local_38,&local_40,&local_44);
    if (local_38 == 0) goto OVRPlugin__GetNodeOrientationTracked;
    if ((*(char *)(local_38 + 0x38) == '\0') ||
       (lStack_50 = *(long *)(local_38 + 0x40), lStack_50 == 0)) {
      if (local_40 == 0) goto OVRPlugin__GetNodeOrientationTracked;
      if (*(char *)(local_40 + 0x38) == '\0') {
        return 0;
      }
      lStack_50 = *(long *)(local_40 + 0x40);
      if (lStack_50 == 0) {
        return 0;
      }
    }
    else {
      if (local_40 == 0) goto OVRPlugin__GetNodeOrientationTracked;
      if ((*(char *)(local_40 + 0x38) != '\0') &&
         (local_58 = *(long *)(local_40 + 0x40), local_58 != 0)) {
        FUN_051ad7b0(local_44,&lStack_50,&local_58,param_4);
        return 1;
      }
    }
    lVar2 = *param_4;
  }
  if (lVar2 != 0) {
    FUN_051ad6d0(lVar2,lStack_50,0);
    return 1;
  }
OVRPlugin__GetNodeOrientationTracked:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


