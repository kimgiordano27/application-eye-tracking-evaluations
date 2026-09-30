/*
FUNCTION_NAME: FUN_02433c2c
ENTRY_POINT: 02433c2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_02433c2c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = OVR_OpenVR_CVRCompositor_TypeInfo;
  if ((DAT_037823d3 & 1) == 0) {
    thunk_FUN_00d48444(OVR_OpenVR_CVRCompositor_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_108__);
    DAT_037823d3 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_023c39ac(uVar4,0);
  FUN_023c39ac(*(undefined8 *)(param_1 + 0xc0),0);
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_108__;
  if (*(long *)(param_1 + 0x70) != 0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03782447 == '\0') {
      thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_108__);
      DAT_03782447 = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(lVar3 + 0x18) != 0) {
      iVar1 = *(int *)(lVar3 + 0x18) + -1;
      *(int *)(lVar3 + 0x18) = iVar1;
      if (iVar1 == 0) {
        FUN_024329b8();
        return;
      }
    }
  }
  return;
}


