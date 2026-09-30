/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetClosestSurfacePosition
ENTRY_POINT: 04de0e28
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 145
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetClosestSurfacePosition
               (long param_1,undefined8 param_2)

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
  long lVar11;
  long unaff_x20;
  int unaff_w22;
  code *unaff_x23;
  code *pcVar12;
  int iVar13;
  ulong uVar14;
  undefined4 uStack000000000000000c;
  
  lVar8 = (*unaff_x23)(param_2,*(undefined8 *)(param_1 + 0x48));
  lVar10 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar10 + 0x135);
  lVar9 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_02f41e9c(lVar10);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x1f8);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar9);
  }
  lVar10 = (*pcVar12)();
  lVar11 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar11 + 0x135);
  lVar9 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_02f41e9c(lVar11);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x50);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
  }
  iVar2 = (*pcVar12)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x50));
  lVar11 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar11 + 0x135);
  lVar9 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_02f41e9c(lVar11);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x50);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02f41e9c(lVar9);
  }
  iVar3 = (*pcVar12)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x50));
  lVar11 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar11 + 0x135);
  lVar9 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_02f41e9c(lVar11);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar9);
  }
  uVar4 = (*pcVar12)();
  lVar11 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar11 + 0x135);
  lVar9 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_02f41e9c(lVar11);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x200);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar9);
  }
  uVar5 = (*pcVar12)();
  if ((int)uVar5 <= (int)uVar4) {
    uVar4 = uVar5;
  }
  uVar14 = (ulong)uVar4;
  if (0 < (int)uVar4) {
    iVar13 = 0;
    do {
      iVar6 = FUN_0609d588(lVar8 + iVar2 + (long)iVar13,lVar10 + iVar3 + (long)iVar13);
      if (iVar6 != 0) {
        return;
      }
      uVar14 = uVar14 - 1;
      iVar13 = iVar13 + unaff_w22;
    } while (uVar14 != 0);
  }
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar9 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_02f41e9c(lVar8);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar9);
  }
  uStack000000000000000c = (*pcVar12)();
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar9 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_02f41e9c(lVar8);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x200);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar9);
  }
  uVar7 = (*pcVar12)();
  FUN_050d2bd4(&stack0x0000000c,uVar7,0);
  return;
}


