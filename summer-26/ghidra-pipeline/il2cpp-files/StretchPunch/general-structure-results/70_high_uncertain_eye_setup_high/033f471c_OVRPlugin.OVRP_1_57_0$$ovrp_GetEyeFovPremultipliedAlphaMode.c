/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$ovrp_GetEyeFovPremultipliedAlphaMode
ENTRY_POINT: 033f471c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_57_0__ovrp_GetEyeFovPremultipliedAlphaMode(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w19;
  undefined4 uStack000000000000000c;
  
  if (unaff_w19 < 0) {
    thunk_FUN_01dd295c(StringLiteral_1122);
    uVar1 = thunk_FUN_01de27b8();
    uVar2 = thunk_FUN_01dd295c(StringLiteral_9382);
    FUN_0328ed88(uVar1,uVar2,0);
    uVar2 = thunk_FUN_01dd295c(StringLiteral_9383);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar1,uVar2);
  }
  if (unaff_w19 < 0x800) {
    FUN_033f464c();
    return;
  }
  uStack000000000000000c = 0x7ff;
  uVar1 = thunk_FUN_01dd295c(
                            Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap
                            );
  uVar1 = thunk_FUN_01de23e8(uVar1,&stack0x0000000c);
  uVar2 = thunk_FUN_01dd295c(StringLiteral_9384);
  uVar1 = FUN_0326c6f8(uVar2,uVar1,0);
  thunk_FUN_01dd295c(StringLiteral_1122);
  uVar2 = thunk_FUN_01de27b8();
  uVar3 = thunk_FUN_01dd295c(StringLiteral_9382);
  FUN_0328a910(uVar2,uVar3,uVar1,0);
  uVar1 = thunk_FUN_01dd295c(StringLiteral_9383);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar2,uVar1);
}


