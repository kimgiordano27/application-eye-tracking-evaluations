/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 052e683c
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManagerForAddon__get_TelemetryAnnotation(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  if ((*(byte *)(unaff_x20 + 0x16e) & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3daf0);
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(PTR_DAT_06d3daf8);
    FUN_02f07e70(PTR_DAT_06d3db00);
    FUN_02f07e70(PTR_DAT_06d3db08);
    FUN_02f07e70(PTR_DAT_06d01e20);
    FUN_02f07e70(PTR_DAT_06d3db10);
    FUN_02f07e70(PTR_DAT_06d3db18);
    FUN_02f07e70(PTR_DAT_06d3db20);
    *(undefined1 *)(unaff_x20 + 0x16e) = 1;
  }
  puVar1 = PTR_DAT_06d01e20;
  if (DAT_071bb309 == '\0') {
    FUN_02f07e70(PTR_DAT_06d07bd8);
    DAT_071bb309 = '\x01';
  }
  puVar2 = PTR_DAT_06d07bd8;
  uVar4 = **(undefined8 **)(*(long *)PTR_DAT_06d07bd8 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar3 = FUN_066cd30c(uVar4,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_066cdd04(param_1,0);
    return;
  }
  if (DAT_071c11b6 == '\0') {
    FUN_02f07e70(PTR_DAT_06d07bd8);
    DAT_071c11b6 = '\x01';
  }
  **(long **)(*(long *)puVar2 + 0xb8) = param_1;
  thunk_FUN_02f411dc(*(undefined8 *)(*(long *)puVar2 + 0xb8),param_1);
  uVar4 = FUN_066c67ec(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)puVar1);
  }
  FUN_066cdfd0(uVar4,0);
  puVar2 = PTR_DAT_06d3daf0;
  uVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3daf0);
  FUN_04c047f8(uVar4,param_1,*(undefined8 *)PTR_DAT_06d3daf8,0);
  FUN_0692ece4(uVar4,0);
  uVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  FUN_04c047f8(uVar4,param_1,*(undefined8 *)PTR_DAT_06d3db00,0);
  FUN_0692e9a4(uVar4,0);
  uVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  FUN_04c047f8(uVar4,param_1,*(undefined8 *)PTR_DAT_06d3db08,0);
  FUN_0692eb44(uVar4,0);
  plVar5 = (long *)(param_1 + 0x50);
  lVar6 = *plVar5;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar3 = FUN_066cd30c(lVar6,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06694324(*(undefined8 *)PTR_DAT_06d3db18,0);
    lVar6 = FUN_03b7eee0(*(undefined8 *)PTR_DAT_06d3db10);
    *plVar5 = lVar6;
    thunk_FUN_02f411dc(plVar5,lVar6);
    if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_0528cf68(*plVar5,0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar3 = FUN_066cd30c(uVar4,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06694324(*(undefined8 *)PTR_DAT_06d3db20,0);
  }
  FUN_052e6b60(param_1);
  if ((*(char *)(param_1 + 0xd8) == '\0') && (*(char *)(param_1 + 0xd9) == '\0')) {
    return;
  }
  FUN_052e7318(param_1);
  FUN_052e9218(param_1);
  return;
}


