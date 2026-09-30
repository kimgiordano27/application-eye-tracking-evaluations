/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector4s>$$.cctor
ENTRY_POINT: 0873f0e4
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_EmptyArray<OVRPlugin_Vector4s>___cctor(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  int in_w8;
  long lVar5;
  uint in_w9;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  ulong uVar8;
  int iVar9;
  
  uVar2 = unaff_w24 - in_w8 * in_w9;
  if (uVar2 < in_w9) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
                    /* try { // try from 0873f0f8 to 0883f10b has its CatchHandler @ 0873ef50 */
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar2 = *(int *)(unaff_x25 + (ulong)uVar2 * 4 + 0x20) - 1;
    uVar8 = (ulong)uVar2;
    if (uVar2 < uVar1) {
                    /* try { // try from 0873f10c to 0883f11b has its CatchHandler @ 0873f12c */
      iVar9 = 0;
      do {
                    /* catch() { ... } // from try @ 0873f0d8 with catch @ 0873f120 */
                    /* catch() { ... } // from try @ 0873f0b4 with catch @ 0873f124 */
                    /* catch() { ... } // from try @ 0873f0dc with catch @ 0873f128 */
        if (*(int *)(unaff_x23 + 0x20 + (-(uVar8 >> 0x1f) & 0xffffffe000000000 | uVar8 << 5)) ==
            unaff_w24) {
                    /* catch() { ... } // from try @ 0873f098 with catch @ 0873f12c
                       catch() { ... } // from try @ 0873f10c with catch @ 0873f12c */
                    /* try { // try from 0873f134 to 0883f137 has its CatchHandler @ 0873f1e8 */
                    /* try { // try from 0873f138 to 0883f14b has its CatchHandler @ 0873ef50 */
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 0873f14c to 0883f163 has its CatchHandler @ 0873f1d8 */
            lVar4 = FUN_04980b34(lVar4);
          }
          lVar5 = *unaff_x21;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
                    /* try { // try from 0873f164 to 0883f1c7 has its CatchHandler @ 0873ef50 */
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0873f19c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_04980e68();
LAB_0873f19c:
          uVar6 = (*(code *)*puVar3)();
          if ((uVar6 & 1) != 0) {
            return uVar8;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= (uint)uVar8) goto LAB_0873f210;
        uVar2 = *(uint *)(unaff_x23 + 0x20 + (long)(int)(uint)uVar8 * 0x20 + 4);
        uVar8 = (ulong)uVar2;
        if ((int)uVar1 <= iVar9) {
          FUN_08d9d998(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar9 = iVar9 + 1;
      } while (uVar2 < uVar1);
    }
    return uVar8;
  }
LAB_0873f210:
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


