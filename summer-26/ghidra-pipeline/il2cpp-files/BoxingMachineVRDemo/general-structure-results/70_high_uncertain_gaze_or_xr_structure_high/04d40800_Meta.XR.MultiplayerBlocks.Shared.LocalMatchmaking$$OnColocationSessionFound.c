/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$OnColocationSessionFound
ENTRY_POINT: 04d40800
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


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__OnColocationSessionFound
               (undefined8 param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong in_x9;
  long unaff_x20;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  ulong uVar7;
  int unaff_w26;
  uint unaff_w27;
  int iVar8;
  code *pcVar9;
  undefined4 uStack000000000000000c;
  
  pcVar9 = (code *)**(undefined8 **)(*(long *)(param_2 + 0xc0) + 0x268);
  if ((in_x9 & 1) == 0) {
    FUN_02d9a2e0(param_1);
  }
  uVar2 = (*pcVar9)();
  if ((int)uVar2 <= (int)unaff_w27) {
    unaff_w27 = uVar2;
  }
  if (0 < (int)unaff_w27) {
    iVar8 = 0;
    uVar7 = (ulong)unaff_w27;
    do {
      iVar3 = FUN_0601547c(unaff_x23 + unaff_w25 + (long)iVar8,unaff_x24 + unaff_w26 + (long)iVar8);
      if (iVar3 != 0) {
        return;
      }
      uVar7 = uVar7 - 1;
      iVar8 = iVar8 + unaff_w22;
    } while (uVar7 != 0);
  }
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02d9a2e0(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar6);
  }
  uStack000000000000000c = (*pcVar9)();
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02d9a2e0(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x268);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar6);
  }
  uVar4 = (*pcVar9)();
  FUN_05004840(&stack0x0000000c,uVar4,0);
  return;
}


