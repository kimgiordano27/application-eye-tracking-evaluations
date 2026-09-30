/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<Guid,-OVRTask.CallbackWithState<bool,-OVRAnchor>>$$OnDeserialization
ENTRY_POINT: 029d3740
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x029d37f0) */
/* WARNING: Removing unreachable block (ram,0x029d3840) */

void System_Collections_Generic_Dictionary<Guid,_OVRTask_CallbackWithState<bool,_OVRAnchor>>__OnDeserialization
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  int unaff_w26;
  int unaff_w27;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  
  uVar7 = param_1._0_8_;
  uVar8 = param_1._8_8_;
  uVar9 = param_2._0_8_;
  uVar1 = param_2._8_4_;
code_r0x029d3740:
  do {
    uStack0000000000000018 = uVar1;
    uStack0000000000000024 = uStack0000000000000054;
    uStack0000000000000020 = uStack0000000000000050;
    uStack0000000000000000 = uVar7;
    uStack0000000000000008 = uVar8;
    uStack0000000000000010 = uVar9;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar4 = unaff_x23 + (long)(int)unaff_w20 * (long)unaff_w26;
    unaff_w20 = unaff_w20 + 1;
    *(undefined8 *)(lVar4 + 0x44) = uStack0000000000000054;
    *(ulong *)(lVar4 + 0x3c) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    *(undefined8 *)(lVar4 + 0x28) = uVar8;
    *(undefined8 *)(lVar4 + 0x20) = uVar7;
    *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack000000000000004c,uStack0000000000000018);
    *(undefined8 *)(lVar4 + 0x30) = uVar9;
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_029d35d4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_029d35d4:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_029d37e4;
      lVar4 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_029d37bc;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar3 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_029d3658;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_029d3658:
    (*(code *)*puVar2)(&stack0x00000030);
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    in_stack_00000078 = uStack0000000000000048;
    in_stack_00000070 = in_stack_00000040;
    uStack0000000000000084 = uStack0000000000000054;
    uStack000000000000007c = uStack000000000000004c;
    uStack0000000000000080 = uStack0000000000000050;
    if (unaff_x23 == 0) {
      lVar4 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      unaff_x23 = FUN_01f08890(lVar4,4);
    }
    else {
      uVar7 = in_stack_00000030;
      uVar8 = in_stack_00000038;
      uVar9 = in_stack_00000040;
      uVar1 = uStack0000000000000048;
      if (unaff_w20 != *(uint *)(unaff_x23 + 0x18)) goto code_r0x029d3740;
      if ((int)(unaff_w20 + unaff_w27) < 0) {
        FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910();
      }
      lVar4 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      lVar4 = FUN_01f08890(lVar4,unaff_w20 * 2);
      FUN_0358d498(unaff_x23,0,lVar4,0,unaff_w20,0);
      unaff_x23 = lVar4;
    }
    in_stack_00000038 = in_stack_00000068;
    in_stack_00000030 = in_stack_00000060;
    uStack0000000000000048 = in_stack_00000078;
    in_stack_00000040 = in_stack_00000070;
    uStack0000000000000054 = uStack0000000000000084;
    uStack0000000000000050 = uStack0000000000000080;
    uVar7 = in_stack_00000060;
    uVar8 = in_stack_00000068;
    uVar9 = in_stack_00000070;
    uStack000000000000004c = uStack000000000000007c;
    uVar1 = in_stack_00000078;
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_029d37d8;
    }
  }
LAB_029d37bc:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_029d37d8:
  (*(code *)*puVar2)();
LAB_029d37e4:
  *unaff_x19 = unaff_x23;
  thunk_FUN_01f51358();
  *(uint *)(unaff_x19 + 1) = unaff_w20;
  return;
}


