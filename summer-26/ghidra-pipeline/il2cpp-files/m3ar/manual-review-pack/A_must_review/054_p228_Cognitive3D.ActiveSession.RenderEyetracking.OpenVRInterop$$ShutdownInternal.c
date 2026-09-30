/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.OpenVRInterop$$ShutdownInternal
ENTRY_POINT: 04315890
PROGRAM: m3ar-libil2cpp.so
SCORE: 129
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3;functionality_possible_biometrics_hits_3
*/


void Cognitive3D_ActiveSession_RenderEyetracking_OpenVRInterop__ShutdownInternal
               (long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((DAT_0953adec & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f737c0);
    DAT_0953adec = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = FUN_057694d0(*(long *)(param_1 + 0x10),param_2,*(undefined8 *)PTR_DAT_08f737c0);
    if ((uVar2 & 1) != 0) {
      FUN_04315948(param_1,param_2);
      return;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    uVar1 = FUN_042f2ebc(param_2,0);
    if (lVar3 != 0) {
      lVar3 = FUN_04347db4(lVar3,uVar1,0,0);
      if (0 < lVar3) {
        Cognitive3D_ActiveSession_RenderEyetracking_OpenVRInterop__GetStringForHmdError
                  (param_1,param_2);
        return;
      }
      FUN_04315a94(param_1,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


