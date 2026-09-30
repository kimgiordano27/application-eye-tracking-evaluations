/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.OpenVRInterop$$GetStringForHmdError
ENTRY_POINT: 043159cc
PROGRAM: m3ar-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_OpenVRInterop__GetStringForHmdError
               (long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_0953adf2 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f737d0);
    DAT_0953adf2 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    lVar4 = *(long *)PTR_DAT_08f737d0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) = param_2;
      }
      else {
        FUN_05769150(lVar2,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                    );
      }
      lVar2 = *(long *)(param_1 + 0x40);
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04315a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x18))
                  (*(undefined8 *)(lVar2 + 0x40),param_2,2,*(undefined8 *)(lVar2 + 0x28));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


