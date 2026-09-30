/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserIPD
ENTRY_POINT: 05beca7c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetUserIPD
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined1 unaff_w23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long lVar5;
  undefined4 uVar6;
  
  do {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_031e5338(param_1);
    }
    uVar1 = FUN_069d8404(param_6,0,0);
    lVar2 = *(long *)(unaff_x19 + 0x48);
    if ((uVar1 & 1) == 0) {
      if ((lVar2 == 0) || (param_6 == 0)) {
LAB_05becb68:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar5 = *(long *)(lVar2 + 0x38);
      lVar2 = FUN_069d3a80(param_6,0);
      if ((lVar2 == 0) || (uVar6 = FUN_069e7314(lVar2,0), lVar5 == 0)) goto LAB_05becb68;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x20) goto LAB_05becb6c;
      puVar4 = (undefined4 *)(lVar5 + unaff_x26);
      *puVar4 = uVar6;
    }
    else {
      if (lVar2 == 0) goto LAB_05becb68;
      lVar2 = *(long *)(lVar2 + 0x38);
      if (*(char *)(unaff_x27 + 0xbbe) == '\0') {
        FUN_03188a78();
        *(undefined1 *)(unaff_x27 + 0xbbe) = unaff_w23;
      }
      if (lVar2 == 0) goto LAB_05becb68;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x20) {
LAB_05becb6c:
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      puVar3 = *(undefined4 **)(*unaff_x21 + 0xb8);
      param_3 = puVar3[1];
      param_4 = puVar3[2];
      param_5 = puVar3[3];
      puVar4 = (undefined4 *)(lVar2 + unaff_x20 * 0x10 + 0x20);
      *(undefined4 *)(lVar2 + unaff_x26) = *puVar3;
    }
    unaff_x20 = unaff_x20 + 1;
    unaff_x26 = unaff_x26 + 0x10;
    puVar4[1] = param_3;
    puVar4[2] = param_4;
    puVar4[3] = param_5;
    if (unaff_x20 == 0x18) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05becb68;
    param_6 = FUN_042e47a4(*(long *)(unaff_x19 + 0x58),unaff_x20 & 0xffffffff,*unaff_x24);
    param_1 = *unaff_x25;
  } while( true );
}


