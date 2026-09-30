/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$set_MaskMeshFilters
ENTRY_POINT: 07275eb8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__set_MaskMeshFilters(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    uVar2 = 0;
    uVar3 = 0;
    do {
      if (uVar1 == uVar3) goto LAB_07275f38;
      if (*(char *)(lVar4 + 0x20 + uVar3) != '\0') {
        lVar5 = *(long *)(param_1 + 0x68);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar2) {
LAB_07275f38:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar6 = *(long *)(param_1 + 0x70);
        *(short *)(lVar5 + (long)(int)uVar2 * 2 + 0x20) = (short)uVar3;
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_07275f38;
        *(short *)(lVar6 + uVar3 * 2 + 0x20) = (short)uVar2;
        uVar2 = uVar2 + 1;
        *(uint *)(param_1 + 0x60) = uVar2;
      }
      uVar3 = uVar3 + 1;
      if (uVar3 == 0x100) {
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


