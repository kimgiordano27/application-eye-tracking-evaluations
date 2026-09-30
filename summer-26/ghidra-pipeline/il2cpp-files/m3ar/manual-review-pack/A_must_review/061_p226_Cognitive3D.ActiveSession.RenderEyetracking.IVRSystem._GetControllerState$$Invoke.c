/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetControllerState$$Invoke
ENTRY_POINT: 04318910
PROGRAM: m3ar-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetControllerState__Invoke
               (undefined1 param_1 [16],long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lStack0000000000000010;
  long lStack0000000000000020;
  long lStack0000000000000028;
  
  puVar4 = PTR_DAT_08f738f0;
  puVar3 = PTR_DAT_08f738d0;
  puVar2 = PTR_DAT_08f738c8;
  puVar1 = PTR_DAT_08f655a0;
  lStack0000000000000028 = param_1._8_8_;
  lStack0000000000000010 = param_1._0_8_;
  lStack0000000000000020 = lStack0000000000000010;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  FUN_06ff01a8(&stack0x00000010,param_2,*(undefined8 *)PTR_DAT_08f738c0);
  while( true ) {
    uVar5 = FUN_04fcfce0(&stack0x00000010,*(undefined8 *)puVar3);
    if ((uVar5 & 1) == 0) {
      FUN_04fcfdf4(&stack0x00000010,*(undefined8 *)puVar2);
      return;
    }
    if (lStack0000000000000020 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(long *)(lStack0000000000000020 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (lStack0000000000000028 == 0) break;
    if (*(int *)(*(long *)(lStack0000000000000020 + 0x30) + 0x18) !=
        *(int *)(lStack0000000000000028 + 0x18)) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_08538e90(*(undefined8 *)puVar4,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


