/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$IsInBounds
ENTRY_POINT: 04dc4330
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


void Meta_XR_EnvironmentDepthRaycaster__IsInBounds
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  int iVar14;
  ulong uVar15;
  undefined4 uStack000000000000000c;
  
  lVar10 = *(long *)(param_3 + 0x20);
  uVar1 = *(ushort *)(lVar10 + 0x135);
  lVar9 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_02f41e9c(lVar10);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar9 = *(long *)(param_3 + 0x20);
  }
  uStack000000000000000c = 0;
  iVar2 = *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x70) + 0xfc);
  lVar10 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar10 = *(long *)(param_3 + 0x20);
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x48);
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_02f41e9c(lVar10);
  }
  lVar10 = (*pcVar13)(param_1,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x48));
  lVar11 = *(long *)(param_3 + 0x20);
  uVar1 = *(ushort *)(lVar11 + 0x135);
  lVar9 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_02f41e9c(lVar11);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar9 = *(long *)(param_3 + 0x20);
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x1b0);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
  }
  lVar11 = (*pcVar13)(param_2,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x1b0));
  lVar12 = *(long *)(param_3 + 0x20);
  uVar1 = *(ushort *)(lVar12 + 0x135);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_02f41e9c(lVar12);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar9 = *(long *)(param_3 + 0x20);
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x50);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
  }
  iVar3 = (*pcVar13)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x50));
  lVar12 = *(long *)(param_3 + 0x20);
  uVar1 = *(ushort *)(lVar12 + 0x135);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_02f41e9c(lVar12);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar9 = *(long *)(param_3 + 0x20);
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x50);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
  }
  iVar4 = (*pcVar13)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x50));
  lVar12 = *(long *)(param_3 + 0x20);
  uVar1 = *(ushort *)(lVar12 + 0x135);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_02f41e9c(lVar12);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar9 = *(long *)(param_3 + 0x20);
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
  }
  uVar5 = (*pcVar13)(param_1,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x38));
  lVar12 = *(long *)(param_3 + 0x20);
  uVar1 = *(ushort *)(lVar12 + 0x135);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_02f41e9c(lVar12);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar9 = *(long *)(param_3 + 0x20);
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x1b8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
  }
  uVar6 = (*pcVar13)(param_2,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x1b8));
  if ((int)uVar6 <= (int)uVar5) {
    uVar5 = uVar6;
  }
  uVar15 = (ulong)uVar5;
  if (0 < (int)uVar5) {
    iVar14 = 0;
    do {
      iVar7 = FUN_0609d588(lVar10 + iVar3 + (long)iVar14,lVar11 + iVar4 + (long)iVar14,(long)iVar2,0
                          );
      if (iVar7 != 0) {
        return;
      }
      uVar15 = uVar15 - 1;
      iVar14 = iVar14 + iVar2;
    } while (uVar15 != 0);
  }
  lVar10 = *(long *)(param_3 + 0x20);
  uVar1 = *(ushort *)(lVar10 + 0x135);
  lVar9 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_02f41e9c(lVar10);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar9 = *(long *)(param_3 + 0x20);
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
  }
  uStack000000000000000c = (*pcVar13)(param_1,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x38));
  lVar10 = *(long *)(param_3 + 0x20);
  uVar1 = *(ushort *)(lVar10 + 0x135);
  lVar9 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_02f41e9c(lVar10);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar9 = *(long *)(param_3 + 0x20);
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x1b8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
  }
  uVar8 = (*pcVar13)(param_2,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x1b8));
  FUN_050d2bd4(&stack0x0000000c,uVar8,0);
  return;
}


