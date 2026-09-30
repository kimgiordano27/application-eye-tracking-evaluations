/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$SaveSceneToJsonString
ENTRY_POINT: 057e3bc0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__SaveSceneToJsonString(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  ulong uVar8;
  int unaff_w26;
  int iVar9;
  code *unaff_x27;
  code *pcVar10;
  undefined4 uStack000000000000000c;
  
  uVar2 = (*unaff_x27)();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar7 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02feb2c4(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x128);
  if ((uVar1 & 1) == 0) {
    FUN_02feb2c4(lVar7);
  }
  uVar3 = (*pcVar10)();
  if ((int)uVar3 <= (int)uVar2) {
    uVar2 = uVar3;
  }
  if (0 < (int)uVar2) {
    iVar9 = 0;
    uVar8 = (ulong)uVar2;
    do {
      iVar4 = FUN_068b5924(unaff_x23 + unaff_w25 + (long)iVar9,unaff_x24 + unaff_w26 + (long)iVar9);
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
    lVar6 = FUN_02feb2c4(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x20);
  if ((uVar1 & 1) == 0) {
    FUN_02feb2c4(lVar7);
  }
  uStack000000000000000c = (*pcVar10)();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar7 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02feb2c4(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x128);
  if ((uVar1 & 1) == 0) {
    FUN_02feb2c4(lVar7);
  }
  uVar5 = (*pcVar10)();
  FUN_05aec868(&stack0x0000000c,uVar5,0);
  return;
}


