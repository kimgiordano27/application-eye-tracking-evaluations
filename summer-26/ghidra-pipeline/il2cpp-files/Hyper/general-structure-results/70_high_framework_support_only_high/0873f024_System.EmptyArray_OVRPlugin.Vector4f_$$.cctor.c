/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector4f>$$.cctor
ENTRY_POINT: 0873f024
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


ulong System_EmptyArray<OVRPlugin_Vector4f>___cctor(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long in_x9;
  int unaff_w21;
  int unaff_w22;
  ulong uVar6;
  long unaff_x23;
  int iVar7;
  
  plVar4 = (long *)FUN_04aa98a8(*(undefined8 *)(in_x9 + 0x18));
  if (unaff_x23 != 0) {
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    uVar6 = (ulong)(unaff_w22 - 1U);
    if (unaff_w22 - 1U < uVar2) {
      iVar7 = 0;
      do {
                    /* try { // try from 0873f058 to 0883f063 has its CatchHandler @ 0873f070 */
        lVar1 = unaff_x23 + 0x20 + (long)(int)(uint)uVar6 * 0x20;
        if (*(int *)(unaff_x23 + 0x20 + (-(uVar6 >> 0x1f) & 0xffffffe000000000 | uVar6 << 5)) ==
            unaff_w21) {
                    /* try { // try from 0873f064 to 0883f06f has its CatchHandler @ 0873f07c */
          if (plVar4 == (long *)0x0) goto LAB_0873f214;
                    /* catch() { ... } // from try @ 0873efa8 with catch @ 0873f070
                       catch() { ... } // from try @ 0873f058 with catch @ 0873f070
                       try { // try from 0873f070 to 0883f097 has its CatchHandler @ 0873ef50 */
                    /* catch() { ... } // from try @ 0873eff0 with catch @ 0873f07c
                       catch() { ... } // from try @ 0873f064 with catch @ 0873f07c */
          uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(lVar1 + 8));
          if ((uVar5 & 1) != 0) {
            return uVar6;
          }
          uVar2 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar2 <= (uint)uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        uVar3 = *(uint *)(lVar1 + 4);
        uVar6 = (ulong)uVar3;
                    /* try { // try from 0873f098 to 0883f0af has its CatchHandler @ 0873f12c */
        if ((int)uVar2 <= iVar7) {
          FUN_08d9d998(0);
        }
        uVar2 = *(uint *)(unaff_x23 + 0x18);
        iVar7 = iVar7 + 1;
      } while (uVar3 < uVar2);
    }
    return uVar6;
  }
LAB_0873f214:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


