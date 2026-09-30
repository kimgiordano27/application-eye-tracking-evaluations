/*
FUNCTION_NAME: OVRManager$$add_SpaceQueryComplete
ENTRY_POINT: 06924828
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRManager__add_SpaceQueryComplete(void)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  uint unaff_w19;
  
  puVar2 = (undefined8 *)FUN_03ac43c4();
  uVar1 = (*(code *)*puVar2)();
  if (uVar1 < 0x80) {
    iVar3 = 1;
  }
  else if (uVar1 < 0x4000) {
    iVar3 = 2;
  }
  else if (uVar1 < 0x200000) {
    iVar3 = 3;
  }
  else {
    iVar3 = 4;
    if (uVar1 >> 0x1c != 0) {
      iVar3 = 5;
    }
  }
  if (unaff_w19 < 0x80) {
    iVar4 = 1;
  }
  else if (unaff_w19 < 0x4000) {
    iVar4 = 2;
  }
  else if (unaff_w19 < 0x200000) {
    iVar4 = 3;
  }
  else {
    iVar4 = 4;
    if (unaff_w19 >> 0x1c != 0) {
      iVar4 = 5;
    }
  }
  return iVar3 + unaff_w19 + iVar4;
}


