/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0587b4c4
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_SpaceDiscoveryResult>
              (undefined1 param_1 [16],undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  ulong uVar7;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 uStack00000000000000c0;
  
  uVar5 = param_1._8_8_;
  uVar3 = param_1._0_8_;
  uStack00000000000000c0 = 0;
  unaff_x23[3] = uVar5;
  unaff_x23[2] = uVar3;
  unaff_x23[5] = uVar5;
  unaff_x23[4] = uVar3;
  unaff_x23[1] = uVar5;
  *unaff_x23 = uVar3;
  iVar1 = thunk_FUN_049556fc(param_2,0);
  if (1 < iVar1) {
    thunk_FUN_049ae08c(&DAT_0ae9ce18);
    uVar3 = thunk_FUN_04983f60();
    uVar5 = thunk_FUN_049ae08c(&DAT_0af42f30);
    FUN_08d8c2dc(uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar3);
  }
  uVar2 = FUN_08d948e8();
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000090,
             (void *)((long)unaff_x20 + uVar7 * *(uint *)(*unaff_x20 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x20 + 0x104));
      in_stack_00000058 = unaff_x21[1];
      in_stack_00000050 = *unaff_x21;
      in_stack_00000068 = unaff_x21[3];
      in_stack_00000060 = unaff_x21[2];
      in_stack_00000078 = unaff_x21[5];
      in_stack_00000070 = unaff_x21[4];
      in_stack_00000080 = unaff_x21[6];
      uVar3 = thunk_FUN_04983b98(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000050);
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04980b34(lVar6);
      }
      in_stack_00000020 = unaff_x23[1];
      in_stack_00000018 = *unaff_x23;
      in_stack_00000030 = unaff_x23[3];
      in_stack_00000028 = unaff_x23[2];
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000040 = unaff_x23[5];
      in_stack_00000038 = unaff_x23[4];
      in_stack_00000048 = uStack00000000000000c0;
      in_stack_00000008 = lVar6;
      uVar4 = thunk_FUN_08dd7094(&stack0x00000008,uVar3,0);
      if ((uVar4 & 1) != 0) {
        iVar1 = thunk_FUN_049556bc();
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_049556bc();
  return iVar1 + -1;
}


