/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 047a7c40
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  do {
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a7c20 with catch @ 047a7c40
                        */
    unaff_w22 = unaff_w22 - 1;
    if ((int)unaff_w22 < 0) {
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) goto LAB_047a7cf0;
                    /* try { // try from 047a7c58 to 048a7c6f has its CatchHandler @ 047a7ca8 */
    if (*(uint *)(lVar2 + 0x18) <= unaff_w22) goto LAB_047a7cf4;
    if (unaff_x21 == 0) goto LAB_047a7cf0;
    uVar4 = unaff_x23 & 0xffffffff;
                    /* try { // try from 047a7c70 to 048a7c97 has its CatchHandler @ 047a7be0 */
    lVar2 = lVar2 + uVar4 * (unaff_x24 & 0xffffffff);
    in_stack_00000028 = *(undefined8 *)(lVar2 + 0x28);
    in_stack_00000020 = *(undefined8 *)(lVar2 + 0x20);
    in_stack_00000030 = *(undefined8 *)(lVar2 + 0x30);
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000020,
                       *(undefined8 *)(unaff_x21 + 0x28));
                    /* try { // try from 047a7c98 to 048a7ca7 has its CatchHandler @ 047a7ca8 */
    unaff_x23 = unaff_x23 - 1;
  } while ((uVar1 & 1) == 0);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 047a7c58 with catch @ 047a7ca8
                       catch() { ... } // from try @ 047a7c98 with catch @ 047a7ca8 */
    if (unaff_w22 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + uVar4 * 0x18;
      uVar5 = *(undefined8 *)(lVar2 + 0x20);
      uVar3 = *(undefined8 *)(lVar2 + 0x30);
      unaff_x19[1] = *(undefined8 *)(lVar2 + 0x28);
      *unaff_x19 = uVar5;
      unaff_x19[2] = uVar3;
      return;
    }
LAB_047a7cf4:
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
LAB_047a7cf0:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


