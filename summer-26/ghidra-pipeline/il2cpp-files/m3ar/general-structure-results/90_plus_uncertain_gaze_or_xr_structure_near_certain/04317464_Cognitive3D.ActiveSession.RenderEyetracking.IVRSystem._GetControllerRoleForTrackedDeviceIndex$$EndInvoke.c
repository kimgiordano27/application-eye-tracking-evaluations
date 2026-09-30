/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetControllerRoleForTrackedDeviceIndex$$EndInvoke
ENTRY_POINT: 04317464
PROGRAM: m3ar-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


bool Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetControllerRoleForTrackedDeviceIndex__EndInvoke
               (long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x21;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* try { // try from 0431747c to 0441748f has its CatchHandler @ 043178f4 */
      if (*(long *)(piVar4 + -2) == *(long *)(unaff_x21 + 0x20)) {
        lVar2 = param_1 + (long)(int)(*piVar4 + (uint)*(ushort *)(unaff_x21 + 0x50)) * 0x10 + 0x138;
        goto LAB_043174b8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  lVar2 = FUN_0406ae20();
LAB_043174b8:
  lVar2 = Crosstales_Common_Util_BaseHelper__FormatSecondsToHRF(*(undefined8 *)(lVar2 + 8));
  iVar1 = (**(code **)(lVar2 + 8))();
  return iVar1 == *(int *)(unaff_x19 + 100);
}


