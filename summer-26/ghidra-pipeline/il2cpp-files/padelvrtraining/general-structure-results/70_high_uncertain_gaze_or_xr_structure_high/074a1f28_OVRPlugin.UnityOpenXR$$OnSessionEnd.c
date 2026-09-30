/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionEnd
ENTRY_POINT: 074a1f28
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionEnd(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *puVar3;
  long unaff_x20;
  long *plVar4;
  long unaff_x22;
  undefined8 *puVar5;
  long unaff_x23;
  long unaff_x24;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_09223da0;
  puVar6 = *(undefined8 **)(unaff_x24 + 0xd88);
  puVar3 = *(undefined8 **)(unaff_x19 + 0xd90);
  plVar4 = *(long **)(unaff_x20 + 0x4d8);
  puVar5 = *(undefined8 **)(unaff_x22 + 0xd98);
  if ((*(byte *)(unaff_x23 + 0xba9) & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091f94d8);
    FUN_03d2d2b0(PTR_DAT_09223d90);
    FUN_03d2d2b0(PTR_DAT_09223da0);
    FUN_03d2d2b0(PTR_DAT_09223d88);
    FUN_03d2d2b0(PTR_DAT_09223d98);
    *(undefined1 *)(unaff_x23 + 0xba9) = 1;
  }
  uVar2 = thunk_FUN_03d2ef40(*puVar6);
  FUN_06c4e89c(uVar2,*puVar3);
  **(undefined8 **)(*plVar4 + 0xb8) = uVar2;
  thunk_FUN_03d1023c(*(undefined8 *)(*plVar4 + 0xb8),uVar2);
  uVar2 = thunk_FUN_03d2ef40(*puVar5);
  FUN_06c3d830(uVar2,*(undefined8 *)puVar1);
  puVar3 = (undefined8 *)(*(long *)(*plVar4 + 0xb8) + 8);
  *puVar3 = uVar2;
  thunk_FUN_03d1023c(puVar3,uVar2);
  *(undefined1 *)(*(long *)(*plVar4 + 0xb8) + 0x10) = 0;
  return;
}


