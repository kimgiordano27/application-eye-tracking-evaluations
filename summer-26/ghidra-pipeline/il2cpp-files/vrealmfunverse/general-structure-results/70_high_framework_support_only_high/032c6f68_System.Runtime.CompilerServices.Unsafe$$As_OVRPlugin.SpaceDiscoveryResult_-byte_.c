/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$As<OVRPlugin.SpaceDiscoveryResult,-byte>
ENTRY_POINT: 032c6f68
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__As<OVRPlugin_SpaceDiscoveryResult,_byte>
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 in_w10;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar3;
  long *unaff_x23;
  long unaff_x24;
  
  *(undefined4 *)(unaff_x21 + 0x1c) = in_w10;
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_2;
      thunk_FUN_02bb0e9c();
    }
    else {
      FUN_037a6538();
    }
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *unaff_x23;
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
    uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(unaff_x24 + 0xe0));
    }
    uVar3 = FUN_04d8a7b0(uVar3,0);
    if (lVar2 != 0) {
      FUN_042f6600(lVar2,uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


