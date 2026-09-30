/*
FUNCTION_NAME: OVRPlugin$$EnqueueDestroyLayer
ENTRY_POINT: 0909b348
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__EnqueueDestroyLayer(void)

{
  ulong uVar1;
  float *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar2;
  long *unaff_x24;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  
  uVar1 = FUN_0a17cd28();
  if ((uVar1 & 1) != 0) {
    lVar2 = *unaff_x21;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar1 = FUN_0a17cd28(lVar2,0,0);
    if ((uVar1 & 1) != 0) {
      *unaff_x19 = 0.0;
      return 0;
    }
  }
  lVar2 = *unaff_x21;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar1 = FUN_0a17cd28(lVar2,0,0);
  if ((uVar1 & 1) != 0) {
    *unaff_x21 = *unaff_x20;
    thunk_FUN_049ee3d8();
    if (*unaff_x20 == 0) goto LAB_0909b498;
    FUN_0909bb18();
    lVar2 = FUN_0909b818();
    *unaff_x20 = lVar2;
    thunk_FUN_049ee3d8();
  }
  lVar2 = *unaff_x20;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar1 = FUN_0a17cd28(lVar2,0,0);
  if ((uVar1 & 1) != 0) {
    *unaff_x20 = *unaff_x21;
    thunk_FUN_049ee3d8();
    if (*unaff_x21 == 0) goto LAB_0909b498;
    FUN_0909bb18();
    lVar2 = FUN_0909b998();
    *unaff_x21 = lVar2;
    thunk_FUN_049ee3d8();
  }
  if ((*unaff_x21 != 0) && (fVar3 = (float)FUN_0909bb18(), *unaff_x20 != 0)) {
    fVar4 = (float)FUN_0909bb18();
    fVar5 = 0.0;
    if (fVar3 - fVar4 != 0.0) {
      if (*unaff_x20 == 0) goto LAB_0909b498;
      fVar5 = (float)FUN_0909bb18();
      fVar5 = (unaff_s8 - fVar5) / (fVar3 - fVar4);
    }
    *unaff_x19 = fVar5;
    return 1;
  }
LAB_0909b498:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


