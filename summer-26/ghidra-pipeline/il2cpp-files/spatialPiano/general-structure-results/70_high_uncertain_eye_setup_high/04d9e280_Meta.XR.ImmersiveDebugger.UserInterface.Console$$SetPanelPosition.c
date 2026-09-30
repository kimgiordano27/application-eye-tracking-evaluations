/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$SetPanelPosition
ENTRY_POINT: 04d9e280
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Console__SetPanelPosition(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar6;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  
  FUN_02f08768(PTR_DAT_067ccce8);
  FUN_02f08768(PTR_DAT_067cccf0);
  FUN_02f08768(PTR_DAT_067cc8c8);
  FUN_02f08768(PTR_DAT_067cc8d8);
  FUN_02f08768(PTR_DAT_067cc778);
  *(undefined1 *)(unaff_x22 + 0xd61) = 1;
  puVar4 = PTR_DAT_067ccce8;
  puVar3 = PTR_DAT_067cc8d8;
  puVar2 = PTR_DAT_067cc8c8;
  puVar1 = PTR_DAT_067cc778;
  lVar6 = *(long *)(unaff_x20 + 0x18);
  if (lVar6 != 0) {
    uVar5 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cc8c8);
    FUN_04d8cf5c();
    FUN_0334c9b0(lVar6,uVar5,1,*(undefined8 *)puVar4);
    lVar6 = *(long *)(unaff_x20 + 0x18);
    uVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
    FUN_04d8cf5c();
    if (lVar6 == 0) goto LAB_04d9e4bc;
    FUN_0334c9b0(lVar6,uVar5,0,*(undefined8 *)PTR_DAT_067cccf0);
    lVar6 = *(long *)(unaff_x20 + 0x18);
    uVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    FUN_04d8cf5c();
    if (lVar6 == 0) goto LAB_04d9e4bc;
    FUN_0334c9b0(lVar6,uVar5,0,*(undefined8 *)PTR_DAT_067ce500);
  }
  *(long *)(unaff_x20 + 0x18) = unaff_x21;
  *(undefined4 *)(unaff_x20 + 0x20) = unaff_s11;
  *(undefined4 *)(unaff_x20 + 0x24) = unaff_s10;
  *(undefined4 *)(unaff_x20 + 0x28) = unaff_s9;
  *(undefined4 *)(unaff_x20 + 0x2c) = unaff_s8;
  if (unaff_x21 == 0) {
    return;
  }
  uVar5 = *(undefined8 *)puVar2;
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  thunk_FUN_02f45270(uVar5);
  FUN_04d8cf5c();
  FUN_0334c444();
  lVar6 = *(long *)(unaff_x20 + 0x18);
  uVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_04d8cf5c();
  if (lVar6 != 0) {
    FUN_0334c444(lVar6,uVar5,0,*(undefined8 *)PTR_DAT_067cc8b8);
    lVar6 = *(long *)(unaff_x20 + 0x18);
    uVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    FUN_04d8cf5c();
    if (lVar6 != 0) {
      FUN_0334c444(lVar6,uVar5,0,*(undefined8 *)PTR_DAT_067cc768);
      return;
    }
  }
LAB_04d9e4bc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


