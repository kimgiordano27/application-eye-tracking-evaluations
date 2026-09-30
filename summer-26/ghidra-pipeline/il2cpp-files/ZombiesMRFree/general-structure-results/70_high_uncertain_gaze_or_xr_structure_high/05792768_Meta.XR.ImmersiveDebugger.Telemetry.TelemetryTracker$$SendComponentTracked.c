/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendComponentTracked
ENTRY_POINT: 05792768
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


long * Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendComponentTracked(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *unaff_x24;
  long *unaff_x25;
  
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar2 = FUN_05b238cc();
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*unaff_x25);
  }
  uVar1 = FUN_05b09cc0(uVar2,0);
  switch(uVar1) {
  case 5:
    lVar3 = *unaff_x25;
    puVar5 = (undefined8 *)PTR_DAT_06f9ceb0;
    break;
  case 6:
  case 8:
  case 9:
  case 10:
    lVar3 = *unaff_x25;
    puVar5 = (undefined8 *)PTR_DAT_06f9ce80;
    break;
  case 7:
    lVar3 = *unaff_x25;
    puVar5 = (undefined8 *)PTR_DAT_06f9ceb8;
    break;
  case 0xb:
  case 0xc:
    lVar3 = *unaff_x25;
    puVar5 = (undefined8 *)PTR_DAT_06f9cea0;
    break;
  default:
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_02feb2c4();
    }
    plVar4 = (long *)thunk_FUN_0301080c();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4(lVar3);
    }
    FUN_0491a9c4(plVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
    return plVar4;
  }
  uVar2 = *puVar5;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar2 = FUN_05afde1c(uVar2,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*unaff_x24);
  }
  plVar4 = (long *)FUN_05b31ad8(uVar2);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02feb2c4(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02feb2c4(lVar3);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar4);
    }
  }
  return plVar4;
}


