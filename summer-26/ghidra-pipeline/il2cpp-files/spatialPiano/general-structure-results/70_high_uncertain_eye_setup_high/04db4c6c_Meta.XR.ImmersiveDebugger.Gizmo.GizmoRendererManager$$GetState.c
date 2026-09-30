/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$GetState
ENTRY_POINT: 04db4c6c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__GetState
               (undefined8 param_1,int param_2,int param_3,long param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar6 = *(long *)(param_4 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar5 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
    uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar5 = *(long *)(param_4 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
  }
  iVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
  lVar5 = *(long *)(param_4 + 0x20);
  iVar4 = iVar2 - param_3;
  if (iVar2 - param_3 <= param_3 + param_2) {
    iVar4 = param_3 + param_2;
  }
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
    uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar6 = *(long *)(param_4 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x40);
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
  }
  iVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40));
  lVar6 = *(long *)(param_4 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar5 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
    uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar5 = *(long *)(param_4 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x60);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
  }
  lVar6 = (*UNRECOVERED_JUMPTABLE)(param_1,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x60));
  lVar7 = *(long *)(param_4 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar5 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_02f41e9c(lVar7);
    uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar5 = *(long *)(param_4 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x60);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
  }
  lVar7 = (*UNRECOVERED_JUMPTABLE)(param_1,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x60));
  lVar8 = *(long *)(param_4 + 0x20);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar5 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_02f41e9c(lVar8);
    uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar5 = *(long *)(param_4 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
  }
  iVar3 = (*UNRECOVERED_JUMPTABLE)(param_1,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
  FUN_0609bf0c(lVar6 + iVar2 * param_2,lVar7 + iVar2 * iVar4,(long)((iVar3 - iVar4) * iVar2),0);
  lVar6 = *(long *)(param_4 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar5 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
    uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar5 = *(long *)(param_4 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
  }
  iVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
  lVar6 = *(long *)(param_4 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar5 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
    uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar5 = *(long *)(param_4 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0xa8);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x04db4f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,iVar4 - param_3,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0xa8));
  return;
}


