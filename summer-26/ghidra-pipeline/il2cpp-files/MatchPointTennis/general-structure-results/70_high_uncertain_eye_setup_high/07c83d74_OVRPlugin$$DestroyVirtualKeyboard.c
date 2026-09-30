/*
FUNCTION_NAME: OVRPlugin$$DestroyVirtualKeyboard
ENTRY_POINT: 07c83d74
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroyVirtualKeyboard(void)

{
  undefined *puVar1;
  long lVar2;
  undefined1 in_w8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float fVar7;
  float fVar8;
  
  *(undefined1 *)(unaff_x20 + 0x7d9) = in_w8;
  fVar5 = unaff_s8;
  if (*(char *)(unaff_x19 + 0xa4) == '\0') {
    fVar7 = *(float *)(unaff_x19 + 0xac);
    fVar8 = *(float *)(unaff_x19 + 0xa0);
    fVar4 = (float)FUN_09536010(0);
    fVar6 = fVar8 * fVar4;
    fVar5 = fVar6;
    if (unaff_s8 - fVar7 < 0.0) {
      fVar5 = -(fVar8 * fVar4);
    }
    fVar5 = fVar7 + fVar5;
    if (ABS(unaff_s8 - fVar7) <= fVar6) {
      fVar5 = unaff_s8;
    }
  }
  *(float *)(unaff_x19 + 0xac) = fVar5;
  puVar1 = PTR_DAT_09f50990;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    lVar2 = thunk_FUN_094d983c(*(long *)(unaff_x19 + 0x40),0);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar3);
    }
    if (lVar2 != 0) {
      thunk_FUN_094e64b8(*(undefined4 *)(unaff_x19 + 0xac),lVar2,
                         **(undefined4 **)(*(long *)puVar1 + 0xb8),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


