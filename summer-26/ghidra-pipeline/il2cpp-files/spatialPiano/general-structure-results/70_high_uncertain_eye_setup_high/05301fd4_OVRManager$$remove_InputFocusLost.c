/*
FUNCTION_NAME: OVRManager$$remove_InputFocusLost
ENTRY_POINT: 05301fd4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_InputFocusLost
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  ulong uVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar2;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar3 = *(undefined4 *)(unaff_x21 + 8);
  uVar4 = *(undefined4 *)(unaff_x21 + 0xc);
  uVar7 = *(undefined4 *)(unaff_x21 + 0x18);
  uVar5 = *(undefined4 *)(unaff_x21 + 0x10);
  uVar6 = *(undefined4 *)(unaff_x21 + 0x14);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xd8);
  if (*(int *)(param_5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar1 = FUN_060f078c(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0xd8) != 0) {
      unaff_s8 = FUN_060ffbe4(*(long *)(unaff_x20 + 0xd8),0);
      if (*(long *)(unaff_x20 + 0xd8) != 0) {
        uVar5 = param_2;
        uVar6 = param_3;
        uVar4 = FUN_060fdda4(*(long *)(unaff_x20 + 0xd8),0);
        uVar3 = param_3;
        uVar7 = param_4;
        unaff_s9 = param_2;
        goto LAB_05302040;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_05302040:
  *unaff_x19 = unaff_s8;
  unaff_x19[1] = unaff_s9;
  unaff_x19[2] = uVar3;
  unaff_x19[3] = uVar4;
  unaff_x19[4] = uVar5;
  unaff_x19[5] = uVar6;
  unaff_x19[6] = uVar7;
  return;
}


