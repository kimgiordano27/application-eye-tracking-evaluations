/*
FUNCTION_NAME: OVRVirtualKeyboard$$LoadRuntimeVirtualKeyboardMesh
ENTRY_POINT: 01a84f2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRVirtualKeyboard__LoadRuntimeVirtualKeyboardMesh(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  
  lVar2 = FUN_010e5800(param_1,*(undefined8 *)
                                Method_OVRTask_FromResult<OVRResult<OVRPlugin_Result>>__);
  *(long *)(unaff_x19 + 0x80) = lVar2;
  puVar1 = Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x20) = unaff_x19;
    lVar3 = *(long *)puVar1;
    lVar2 = *(long *)(lVar3 + 0x38);
    if (lVar2 == 0) {
      FUN_00d59478(lVar3);
      lVar2 = *(long *)(lVar3 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar1 = Method_UnityEngine_NoAllocHelpers_SafeLength<int>__;
    lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c();
    }
    FUN_02660fcc(*(undefined8 *)puVar1,**(undefined8 **)(lVar2 + 0xb8),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


