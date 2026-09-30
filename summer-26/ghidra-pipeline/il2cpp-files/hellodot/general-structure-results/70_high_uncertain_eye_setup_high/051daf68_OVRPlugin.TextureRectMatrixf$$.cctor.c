/*
FUNCTION_NAME: OVRPlugin.TextureRectMatrixf$$.cctor
ENTRY_POINT: 051daf68
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_TextureRectMatrixf___cctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  if ((DAT_06a7159c & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066090f0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066090f8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609100);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609108);
    DAT_06a7159c = 1;
  }
  puVar2 = PTR_DAT_066090f8;
  puVar1 = PTR_DAT_066090f0;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  FUN_03968dbc(&stack0x00000008,*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_06609108);
  while( true ) {
    uVar3 = FUN_0481f4e4(&stack0x00000008,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      FUN_0481f4e0(&stack0x00000008,*(undefined8 *)puVar1);
      return;
    }
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar4 = *(long *)(in_stack_00000018 + 0x20);
    FUN_051da8d0(*(long *)(param_1 + 0x40),*(undefined4 *)(in_stack_00000018 + 0x10));
    if (lVar4 == 0) break;
    FUN_05f539a4(lVar4,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


