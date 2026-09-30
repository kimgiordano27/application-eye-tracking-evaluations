/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_SetDeveloperTelemetryConsent
ENTRY_POINT: 05d51c6c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_95_0__ovrp_SetDeveloperTelemetryConsent(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long *plVar5;
  long unaff_x21;
  
  plVar5 = *(long **)(unaff_x20 + 0x618);
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6d668);
    FUN_02fe925c(PTR_DAT_06fb9458);
    FUN_02fe925c(PTR_DAT_06f6d618);
    FUN_02fe925c(PTR_DAT_06fb9460);
    *(undefined1 *)(unaff_x21 + 0xbd0) = 1;
  }
  puVar1 = PTR_DAT_06fb9458;
  if (*(int *)(*plVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar2 = FUN_03d291d0(*(undefined8 *)puVar1);
  uVar3 = FUN_068f8810(uVar2,param_2,0);
  puVar1 = PTR_DAT_06fb9460;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_068bdec0(*(undefined8 *)puVar1,0);
  }
  if (*(char *)(param_2 + 0x20) != '\0') {
    uVar2 = FUN_068f5db8(param_2,0);
    lVar4 = *plVar5;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar4);
    }
    FUN_068fd6c4(uVar2,0);
    return;
  }
  return;
}


