/*
FUNCTION_NAME: OVRPlugin.Media$$.ctor
ENTRY_POINT: 090c4b00
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


void OVRPlugin_Media___ctor(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0ac09788;
  if ((DAT_0b33049e & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac09788);
    DAT_0b33049e = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar2 = FUN_0a17b398(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_1 + 0x50) == 0) ||
       (lVar3 = FUN_0a178414(*(long *)(param_1 + 0x50),0), lVar3 == 0)) goto LAB_090c4bd8;
    FUN_0a17ba14(lVar3,0,0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar2 = FUN_0a17b398(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (lVar3 = FUN_0a178414(*(long *)(param_1 + 0x58),0), lVar3 != 0)) {
    FUN_0a17ba14(lVar3,1,0);
    return;
  }
LAB_090c4bd8:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


