/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonForAction$$.ctor
ENTRY_POINT: 0728e744
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonForAction___ctor(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  float fVar3;
  float unaff_s8;
  
  do {
    fVar3 = (float)FUN_0728b548(unaff_x20);
    unaff_s8 = unaff_s8 + fVar3;
    lVar1 = *(long *)(unaff_x19 + 0x18);
    do {
      if (lVar1 == 0) {
LAB_0728e758:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      unaff_x20 = *(long *)(unaff_x20 + 0x18);
      if (unaff_x20 == *(long *)(lVar1 + 0x18)) {
        if (0.0 <= unaff_s8) {
          return;
        }
        lVar1 = *(long *)(lVar1 + 0x10);
        if (lVar1 != 0) {
          lVar2 = *(long *)(lVar1 + 0x18);
          while( true ) {
            if (lVar2 == lVar1) {
              if (*(int *)(*(long *)PTR_DAT_092c1e28 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              *(ulong *)(unaff_x19 + 0x38) =
                   CONCAT44(-(float)((ulong)*(undefined8 *)(unaff_x19 + 0x38) >> 0x20),
                            -(float)*(undefined8 *)(unaff_x19 + 0x38));
              *(float *)(unaff_x19 + 0x40) = -*(float *)(unaff_x19 + 0x40);
              return;
            }
            if (lVar2 == 0) break;
            *(float *)(lVar2 + 0x38) = -*(float *)(lVar2 + 0x38);
            lVar2 = *(long *)(lVar2 + 0x18);
          }
        }
        goto LAB_0728e758;
      }
      if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_0728e758;
    } while (*(int *)(*(long *)(unaff_x20 + 0x20) + 0x58) < 1);
  } while( true );
}


