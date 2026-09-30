/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$MoveNext
ENTRY_POINT: 046da5f0
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__MoveNext(undefined1 param_1 [16])

{
  long lVar1;
  ulong uVar2;
  long in_x9;
  long unaff_x19;
  undefined4 unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long lStack0000000000000020;
  long lStack0000000000000028;
  long lStack0000000000000030;
  
  lStack0000000000000028 = param_1._8_8_;
  lStack0000000000000020 = param_1._0_8_;
  while( true ) {
    lStack0000000000000030 = in_x9;
    FUN_046d9e80();
    unaff_x23 = unaff_x23 + 1;
    if ((long)*(int *)(unaff_x22 + 0x18) <= (long)unaff_x23) {
      *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar1 = FUN_04efe4a4(0);
      if (lVar1 != 0) {
        FUN_044a67d0();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar2 = (ulong)*(uint *)(unaff_x22 + 0x18);
    if (uVar2 <= unaff_x23) break;
    if (*unaff_x24 == 0) {
      FUN_04f52020(0x11,0);
      uVar2 = (ulong)*(uint *)(unaff_x22 + 0x18);
    }
    if (uVar2 <= unaff_x23) break;
    in_x9 = unaff_x24[3];
    lStack0000000000000028 = unaff_x24[2];
    lStack0000000000000020 = unaff_x24[1];
    unaff_x24 = unaff_x24 + 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


