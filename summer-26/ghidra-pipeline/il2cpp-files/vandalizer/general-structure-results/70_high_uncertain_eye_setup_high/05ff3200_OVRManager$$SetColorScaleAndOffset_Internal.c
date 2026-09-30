/*
FUNCTION_NAME: OVRManager$$SetColorScaleAndOffset_Internal
ENTRY_POINT: 05ff3200
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__SetColorScaleAndOffset_Internal(float param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x24;
  float fVar9;
  float unaff_s11;
  float unaff_s12;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000068;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
                    /* try { // try from 05ff323c to 060f3263 has its CatchHandler @ 05ff337c */
  uVar1 = FUN_06e5b424(unaff_x20 + 0x50,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
  }
  fStack000000000000001c = unaff_s11 / param_1;
  uVar2 = FUN_06ee6d08(unaff_s12 + in_stack_00000068._4_4_,&stack0x00000008,uVar7,uVar1,0);
  fVar9 = 0.0;
  if (0 < (int)uVar2) {
                    /* try { // try from 05ff3298 to 060f32bf has its CatchHandler @ 05ff3378 */
    uVar3 = FUN_05c87ee0(*(undefined8 *)(unaff_x20 + 0x48),0);
    if ((uVar3 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + 0x58);
      if (lVar6 == 0) {
LAB_05ff3384:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_05ff3388:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      lVar6 = lVar6 + 0x20;
LAB_05ff3340:
      fVar9 = (float)FUN_06eec198(lVar6,0);
      fVar9 = (unaff_s12 + in_stack_00000068._4_4_) - fVar9;
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      uVar7 = 1;
      goto LAB_05ff3358;
    }
    uVar3 = 0;
                    /* try { // try from 05ff32c4 to 060f32d7 has its CatchHandler @ 05ff3374 */
    lVar8 = 0x20;
    do {
      lVar6 = *(long *)(unaff_x20 + 0x58);
      if (lVar6 == 0) goto LAB_05ff3384;
                    /* try { // try from 05ff32d8 to 060f3363 has its CatchHandler @ 05ff30b8 */
      if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_05ff3388;
      uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
      lVar6 = FUN_06eec0bc(lVar6 + lVar8,0);
      if (lVar6 == 0) goto LAB_05ff3384;
      uVar4 = FUN_06e55774(lVar6,0);
      uVar5 = FUN_05c86f74(uVar7,uVar4,0);
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)(unaff_x20 + 0x58);
        if (lVar6 == 0) goto LAB_05ff3384;
        if (*(uint *)(lVar6 + 0x18) <= (uint)uVar3) goto LAB_05ff3388;
        lVar6 = lVar6 + lVar8;
        goto LAB_05ff3340;
      }
      uVar3 = uVar3 + 1;
      lVar8 = lVar8 + 0x2c;
    } while (uVar2 != uVar3);
  }
  uVar7 = 0;
LAB_05ff3358:
  *unaff_x19 = fVar9;
  return uVar7;
}


