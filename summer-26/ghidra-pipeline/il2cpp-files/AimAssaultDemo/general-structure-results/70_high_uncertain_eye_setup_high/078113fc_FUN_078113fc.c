/*
FUNCTION_NAME: FUN_078113fc
ENTRY_POINT: 078113fc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_078113fc(long param_1,byte param_2)

{
  undefined *puVar1;
  long lVar2;
  
  if ((DAT_0827231a & 1) == 0) {
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__);
    DAT_0827231a = 1;
  }
  if (*(byte *)(param_1 + 0x4e8) == (param_2 & 1)) {
    return;
  }
  *(byte *)(param_1 + 0x4e8) = param_2 & 1;
  puVar1 = Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__;
  lVar2 = *(long *)(param_1 + 0x508);
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__ +
              0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (lVar2 != 0) {
    FUN_077189b0(lVar2,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x230),param_2 & 1,0);
    if ((param_2 & 1) == 0) {
      FUN_078122cc(param_1);
    }
    else {
      FUN_078122a8();
    }
    FUN_0783aeb0(param_1,*(long *)(*(long *)puVar1 + 0xb8) + 0x130,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


