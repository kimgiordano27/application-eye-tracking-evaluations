/*
FUNCTION_NAME: Unity.Collections.NativeArray<ShadowRequestIntermediateUpdateData>$$GetSubArray
ENTRY_POINT: 05050654
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x050507bc) */

void Unity_Collections_NativeArray<ShadowRequestIntermediateUpdateData>__GetSubArray
               (long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long *in_stack_00000078;
  
code_r0x05050654:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05050648 with catch @ 05050654
                        */
  puVar2 = (undefined8 *)FUN_03ac43c4(param_1,param_2,param_3);
  param_1 = unaff_x21;
                    /* try { // try from 05050658 to 0515097b has its CatchHandler @ 05050658
                       catch() { ... } // from try @ 05050658 with catch @ 05050658
                       catch() { ... } // from try @ 05050a2c with catch @ 05050658
                       catch() { ... } // from try @ 05050a68 with catch @ 05050658
                       catch() { ... } // from try @ 05050b2c with catch @ 05050658
                       catch() { ... } // from try @ 05050b80 with catch @ 05050658 */
  do {
    (*(code *)*puVar2)(&stack0x00000020 + 4,param_1,puVar2[1]);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    uStack0000000000000058 = in_stack_00000020._12_4_;
    in_stack_00000050 = in_stack_00000020._4_8_;
    uStack0000000000000064 = in_stack_00000038;
    uStack000000000000005c = uStack0000000000000030;
    uStack0000000000000060 = uStack0000000000000034;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar4 = *(uint *)(unaff_x20 + 0x18);
    if (uVar4 == *(uint *)(lVar3 + 0x18)) {
      FUN_0504ec4c();
      uVar4 = *(uint *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
    }
    plVar1 = in_stack_00000078;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    lVar3 = lVar3 + (long)(int)uVar4 * (long)unaff_w23;
    *(ulong *)(lVar3 + 0x28) = CONCAT44(uStack000000000000005c,uStack0000000000000058);
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000050;
    *(undefined8 *)(lVar3 + 0x34) = uStack0000000000000064;
    *(ulong *)(lVar3 + 0x2c) = CONCAT44(uStack0000000000000060,uStack000000000000005c);
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *in_stack_00000078;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_050505e4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4(in_stack_00000078,*unaff_x22,0);
LAB_050505e4:
    uVar5 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    param_1 = in_stack_00000078;
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000078 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_00000078;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_05050768;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      goto LAB_05050750;
    }
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_03ac4090(param_2);
    }
    lVar3 = *param_1;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 == 0) break;
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != param_2) {
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
      if (uVar5 == 0) goto LAB_0505064c;
    }
    puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
  } while( true );
LAB_0505064c:
  param_3 = 0;
  unaff_x21 = param_1;
  goto code_r0x05050654;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_05050750:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08488550) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_05050784;
    }
  }
LAB_05050768:
  puVar2 = (undefined8 *)FUN_03ac43c4(in_stack_00000078,*(long *)PTR_DAT_08488550,0);
LAB_05050784:
  (*(code *)*puVar2)(param_1,puVar2[1]);
  return;
}


