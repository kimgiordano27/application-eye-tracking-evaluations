/*
FUNCTION_NAME: FUN_02436224
ENTRY_POINT: 02436224
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02436224(long param_1)

{
  long lVar1;
  
  if ((DAT_037823e4 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f1dd0);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_44_0_TypeInfo);
    DAT_037823e4 = 1;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar1 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f1dd0);
    if (lVar1 == 0) goto LAB_024362e4;
    FUN_024362e8();
    *(long *)(param_1 + 0x38) = lVar1;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    lVar1 = thunk_FUN_00d62348(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo);
    if (lVar1 == 0) goto LAB_024362e4;
    FUN_0241ac18(lVar1,0);
    *(long *)(param_1 + 0x40) = lVar1;
  }
  FUN_024363a8(param_1);
  if (*(long *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x10) = 0xdc;
    if (*(long *)(param_1 + 0x40) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x10) = 0x1c2;
      return;
    }
  }
LAB_024362e4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


