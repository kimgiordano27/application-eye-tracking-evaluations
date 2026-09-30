/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_EncodeMrcFrameWithDualTextures
ENTRY_POINT: 033e87d4
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


void OVRPlugin_OVRP_1_38_0__ovrp_Media_EncodeMrcFrameWithDualTextures(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  uVar4 = *(uint *)(unaff_x21 + 0x18);
  if (uVar4 == *(uint *)(param_1 + 0x18)) {
    uVar1 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_9250,uVar4 << 1);
    lVar3 = *unaff_x22;
    if (lVar3 != 0) {
      FUN_033b4f38(lVar3,0,uVar1,0,*(undefined4 *)(lVar3 + 0x18),0);
      *(undefined8 *)(unaff_x21 + 0x10) = uVar1;
      thunk_FUN_01e10808();
      uVar4 = *(uint *)(unaff_x21 + 0x18);
      param_1 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x18) = uVar4 + 1;
      if (param_1 != 0) goto LAB_033e8850;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  *(uint *)(unaff_x21 + 0x18) = uVar4 + 1;
LAB_033e8850:
  if (uVar4 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + (long)(int)uVar4 * 0x10;
    puVar2 = (undefined8 *)(param_1 + 0x28);
    *puVar2 = unaff_x20;
    *(undefined8 *)(param_1 + 0x20) = unaff_x19;
    thunk_FUN_01e10808(puVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


