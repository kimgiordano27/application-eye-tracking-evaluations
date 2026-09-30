/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 04d30000
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


void Meta_XR_ImmersiveDebugger_Manager_TweakManagerForAddon__get_TelemetryAnnotation(int param_1)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x21;
  int unaff_w22;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_w25;
  
  lVar3 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  lVar6 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02d9a2e0(lVar3);
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x21 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x60);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar6);
  }
  lVar3 = (*UNRECOVERED_JUMPTABLE)();
  lVar4 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar6 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02d9a2e0(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x21 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x60);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar6);
  }
  lVar4 = (*UNRECOVERED_JUMPTABLE)();
  lVar5 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02d9a2e0(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x21 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar6);
  }
  iVar2 = (*UNRECOVERED_JUMPTABLE)();
  FUN_06013f40(lVar3 + param_1 * unaff_w22,lVar4 + param_1 * unaff_w25,
               (long)((iVar2 - unaff_w25) * param_1),0);
  lVar3 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  lVar6 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02d9a2e0(lVar3);
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x21 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar6);
  }
  (*UNRECOVERED_JUMPTABLE)();
  lVar3 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  lVar6 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02d9a2e0(lVar3);
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x21 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0xa8);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x04d30210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


