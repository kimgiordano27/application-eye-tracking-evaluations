/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$GetEnumerator
ENTRY_POINT: 054db588
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__GetEnumerator(void)

{
  uint uVar1;
  int iVar2;
  uint in_w8;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  uint uVar7;
  uint unaff_w29;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
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
  
  do {
    uVar7 = unaff_w28;
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 054db568 with catch @ 054db588
                        */
    if (in_w8 <= unaff_w29) {
LAB_054db6c0:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar6 = unaff_x19 + (long)(int)unaff_w29 * (long)unaff_w26;
    uVar3 = *(undefined8 *)(lVar6 + 0x30);
    uVar10 = *(undefined8 *)(lVar6 + 0x28);
    uVar8 = *(undefined8 *)(lVar6 + 0x20);
                    /* try { // try from 054db5a0 to 055db5b7 has its CatchHandler @ 054db5f0 */
    if (unaff_x21 == 0) {
LAB_054db6c4:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
                    /* try { // try from 054db5b8 to 055db5df has its CatchHandler @ 054db528 */
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
                    /* try { // try from 054db5e0 to 055db5ef has its CatchHandler @ 054db5f0 */
                    /* catch() { ... } // from try @ 054db5a0 with catch @ 054db5f0
                       catch() { ... } // from try @ 054db5e0 with catch @ 054db5f0 */
    in_stack_00000158 = in_stack_000000f8;
    in_stack_00000150 = in_stack_000000f0;
    in_stack_00000160 = in_stack_00000100;
    in_stack_00000130 = uVar8;
    in_stack_00000138 = uVar10;
    in_stack_00000140 = uVar3;
    iVar2 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if (-1 < iVar2) {
      unaff_w29 = unaff_w25 + unaff_w24;
LAB_054db66c:
      if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
        lVar6 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
        *(undefined8 *)(lVar6 + 0x30) = in_stack_00000120;
        *(undefined8 *)(lVar6 + 0x28) = in_stack_00000118;
        *(undefined8 *)(lVar6 + 0x20) = in_stack_00000110;
        return;
      }
      goto LAB_054db6c0;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_054db6c0;
    uVar8 = *(undefined8 *)(lVar6 + 0x28);
    uVar3 = *(undefined8 *)(lVar6 + 0x20);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24) goto LAB_054db6c0;
    lVar5 = unaff_x19 + (long)(int)(unaff_w25 + unaff_w24) * (long)unaff_w26;
    *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar6 + 0x30);
    *(undefined8 *)(lVar5 + 0x28) = uVar8;
    *(undefined8 *)(lVar5 + 0x20) = uVar3;
    if (unaff_w27 < (int)uVar7) goto LAB_054db66c;
    unaff_w28 = uVar7 * 2;
    if ((int)unaff_w28 < unaff_w23) {
      uVar1 = unaff_w28 + in_stack_00000008._4_4_;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar1 - 1) goto LAB_054db6c0;
      lVar6 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)unaff_w26;
      uVar3 = *(undefined8 *)(lVar6 + 0x30);
      uVar10 = *(undefined8 *)(lVar6 + 0x28);
      uVar8 = *(undefined8 *)(lVar6 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_054db6c0;
      lVar6 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
      uVar4 = *(undefined8 *)(lVar6 + 0x30);
      uVar11 = *(undefined8 *)(lVar6 + 0x28);
      uVar9 = *(undefined8 *)(lVar6 + 0x20);
      if (unaff_x21 == 0) goto LAB_054db6c4;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      in_stack_00000130 = uVar9;
      in_stack_00000138 = uVar11;
      in_stack_00000140 = uVar4;
      in_stack_00000150 = uVar8;
      in_stack_00000158 = uVar10;
      in_stack_00000160 = uVar3;
      uVar1 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                         *(undefined8 *)(unaff_x21 + 0x28));
      unaff_w28 = unaff_w28 | uVar1 >> 0x1f;
    }
    unaff_w29 = unaff_w25 + unaff_w28;
    in_stack_000000f8 = in_stack_00000118;
    in_stack_000000f0 = in_stack_00000110;
    in_stack_00000100 = in_stack_00000120;
    in_w8 = *(uint *)(unaff_x19 + 0x18);
    unaff_w24 = uVar7;
  } while( true );
}


