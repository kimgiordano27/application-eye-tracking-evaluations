/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$.ctor
ENTRY_POINT: 04d0ce20
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker___ctor
               (ushort *param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  lVar3 = *(long *)(param_4 + 0x20);
  uVar2 = *(ushort *)(lVar3 + 0x135);
  iVar1 = (uint)*param_1 - param_3;
  if ((int)((uint)*param_1 - param_3) <= param_3 + param_2) {
    iVar1 = param_3 + param_2;
  }
  if ((uVar2 & 1) == 0) {
    FUN_02d9a2e0();
    lVar3 = *(long *)(param_4 + 0x20);
    uVar2 = *(ushort *)(lVar3 + 0x135);
  }
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x60);
  if ((*(byte *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  if (DAT_06b7795b == '\0') {
    FUN_02d6084c(PTR_DAT_067680f8);
    DAT_06b7795b = '\x01';
  }
  lVar3 = *(long *)(lVar3 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  if (*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02d9a33c();
  }
  lVar3 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x60);
  if ((*(byte *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  if (DAT_06b7795b == '\0') {
    FUN_02d6084c(PTR_DAT_067680f8);
    DAT_06b7795b = '\x01';
  }
  lVar3 = *(long *)(lVar3 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  if (*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02d9a33c();
  }
  lVar3 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  FUN_06013f40((long)param_1 + (long)param_2 + 2,(long)param_1 + (long)iVar1 + 2,
               (long)(int)((uint)*param_1 - iVar1),0);
  lVar3 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  lVar3 = *(long *)(param_4 + 0x20);
  uVar2 = *param_1;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0xa8) + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  *param_1 = uVar2 - (short)param_3;
  return;
}


