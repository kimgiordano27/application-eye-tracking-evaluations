/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyFrom
ENTRY_POINT: 03c692d0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyFrom(void)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  uVar11 = in_stack_00000080;
  uVar12 = in_stack_00000088;
  uVar9 = in_stack_00000090;
  uVar10 = in_stack_00000098;
  uVar7 = in_stack_000000a0;
  uVar8 = in_stack_000000a8;
  uVar5 = in_stack_000000b0;
  uVar6 = in_stack_000000b8;
code_r0x03c692d0:
  in_stack_000000b8 = uVar6;
  in_stack_000000b0 = uVar5;
  in_stack_000000a8 = uVar8;
  in_stack_000000a0 = uVar7;
  in_stack_00000098 = uVar10;
  in_stack_00000090 = uVar9;
  in_stack_00000088 = uVar12;
  in_stack_00000080 = uVar11;
  FUN_03c688ac();
LAB_03c692d4:
  do {
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 0x40;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
                    /* try { // try from 03c692f4 to 03d69307 has its CatchHandler @ 03c69314 */
      return;
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) goto LAB_03c69304;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_03c69308;
    puVar1 = (undefined8 *)(lVar4 + unaff_x24);
    if (unaff_x20 == 0) goto LAB_03c69304;
    in_stack_00000080 = *puVar1;
    in_stack_00000088 = puVar1[1];
    in_stack_00000090 = puVar1[2];
    in_stack_00000098 = puVar1[3];
    in_stack_000000a0 = puVar1[4];
    in_stack_000000a8 = puVar1[5];
    in_stack_000000b0 = puVar1[6];
    in_stack_000000b8 = puVar1[7];
    uVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                       *(undefined8 *)(unaff_x20 + 0x28));
  } while ((uVar3 & 1) == 0);
  lVar4 = *(long *)(unaff_x21 + 0x10);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) {
LAB_03c69308:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03c69308 to 03d6932b has its CatchHandler @ 03c692b4 */
      FUN_02d60af0();
    }
    puVar1 = (undefined8 *)(lVar4 + unaff_x24);
    uVar8 = puVar1[5];
    uVar7 = puVar1[4];
    uVar6 = puVar1[7];
    uVar5 = puVar1[6];
    uVar12 = puVar1[1];
    uVar11 = *puVar1;
    uVar10 = puVar1[3];
    uVar9 = puVar1[2];
    if (unaff_x22 != 0) {
      lVar4 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if (uVar2 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
          lVar4 = lVar4 + (long)(int)uVar2 * 0x40;
          *(undefined8 *)(lVar4 + 0x48) = uVar8;
          *(undefined8 *)(lVar4 + 0x40) = uVar7;
          *(undefined8 *)(lVar4 + 0x58) = uVar6;
          *(undefined8 *)(lVar4 + 0x50) = uVar5;
          *(undefined8 *)(lVar4 + 0x28) = uVar12;
          *(undefined8 *)(lVar4 + 0x20) = uVar11;
          *(undefined8 *)(lVar4 + 0x38) = uVar10;
          *(undefined8 *)(lVar4 + 0x30) = uVar9;
          thunk_FUN_02dd37b4(lVar4 + 0x20,0);
          goto LAB_03c692d4;
        }
        goto code_r0x03c692d0;
      }
    }
  }
LAB_03c69304:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


