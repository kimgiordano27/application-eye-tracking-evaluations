/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$BeginInvoke
ENTRY_POINT: 01dacb0c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OpenXREventDelegateType__BeginInvoke(void)

{
  uint uVar1;
  int iVar2;
  uint *unaff_x19;
  int unaff_w21;
  int unaff_w22;
  uint unaff_w23;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  int in_stack_00000008;
  
  do {
    uVar1 = FUN_00ff7794();
    if (uVar1 == unaff_w23) {
      return;
    }
    FUN_01dacd8c();
    do {
      uVar1 = unaff_w28 + unaff_w25 * unaff_w27;
      if (unaff_w29 < (uVar1 >> 3 | uVar1 * 0x20000000)) {
        if ((uVar1 >> 1 | uVar1 * -0x80000000) <= unaff_w28) {
          FUN_0102ae38(0);
          iVar2 = 0;
          goto LAB_01dacb70;
        }
        thunk_FUN_0105efb8();
      }
      else {
        FUN_0102ae38(1);
        iVar2 = (int)((ulong)((long)unaff_w25 * (long)unaff_w22) >> 0x20);
        iVar2 = unaff_w25 - ((iVar2 >> 2) - (iVar2 >> 0x1f)) * unaff_w26;
LAB_01dacb70:
        if ((unaff_w21 != -1) && (iVar2 == 0)) {
          iVar2 = thunk_FUN_01027034(0);
          if ((iVar2 - in_stack_00000008 < 0) || (unaff_w21 - (iVar2 - in_stack_00000008) < 1)) {
            if (*(int *)(*(long *)PTR_DAT_0235a210 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            FUN_01dacf60();
            return;
          }
        }
      }
      unaff_w25 = unaff_w25 + 1;
      unaff_w23 = *unaff_x19;
      thunk_FUN_00ffe618();
    } while ((unaff_w23 & 1) != 0);
    FUN_01dac7a8();
    thunk_FUN_00ffe618();
  } while( true );
}


