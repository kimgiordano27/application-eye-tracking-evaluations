/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$System.IDisposable.Dispose
ENTRY_POINT: 04d23d70
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24__System_IDisposable_Dispose
               (void)

{
  ushort uVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  code *unaff_x22;
  long unaff_x23;
  code *pcVar10;
  long in_stack_00000028;
  
  sVar3 = (*unaff_x22)();
  lVar8 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar9 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_02d9a2e0(lVar8);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar9 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x188);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar9);
  }
  sVar4 = (*pcVar10)();
  if (sVar3 == sVar4) {
    lVar8 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_02d9a2e0(lVar8);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar9 = *(long *)(unaff_x19 + 0x20);
    }
    pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x60);
    if ((uVar1 & 1) == 0) {
      FUN_02d9a2e0(lVar9);
    }
    uVar6 = (*pcVar10)();
    lVar8 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_02d9a2e0(lVar8);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar9 = *(long *)(unaff_x19 + 0x20);
    }
    pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x198);
    if ((uVar1 & 1) == 0) {
      FUN_02d9a2e0(lVar9);
    }
    uVar7 = (*pcVar10)();
    lVar8 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_02d9a2e0(lVar8);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar9 = *(long *)(unaff_x19 + 0x20);
    }
    pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x90);
    if ((uVar1 & 1) == 0) {
      FUN_02d9a2e0(lVar9);
    }
    iVar5 = (*pcVar10)();
    iVar5 = FUN_0601547c(uVar6,uVar7,(long)iVar5,0);
    bVar2 = iVar5 == 0;
  }
  else {
    bVar2 = false;
  }
  if (*(long *)(unaff_x23 + 0x28) != in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


