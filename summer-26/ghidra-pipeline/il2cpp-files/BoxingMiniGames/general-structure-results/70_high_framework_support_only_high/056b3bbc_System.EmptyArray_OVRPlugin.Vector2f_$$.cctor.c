/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector2f>$$.cctor
ENTRY_POINT: 056b3bbc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_EmptyArray<OVRPlugin_Vector2f>___cctor(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long in_x9;
  long in_x10;
  int in_w11;
  int in_w12;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined8 unaff_x23;
  long unaff_x24;
  
  while (uVar3 = in_w11 - in_w12 * unaff_w20, uVar3 < *(uint *)(unaff_x21 + 0x18)) {
    lVar2 = unaff_x21 + (ulong)uVar3 * 4;
    lVar1 = param_1 * 0x20;
    param_1 = param_1 + 1;
    *(int *)(in_x10 + lVar1 + 4) = *(int *)(lVar2 + 0x20) + -1;
    *(int *)(lVar2 + 0x20) = (int)param_1;
    while( true ) {
      if (param_1 == unaff_x24) {
        *(long *)(unaff_x19 + 0x10) = unaff_x21;
        thunk_FUN_036b7ad0((long *)(unaff_x19 + 0x10));
        *(undefined8 *)(unaff_x19 + 0x18) = unaff_x23;
        thunk_FUN_036b7ad0();
        return;
      }
      if (param_1 == in_x9) goto LAB_056b3c2c;
      in_w11 = *(int *)(in_x10 + param_1 * 0x20);
      if (-1 < in_w11) break;
      param_1 = param_1 + 1;
    }
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    in_w12 = 0;
    if (unaff_w20 != 0) {
      in_w12 = in_w11 / unaff_w20;
    }
  }
LAB_056b3c2c:
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


