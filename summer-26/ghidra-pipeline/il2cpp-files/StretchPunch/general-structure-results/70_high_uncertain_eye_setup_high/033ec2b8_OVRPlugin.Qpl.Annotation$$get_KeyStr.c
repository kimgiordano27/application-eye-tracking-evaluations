/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation$$get_KeyStr
ENTRY_POINT: 033ec2b8
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


void OVRPlugin_Qpl_Annotation__get_KeyStr(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_044a6b34 & 1) == 0) {
    FUN_01d7d918(StringLiteral_1209);
    DAT_044a6b34 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01dd295c(StringLiteral_1111);
    uVar3 = thunk_FUN_01de27b8();
    uVar4 = thunk_FUN_01dd295c(StringLiteral_8048);
    FUN_032870b8(uVar3,uVar4,0);
  }
  else {
    if (*(int *)(param_2 + 0x18) == 4) {
      uVar1 = *(uint *)(param_2 + 0x2c);
      if (*(int *)(*(long *)StringLiteral_1209 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      if (((uVar1 & 0x7f00ffff) == 0) && ((uVar1 & 0xff0000) < 0x1c0001)) {
        if (*(int *)(param_2 + 0x18) != 0) {
          param_1[2] = *(uint *)(param_2 + 0x20);
          if (1 < *(uint *)(param_2 + 0x18)) {
            param_1[3] = *(uint *)(param_2 + 0x24);
            if (2 < *(uint *)(param_2 + 0x18)) {
              uVar2 = *(uint *)(param_2 + 0x28);
              *param_1 = uVar1;
              param_1[1] = uVar2;
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
    }
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar3 = thunk_FUN_01de27b8();
    uVar4 = thunk_FUN_01dd295c(StringLiteral_6734);
    FUN_0328dba4(uVar3,uVar4,0);
  }
  uVar4 = thunk_FUN_01dd295c(StringLiteral_9326);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar3,uVar4);
}


