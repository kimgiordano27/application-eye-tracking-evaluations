/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 03c691ec
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Dispose(void)

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
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  
  do {
    uStack0000000000000088 = in_stack_00000048;
    uStack0000000000000080 = in_stack_00000040;
    uStack0000000000000098 = in_stack_00000058;
    uStack0000000000000090 = in_stack_00000050;
    uStack00000000000000a8 = in_stack_00000068;
    uStack00000000000000a0 = in_stack_00000060;
    uStack00000000000000b8 = in_stack_00000078;
    uStack00000000000000b0 = in_stack_00000070;
    uVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_03c69308;
      puVar1 = (undefined8 *)(lVar4 + unaff_x24);
      uVar8 = puVar1[5];
      uVar7 = puVar1[4];
      uVar6 = puVar1[7];
      uVar5 = puVar1[6];
      uVar12 = puVar1[1];
      uVar11 = *puVar1;
      uVar10 = puVar1[3];
      uVar9 = puVar1[2];
      if (unaff_x22 == 0) break;
      lVar4 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar4 == 0) break;
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
      }
      else {
        uStack0000000000000080 = uVar11;
        uStack0000000000000088 = uVar12;
        uStack0000000000000090 = uVar9;
        uStack0000000000000098 = uVar10;
        uStack00000000000000a0 = uVar7;
        uStack00000000000000a8 = uVar8;
        uStack00000000000000b0 = uVar5;
        uStack00000000000000b8 = uVar6;
                    /* try { // try from 03c692b4 to 03d692f3 has its CatchHandler @ 03c692b4
                       catch() { ... } // from try @ 03c692b4 with catch @ 03c692b4
                       catch() { ... } // from try @ 03c69308 with catch @ 03c692b4
                       catch() { ... } // from try @ 03c69344 with catch @ 03c692b4
                       catch() { ... } // from try @ 03c69384 with catch @ 03c692b4 */
        FUN_03c688ac();
      }
    }
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 0x40;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
      return;
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) {
LAB_03c69308:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    puVar1 = (undefined8 *)(lVar4 + unaff_x24);
    in_stack_00000068 = puVar1[5];
    in_stack_00000060 = puVar1[4];
    in_stack_00000078 = puVar1[7];
    in_stack_00000070 = puVar1[6];
    in_stack_00000048 = puVar1[1];
    in_stack_00000040 = *puVar1;
    in_stack_00000058 = puVar1[3];
    in_stack_00000050 = puVar1[2];
  } while (unaff_x20 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


