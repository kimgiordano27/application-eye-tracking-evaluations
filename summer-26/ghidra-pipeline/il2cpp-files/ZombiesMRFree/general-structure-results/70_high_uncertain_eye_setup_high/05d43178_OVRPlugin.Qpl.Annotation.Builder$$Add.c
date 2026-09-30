/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 05d43178
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Add(long param_1)

{
  uint uVar1;
  undefined1 in_w8;
  long lVar2;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  
  do {
    *(undefined1 *)(in_x10 + 0x20) = in_w8;
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      param_1 = *unaff_x21;
    }
    if (**(long **)(param_1 + 0xb8) == 0) {
LAB_05d43194:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(int *)(**(long **)(param_1 + 0xb8) + 0x18) <= (int)unaff_w22) {
      return;
    }
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      param_1 = *unaff_x21;
    }
    lVar2 = **(long **)(param_1 + 0xb8);
    if (lVar2 == 0) goto LAB_05d43194;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w22) {
LAB_05d43198:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    if (unaff_x19 == 0) goto LAB_05d43194;
    uVar1 = *(uint *)(lVar2 + (long)(int)unaff_w22 * 4 + 0x20);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_05d43198;
    if (unaff_x20 == 0) goto LAB_05d43194;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w22) goto LAB_05d43198;
    in_x10 = unaff_x20 + (int)unaff_w22;
    unaff_w22 = unaff_w22 + 1;
    in_w8 = uVar1 != 3 && *(int *)(unaff_x19 + (long)(int)uVar1 * 4 + 0x20) < 2;
  } while( true );
}


