/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcActivationMode
ENTRY_POINT: 02908ea0
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcActivationMode(void)

{
  uint uVar1;
  int in_w8;
  ulong unaff_x19;
  int unaff_w20;
  uint *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  int *in_stack_00000008;
  
  do {
    if (in_w8 == 0) {
      thunk_FUN_016466fc();
    }
    if ((0x20 < (uint)unaff_x19) || ((unaff_x28 << (unaff_x19 & 0x3f) & unaff_x29) == 0)) {
      uVar1 = *unaff_x21;
      *unaff_x21 = uVar1 + 1;
      if (unaff_w22 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      *(short *)(unaff_x23 + (long)(int)uVar1 * 2) = (short)unaff_x19;
      if (uVar1 + 1 == unaff_w22) {
        unaff_w20 = (int)unaff_x25 + 1;
LAB_02908ef0:
        *in_stack_00000008 = unaff_w20;
        return;
      }
    }
    unaff_x25 = unaff_x25 + 1;
    if (unaff_x27 == unaff_x25) goto LAB_02908ef0;
    unaff_x19 = (ulong)*(ushort *)(unaff_x24 + unaff_x25 * 2);
    in_w8 = *(int *)(*unaff_x26 + 0xe0);
  } while( true );
}


