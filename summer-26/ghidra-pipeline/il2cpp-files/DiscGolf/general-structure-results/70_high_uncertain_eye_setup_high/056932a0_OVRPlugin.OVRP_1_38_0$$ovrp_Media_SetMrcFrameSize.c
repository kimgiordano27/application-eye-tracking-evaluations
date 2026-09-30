/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcFrameSize
ENTRY_POINT: 056932a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcFrameSize(long param_1)

{
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  
  while( true ) {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (unaff_x19 == 0) break;
    thunk_FUN_063211ac(*(undefined4 *)(param_1 + unaff_x21 * 4 + 0x20));
    lVar1 = *(long *)(unaff_x20 + 0x140);
    unaff_x21 = unaff_x21 + 1;
    if (lVar1 == 0) break;
    if ((long)*(int *)(lVar1 + 0x18) <= (long)unaff_x21) {
      return;
    }
    if (*(long *)(unaff_x20 + 0x148) == 0) break;
    if ((long)*(int *)(*(long *)(unaff_x20 + 0x148) + 0x18) <= (long)unaff_x21) {
      return;
    }
    FUN_03fb3b24(lVar1,unaff_x21 & 0xffffffff,*unaff_x22);
    param_1 = *(long *)(unaff_x20 + 0x148);
    if (param_1 == 0) break;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_x21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


