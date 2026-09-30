/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vsli_n_s8
ENTRY_POINT: 01fe8930
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Burst_Intrinsics_Arm_Neon__vsli_n_s8(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int in_w8;
  long unaff_x19;
  
  puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if (in_w8 != 0) {
    iVar1 = *(int *)(unaff_x19 + 0x44);
    if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03780807 == '\0') {
      thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
      DAT_03780807 = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    if (iVar1 != *(int *)(*(long *)(lVar3 + 0xb8) + 0x20)) {
      *(undefined2 *)(unaff_x19 + 0x40) = 0;
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
    }
  }
  return;
}


