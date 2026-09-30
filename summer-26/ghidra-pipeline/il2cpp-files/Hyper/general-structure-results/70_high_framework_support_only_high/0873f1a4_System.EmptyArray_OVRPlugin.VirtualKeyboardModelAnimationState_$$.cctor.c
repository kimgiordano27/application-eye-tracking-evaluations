/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.VirtualKeyboardModelAnimationState>$$.cctor
ENTRY_POINT: 0873f1a4
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_EmptyArray<OVRPlugin_VirtualKeyboardModelAnimationState>___cctor(code *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w24;
  ulong unaff_x25;
  int unaff_w26;
  long unaff_x27;
  long unaff_x28;
  
  do {
    uVar4 = (*param_1)();
    if ((uVar4 & 1) != 0) {
      return unaff_x25 & 0xffffffff;
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    do {
      if (uVar1 <= (uint)unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      uVar2 = *(uint *)(unaff_x28 + 4);
      unaff_x25 = (ulong)uVar2;
                    /* try { // try from 0873f1c8 to 0883f1d7 has its CatchHandler @ 0873f1d8 */
      if ((int)uVar1 <= unaff_w26) {
        FUN_08d9d998(0);
      }
      uVar1 = *(uint *)(unaff_x23 + 0x18);
                    /* catch() { ... } // from try @ 0873f14c with catch @ 0873f1d8
                       catch() { ... } // from try @ 0873f1c8 with catch @ 0873f1d8 */
      unaff_w26 = unaff_w26 + 1;
                    /* try { // try from 0873f1dc to 0883f1df has its CatchHandler @ 0873f1e8 */
                    /* try { // try from 0873f1e0 to 0883f1eb has its CatchHandler @ 0873ef50 */
      if (uVar1 <= uVar2) {
        return unaff_x25;
      }
      unaff_x28 = unaff_x27 + (long)(int)uVar2 * 0x20;
    } while (*(int *)(unaff_x27 + (-(ulong)(uVar2 >> 0x1f) & 0xffffffe000000000 | unaff_x25 << 5))
             != unaff_w24);
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34(lVar5);
    }
    lVar6 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0873f19c;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68();
LAB_0873f19c:
    param_1 = (code *)*puVar3;
  } while( true );
}


