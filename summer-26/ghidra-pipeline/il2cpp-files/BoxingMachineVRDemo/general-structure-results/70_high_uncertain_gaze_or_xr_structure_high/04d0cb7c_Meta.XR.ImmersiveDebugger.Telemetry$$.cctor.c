/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$.cctor
ENTRY_POINT: 04d0cb7c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry___cctor
               (ushort *param_1,int param_2,int param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  int unaff_w24;
  
  if (0 < unaff_w24) {
    lVar3 = *(long *)(param_4 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_02d9a2e0();
      lVar3 = *(long *)(param_4 + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    uVar2 = *param_1;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    lVar3 = *(long *)(param_4 + 0x20);
    uVar1 = *param_1;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0xa8) + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    *param_1 = uVar1 + (short)unaff_w24;
    if (0 < (int)((uint)uVar2 - param_2)) {
      lVar3 = *(long *)(param_4 + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
      if ((uVar1 & 1) == 0) {
        FUN_02d9a2e0();
        lVar3 = *(long *)(param_4 + 0x20);
        uVar1 = *(ushort *)(lVar3 + 0x135);
      }
      if ((uVar1 & 1) == 0) {
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
      uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
      if ((uVar1 & 1) == 0) {
        FUN_02d9a2e0();
        uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
      }
      if ((uVar1 & 1) == 0) {
        FUN_02d9a2e0();
      }
      FUN_0601538c((long)param_1 + (long)param_3 + 2,(long)param_1 + (long)param_2 + 2,
                   (uint)uVar2 - param_2,0);
      return;
    }
  }
  return;
}


