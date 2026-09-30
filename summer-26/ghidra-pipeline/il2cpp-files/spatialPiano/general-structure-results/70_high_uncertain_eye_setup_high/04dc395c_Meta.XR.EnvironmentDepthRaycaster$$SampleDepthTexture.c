/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$SampleDepthTexture
ENTRY_POINT: 04dc395c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__SampleDepthTexture(long param_1)

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
  long unaff_x20;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  int iVar10;
  code *pcVar11;
  ulong uVar12;
  undefined4 uStack000000000000000c;
  
  lVar8 = *(long *)(unaff_x20 + 0x20);
  pcVar11 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x50);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02f41e9c(lVar8);
  }
  iVar2 = (*pcVar11)(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x50));
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar9 + 0x135);
  lVar8 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x50);
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_02f41e9c(lVar8);
  }
  iVar3 = (*pcVar11)(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x50));
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar9 + 0x135);
  lVar8 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar8);
  }
  uVar4 = (*pcVar11)();
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar9 + 0x135);
  lVar8 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x158);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar8);
  }
  uVar5 = (*pcVar11)();
  if ((int)uVar5 <= (int)uVar4) {
    uVar4 = uVar5;
  }
  uVar12 = (ulong)uVar4;
  if (0 < (int)uVar4) {
    iVar10 = 0;
    do {
      iVar6 = FUN_0609d588(unaff_x23 + iVar2 + (long)iVar10,unaff_x24 + iVar3 + (long)iVar10);
      if (iVar6 != 0) {
        return;
      }
      uVar12 = uVar12 - 1;
      iVar10 = iVar10 + unaff_w22;
    } while (uVar12 != 0);
  }
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar9 + 0x135);
  lVar8 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar8);
  }
  uStack000000000000000c = (*pcVar11)();
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar9 + 0x135);
  lVar8 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x158);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar8);
  }
  uVar7 = (*pcVar11)();
  FUN_050d2bd4(&stack0x0000000c,uVar7,0);
  return;
}


