/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._AcknowledgeQuit_UserPrompt$$Invoke
ENTRY_POINT: 04319638
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


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__AcknowledgeQuit_UserPrompt__Invoke
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long unaff_x19;
  undefined4 uVar8;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  puVar3 = PTR_DAT_08f73970;
  puVar2 = PTR_DAT_08f73968;
  FUN_06429bd8(&stack0x00000008,param_5,**(undefined8 **)(param_1 + 0x980));
  puVar1 = PTR_DAT_08f65568;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  in_stack_00000008 = 0;
  in_stack_00000010 = &stack0x00000020;
  while( true ) {
    uVar4 = FUN_04fbbcd4(&stack0x00000020,*(undefined8 *)puVar3);
    lVar6 = in_stack_00000030;
    if ((uVar4 & 1) == 0) {
      FUN_04fbbcd0(&stack0x00000020,*(undefined8 *)puVar2);
      return;
    }
    if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = FUN_085849e0(in_stack_00000030,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar8 = FUN_08599040(lVar5,0);
    *(undefined4 *)(unaff_x19 + 0x60) = uVar8;
    *(undefined4 *)(unaff_x19 + 100) = param_3;
    *(undefined4 *)(unaff_x19 + 0x68) = param_4;
    lVar6 = FUN_085849e0(lVar6,0);
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(puVar1);
      DAT_09539c10 = '\x01';
    }
    if (lVar6 == 0) break;
    puVar7 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
    param_3 = puVar7[1];
    param_4 = puVar7[2];
    UnityEngine_UI_Dropdown__OnSubmit(*puVar7,lVar6,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


