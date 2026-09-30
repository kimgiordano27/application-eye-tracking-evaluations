/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodeVelocity2
ENTRY_POINT: 02c4eb24
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


int OVRPlugin_OVRP_1_8_0__ovrp_GetNodeVelocity2(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int unaff_w19;
  long unaff_x20;
  char *unaff_x21;
  long unaff_x22;
  char *pcVar4;
  char *pcVar5;
  long *plVar6;
  
  plVar6 = (long *)0x0;
  lVar1 = (long)unaff_w19;
  pcVar4 = unaff_x21;
  while( true ) {
    do {
      if (unaff_x21 + lVar1 <= pcVar4) {
        return unaff_w19;
      }
      pcVar5 = pcVar4 + 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar5;
    } while (-1 < cVar2);
    if (plVar6 == (long *)0x0) {
      if (unaff_x20 == 0) {
        plVar6 = *(long **)(unaff_x22 + 0x30);
        if (plVar6 == (long *)0x0) break;
        plVar6 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
      }
      else {
        plVar6 = (long *)FUN_02c4ebb4();
      }
      if (plVar6 == (long *)0x0) break;
      plVar6[2] = (long)unaff_x21;
      plVar6[3] = 0;
    }
    if (param_1 == 0) break;
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    *(char *)(param_1 + 0x20) = cVar2;
    iVar3 = (**(code **)(*plVar6 + 0x1c8))(plVar6,param_1,pcVar5,*(undefined8 *)(*plVar6 + 0x1d0));
    unaff_w19 = unaff_w19 + iVar3 + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


