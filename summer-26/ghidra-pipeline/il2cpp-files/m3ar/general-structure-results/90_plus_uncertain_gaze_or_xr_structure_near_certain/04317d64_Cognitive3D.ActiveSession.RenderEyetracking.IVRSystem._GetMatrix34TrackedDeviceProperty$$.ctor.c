/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetMatrix34TrackedDeviceProperty$$.ctor
ENTRY_POINT: 04317d64
PROGRAM: m3ar-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


bool Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetMatrix34TrackedDeviceProperty___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long in_x9;
  long in_x10;
  int *piVar4;
  long unaff_x19;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
  piVar4 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar4 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 1) * 0x10 + 0x138);
      goto LAB_04317da0;
    }
    in_x9 = in_x9 + -1;
    piVar4 = piVar4 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_0406ae20();
LAB_04317da0:
  in_stack_00000008 = (*(code *)*puVar1)();
  lVar2 = FUN_074c32b4(&stack0x00000008,0);
  if (*(long *)(unaff_x19 + 0x18) < lVar2) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar2 = FUN_074c32b4(&stack0x00000018,0);
    lVar3 = FUN_074c32b4(&stack0x00000008,0);
    if (lVar3 < lVar2) {
      return *(long *)(unaff_x19 + 0x18) != 0;
    }
  }
  return false;
}


