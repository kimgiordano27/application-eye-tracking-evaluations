/*
FUNCTION_NAME: OVRPlugin$$GetLayerRecommendedResolution
ENTRY_POINT: 03690dfc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__GetLayerRecommendedResolution(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x23;
  
  lVar2 = *unaff_x23;
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar2 = *unaff_x23;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_50__);
    FUN_02a7036c(uVar3,uVar5,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_52__,0);
    puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
    *puVar4 = uVar3;
    thunk_FUN_01f51358(puVar4,uVar3);
  }
  puVar1 = Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_32__;
  if (unaff_x20 != 0) {
    uVar3 = FUN_02134528();
    *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
    thunk_FUN_01f51358();
    uVar3 = thunk_FUN_01f116d0(*(undefined8 *)(unaff_x19 + 0x30),*(undefined8 *)puVar1);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x38),uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


