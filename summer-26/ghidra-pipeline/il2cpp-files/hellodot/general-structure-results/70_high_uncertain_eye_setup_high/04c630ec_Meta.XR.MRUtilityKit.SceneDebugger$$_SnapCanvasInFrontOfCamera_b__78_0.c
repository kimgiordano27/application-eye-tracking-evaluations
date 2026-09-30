/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<SnapCanvasInFrontOfCamera>b__78_0
ENTRY_POINT: 04c630ec
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger__<SnapCanvasInFrontOfCamera>b__78_0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e71a0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e71a8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7238);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd658);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e71b0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7240);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e71b8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7248);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e71c8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7250);
  *(undefined1 *)(unaff_x21 + 0x9d1) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  if ((*(ulong *)(unaff_x20 + 0x10) & 0xff) != 0) {
    if (*(char *)(unaff_x20 + 0x20) != '\0') {
      thunk_FUN_02c7737c(PTR_DAT_065c96d8);
      uVar3 = thunk_FUN_02cea894();
      uVar4 = thunk_FUN_02c7737c(PTR_DAT_065e71d8);
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_065de380);
      FUN_04e97fd8(uVar3,uVar4,uVar5,0);
      uVar4 = thunk_FUN_02c7737c(PTR_DAT_065e7450);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar3,uVar4);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_04c63374;
    (**(code **)(*unaff_x19 + 0x3a8))();
  }
  if ((*(ulong *)(unaff_x20 + 0x20) & 0xff) != 0) {
    if (unaff_x19 == (long *)0x0) goto LAB_04c63374;
    (**(code **)(*unaff_x19 + 0x3c8))();
  }
  puVar2 = PTR_DAT_065e7430;
  puVar1 = PTR_DAT_065e71c8;
  in_stack_00000018 = *(ulong *)(unaff_x20 + 0x30);
  if ((in_stack_00000018 & 0xff) != 0) {
    uVar3 = FUN_03c86c80(&stack0x00000018,*(undefined8 *)PTR_DAT_065e71b0);
    FUN_03427f10(uVar3,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
    Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value();
    if (unaff_x19 == (long *)0x0) goto LAB_04c63374;
    (**(code **)(*unaff_x19 + 0x428))();
  }
  puVar2 = PTR_DAT_065e7420;
  puVar1 = PTR_DAT_065e7248;
  in_stack_00000010 = *(ulong *)(unaff_x20 + 0x38);
  if ((in_stack_00000010 & 0xff) != 0) {
    uVar3 = FUN_03c86c80(&stack0x00000010,*(undefined8 *)PTR_DAT_065e7240);
    FUN_03427f10(uVar3,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
    Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value();
    if (unaff_x19 == (long *)0x0) goto LAB_04c63374;
    (**(code **)(*unaff_x19 + 1000))();
  }
  puVar2 = PTR_DAT_065e7428;
  puVar1 = PTR_DAT_065e7250;
  in_stack_00000008 = *(ulong *)(unaff_x20 + 0x40);
  if ((in_stack_00000008 & 0xff) != 0) {
    uVar3 = FUN_03c86c80(&stack0x00000008,*(undefined8 *)PTR_DAT_065e71b8);
    FUN_03427f10(uVar3,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
    Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value();
    if (unaff_x19 == (long *)0x0) goto LAB_04c63374;
    (**(code **)(*unaff_x19 + 0x408))();
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    if (unaff_x19 == (long *)0x0) {
LAB_04c63374:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    (**(code **)(*unaff_x19 + 0x448))();
  }
  return;
}


