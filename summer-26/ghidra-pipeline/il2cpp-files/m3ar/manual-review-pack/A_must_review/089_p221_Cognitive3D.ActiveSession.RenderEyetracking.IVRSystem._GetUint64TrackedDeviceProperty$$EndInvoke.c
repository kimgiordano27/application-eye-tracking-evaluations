/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetUint64TrackedDeviceProperty$$EndInvoke
ENTRY_POINT: 04317d3c
PROGRAM: m3ar-libil2cpp.so
SCORE: 118
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


bool Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetUint64TrackedDeviceProperty__EndInvoke
               (long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  uVar1 = in_stack_00000010;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar4 = *param_1;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f73260) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_04317da0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20(param_1,*(long *)PTR_DAT_08f73260,1);
LAB_04317da0:
  in_stack_00000008 = (*(code *)*puVar2)(param_1,uVar1,puVar2[1]);
  lVar4 = FUN_074c32b4(&stack0x00000008,0);
  if (*(long *)(unaff_x19 + 0x18) < lVar4) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar4 = FUN_074c32b4(&stack0x00000018,0);
    lVar3 = FUN_074c32b4(&stack0x00000008,0);
    if (lVar3 < lVar4) {
      return *(long *)(unaff_x19 + 0x18) != 0;
    }
  }
  return false;
}


