/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopySafe
ENTRY_POINT: 050a3c34
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint in_w8;
  uint in_w9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w25;
  int unaff_w26;
  long unaff_x27;
  uint unaff_w28;
  uint unaff_w29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  do {
                    /* try { // try from 050a3c34 to 051a3c37 has its CatchHandler @ 050a3c44 */
    if (in_w8 <= in_w9) {
LAB_050a3cb4:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
                    /* catch() { ... } // from try @ 050a3c34 with catch @ 050a3c44 */
                    /* try { // try from 050a3c48 to 051a3c4f has its CatchHandler @ 050a3c58 */
    lVar2 = unaff_x19 + (long)(int)in_w9 * 0x20;
                    /* try { // try from 050a3c50 to 051a3c5b has its CatchHandler @ 050a3728 */
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(lVar2 + 0x20) = uVar9;
    *(undefined8 *)(lVar2 + 0x38) = uVar8;
    *(undefined8 *)(lVar2 + 0x30) = uVar7;
    thunk_FUN_03afed3c(unaff_x27 + (long)(int)in_w9 * 0x20,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 050a3c48 with catch @ 050a3c58
                        */
    if (unaff_w26 < (int)unaff_w28) {
LAB_050a3c6c:
      if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
        lVar2 = unaff_x19 + (long)(int)unaff_w29 * 0x20;
        *(undefined8 *)(lVar2 + 0x28) = in_stack_00000078;
        *(undefined8 *)(lVar2 + 0x20) = in_stack_00000070;
        *(undefined8 *)(lVar2 + 0x38) = in_stack_00000088;
        *(undefined8 *)(lVar2 + 0x30) = in_stack_00000080;
        thunk_FUN_03afed3c(lVar2 + 0x20,0);
        return;
      }
      goto LAB_050a3cb4;
    }
    uVar3 = unaff_w28 * 2;
    uVar6 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
    if ((int)uVar3 < unaff_w23) {
      uVar4 = uVar3 + in_stack_00000008._4_4_;
      if ((uVar6 <= uVar4 - 1) || (uVar6 <= uVar4)) goto LAB_050a3cb4;
      if (unaff_x21 == 0) goto LAB_050a3cb8;
      lVar2 = unaff_x19 + (long)(int)(uVar4 - 1) * 0x20;
      lVar1 = unaff_x19 + (long)(int)uVar4 * 0x20;
      uVar9 = *(undefined8 *)(lVar2 + 0x28);
      uVar7 = *(undefined8 *)(lVar2 + 0x20);
      uVar12 = *(undefined8 *)(lVar2 + 0x38);
      uVar11 = *(undefined8 *)(lVar2 + 0x30);
      uVar10 = *(undefined8 *)(lVar1 + 0x28);
      uVar8 = *(undefined8 *)(lVar1 + 0x20);
      uVar14 = *(undefined8 *)(lVar1 + 0x38);
      uVar13 = *(undefined8 *)(lVar1 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      in_stack_00000090 = uVar8;
      in_stack_00000098 = uVar10;
      in_stack_000000a0 = uVar13;
      in_stack_000000a8 = uVar14;
      in_stack_000000b0 = uVar7;
      in_stack_000000b8 = uVar9;
      in_stack_000000c0 = uVar11;
      in_stack_000000c8 = uVar12;
      uVar4 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000b0,&stack0x00000090,
                         *(undefined8 *)(unaff_x21 + 0x28));
      uVar6 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      uVar3 = uVar3 | uVar4 >> 0x1f;
    }
    unaff_w29 = unaff_w25 + uVar3;
    if (uVar6 <= unaff_w29) goto LAB_050a3cb4;
    if (unaff_x21 == 0) {
LAB_050a3cb8:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    unaff_x22 = unaff_x19 + (long)(int)unaff_w29 * 0x20;
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    in_stack_000000b8 = in_stack_00000078;
    in_stack_000000b0 = in_stack_00000070;
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_00000090 = uVar7;
    in_stack_00000098 = uVar8;
    in_stack_000000a0 = uVar9;
    in_stack_000000a8 = uVar10;
    iVar5 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000b0,&stack0x00000090,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if (-1 < iVar5) {
      unaff_w29 = unaff_w25 + unaff_w28;
      goto LAB_050a3c6c;
    }
    in_w8 = *(uint *)(unaff_x19 + 0x18);
    if (in_w8 <= unaff_w29) goto LAB_050a3cb4;
    in_w9 = unaff_w25 + unaff_w28;
    unaff_w28 = uVar3;
  } while( true );
}


