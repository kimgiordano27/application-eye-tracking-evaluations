/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04d2400c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24__System_Collections_IEnumerator_get_Current
               (long param_1,long param_2)

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
  ushort *in_x9;
  long unaff_x20;
  code *pcVar13;
  ulong uVar14;
  int iVar15;
  undefined4 uStack000000000000000c;
  
  uVar1 = *in_x9;
  iVar2 = *(int *)(*(long *)(*(long *)(param_2 + 0xc0) + 0x70) + 0xfc);
  uStack000000000000000c = 0;
  lVar10 = param_1;
  if ((uVar1 & 1) == 0) {
    param_1 = FUN_02d9a2e0(param_1);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar10 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar10);
  }
  lVar9 = (*pcVar13)();
  lVar11 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar11 + 0x135);
  lVar10 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_02d9a2e0(lVar11);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar10 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x1b0);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar10);
  }
  lVar11 = (*pcVar13)();
  lVar12 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar12 + 0x135);
  lVar10 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_02d9a2e0(lVar12);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar10 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x50);
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_02d9a2e0(lVar10);
  }
  iVar3 = (*pcVar13)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x50));
  lVar12 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar12 + 0x135);
  lVar10 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_02d9a2e0(lVar12);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar10 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x50);
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_02d9a2e0(lVar10);
  }
  iVar4 = (*pcVar13)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x50));
  lVar12 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar12 + 0x135);
  lVar10 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_02d9a2e0(lVar12);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar10 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar10);
  }
  uVar5 = (*pcVar13)();
  lVar12 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar12 + 0x135);
  lVar10 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_02d9a2e0(lVar12);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar10 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x1b8);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar10);
  }
  uVar6 = (*pcVar13)();
  if ((int)uVar6 <= (int)uVar5) {
    uVar5 = uVar6;
  }
  if (0 < (int)uVar5) {
    iVar15 = 0;
    uVar14 = (ulong)uVar5;
    do {
      iVar7 = FUN_0601547c(lVar9 + iVar3 + (long)iVar15,lVar11 + iVar4 + (long)iVar15,(long)iVar2,0)
      ;
      if (iVar7 != 0) {
        return;
      }
      uVar14 = uVar14 - 1;
      iVar15 = iVar15 + iVar2;
    } while (uVar14 != 0);
  }
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar9 + 0x135);
  lVar10 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02d9a2e0(lVar9);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar10 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar10);
  }
  uStack000000000000000c = (*pcVar13)();
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar9 + 0x135);
  lVar10 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_02d9a2e0(lVar9);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar10 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x1b8);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar10);
  }
  uVar8 = (*pcVar13)();
  FUN_05004840(&stack0x0000000c,uVar8,0);
  return;
}


