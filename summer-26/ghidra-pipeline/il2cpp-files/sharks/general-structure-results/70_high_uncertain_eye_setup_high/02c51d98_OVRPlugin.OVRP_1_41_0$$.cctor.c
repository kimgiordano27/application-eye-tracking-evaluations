/*
FUNCTION_NAME: OVRPlugin.OVRP_1_41_0$$.cctor
ENTRY_POINT: 02c51d98
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_41_0___cctor(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint unaff_w19;
  long *unaff_x21;
  undefined2 *unaff_x22;
  
  lVar2 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f6f08,unaff_w19);
  if (unaff_w19 != 0) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar1 = *(uint *)(lVar2 + 0x18);
    uVar3 = 0;
    do {
      if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      *(undefined2 *)(lVar2 + 0x20 + uVar3 * 2) = *unaff_x22;
      uVar3 = uVar3 + 1;
      unaff_x22 = unaff_x22 + 1;
    } while (unaff_w19 != uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x02c51e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x21 + 0x188))();
  return;
}


