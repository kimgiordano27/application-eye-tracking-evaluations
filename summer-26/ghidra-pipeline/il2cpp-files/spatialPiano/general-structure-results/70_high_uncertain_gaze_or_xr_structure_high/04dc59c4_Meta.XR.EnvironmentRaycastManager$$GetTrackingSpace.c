/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$GetTrackingSpace
ENTRY_POINT: 04dc59c4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_EnvironmentRaycastManager__GetTrackingSpace(long param_1)

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
  long lVar10;
  long unaff_x20;
  int unaff_w22;
  long unaff_x23;
  code *pcVar11;
  int iVar12;
  ulong uVar13;
  undefined4 uStack000000000000000c;
  
  pcVar11 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x260);
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c(*(long *)(unaff_x20 + 0x20));
  }
  lVar8 = (*pcVar11)();
  lVar10 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar10 + 0x135);
  lVar9 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_02f41e9c(lVar10);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x50);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
  }
  iVar2 = (*pcVar11)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x50));
  lVar10 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar10 + 0x135);
  lVar9 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_02f41e9c(lVar10);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x50);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
  }
  iVar3 = (*pcVar11)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x50));
  lVar10 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar10 + 0x135);
  lVar9 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_02f41e9c(lVar10);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar9);
  }
  uVar4 = (*pcVar11)();
  lVar10 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar10 + 0x135);
  lVar9 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_02f41e9c(lVar10);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x268);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar9);
  }
  uVar5 = (*pcVar11)();
  if ((int)uVar5 <= (int)uVar4) {
    uVar4 = uVar5;
  }
  uVar13 = (ulong)uVar4;
  if (0 < (int)uVar4) {
    iVar12 = 0;
    do {
      iVar6 = FUN_0609d588(unaff_x23 + iVar2 + (long)iVar12,lVar8 + iVar3 + (long)iVar12);
      if (iVar6 != 0) {
        return;
      }
      uVar13 = uVar13 - 1;
      iVar12 = iVar12 + unaff_w22;
    } while (uVar13 != 0);
  }
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar9 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_02f41e9c(lVar8);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar9);
  }
  uStack000000000000000c = (*pcVar11)();
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar9 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_02f41e9c(lVar8);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x268);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar9);
  }
  uVar7 = (*pcVar11)();
  FUN_050d2bd4(&stack0x0000000c,uVar7,0);
  return;
}


