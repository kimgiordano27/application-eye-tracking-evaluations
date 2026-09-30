/*
FUNCTION_NAME: FUN_05e5f9f8
ENTRY_POINT: 05e5f9f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_05e5f9f8(long param_1,ulong param_2)

{
  if ((DAT_066dc642 & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_46__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_47__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_48__);
    DAT_066dc642 = 1;
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    if ((param_2 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
LAB_05e5fab4:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_03abdb34(*(long *)(param_1 + 0x10),*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_47__
                  );
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_05e5fab4;
      FUN_03abcdd0(*(long *)(param_1 + 0x18),*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_46__
                  );
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_05e5fab4;
      FUN_03abd484(*(long *)(param_1 + 0x20),*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_48__
                  );
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_05e5fab4;
      FUN_05e5fab8();
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}


