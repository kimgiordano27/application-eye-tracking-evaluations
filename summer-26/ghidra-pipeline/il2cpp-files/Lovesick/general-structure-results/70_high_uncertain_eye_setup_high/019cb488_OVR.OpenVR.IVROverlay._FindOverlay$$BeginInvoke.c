/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._FindOverlay$$BeginInvoke
ENTRY_POINT: 019cb488
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVR_OpenVR_IVROverlay__FindOverlay__BeginInvoke(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(unaff_x23 + 0xfb0);
  FUN_01253360();
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = param_1;
  uVar4 = **(undefined8 **)(*unaff_x21 + 0xb8);
  lVar2 = thunk_FUN_00d62348(*puVar5);
  puVar1 = PTR_DAT_033eab60;
  if (lVar2 != 0) {
    FUN_01253574(lVar2,uVar4,*(undefined8 *)StringLiteral_10402,0);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      FUN_01253360(lVar3,lVar2,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_42__);
      *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18) = lVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


