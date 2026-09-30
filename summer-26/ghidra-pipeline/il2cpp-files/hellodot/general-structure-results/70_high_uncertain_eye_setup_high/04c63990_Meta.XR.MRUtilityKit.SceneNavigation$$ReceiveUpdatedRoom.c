/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$ReceiveUpdatedRoom
ENTRY_POINT: 04c63990
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneNavigation__ReceiveUpdatedRoom(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined *puVar8;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1460);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e71c8);
  *(undefined1 *)(unaff_x21 + 0x9d3) = 1;
  in_stack_00000010 = 0;
  uVar1 = *(ulong *)(unaff_x20 + 0x20);
  if (((uVar1 & 0xff) != 0) && (*(char *)(unaff_x20 + 0x30) != '\0')) {
    thunk_FUN_02c7737c(PTR_DAT_065c96d8,uVar1,*(undefined8 *)(unaff_x20 + 0x28));
    uVar6 = thunk_FUN_02cea894();
    puVar8 = PTR_DAT_065e71d0;
LAB_04c63bc4:
    uVar7 = thunk_FUN_02c7737c(puVar8);
    uVar9 = thunk_FUN_02c7737c(PTR_DAT_065de380);
    FUN_04e97fd8(uVar6,uVar7,uVar9,0);
    uVar7 = thunk_FUN_02c7737c(PTR_DAT_065e7490);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar6,uVar7);
  }
  if ((*(char *)(unaff_x20 + 0x40) != '\0') && (*(char *)(unaff_x20 + 0x50) != '\0')) {
    thunk_FUN_02c7737c(PTR_DAT_065c96d8,uVar1,*(undefined8 *)(unaff_x20 + 0x28));
    uVar6 = thunk_FUN_02cea894();
    puVar8 = PTR_DAT_065e71d8;
    goto LAB_04c63bc4;
  }
  if ((uVar1 & 0xff) != 0) {
    if (unaff_x19 == (long *)0x0) goto LAB_04c63b84;
    (**(code **)(*unaff_x19 + 1000))();
  }
  if ((*(ulong *)(unaff_x20 + 0x30) & 0xff) != 0) {
    if (unaff_x19 == (long *)0x0) goto LAB_04c63b84;
    (**(code **)(*unaff_x19 + 0x408))();
  }
  if ((*(ulong *)(unaff_x20 + 0x40) & 0xff) != 0) {
    if (unaff_x19 == (long *)0x0) goto LAB_04c63b84;
    (**(code **)(*unaff_x19 + 0x428))();
  }
  if ((*(ulong *)(unaff_x20 + 0x50) & 0xff) != 0) {
    if (unaff_x19 == (long *)0x0) goto LAB_04c63b84;
    (**(code **)(*unaff_x19 + 0x448))();
  }
  puVar8 = PTR_DAT_065cc870;
  in_stack_00000018._4_2_ = *(ushort *)(unaff_x20 + 0x10);
  if ((in_stack_00000018._4_2_ & 0xff) != 0) {
    uVar4 = FUN_03c80894((long)&stack0x00000018 + 4,*(undefined8 *)PTR_DAT_065e1460);
    in_stack_00000008 = in_stack_00000008 & 0xffffffffffff0000;
    FUN_03c80878(&stack0x00000008,uVar4 & 1,*(undefined8 *)puVar8);
    if (unaff_x19 == (long *)0x0) goto LAB_04c63b84;
    (**(code **)(*unaff_x19 + 0x3c8))();
  }
  puVar3 = PTR_DAT_065e7488;
  puVar2 = PTR_DAT_065e7480;
  puVar8 = PTR_DAT_065e71c8;
  in_stack_00000010 = *(ulong *)(unaff_x20 + 0x14);
  if ((in_stack_00000010 & 0xff) != 0) {
    uVar6 = FUN_03c86c80(&stack0x00000010,*(undefined8 *)PTR_DAT_065e71b0);
    uVar5 = FUN_03427f10(uVar6,*(undefined8 *)puVar8,*(undefined8 *)puVar2);
    in_stack_00000008 = 0;
    Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
              (&stack0x00000008,uVar5,*(undefined8 *)puVar3);
    if (unaff_x19 == (long *)0x0) goto LAB_04c63b84;
    (**(code **)(*unaff_x19 + 0x468))();
  }
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    if (unaff_x19 == (long *)0x0) {
LAB_04c63b84:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    (**(code **)(*unaff_x19 + 0x488))();
  }
  return;
}


