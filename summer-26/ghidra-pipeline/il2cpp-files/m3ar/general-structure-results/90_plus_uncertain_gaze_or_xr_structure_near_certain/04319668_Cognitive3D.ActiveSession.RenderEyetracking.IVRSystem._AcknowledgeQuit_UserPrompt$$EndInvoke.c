/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._AcknowledgeQuit_UserPrompt$$EndInvoke
ENTRY_POINT: 04319668
PROGRAM: m3ar-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__AcknowledgeQuit_UserPrompt__EndInvoke
               (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined4 uVar6;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000020;
  long lStack0000000000000030;
  
  plVar5 = *(long **)(unaff_x20 + 0x568);
  uStack0000000000000008 = 0;
  uStack0000000000000020 = param_2;
  lStack0000000000000030 = param_1;
  while( true ) {
    uVar1 = FUN_04fbbcd4(&stack0x00000020,*unaff_x23);
    lVar3 = lStack0000000000000030;
    if ((uVar1 & 1) == 0) {
      FUN_04fbbcd0(&stack0x00000020,*unaff_x22);
      return;
    }
    if (lStack0000000000000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar2 = FUN_085849e0(lStack0000000000000030,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar6 = FUN_08599040(lVar2,0);
    *(undefined4 *)(unaff_x19 + 0x60) = uVar6;
    *(undefined4 *)(unaff_x19 + 100) = param_3;
    *(undefined4 *)(unaff_x19 + 0x68) = param_4;
    lVar3 = FUN_085849e0(lVar3,0);
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(plVar5);
      DAT_09539c10 = '\x01';
    }
    if (lVar3 == 0) break;
    puVar4 = *(undefined4 **)(*plVar5 + 0xb8);
    param_3 = puVar4[1];
    param_4 = puVar4[2];
    UnityEngine_UI_Dropdown__OnSubmit(*puVar4,lVar3,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


