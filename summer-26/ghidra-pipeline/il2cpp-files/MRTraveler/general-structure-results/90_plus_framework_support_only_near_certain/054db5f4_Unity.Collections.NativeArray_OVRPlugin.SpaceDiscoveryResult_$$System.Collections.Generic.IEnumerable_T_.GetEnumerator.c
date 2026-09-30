/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 054db5f4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (code *param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_x9;
  long lVar4;
  undefined8 in_x10;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  uint uVar6;
  uint unaff_w29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined8 uStack0000000000000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 uStack0000000000000160;
  
  uVar7 = param_3._8_8_;
  uVar5 = param_3._0_8_;
  uStack0000000000000160 = in_x9;
                    /* try { // try from 054db5f4 to 055db5f7 has its CatchHandler @ 054db600 */
                    /* try { // try from 054db5f8 to 055db603 has its CatchHandler @ 054db528 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 054db5f4 with catch @ 054db600
                        */
  while (uVar6 = unaff_w28, uStack0000000000000130 = uVar5, uStack0000000000000138 = uVar7,
        uStack0000000000000140 = in_x10,
        iVar2 = (*param_1)(param_4,&stack0x00000150,&stack0x00000130,
                           *(undefined8 *)(unaff_x21 + 0x28)), iVar2 < 0) {
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_054db6c0;
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24) goto LAB_054db6c0;
    lVar4 = unaff_x19 + (long)(int)(unaff_w25 + unaff_w24) * (long)unaff_w26;
    *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(lVar4 + 0x28) = uVar7;
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    if (unaff_w27 < (int)uVar6) goto LAB_054db66c;
    unaff_w28 = uVar6 * 2;
    if ((int)unaff_w28 < unaff_w23) {
      uVar1 = unaff_w28 + in_stack_00000008._4_4_;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar1 - 1) goto LAB_054db6c0;
      lVar4 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)unaff_w26;
      uVar5 = *(undefined8 *)(lVar4 + 0x30);
      uVar9 = *(undefined8 *)(lVar4 + 0x28);
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_054db6c0;
      lVar4 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
      uVar3 = *(undefined8 *)(lVar4 + 0x30);
      uVar10 = *(undefined8 *)(lVar4 + 0x28);
      uVar8 = *(undefined8 *)(lVar4 + 0x20);
      if (unaff_x21 == 0) goto LAB_054db6c4;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      uStack0000000000000130 = uVar8;
      uStack0000000000000138 = uVar10;
      uStack0000000000000140 = uVar3;
      in_stack_00000150 = uVar7;
      in_stack_00000158 = uVar9;
      uStack0000000000000160 = uVar5;
      uVar1 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                         *(undefined8 *)(unaff_x21 + 0x28));
      unaff_w28 = unaff_w28 | uVar1 >> 0x1f;
    }
    unaff_w29 = unaff_w25 + unaff_w28;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_054db6c0;
    unaff_x22 = unaff_x19 + (long)(int)unaff_w29 * (long)unaff_w26;
    in_x10 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    if (unaff_x21 == 0) {
LAB_054db6c4:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    param_1 = *(code **)(unaff_x21 + 0x18);
    param_4 = *(undefined8 *)(unaff_x21 + 0x40);
    in_stack_00000158 = in_stack_00000118;
    in_stack_00000150 = in_stack_00000110;
    uStack0000000000000160 = in_stack_00000120;
    unaff_w24 = uVar6;
  }
  unaff_w29 = unaff_w25 + unaff_w24;
LAB_054db66c:
  if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
    lVar4 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
    *(undefined8 *)(lVar4 + 0x30) = in_stack_00000120;
    *(undefined8 *)(lVar4 + 0x28) = in_stack_00000118;
    *(undefined8 *)(lVar4 + 0x20) = in_stack_00000110;
    return;
  }
LAB_054db6c0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


