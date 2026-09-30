/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetControllerState$$.ctor
ENTRY_POINT: 04318884
PROGRAM: m3ar-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetControllerState___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if ((DAT_0953ae0e & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f655a0);
    FUN_0403162c(PTR_DAT_08f738c0);
    FUN_0403162c(PTR_DAT_08f738c8);
    FUN_0403162c(PTR_DAT_08f738d0);
    FUN_0403162c(PTR_DAT_08f738d8);
    FUN_0403162c(PTR_DAT_08f738e0);
    FUN_0403162c(PTR_DAT_08f738e8);
    FUN_0403162c(PTR_DAT_08f738f0);
    DAT_0953ae0e = 1;
  }
  puVar4 = PTR_DAT_08f738f0;
  puVar3 = PTR_DAT_08f738d0;
  puVar2 = PTR_DAT_08f738c8;
  puVar1 = PTR_DAT_08f655a0;
  in_stack_00000030 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  FUN_06ff01a8(&stack0x00000010,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_08f738c0);
  while( true ) {
    uVar5 = FUN_04fcfce0(&stack0x00000010,*(undefined8 *)puVar3);
    if ((uVar5 & 1) == 0) {
      FUN_04fcfdf4(&stack0x00000010,*(undefined8 *)puVar2);
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
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_08538e90(*(undefined8 *)puVar4,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


