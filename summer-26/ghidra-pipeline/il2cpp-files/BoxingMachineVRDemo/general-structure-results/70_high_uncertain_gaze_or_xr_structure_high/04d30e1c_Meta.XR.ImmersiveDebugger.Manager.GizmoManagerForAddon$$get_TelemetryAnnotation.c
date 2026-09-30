/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 04d30e1c
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


void Meta_XR_ImmersiveDebugger_Manager_GizmoManagerForAddon__get_TelemetryAnnotation(long param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  ushort in_w9;
  long unaff_x20;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  ulong uVar8;
  int unaff_w26;
  int iVar9;
  code *pcVar10;
  undefined4 uStack000000000000000c;
  
  lVar7 = param_1;
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_02d9a2e0(param_1);
    in_w9 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x38);
  if ((in_w9 & 1) == 0) {
    FUN_02d9a2e0(lVar7);
  }
  uVar2 = (*pcVar10)();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar7 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02d9a2e0(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x148);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar7);
  }
  uVar3 = (*pcVar10)();
  if ((int)uVar3 <= (int)uVar2) {
    uVar2 = uVar3;
  }
  if (0 < (int)uVar2) {
    iVar9 = 0;
    uVar8 = (ulong)uVar2;
    do {
      iVar4 = FUN_0601547c(unaff_x23 + unaff_w25 + (long)iVar9,unaff_x24 + unaff_w26 + (long)iVar9);
      if (iVar4 != 0) {
        return;
      }
      uVar8 = uVar8 - 1;
      iVar9 = iVar9 + unaff_w22;
    } while (uVar8 != 0);
  }
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar7 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02d9a2e0(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar7);
  }
  uStack000000000000000c = (*pcVar10)();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar7 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02d9a2e0(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x148);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar7);
  }
  uVar5 = (*pcVar10)();
  FUN_05004840(&stack0x0000000c,uVar5,0);
  return;
}


