/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$get_IsSupported
ENTRY_POINT: 07275f1c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_IsSupported(long param_1)

{
  uint in_w8;
  ulong in_x9;
  ulong in_x10;
  long in_x11;
  long lVar1;
  long lVar2;
  
  do {
    in_w8 = in_w8 + 1;
    *(uint *)(param_1 + 0x60) = in_w8;
    do {
      in_x9 = in_x9 + 1;
      if (in_x9 == 0x100) {
        return;
      }
      if (in_x10 == in_x9) goto LAB_07275f38;
    } while (*(char *)(in_x11 + in_x9) == '\0');
    lVar1 = *(long *)(param_1 + 0x68);
    if (lVar1 == 0) {
LAB_07275f3c:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar1 + 0x18) <= in_w8) {
LAB_07275f38:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar2 = *(long *)(param_1 + 0x70);
    *(short *)(lVar1 + (long)(int)in_w8 * 2 + 0x20) = (short)in_x9;
    if (lVar2 == 0) goto LAB_07275f3c;
    if (*(uint *)(lVar2 + 0x18) <= in_x9) goto LAB_07275f38;
    *(short *)(lVar2 + in_x9 * 2 + 0x20) = (short)in_w8;
  } while( true );
}


