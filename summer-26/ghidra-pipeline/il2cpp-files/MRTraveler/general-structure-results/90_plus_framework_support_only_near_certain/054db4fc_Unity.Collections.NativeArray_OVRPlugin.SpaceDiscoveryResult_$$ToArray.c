/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 054db4fc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ToArray(undefined1 param_1 [16])

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000008;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  
  uVar7 = param_1._8_8_;
  uVar3 = param_1._0_8_;
  do {
    uStack00000000000000d0 = uVar3;
    uStack00000000000000d8 = uVar7;
    if (unaff_x21 == 0) {
LAB_054db6c4:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
                    /* try { // try from 054db528 to 055db567 has its CatchHandler @ 054db528
                       catch() { ... } // from try @ 054db528 with catch @ 054db528
                       catch() { ... } // from try @ 054db57c with catch @ 054db528
                       catch() { ... } // from try @ 054db5b8 with catch @ 054db528
                       catch() { ... } // from try @ 054db5f8 with catch @ 054db528 */
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    in_stack_00000158 = in_stack_000000f8;
    in_stack_00000150 = in_stack_000000f0;
    in_stack_00000160 = in_stack_00000100;
    in_stack_00000140 = in_stack_000000e0;
    in_stack_00000130 = uVar3;
    in_stack_00000138 = uVar7;
                    /* try { // try from 054db568 to 055db57b has its CatchHandler @ 054db588 */
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                       *(undefined8 *)(unaff_x21 + 0x28));
    unaff_w28 = unaff_w28 | uVar1 >> 0x1f;
    uVar1 = unaff_w24;
    do {
      unaff_w24 = unaff_w28;
      uVar6 = unaff_w25 + unaff_w24;
                    /* try { // try from 054db57c to 055db59f has its CatchHandler @ 054db528 */
      if (*(uint *)(unaff_x19 + 0x18) <= uVar6) goto LAB_054db6c0;
      lVar5 = unaff_x19 + (long)(int)uVar6 * (long)unaff_w26;
      uVar3 = *(undefined8 *)(lVar5 + 0x30);
      uVar8 = *(undefined8 *)(lVar5 + 0x28);
      uVar7 = *(undefined8 *)(lVar5 + 0x20);
      uStack00000000000000d0 = uVar7;
      uStack00000000000000d8 = uVar8;
      if (unaff_x21 == 0) goto LAB_054db6c4;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      in_stack_00000158 = in_stack_00000118;
      in_stack_00000150 = in_stack_00000110;
      in_stack_00000160 = in_stack_00000120;
      in_stack_00000130 = uVar7;
      in_stack_00000138 = uVar8;
      in_stack_00000140 = uVar3;
      iVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                         *(undefined8 *)(unaff_x21 + 0x28));
      if (-1 < iVar2) {
        uVar6 = unaff_w25 + uVar1;
LAB_054db66c:
        if (uVar6 < *(uint *)(unaff_x19 + 0x18)) {
          lVar5 = unaff_x19 + (long)(int)uVar6 * 0x18;
          *(undefined8 *)(lVar5 + 0x30) = in_stack_00000120;
          *(undefined8 *)(lVar5 + 0x28) = in_stack_00000118;
          *(undefined8 *)(lVar5 + 0x20) = in_stack_00000110;
          return;
        }
        goto LAB_054db6c0;
      }
      if (*(uint *)(unaff_x19 + 0x18) <= uVar6) goto LAB_054db6c0;
      uVar7 = *(undefined8 *)(lVar5 + 0x28);
      uVar3 = *(undefined8 *)(lVar5 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + uVar1) goto LAB_054db6c0;
      lVar4 = unaff_x19 + (long)(int)(unaff_w25 + uVar1) * (long)unaff_w26;
      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar5 + 0x30);
      *(undefined8 *)(lVar4 + 0x28) = uVar7;
      *(undefined8 *)(lVar4 + 0x20) = uVar3;
      if (unaff_w27 < (int)unaff_w24) goto LAB_054db66c;
      unaff_w28 = unaff_w24 * 2;
      uVar1 = unaff_w24;
    } while (unaff_w23 <= (int)unaff_w28);
    uVar1 = unaff_w28 + in_stack_00000008._4_4_;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1 - 1) {
LAB_054db6c0:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar5 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)unaff_w26;
    in_stack_00000100 = *(undefined8 *)(lVar5 + 0x30);
    in_stack_000000f8 = *(undefined8 *)(lVar5 + 0x28);
    in_stack_000000f0 = *(undefined8 *)(lVar5 + 0x20);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_054db6c0;
    lVar5 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
    in_stack_000000e0 = *(undefined8 *)(lVar5 + 0x30);
    uVar7 = *(undefined8 *)(lVar5 + 0x28);
    uVar3 = *(undefined8 *)(lVar5 + 0x20);
  } while( true );
}


