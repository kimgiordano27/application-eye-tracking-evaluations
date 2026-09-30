/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_EncodeMrcFrame
ENTRY_POINT: 07c9deb4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_EncodeMrcFrame(long param_1)

{
  int in_w8;
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  uint uVar2;
  ulong unaff_x23;
  
  do {
    if (in_w8 == 0) {
      thunk_FUN_044a54b4();
      param_1 = *unaff_x20;
    }
    lVar1 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
    if (lVar1 == 0) {
LAB_07c9df64:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar2 = (uint)unaff_x23;
                    /* try { // try from 07c9ded4 to 07d9ded7 has its CatchHandler @ 07c9dff8 */
    if (*(uint *)(lVar1 + 0x18) <= uVar2) {
LAB_07c9df60:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
                    /* try { // try from 07c9ded8 to 07d9df1f has its CatchHandler @ 07c9dfe8 */
    if (*(int *)(lVar1 + (long)(int)uVar2 * 4 + 0x20) == -1) {
      if (unaff_x19 == 0) goto LAB_07c9df64;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x21) goto LAB_07c9df60;
      lVar1 = unaff_x21 * 4;
      unaff_x21 = unaff_x21 + 1;
      *(int *)(unaff_x19 + lVar1 + 0x20) = unaff_w22;
      if (unaff_x21 == 0x1a) {
        return;
      }
      unaff_w22 = -1;
      unaff_x23 = unaff_x21 & 0xffffffff;
    }
    else {
      if (*(int *)(param_1 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        param_1 = *unaff_x20;
      }
      lVar1 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
      if (lVar1 == 0) goto LAB_07c9df64;
      if (*(uint *)(lVar1 + 0x18) <= uVar2) goto LAB_07c9df60;
      unaff_x23 = (ulong)*(uint *)(lVar1 + (long)(int)uVar2 * 4 + 0x20);
      unaff_w22 = unaff_w22 + 1;
                    /* try { // try from 07c9df20 to 07d9e01b has its CatchHandler @ 07c9c908 */
    }
    in_w8 = *(int *)(param_1 + 0xe4);
  } while( true );
}


