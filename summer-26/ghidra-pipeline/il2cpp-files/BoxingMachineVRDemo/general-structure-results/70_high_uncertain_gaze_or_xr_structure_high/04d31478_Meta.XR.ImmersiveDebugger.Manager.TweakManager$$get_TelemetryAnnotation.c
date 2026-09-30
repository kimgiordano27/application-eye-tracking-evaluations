/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager$$get_TelemetryAnnotation
ENTRY_POINT: 04d31478
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManager__get_TelemetryAnnotation
               (long param_1,void *param_2)

{
  ushort uVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  code *pcVar10;
  long unaff_x23;
  
  memset(&stack0x00000008,0,0x1000);
  lVar9 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar9 + 0x135);
  lVar6 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02d9a2e0(lVar9);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 8);
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02d9a2e0(lVar6);
  }
  sVar3 = (*pcVar10)(param_2,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8));
  lVar9 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar9 + 0x135);
  lVar6 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02d9a2e0(lVar9);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x178);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar6);
  }
  sVar4 = (*pcVar10)();
  if (sVar3 == sVar4) {
    lVar9 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar9 + 0x135);
    lVar6 = lVar9;
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_02d9a2e0(lVar9);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x19 + 0x20);
    }
    pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x60);
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_02d9a2e0(lVar6);
    }
    uVar7 = (*pcVar10)(param_2,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x60));
    lVar9 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar9 + 0x135);
    lVar6 = lVar9;
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_02d9a2e0(lVar9);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x19 + 0x20);
    }
    pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x188);
    if ((uVar1 & 1) == 0) {
      FUN_02d9a2e0(lVar6);
    }
    uVar8 = (*pcVar10)();
    memcpy(&stack0x00000008,param_2,0x1000);
    lVar9 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar9 + 0x135);
    lVar6 = lVar9;
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_02d9a2e0(lVar9);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x19 + 0x20);
    }
    pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x90);
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_02d9a2e0(lVar6);
    }
    iVar5 = (*pcVar10)(&stack0x00000008,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x90));
    iVar5 = FUN_0601547c(uVar7,uVar8,(long)iVar5,0);
    bVar2 = iVar5 == 0;
  }
  else {
    bVar2 = false;
  }
  if (*(long *)(unaff_x23 + 0x28) != param_1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


