/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$.cctor
ENTRY_POINT: 056a3994
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_74_0___cctor(int param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  int unaff_w21;
  long lVar3;
  long unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  while ((!(bool)in_CY || (bool)in_ZR && (unaff_w26 = unaff_w26 + 1, param_1 == 0xc))) {
    unaff_w21 = unaff_w21 << 1;
    System_Nullable<DateTime>__get_Value(unaff_x29 + -0x30,unaff_w21,2,1,*unaff_x27);
    lVar3 = *unaff_x28;
    lVar2 = *(long *)(lVar3 + 0x38);
    if (lVar2 == 0) {
      FUN_02dcfd74(lVar3);
      lVar2 = *(long *)(lVar3 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 8);
    if (*(long *)(lVar2 + 0x38) == 0) {
      FUN_02dcfd74(lVar2);
    }
    if (((*(int *)(unaff_x29 + -0x28) < 1) || (*(long *)(unaff_x29 + -0x30) == 0)) ||
       (lVar2 = FUN_036ec9e8(*(long *)(unaff_x29 + -0x30),*(undefined8 *)(unaff_x29 + -0x28),
                             *(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x28)), lVar2 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_036ec8f8(*(undefined8 *)(unaff_x29 + -0x30),*(undefined8 *)(unaff_x29 + -0x28),
                           *(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x18));
    }
    FUN_056a97f8(unaff_x29 + -0x20,uVar1,unaff_w21,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    param_1 = FUN_056a5bd8();
    in_CY = 1 < unaff_w26;
    in_ZR = unaff_w26 == 2;
  }
  uVar1 = OVRPlugin_<>c__<_cctor>b__807_16(unaff_x29 + -0x20,0);
  *unaff_x19 = uVar1;
  LeanTween__value();
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1 == 0);
}


