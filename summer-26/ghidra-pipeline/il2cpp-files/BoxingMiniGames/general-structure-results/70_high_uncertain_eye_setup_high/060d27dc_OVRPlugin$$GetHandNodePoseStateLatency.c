/*
FUNCTION_NAME: OVRPlugin$$GetHandNodePoseStateLatency
ENTRY_POINT: 060d27dc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHandNodePoseStateLatency(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_060d2808:
      (*(code *)*puVar1)();
      if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00();
      }
      if ((unaff_w22 == 5) || (unaff_w22 == 0)) {
        if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_054a890c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_07a24510);
      }
      return;
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_0367cd30();
      goto LAB_060d2808;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


