/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$Update
ENTRY_POINT: 04c2e2b4
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentDepthRaycaster__Update(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x21;
  long in_stack_00000008;
  
                    /* try { // try from 04c2e2b4 to 04d2e2db has its CatchHandler @ 04c2e40c */
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0x1b8));
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2c80);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e61c0);
  *(undefined1 *)(unaff_x21 + 0x6f9) = 1;
  in_stack_00000008 = 0;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x30);
    uVar4 = *(undefined8 *)PTR_DAT_065e61b8;
                    /* try { // try from 04c2e2f8 to 04d2e357 has its CatchHandler @ 04c2e410 */
    if (lVar3 < 0) {
      uVar2 = *(undefined8 *)PTR_DAT_065e2c80;
    }
    else {
      in_stack_00000008 = lVar3;
      uVar2 = FUN_04f2f768(&stack0x00000008,0);
    }
    uVar4 = FUN_04db0cfc(uVar4,uVar2,0);
    if ((unaff_x19 != 0) && (lVar3 = FUN_054d7998(), puVar1 = PTR_DAT_065e2e00, lVar3 != 0)) {
      FUN_054e9a40(lVar3,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (DAT_06a6d4d0 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2e00);
        DAT_06a6d4d0 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_054df144();
      lVar3 = FUN_04c28dc4();
      if ((lVar3 != 0) && (lVar3 = FUN_054d80d0(lVar3,0), lVar3 != 0)) {
        FUN_054e8f38(lVar3,*(undefined8 *)PTR_DAT_065e61c0,uVar4,0);
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


