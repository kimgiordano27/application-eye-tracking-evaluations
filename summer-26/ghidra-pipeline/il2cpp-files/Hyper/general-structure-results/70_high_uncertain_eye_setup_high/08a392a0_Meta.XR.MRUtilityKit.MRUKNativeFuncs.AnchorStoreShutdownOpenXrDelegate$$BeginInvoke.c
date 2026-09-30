/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreShutdownOpenXrDelegate$$BeginInvoke
ENTRY_POINT: 08a392a0
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreShutdownOpenXrDelegate__BeginInvoke
               (undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 *unaff_x19;
  long *unaff_x21;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
  uVar3 = FUN_07684508(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac0e258);
  puVar2 = PTR_DAT_0ac10a50;
  iVar1 = *(int *)(*unaff_x21 + 0xe4);
  *unaff_x19 = 0xfffffffe;
  if (iVar1 == 0) {
    thunk_FUN_049a583c();
  }
  FUN_07b6c5d8(unaff_x19 + 2,uVar3,*(undefined8 *)puVar2);
  return;
}


