/*
FUNCTION_NAME: FUN_060682b0
ENTRY_POINT: 060682b0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_1
*/


void FUN_060682b0(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((DAT_07ee069b & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(PTR_DAT_07a22708);
    DAT_07ee069b = 1;
  }
  uVar1 = OVRCameraRig__get_leftEyeCamera(param_1,param_2);
  if ((uVar1 & 1) != 0) {
    if (param_2 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar1 = FUN_071c24dc(uVar2,0,0);
      if ((uVar1 & 1) == 0) {
        if (*(long *)(param_1 + 0x58) != 0) {
          FUN_071d6a58(*(long *)(param_1 + 0x58),0);
          if (*(long *)(param_1 + 0x80) != 0) {
            FUN_050a8b48(*(long *)(param_1 + 0x80),*(undefined8 *)(param_2 + 0x18),
                         *(undefined8 *)PTR_DAT_07a22708);
            return;
          }
        }
      }
      else if (*(long *)(param_1 + 0x60) != 0) {
        FUN_071d6a58(*(long *)(param_1 + 0x60),0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  return;
}


