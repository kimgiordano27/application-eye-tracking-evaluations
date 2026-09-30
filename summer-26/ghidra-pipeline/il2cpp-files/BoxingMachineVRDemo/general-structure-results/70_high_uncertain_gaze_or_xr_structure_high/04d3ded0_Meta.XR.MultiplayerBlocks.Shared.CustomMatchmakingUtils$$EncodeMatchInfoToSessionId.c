/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmakingUtils$$EncodeMatchInfoToSessionId
ENTRY_POINT: 04d3ded0
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


void Meta_XR_MultiplayerBlocks_Shared_CustomMatchmakingUtils__EncodeMatchInfoToSessionId
               (long param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong in_x9;
  long unaff_x20;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  code *unaff_x25;
  ulong uVar10;
  code *pcVar11;
  int iVar12;
  undefined4 uStack000000000000000c;
  
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_02d9a2e0(param_1);
  }
  iVar2 = (*unaff_x25)(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x50));
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar9 + 0x135);
  lVar8 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02d9a2e0(lVar9);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x50);
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_02d9a2e0(lVar8);
  }
  iVar3 = (*pcVar11)(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x50));
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar9 + 0x135);
  lVar8 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02d9a2e0(lVar9);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar8);
  }
  uVar4 = (*pcVar11)();
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar9 + 0x135);
  lVar8 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02d9a2e0(lVar9);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x148);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar8);
  }
  uVar5 = (*pcVar11)();
  if ((int)uVar5 <= (int)uVar4) {
    uVar4 = uVar5;
  }
  if (0 < (int)uVar4) {
    iVar12 = 0;
    uVar10 = (ulong)uVar4;
    do {
      iVar6 = FUN_0601547c(unaff_x23 + iVar2 + (long)iVar12,unaff_x24 + iVar3 + (long)iVar12);
      if (iVar6 != 0) {
        return;
      }
      uVar10 = uVar10 - 1;
      iVar12 = iVar12 + unaff_w22;
    } while (uVar10 != 0);
  }
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar9 + 0x135);
  lVar8 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02d9a2e0(lVar9);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar8);
  }
  uStack000000000000000c = (*pcVar11)();
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar9 + 0x135);
  lVar8 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02d9a2e0(lVar9);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x148);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar8);
  }
  uVar7 = (*pcVar11)();
  FUN_05004840(&stack0x0000000c,uVar7,0);
  return;
}


