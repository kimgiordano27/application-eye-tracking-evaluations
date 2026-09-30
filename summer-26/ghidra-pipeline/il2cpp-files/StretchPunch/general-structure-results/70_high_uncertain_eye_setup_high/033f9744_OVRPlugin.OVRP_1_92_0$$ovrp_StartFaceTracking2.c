/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_StartFaceTracking2
ENTRY_POINT: 033f9744
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_StartFaceTracking2(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *unaff_x19;
  int unaff_w21;
  int unaff_w22;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  int in_stack_00000008;
  
code_r0x033f9744:
  iVar3 = (int)((ulong)param_1 >> 0x20);
  iVar3 = unaff_w25 - ((iVar3 >> 2) - (iVar3 >> 0x1f)) * unaff_w26;
  do {
    if ((unaff_w21 != -1) && (iVar3 == 0)) {
      iVar3 = thunk_FUN_01dc9540(0);
      if ((iVar3 - in_stack_00000008 < 0) || (unaff_w21 - (iVar3 - in_stack_00000008) < 1)) {
        if (*(int *)(*(long *)StringLiteral_9463 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        FUN_033f9b58();
        return;
      }
    }
    while( true ) {
      unaff_w25 = unaff_w25 + 1;
      uVar1 = *unaff_x19;
      thunk_FUN_01da0934();
      if ((uVar1 & 1) == 0) {
        FUN_033f9390();
        thunk_FUN_01da0934();
        uVar2 = thunk_FUN_01d99908();
        if (uVar2 == uVar1) {
          return;
        }
        FUN_033f9984();
      }
      uVar1 = unaff_w28 + unaff_w25 * unaff_w27;
      if ((uVar1 >> 3 | uVar1 * 0x20000000) <= unaff_w29) {
        FUN_01dcd344(1);
        param_1 = (long)unaff_w25 * (long)unaff_w22;
        goto code_r0x033f9744;
      }
      if ((uVar1 >> 1 | uVar1 * -0x80000000) <= unaff_w28) break;
      Manager_ClawMovement__UI_MoveClawUp();
    }
    FUN_01dcd344(0);
    iVar3 = 0;
  } while( true );
}


