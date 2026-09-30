/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetControllerState$$BeginInvoke
ENTRY_POINT: 04318924
PROGRAM: m3ar-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetControllerState__BeginInvoke
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 *puVar4;
  long unaff_x21;
  long *plVar5;
  long in_stack_00000020;
  long in_stack_00000028;
  
  puVar2 = PTR_DAT_08f738f0;
  puVar1 = PTR_DAT_08f738c8;
  puVar4 = *(undefined8 **)(unaff_x20 + 0x8d0);
  plVar5 = *(long **)(unaff_x21 + 0x5a0);
  FUN_06ff01a8(&stack0x00000010,param_2,**(undefined8 **)(param_1 + 0x8c0));
  while( true ) {
    uVar3 = FUN_04fcfce0(&stack0x00000010,*puVar4);
    if ((uVar3 & 1) == 0) {
      FUN_04fcfdf4(&stack0x00000010,*(undefined8 *)puVar1);
      return;
    }
    if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(long *)(in_stack_00000020 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (in_stack_00000028 == 0) break;
    if (*(int *)(*(long *)(in_stack_00000020 + 0x30) + 0x18) != *(int *)(in_stack_00000028 + 0x18))
    {
      if (*(int *)(*plVar5 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_08538e90(*(undefined8 *)puVar2,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


