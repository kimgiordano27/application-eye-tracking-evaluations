/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.FaceSubsystemParams$$get_supportsEyeTracking
ENTRY_POINT: 02452848
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long UnityEngine_XR_ARSubsystems_FaceSubsystemParams__get_supportsEyeTracking
               (undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = FUN_024522b4(param_2);
  if ((lVar1 != 0) && (param_2 != 0)) {
    lVar3 = *(long *)(lVar1 + 0x28);
    FUN_02452634(lVar1,*(undefined8 *)(param_2 + 0x38));
    if (*(long *)(param_2 + 0x28) != 0) {
      *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x40);
      FUN_02452334(lVar3);
      if (lVar3 != 0) {
        uVar2 = *(undefined8 *)(param_2 + 0x48);
        *(undefined8 *)(lVar3 + 0x48) = uVar2;
        *(undefined8 *)(lVar1 + 0x48) = uVar2;
        return lVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


