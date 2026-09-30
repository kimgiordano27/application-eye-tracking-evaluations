/*
FUNCTION_NAME: OVRPlugin$$set_monoscopic
ENTRY_POINT: 051b0730
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


uint OVRPlugin__set_monoscopic(ulong param_1,float param_2,long param_3,long param_4,float *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  long unaff_x22;
  undefined8 uVar4;
  float fVar5;
  uint uStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06605fd0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    *(undefined1 *)(unaff_x22 + 0x2d7) = 1;
  }
  uStack000000000000000c = 0;
  *param_5 = 1.0;
  if ((*(int *)(param_3 + 0x84) == 2) ||
     (uStack000000000000000c = FUN_051aa470(param_3,param_4), uStack000000000000000c == 0)) {
    fVar5 = (float)FUN_051ac5d4(param_3,param_4,&stack0x0000000c,0);
    *param_5 = fVar5;
  }
  else {
    fVar5 = *param_5;
  }
  puVar1 = PTR_DAT_065c8c40;
  if (fVar5 < param_2) {
LAB_051b086c:
    uVar3 = 0;
  }
  else {
    uVar3 = uStack000000000000000c;
    if (uStack000000000000000c == 0) {
      if (*(char *)(param_3 + 0x13c) == '\0') goto LAB_051b086c;
      if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar3 = *(uint *)(param_3 + 0x138) & *(uint *)(param_4 + 0xe4);
    }
    uVar4 = *(undefined8 *)(param_3 + 0x150);
    if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar2 = FUN_05ef59b8(uVar4,0,0);
    if ((((uVar3 >> 1 & 1) != 0) && ((uVar2 & 1) != 0)) &&
       (uVar2 = FUN_051b0988(uVar2,param_4,*(undefined8 *)(param_3 + 0x150)), (uVar2 & 1) == 0)) {
      uVar3 = uVar3 & 0xfffffffd;
      uStack000000000000000c = uVar3;
    }
    uVar4 = *(undefined8 *)(param_3 + 0x160);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar2 = FUN_05ef59b8(uVar4,0,0);
    if (((uVar3 & 1) != 0) && ((uVar2 & 1) != 0)) {
      uVar2 = FUN_051b0988(uVar2,param_4,*(undefined8 *)(param_3 + 0x160));
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar3 & 0xfffffffe;
      }
    }
  }
  return uVar3;
}


