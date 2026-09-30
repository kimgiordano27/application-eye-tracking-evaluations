/*
FUNCTION_NAME: OVRPlugin$$EnqueueSetupLayer
ENTRY_POINT: 0909b180
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnqueueSetupLayer
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long in_x9;
  long *unaff_x19;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined4 uVar4;
  
  FUN_0904d38c(param_4,in_x9 + 0x20,0);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (((lVar1 != 0) && (lVar3 = *(long *)(lVar1 + 0x10), lVar3 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x18), lVar1 != 0)) {
    lVar2 = *unaff_x19;
    if (*(int *)(*(long *)PTR_DAT_0ac767c8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar4 = FUN_0909b754(lVar3 + 0x3c,lVar1 + 0x3c);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x3c) = uVar4;
      *(undefined4 *)(lVar2 + 0x40) = param_2;
      *(undefined4 *)(lVar2 + 0x44) = param_3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


