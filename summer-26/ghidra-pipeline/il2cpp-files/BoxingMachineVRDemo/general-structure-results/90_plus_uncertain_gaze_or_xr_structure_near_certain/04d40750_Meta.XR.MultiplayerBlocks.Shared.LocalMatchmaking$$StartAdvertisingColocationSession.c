/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StartAdvertisingColocationSession
ENTRY_POINT: 04d40750
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StartAdvertisingColocationSession
               (long param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong in_x9;
  long unaff_x20;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  ulong uVar9;
  code *pcVar10;
  int iVar11;
  undefined4 uStack000000000000000c;
  
  pcVar10 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x50);
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_02d9a2e0(param_1);
  }
  iVar2 = (*pcVar10)(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x50));
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar8 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_02d9a2e0(lVar7);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar8);
  }
  uVar3 = (*pcVar10)();
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar8 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_02d9a2e0(lVar7);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x268);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar8);
  }
  uVar4 = (*pcVar10)();
  if ((int)uVar4 <= (int)uVar3) {
    uVar3 = uVar4;
  }
  if (0 < (int)uVar3) {
    iVar11 = 0;
    uVar9 = (ulong)uVar3;
    do {
      iVar5 = FUN_0601547c(unaff_x23 + unaff_w25 + (long)iVar11,unaff_x24 + iVar2 + (long)iVar11);
      if (iVar5 != 0) {
        return;
      }
      uVar9 = uVar9 - 1;
      iVar11 = iVar11 + unaff_w22;
    } while (uVar9 != 0);
  }
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar8 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_02d9a2e0(lVar7);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar8);
  }
  uStack000000000000000c = (*pcVar10)();
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar8 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_02d9a2e0(lVar7);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x268);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar8);
  }
  uVar6 = (*pcVar10)();
  FUN_05004840(&stack0x0000000c,uVar6,0);
  return;
}


