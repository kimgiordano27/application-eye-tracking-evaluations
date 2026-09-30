/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 04d302e0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionManagerForAddon__get_TelemetryAnnotation(void)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int unaff_w20;
  long unaff_x21;
  int unaff_w22;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar5 = FUN_02d9a2e0();
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x38);
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0(*(long *)(unaff_x21 + 0x20));
  }
  iVar3 = (*UNRECOVERED_JUMPTABLE)();
  lVar5 = *(long *)(unaff_x21 + 0x20);
  iVar1 = unaff_w20 + unaff_w22;
  if (iVar3 <= unaff_w20 + unaff_w22) {
    iVar1 = iVar3;
  }
  uVar2 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_02d9a2e0(lVar5);
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x21 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x40);
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_02d9a2e0(lVar6);
  }
  iVar3 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40));
  lVar6 = *(long *)(unaff_x21 + 0x20);
  uVar2 = *(ushort *)(lVar6 + 0x135);
  lVar5 = lVar6;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_02d9a2e0(lVar6);
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x21 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x60);
  if ((uVar2 & 1) == 0) {
    FUN_02d9a2e0(lVar5);
  }
  lVar6 = (*UNRECOVERED_JUMPTABLE)();
  lVar7 = *(long *)(unaff_x21 + 0x20);
  uVar2 = *(ushort *)(lVar7 + 0x135);
  lVar5 = lVar7;
  if ((uVar2 & 1) == 0) {
    lVar7 = FUN_02d9a2e0(lVar7);
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x21 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x60);
  if ((uVar2 & 1) == 0) {
    FUN_02d9a2e0(lVar5);
  }
  lVar7 = (*UNRECOVERED_JUMPTABLE)();
  lVar8 = *(long *)(unaff_x21 + 0x20);
  uVar2 = *(ushort *)(lVar8 + 0x135);
  lVar5 = lVar8;
  if ((uVar2 & 1) == 0) {
    lVar8 = FUN_02d9a2e0(lVar8);
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x21 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x38);
  if ((uVar2 & 1) == 0) {
    FUN_02d9a2e0(lVar5);
  }
  iVar4 = (*UNRECOVERED_JUMPTABLE)();
  FUN_06013f40(lVar6 + iVar3 * unaff_w22,lVar7 + iVar3 * iVar1,(long)((iVar4 - iVar1) * iVar3),0);
  lVar6 = *(long *)(unaff_x21 + 0x20);
  uVar2 = *(ushort *)(lVar6 + 0x135);
  lVar5 = lVar6;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_02d9a2e0(lVar6);
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x21 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x38);
  if ((uVar2 & 1) == 0) {
    FUN_02d9a2e0(lVar5);
  }
  (*UNRECOVERED_JUMPTABLE)();
  lVar6 = *(long *)(unaff_x21 + 0x20);
  uVar2 = *(ushort *)(lVar6 + 0x135);
  lVar5 = lVar6;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_02d9a2e0(lVar6);
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x21 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0xa8);
  if ((uVar2 & 1) == 0) {
    FUN_02d9a2e0(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x04d30598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


