/*
FUNCTION_NAME: OVRPlugin.Media$$EncodeMrcFrame
ENTRY_POINT: 033e8898
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Media__EncodeMrcFrame
               (ulong param_1,ushort param_2,long *param_3,long *param_4,int *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_9250);
    *(undefined1 *)(unaff_x23 + 0xaf1) = 1;
  }
  if ((ushort)(param_2 - 0x41) < 0x1a) {
    *param_5 = param_2 - 0x41;
    if (*param_4 != 0) {
      return *param_4;
    }
    lVar1 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_9250,0x1a);
    *param_4 = lVar1;
  }
  else {
    if (0x19 < (ushort)(param_2 - 0x61)) {
      thunk_FUN_01dd295c(StringLiteral_1244);
      uVar2 = thunk_FUN_01de27b8();
      uVar3 = thunk_FUN_01dd295c(StringLiteral_9268);
      FUN_03393770(uVar2,uVar3,0);
      uVar3 = thunk_FUN_01dd295c(StringLiteral_9275);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar2,uVar3);
    }
    *param_5 = param_2 - 0x61;
    if (*param_3 != 0) {
      return *param_3;
    }
    lVar1 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_9250,0x1a);
    *param_3 = lVar1;
    param_4 = param_3;
  }
  thunk_FUN_01e10808(param_4,lVar1);
  return lVar1;
}


