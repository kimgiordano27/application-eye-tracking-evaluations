/*
FUNCTION_NAME: OVRPlugin$$GetInsightPassthroughInitializationState
ENTRY_POINT: 027ef7d0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetInsightPassthroughInitializationState(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  
  uVar1 = FUN_027efd04();
  if ((uVar1 & 1) != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x48);
    thunk_FUN_01a4b338();
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0x20);
      thunk_FUN_01a4b338();
      if (lVar4 != 0) {
        uVar2 = FUN_025c91cc(lVar4,0);
        return uVar2;
      }
    }
LAB_027ef89c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (unaff_x19 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cefd90,1);
    if (lVar4 == 0) goto LAB_027ef89c;
    lVar3 = thunk_FUN_01a89d6c();
    if (lVar3 == 0) {
      uVar2 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar2,0);
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *(long *)(lVar4 + 0x20) = unaff_x19;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8af8);
    FUN_026b230c(uVar2,lVar4,0);
  }
  return uVar2;
}


