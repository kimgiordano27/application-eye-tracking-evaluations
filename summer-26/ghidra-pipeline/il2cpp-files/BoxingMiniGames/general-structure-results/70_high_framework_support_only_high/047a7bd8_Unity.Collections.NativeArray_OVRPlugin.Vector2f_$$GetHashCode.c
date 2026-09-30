/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetHashCode
ENTRY_POINT: 047a7bd8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetHashCode(void)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  ulong uVar2;
  long lVar3;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  while( true ) {
    unaff_x23 = unaff_x23 + 0x18;
    unaff_w19 = unaff_w19 + 1;
                    /* try { // try from 047a7be0 to 048a7c1f has its CatchHandler @ 047a7be0
                       catch() { ... } // from try @ 047a7be0 with catch @ 047a7be0
                       catch() { ... } // from try @ 047a7c34 with catch @ 047a7be0
                       catch() { ... } // from try @ 047a7c70 with catch @ 047a7be0
                       catch() { ... } // from try @ 047a7cb0 with catch @ 047a7be0 */
    if ((bool)in_ZR) {
      return 0xffffffff;
    }
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    if (unaff_x20 == 0) break;
    puVar1 = (undefined8 *)(lVar3 + unaff_x23);
    in_stack_00000028 = puVar1[1];
    in_stack_00000020 = *puVar1;
    in_stack_00000030 = puVar1[2];
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000020,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x22 = unaff_x22 + -1;
    in_ZR = unaff_x22 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


