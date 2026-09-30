/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 0587bc4c
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_VirtualKeyboardModelAnimationState>
              (long *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_04980b90(param_3);
  }
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  iVar1 = thunk_FUN_049556fc(param_1,0);
  if (1 < iVar1) {
    thunk_FUN_049ae08c(&DAT_0ae9ce18);
    uVar4 = thunk_FUN_04983f60();
    uVar5 = thunk_FUN_049ae08c(&DAT_0af42f30);
    FUN_08d8c2dc(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar4,param_3);
  }
  uVar2 = FUN_08d948e8(param_1,0);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000050,(void *)((long)param_1 + uVar7 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      in_stack_00000030 = *param_2;
      uStack0000000000000044 = *(undefined8 *)((long)param_2 + 0x14);
      uStack0000000000000038 = (undefined4)param_2[1];
      uStack000000000000003c = (undefined4)*(undefined8 *)((long)param_2 + 0xc);
      uStack0000000000000040 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
      thunk_FUN_04983b98(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000030);
      lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        FUN_04980b34(lVar6);
      }
      uVar3 = thunk_FUN_08dd7094();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_049556bc(param_1,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_049556bc(param_1,0,0);
  return iVar1 + -1;
}


