/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$.cctor
ENTRY_POINT: 05bf0398
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0___cctor(long param_1)

{
  int iVar1;
  long lVar2;
  int in_w8;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  int iVar5;
  
  do {
    iVar5 = unaff_w26;
    if (in_w8 <= iVar5) {
      return;
    }
    iVar1 = iVar5 + 1;
    while (in_w8 = *(int *)(param_1 + 0x18), unaff_w26 = iVar5 + 1, iVar1 < in_w8) {
      lVar2 = FUN_042e47a4(param_1,iVar5,*unaff_x24);
      if ((lVar2 == 0) || (*(long *)(unaff_x19 + 0x68) == 0)) goto LAB_05bf03bc;
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      lVar2 = FUN_042e47a4(*(long *)(unaff_x19 + 0x68),iVar1,*unaff_x24);
      if (lVar2 == 0) goto LAB_05bf03bc;
      uVar4 = *(undefined8 *)(lVar2 + 0x20);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_06a5c9b0(uVar3,uVar4,0);
      param_1 = *(long *)(unaff_x19 + 0x68);
      iVar1 = iVar1 + 1;
      if (param_1 == 0) {
LAB_05bf03bc:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
    }
  } while( true );
}


