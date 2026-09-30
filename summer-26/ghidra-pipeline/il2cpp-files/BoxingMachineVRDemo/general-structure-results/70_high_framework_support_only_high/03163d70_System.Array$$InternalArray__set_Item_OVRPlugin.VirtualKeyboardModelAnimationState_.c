/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 03163d70
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
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
              (long *param_1,void *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_02d9a33c(param_3);
  }
  in_stack_00000140 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  iVar1 = thunk_FUN_02d6ffd8(param_1,0);
  if (1 < iVar1) {
    thunk_FUN_02dc61f4(PTR_DAT_06767638);
    uVar4 = thunk_FUN_02d9d534();
    uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06767640);
    FUN_05018134(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4,param_3);
  }
  uVar2 = FUN_0501f6a4(param_1,0);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x000000e0,(void *)((long)param_1 + uVar7 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      memcpy(&stack0x00000078,param_2,0x68);
      thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000078);
      lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        FUN_02d9a2e0(lVar6);
      }
      memcpy(&stack0x00000010,&stack0x000000e0,0x68);
      uVar3 = thunk_FUN_0506076c();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_02d6ff94(param_1,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_02d6ff94(param_1,0,0);
  return iVar1 + -1;
}


