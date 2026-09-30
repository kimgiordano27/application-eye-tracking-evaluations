/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$ReconstructNormalAtWorldPos
ENTRY_POINT: 04a5d230
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__ReconstructNormalAtWorldPos(void)

{
  uint uVar1;
  int iVar2;
  int in_w8;
  int in_w9;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  int unaff_w20;
  undefined8 unaff_x22;
  long unaff_x23;
  
  while( true ) {
    in_w8 = in_w8 + 1;
    *in_x10 = *(int *)(in_x11 + 0x20) + -1;
    *(int *)(in_x11 + 0x20) = in_w8;
    if (*(int *)(unaff_x19 + 0x24) <= in_w8) {
      *(undefined8 *)(unaff_x19 + 0x18) = unaff_x22;
      thunk_FUN_02bb0e9c();
      *(long *)(unaff_x19 + 0x10) = unaff_x23;
      thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10));
      return;
    }
    if (in_w9 == in_w8) break;
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar2 = 0;
    if (unaff_w20 != 0) {
      iVar2 = in_x10[3] / unaff_w20;
    }
    uVar1 = in_x10[3] - iVar2 * unaff_w20;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar1) break;
    in_x11 = unaff_x23 + (long)(int)uVar1 * 4;
    in_x10 = in_x10 + 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


