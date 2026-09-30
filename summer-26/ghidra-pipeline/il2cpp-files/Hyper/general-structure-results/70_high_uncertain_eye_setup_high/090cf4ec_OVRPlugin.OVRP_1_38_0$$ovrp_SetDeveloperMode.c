/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_SetDeveloperMode
ENTRY_POINT: 090cf4ec
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_SetDeveloperMode(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  int iVar3;
  long in_stack_00000008;
  
  iVar3 = 0;
  do {
    uVar1 = FUN_090cfbe4();
    if ((uVar1 & 1) != 0) {
      if (in_stack_00000008 == 0) {
LAB_090cf550:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      FUN_0a1f9f88(in_stack_00000008,0);
      if ((in_stack_00000008 == 0) || (lVar2 = FUN_0a178414(in_stack_00000008,0), lVar2 == 0))
      goto LAB_090cf550;
      FUN_0a17ba14(lVar2,0,0);
    }
    iVar3 = iVar3 + 1;
    if (iVar3 == 0x1a) {
      *(undefined1 *)(unaff_x19 + 0x80) = 0;
      return;
    }
  } while( true );
}


