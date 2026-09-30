/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 050a0f90
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Dispose(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  uint uVar8;
  uint unaff_w29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  do {
    uVar8 = unaff_w28;
    if (unaff_x21 == 0) {
LAB_050a1080:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 050a1080 to 051a1083 has its CatchHandler @ 050a109c */
      FUN_03a8a9c0();
    }
    lVar7 = unaff_x19 + (long)(int)unaff_w29 * (long)unaff_w26;
    uVar9 = *(undefined8 *)(lVar7 + 0x28);
    uVar5 = *(undefined8 *)(lVar7 + 0x20);
    uVar6 = *(undefined8 *)(lVar7 + 0x30);
                    /* try { // try from 050a0fac to 051a0fb7 has its CatchHandler @ 050a1094 */
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
                    /* try { // try from 050a0fb8 to 051a107f has its CatchHandler @ 050a0bc4 */
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000b8 = in_stack_00000078;
    in_stack_000000b0 = in_stack_00000070;
    in_stack_00000090 = uVar5;
    in_stack_00000098 = uVar9;
    in_stack_000000a0 = uVar6;
    iVar2 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000b0,&stack0x00000090,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if (-1 < iVar2) {
      unaff_w29 = unaff_w25 + unaff_w24;
LAB_050a1034:
      if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
        lVar7 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
        *(undefined8 *)(lVar7 + 0x28) = in_stack_00000078;
        *(undefined8 *)(lVar7 + 0x20) = in_stack_00000070;
        *(undefined8 *)(lVar7 + 0x30) = in_stack_00000080;
        return;
      }
LAB_050a107c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w29) ||
       (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24)) goto LAB_050a107c;
    lVar4 = unaff_x19 + (long)(int)(unaff_w25 + unaff_w24) * (long)unaff_w26;
    uVar5 = *(undefined8 *)(lVar7 + 0x28);
    uVar6 = *(undefined8 *)(lVar7 + 0x20);
    *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar7 + 0x30);
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
    *(undefined8 *)(lVar4 + 0x20) = uVar6;
    if (unaff_w27 < (int)uVar8) goto LAB_050a1034;
    unaff_w28 = uVar8 * 2;
    uVar3 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
    if ((int)unaff_w28 < unaff_w23) {
      uVar1 = unaff_w28 + in_stack_00000008._4_4_;
      if ((uVar3 <= uVar1 - 1) || (uVar3 <= uVar1)) goto LAB_050a107c;
      if (unaff_x21 == 0) goto LAB_050a1080;
      lVar7 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)unaff_w26;
      lVar4 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
      uVar10 = *(undefined8 *)(lVar7 + 0x28);
      uVar9 = *(undefined8 *)(lVar7 + 0x20);
      uVar6 = *(undefined8 *)(lVar7 + 0x30);
      uVar12 = *(undefined8 *)(lVar4 + 0x28);
      uVar11 = *(undefined8 *)(lVar4 + 0x20);
      uVar5 = *(undefined8 *)(lVar4 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      in_stack_00000090 = uVar11;
      in_stack_00000098 = uVar12;
      in_stack_000000a0 = uVar5;
      in_stack_000000b0 = uVar9;
      in_stack_000000b8 = uVar10;
      in_stack_000000c0 = uVar6;
      uVar1 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000b0,&stack0x00000090,
                         *(undefined8 *)(unaff_x21 + 0x28));
      uVar3 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      unaff_w28 = unaff_w28 | uVar1 >> 0x1f;
    }
    unaff_w29 = unaff_w25 + unaff_w28;
    unaff_w24 = uVar8;
    if (uVar3 <= unaff_w29) goto LAB_050a107c;
  } while( true );
}


