/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$OnDestroy
ENTRY_POINT: 07704704
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentRaycastManager__OnDestroy(long param_1)

{
  bool in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  long lVar3;
  
  if (in_ZR) {
    lVar3 = *(long *)(param_1 + 200);
  }
  else if (in_w8 == 1) {
    lVar3 = *(long *)(param_1 + 0xb8);
  }
  else {
    if (in_w8 != 0) {
      thunk_FUN_044adef4(PTR_DAT_09f1e5c0);
      uVar1 = thunk_FUN_0448520c();
      uVar2 = thunk_FUN_044adef4(PTR_DAT_09f30080);
      FUN_07a757d0(uVar1,uVar2,0);
      uVar2 = thunk_FUN_044adef4(PTR_DAT_09f30088);
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar1,uVar2);
    }
    lVar3 = *(long *)(param_1 + 0xa8);
  }
  if (lVar3 != 0) {
    return *(undefined8 *)(lVar3 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


