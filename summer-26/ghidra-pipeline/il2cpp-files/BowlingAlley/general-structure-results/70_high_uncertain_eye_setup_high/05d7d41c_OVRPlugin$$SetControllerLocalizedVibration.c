/*
FUNCTION_NAME: OVRPlugin$$SetControllerLocalizedVibration
ENTRY_POINT: 05d7d41c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerLocalizedVibration(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int in_w9;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  
  do {
    unaff_w22 = unaff_w22 + 1;
    *(bool *)(unaff_x20 + in_x10 + 0x20) = (int)param_1 != 3 && in_w9 < 2;
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      param_2 = *unaff_x21;
    }
    if (**(long **)(param_2 + 0xb8) == 0) {
LAB_05d7d454:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(int *)(**(long **)(param_2 + 0xb8) + 0x18) <= (int)unaff_w22) {
      return;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      param_2 = *unaff_x21;
    }
    lVar2 = **(long **)(param_2 + 0xb8);
    if (lVar2 == 0) goto LAB_05d7d454;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w22) {
LAB_05d7d458:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    if (unaff_x19 == 0) goto LAB_05d7d454;
    uVar1 = *(uint *)(lVar2 + (long)(int)unaff_w22 * 4 + 0x20);
    param_1 = (long)(int)uVar1;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_05d7d458;
    if (unaff_x20 == 0) goto LAB_05d7d454;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w22) goto LAB_05d7d458;
    in_w9 = *(int *)(unaff_x19 + param_1 * 4 + 0x20);
    in_x10 = (long)(int)unaff_w22;
  } while( true );
}


