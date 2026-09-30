/*
FUNCTION_NAME: OVRPlugin.OVRP_1_19_0$$.cctor
ENTRY_POINT: 05bef600
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_19_0___cctor(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long in_stack_00000008;
  
  iVar3 = 0;
  do {
    uVar1 = FUN_05befca0(param_1,iVar3,&stack0x00000008);
    lVar2 = in_stack_00000008;
    if ((uVar1 & 1) != 0) {
      if (in_stack_00000008 == 0) {
LAB_05bef66c:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      FUN_06a64884(in_stack_00000008,0);
      lVar2 = FUN_069d3b50(lVar2,0);
      if (lVar2 == 0) goto LAB_05bef66c;
      FUN_069d7048(lVar2,0,0);
    }
    iVar3 = iVar3 + 1;
    if (iVar3 == 0x13) {
      *(undefined1 *)(param_1 + 0x80) = 0;
      return;
    }
  } while( true );
}


