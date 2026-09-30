/*
FUNCTION_NAME: OVRPlugin.OVRP_1_85_0$$.cctor
ENTRY_POINT: 01dbd0f0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_85_0___cctor(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  
  FUN_00fdc2e4(PTR_DAT_02354e08);
  *(undefined1 *)(unaff_x20 + 0xa6a) = 1;
  plVar2 = (long *)(unaff_x19 + 0x50);
  lVar4 = *plVar2;
  *plVar2 = 0;
  thunk_FUN_0106e12c(plVar2,0);
  puVar1 = PTR_DAT_0235a8c8;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  FUN_01db7d5c(lVar4);
  lVar3 = thunk_FUN_0103ffe0(*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)puVar1);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01dbd158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),lVar4,*(undefined8 *)(lVar3 + 0x28));
    return;
  }
  lVar3 = thunk_FUN_0103ffe0(*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_02354e08);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01dbd194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(lVar3 + 0x40),lVar4,*(undefined8 *)(unaff_x19 + 0x20),
               *(undefined8 *)(lVar3 + 0x28));
    return;
  }
  return;
}


