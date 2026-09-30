/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$.ctor
ENTRY_POINT: 05ab230c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker___ctor(ulong param_1,int param_2)

{
  bool in_ZR;
  long lVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x24;
  long unaff_x25;
  
  if (in_ZR) {
    if ((param_1 & 0x1800) == 0) {
      if (param_2 == 7) {
        lVar1 = *(long *)(unaff_x25 + 0xe0);
        puVar2 = (undefined8 *)PTR_DAT_07a03028;
      }
      else {
        if (param_2 != 5) {
          lVar1 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0367c9fc();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0367c9fc();
          }
          uVar3 = thunk_FUN_0367fe20();
          lVar1 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0367c9fc(lVar1);
          }
          FUN_04a424a0(uVar3,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38));
          return uVar3;
        }
        lVar1 = *(long *)(unaff_x25 + 0xe0);
        puVar2 = (undefined8 *)PTR_DAT_07a03020;
      }
    }
    else {
      lVar1 = *(long *)(unaff_x25 + 0xe0);
      puVar2 = (undefined8 *)PTR_DAT_07a03010;
    }
  }
  else {
    lVar1 = *(long *)(unaff_x25 + 0xe0);
    puVar2 = (undefined8 *)PTR_DAT_07a02ff0;
  }
  uVar3 = *puVar2;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar3 = FUN_05e26f18(uVar3,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x24);
  }
  uVar3 = FUN_05e59d90(uVar3);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc(lVar1);
  }
  lVar1 = **(long **)(lVar1 + 0xc0);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc(lVar1);
  }
  uVar3 = FUN_03156018(uVar3,lVar1);
  return uVar3;
}


