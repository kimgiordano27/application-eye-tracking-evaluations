/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Utils$$LerpPosition
ENTRY_POINT: 04d15040
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Utils__LerpPosition(undefined8 param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong in_x9;
  undefined8 *in_x10;
  int unaff_w20;
  long unaff_x21;
  int unaff_w22;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)*in_x10;
  if ((in_x9 & 1) == 0) {
    FUN_02d9a2e0(param_1);
  }
  iVar3 = (*UNRECOVERED_JUMPTABLE)();
  lVar6 = *(long *)(unaff_x21 + 0x20);
  uVar2 = *(ushort *)(lVar6 + 0x135);
  iVar1 = iVar3 - unaff_w20;
  if (iVar3 - unaff_w20 <= unaff_w20 + unaff_w22) {
    iVar1 = unaff_w20 + unaff_w22;
  }
  lVar5 = lVar6;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_02d9a2e0(lVar6);
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x21 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x40);
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_02d9a2e0(lVar5);
  }
  iVar3 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x40));
  lVar5 = *(long *)(unaff_x21 + 0x20);
  uVar2 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_02d9a2e0(lVar5);
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x21 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x60);
  if ((uVar2 & 1) == 0) {
    FUN_02d9a2e0(lVar6);
  }
  lVar5 = (*UNRECOVERED_JUMPTABLE)();
  lVar7 = *(long *)(unaff_x21 + 0x20);
  uVar2 = *(ushort *)(lVar7 + 0x135);
  lVar6 = lVar7;
  if ((uVar2 & 1) == 0) {
    lVar7 = FUN_02d9a2e0(lVar7);
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x21 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x60);
  if ((uVar2 & 1) == 0) {
    FUN_02d9a2e0(lVar6);
  }
  lVar7 = (*UNRECOVERED_JUMPTABLE)();
  lVar8 = *(long *)(unaff_x21 + 0x20);
  uVar2 = *(ushort *)(lVar8 + 0x135);
  lVar6 = lVar8;
  if ((uVar2 & 1) == 0) {
    lVar8 = FUN_02d9a2e0(lVar8);
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x21 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x38);
  if ((uVar2 & 1) == 0) {
    FUN_02d9a2e0(lVar6);
  }
  iVar4 = (*UNRECOVERED_JUMPTABLE)();
  FUN_06013f40(lVar5 + iVar3 * unaff_w22,lVar7 + iVar3 * iVar1,(long)((iVar4 - iVar1) * iVar3),0);
  lVar5 = *(long *)(unaff_x21 + 0x20);
  uVar2 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_02d9a2e0(lVar5);
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x21 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x38);
  if ((uVar2 & 1) == 0) {
    FUN_02d9a2e0(lVar6);
  }
  (*UNRECOVERED_JUMPTABLE)();
  lVar5 = *(long *)(unaff_x21 + 0x20);
  uVar2 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_02d9a2e0(lVar5);
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x21 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xa8);
  if ((uVar2 & 1) == 0) {
    FUN_02d9a2e0(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x04d152d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


