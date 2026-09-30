/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetPerfMetricsInt
ENTRY_POINT: 05bf0314
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetPerfMetricsInt(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  int unaff_w20;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x24;
  undefined8 *puVar6;
  long unaff_x25;
  long *plVar7;
  
  puVar6 = *(undefined8 **)(unaff_x24 + 0xd08);
  plVar7 = *(long **)(unaff_x25 + 0xdc8);
  do {
    iVar1 = unaff_w20 + 1;
    iVar2 = iVar1;
    while (iVar2 < *(int *)(param_1 + 0x18)) {
      lVar3 = FUN_042e47a4(param_1,unaff_w20,*puVar6);
      if ((lVar3 == 0) || (*(long *)(unaff_x19 + 0x68) == 0)) goto LAB_05bf03bc;
      uVar4 = *(undefined8 *)(lVar3 + 0x20);
      lVar3 = FUN_042e47a4(*(long *)(unaff_x19 + 0x68),iVar2,*puVar6);
      if (lVar3 == 0) goto LAB_05bf03bc;
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      if (*(int *)(*plVar7 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_06a5c9b0(uVar4,uVar5,0);
      param_1 = *(long *)(unaff_x19 + 0x68);
      iVar2 = iVar2 + 1;
      if (param_1 == 0) {
LAB_05bf03bc:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
    }
    unaff_w20 = iVar1;
    if (*(int *)(param_1 + 0x18) <= iVar1) {
      return;
    }
  } while( true );
}


