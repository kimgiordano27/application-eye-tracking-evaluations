/*
FUNCTION_NAME: System.RuntimeType$$TryConvertToType
ENTRY_POINT: 034aa9e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x034aad40) */

undefined8 System_RuntimeType__TryConvertToType(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x21;
  uint unaff_w22;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  puVar5 = (undefined8 *)FUN_01ecb238();
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar4 = Method_UnityEngine_TextCore_Text_TextInfo_Resize<TextElementInfo>__;
  puVar3 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
  puVar2 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                    /* try { // try from 034aaa10 to 035aaa17 has its CatchHandler @ 034ab2c8 */
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
                    /* try { // try from 034aaa5c to 035aaa63 has its CatchHandler @ 034ab280 */
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_034aaa88;
        }
        uVar11 = uVar11 - 1;
                    /* try { // try from 034aaa64 to 035ab03b has its CatchHandler @ 034aa5f8 */
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_034aaa88:
    uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar11 & 1) == 0) {
      if ((unaff_w22 & 1) != 0) goto LAB_034aabc8;
      plVar6 = *(long **)(unaff_x21 + 0x10);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_034aaba0;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_034aaae8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,2);
LAB_034aaae8:
    auVar13 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    plVar7 = auVar13._0_8_;
    if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar7,*(long *)puVar2);
    }
    uStack0000000000000038 = 0xffffffff;
    in_stack_00000030 = auVar13._8_8_;
    thunk_FUN_01f51358(&stack0x00000030);
    if (*(long *)(unaff_x21 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02b712b8(*(long *)(unaff_x21 + 0x28),plVar7,in_stack_00000030,
                 CONCAT44(uStack000000000000003c,uStack0000000000000038),*(undefined8 *)puVar4);
    if ((unaff_w22 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02b712b8(*(long *)(unaff_x21 + 0x38),plVar7,in_stack_00000030,
                   CONCAT44(uStack000000000000003c,uStack0000000000000038),*(undefined8 *)puVar4);
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_UnityEngine_TextCore_Text_TextInfo_Resize<WordInfo>__) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_034aabbc;
    }
  }
LAB_034aaba0:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)Method_UnityEngine_TextCore_Text_TextInfo_Resize<WordInfo>__
                        ,0);
LAB_034aabbc:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_034aabc8:
  *(undefined1 *)(unaff_x21 + 0x40) = 1;
  if (*(long *)(unaff_x21 + 0x30) != 0) {
    if (*(long *)(unaff_x21 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar11 = FUN_02b72aa0();
    if ((uVar11 & 1) != 0) {
      uVar8 = FUN_034ab86c();
      uVar9 = 0;
      goto LAB_034aac20;
    }
  }
  uVar8 = 0;
  uVar9 = 1;
LAB_034aac20:
  if ((unaff_w22 & uVar9) != 0) {
    if (*(long *)(unaff_x21 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar11 = FUN_02b72aa0();
    if ((uVar11 & 1) != 0) {
      uVar8 = FUN_034ab86c();
    }
  }
  if (in_stack_00000048._4_1_ != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit();
  }
  return uVar8;
}


