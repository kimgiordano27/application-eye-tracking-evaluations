/*
FUNCTION_NAME: Unity.Collections.NativeArray<ShadowRequestIntermediateUpdateData>$$CopySafe
ENTRY_POINT: 05050568
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x050507bc) */

void Unity_Collections_NativeArray<ShadowRequestIntermediateUpdateData>__CopySafe(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long *in_stack_00000078;
  
                    /* try { // try from 0505056c to 0515059b has its CatchHandler @ 0505059c */
  plVar2 = (long *)(**(code **)(param_1 + 0x138))();
  puVar1 = PTR_DAT_08488568;
  in_stack_00000048 = &stack0x00000078;
  in_stack_00000040 = 0;
  do {
    in_stack_00000078 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *plVar2;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 05050524 with catch @ 0505059c
                       catch(type#1 @ 07fde6e8) { ... } // from try @ 0505056c with catch @ 0505059c
                       try { // try from 0505059c to 051505b3 has its CatchHandler @ 050504d4 */
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 050505b4 to 051505cb has its CatchHandler @ 05050644 */
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_050505e4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 050505cc to 05150633 has its CatchHandler @ 050504d4 */
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar2,*(long *)puVar1,0);
LAB_050505e4:
    uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    plVar2 = in_stack_00000078;
    if ((uVar7 & 1) == 0) {
      if (in_stack_00000078 == (long *)0x0) {
        return;
      }
      lVar4 = *in_stack_00000078;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 == 0) goto LAB_05050768;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090(lVar4);
    }
    lVar5 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 05050634 to 05150643 has its CatchHandler @ 05050644 */
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05050668;
        }
        uVar7 = uVar7 - 1;
                    /* catch() { ... } // from try @ 050505b4 with catch @ 05050644
                       catch() { ... } // from try @ 05050634 with catch @ 05050644 */
        piVar8 = piVar8 + 4;
                    /* try { // try from 05050648 to 0515064b has its CatchHandler @ 05050654 */
      } while (uVar7 != 0);
    }
                    /* try { // try from 0505064c to 05150657 has its CatchHandler @ 050504d4 */
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar2,lVar4,0);
LAB_05050668:
    (*(code *)*puVar3)(&stack0x00000020 + 4,plVar2,puVar3[1]);
    lVar4 = *(long *)(unaff_x20 + 0x10);
    uStack0000000000000058 = in_stack_00000020._12_4_;
    in_stack_00000050 = in_stack_00000020._4_8_;
    uStack0000000000000064 = in_stack_00000038;
    uStack000000000000005c = uStack0000000000000030;
    uStack0000000000000060 = uStack0000000000000034;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar6 = *(uint *)(unaff_x20 + 0x18);
    if (uVar6 == *(uint *)(lVar4 + 0x18)) {
      FUN_0504ec4c();
      uVar6 = *(uint *)(unaff_x20 + 0x18);
      lVar4 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar6 + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar6 + 1;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    lVar4 = lVar4 + (long)(int)uVar6 * 0x1c;
    *(ulong *)(lVar4 + 0x28) = CONCAT44(uStack000000000000005c,uStack0000000000000058);
    *(undefined8 *)(lVar4 + 0x20) = in_stack_00000050;
    *(undefined8 *)(lVar4 + 0x34) = uStack0000000000000064;
    *(ulong *)(lVar4 + 0x2c) = CONCAT44(uStack0000000000000060,uStack000000000000005c);
    plVar2 = in_stack_00000078;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08488550) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_05050784;
    }
  }
LAB_05050768:
  puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000078,*(long *)PTR_DAT_08488550,0);
LAB_05050784:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


