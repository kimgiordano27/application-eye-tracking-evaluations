/*
FUNCTION_NAME: OVRPlugin$$SetControllerVibration
ENTRY_POINT: 05d7d3a0
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


void OVRPlugin__SetControllerVibration(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  
  do {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x21;
    do {
      if (**(long **)(lVar2 + 0xb8) == 0) {
LAB_05d7d454:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(int *)(**(long **)(lVar2 + 0xb8) + 0x18) <= (int)unaff_w22) {
        return;
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar2 = *unaff_x21;
      }
      lVar3 = **(long **)(lVar2 + 0xb8);
      if (lVar3 == 0) goto LAB_05d7d454;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w22) {
LAB_05d7d458:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      if (unaff_x19 == 0) goto LAB_05d7d454;
      uVar1 = *(uint *)(lVar3 + (long)(int)unaff_w22 * 4 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_05d7d458;
      if (unaff_x20 == 0) goto LAB_05d7d454;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w22) goto LAB_05d7d458;
      lVar3 = (long)(int)unaff_w22;
      unaff_w22 = unaff_w22 + 1;
      *(bool *)(unaff_x20 + lVar3 + 0x20) =
           uVar1 != 3 && *(int *)(unaff_x19 + (long)(int)uVar1 * 4 + 0x20) < 2;
    } while (*(int *)(lVar2 + 0xe0) != 0);
  } while( true );
}


