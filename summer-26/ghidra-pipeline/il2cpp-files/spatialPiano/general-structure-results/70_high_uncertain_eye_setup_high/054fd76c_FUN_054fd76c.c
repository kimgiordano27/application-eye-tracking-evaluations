/*
FUNCTION_NAME: FUN_054fd76c
ENTRY_POINT: 054fd76c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_054fd76c(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_06bbf533 & 1) == 0) {
    FUN_02f08768(OVRManager_<>c_TypeInfo);
    DAT_06bbf533 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    lVar4 = *(long *)OVRManager_<>c_TypeInfo;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = param_2;
      }
      else {
        FUN_03abf904(lVar2,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_054fd838(param_1,param_2);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


