/*
FUNCTION_NAME: OVRPlugin$$GetSpaceUuid
ENTRY_POINT: 076d3ed8
PROGRAM: m3ar-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin__GetSpaceUuid(undefined1 param_1 [16],long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_x9;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(in_x9 + 0x268);
  uVar3 = *(undefined8 *)(in_x9 + 0x260);
  *(long *)(param_2 + 0x48) = param_1._8_8_;
  *(long *)(param_2 + 0x40) = param_1._0_8_;
  *(undefined8 *)(param_2 + 0x58) = uVar4;
  *(undefined8 *)(param_2 + 0x50) = uVar3;
  uVar2 = _UNK_01a30de8;
  uVar1 = _DAT_01a30de0;
  uVar4 = _UNK_01a30848;
  uVar3 = _DAT_01a30840;
  *(undefined4 *)(param_2 + 0x90) = 0x3e99999a;
  *(undefined8 *)(param_2 + 0x78) = uVar2;
  *(undefined8 *)(param_2 + 0x70) = uVar1;
  *(undefined8 *)(param_2 + 0x88) = uVar4;
  *(undefined8 *)(param_2 + 0x80) = uVar3;
  thunk_FUN_085843b0();
  return;
}


