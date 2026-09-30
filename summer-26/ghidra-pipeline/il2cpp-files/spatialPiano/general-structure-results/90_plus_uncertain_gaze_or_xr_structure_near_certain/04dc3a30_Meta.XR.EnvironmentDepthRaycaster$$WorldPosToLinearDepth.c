/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosToLinearDepth
ENTRY_POINT: 04dc3a30
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__WorldPosToLinearDepth(undefined8 param_1)

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
  int iVar8;
  int unaff_w26;
  code *unaff_x27;
  ulong uVar9;
  code *pcVar10;
  undefined4 uStack000000000000000c;
  
  FUN_02f41e9c(param_1);
  uVar2 = (*unaff_x27)();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar7 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x158);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar7);
  }
  uVar3 = (*pcVar10)();
  if ((int)uVar3 <= (int)uVar2) {
    uVar2 = uVar3;
  }
  uVar9 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar8 = 0;
    do {
      iVar4 = FUN_0609d588(unaff_x23 + unaff_w25 + (long)iVar8,unaff_x24 + unaff_w26 + (long)iVar8);
      if (iVar4 != 0) {
        return;
      }
      uVar9 = uVar9 - 1;
      iVar8 = iVar8 + unaff_w22;
    } while (uVar9 != 0);
  }
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar7 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar7);
  }
  uStack000000000000000c = (*pcVar10)();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar7 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x158);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar7);
  }
  uVar5 = (*pcVar10)();
  FUN_050d2bd4(&stack0x0000000c,uVar5,0);
  return;
}


