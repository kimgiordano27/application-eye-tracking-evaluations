/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserEyeDepth
ENTRY_POINT: 05becaf4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeDepth
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined1 unaff_w23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long lVar5;
  undefined4 uVar6;
  
  while ((param_1 != 0 && (unaff_x22 != 0))) {
    lVar5 = *(long *)(param_1 + 0x38);
    lVar2 = FUN_069d3a80(unaff_x22,0);
    if ((lVar2 == 0) || (uVar6 = FUN_069e7314(lVar2,0), lVar5 == 0)) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x20) {
LAB_05becb6c:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    puVar4 = (undefined4 *)(lVar5 + unaff_x26);
    *puVar4 = uVar6;
    while( true ) {
      unaff_x20 = unaff_x20 + 1;
      unaff_x26 = unaff_x26 + 0x10;
      puVar4[1] = param_3;
      puVar4[2] = param_4;
      puVar4[3] = param_5;
      if (unaff_x20 == 0x18) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05becb68;
      unaff_x22 = FUN_042e47a4(*(long *)(unaff_x19 + 0x58),unaff_x20 & 0xffffffff,*unaff_x24);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_031e5338(*unaff_x25);
      }
      uVar1 = FUN_069d8404(unaff_x22,0,0);
      param_1 = *(long *)(unaff_x19 + 0x48);
      if ((uVar1 & 1) == 0) break;
      if (param_1 == 0) goto LAB_05becb68;
      lVar2 = *(long *)(param_1 + 0x38);
      if (*(char *)(unaff_x27 + 0xbbe) == '\0') {
        FUN_03188a78();
        *(undefined1 *)(unaff_x27 + 0xbbe) = unaff_w23;
      }
      if (lVar2 == 0) goto LAB_05becb68;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x20) goto LAB_05becb6c;
      puVar3 = *(undefined4 **)(*unaff_x21 + 0xb8);
      param_3 = puVar3[1];
      param_4 = puVar3[2];
      param_5 = puVar3[3];
      puVar4 = (undefined4 *)(lVar2 + unaff_x20 * 0x10 + 0x20);
      *(undefined4 *)(lVar2 + unaff_x26) = *puVar3;
    }
  }
LAB_05becb68:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


