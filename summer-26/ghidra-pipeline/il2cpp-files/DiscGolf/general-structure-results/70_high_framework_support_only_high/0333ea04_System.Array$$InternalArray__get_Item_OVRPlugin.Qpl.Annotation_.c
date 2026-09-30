/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 0333ea04
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_Qpl_Annotation>
               (long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long lStack0000000000000078;
  
  lVar1 = tpidr_el0;
  lStack0000000000000078 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_02dcfd74(param_3);
  }
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  iVar2 = thunk_FUN_02da56d8(param_1,0);
  if (iVar2 < 2) {
    uVar3 = FUN_0550100c(param_1,0);
    if (0 < (int)uVar3) {
      uVar7 = 0;
      do {
        memcpy(&stack0x00000050,(void *)((long)param_1 + uVar7 * *(uint *)(*param_1 + 0x104) + 0x20)
               ,(ulong)*(uint *)(*param_1 + 0x104));
        in_stack_00000038 = param_2[1];
        in_stack_00000030 = *param_2;
        in_stack_00000048 = param_2[3];
        in_stack_00000040 = param_2[2];
        thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000030);
        lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          FUN_02dcfd18(lVar6);
        }
        uVar4 = thunk_FUN_05542350();
        if ((uVar4 & 1) != 0) {
          iVar2 = thunk_FUN_02da5698(param_1,0,0);
          uVar3 = iVar2 + (int)uVar7;
          goto LAB_0333eb34;
        }
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    iVar2 = thunk_FUN_02da5698(param_1,0,0);
    uVar3 = iVar2 - 1;
LAB_0333eb34:
    uVar7 = (ulong)uVar3;
    if (*(long *)(lVar1 + 0x28) == lStack0000000000000078) {
      return;
    }
  }
  else {
    thunk_FUN_02dfd288(&DAT_06b37980);
    uVar5 = thunk_FUN_02dd3144();
    uVar7 = thunk_FUN_02dfd288(&DAT_06b99890);
    if (*(long *)(lVar1 + 0x28) == lStack0000000000000078) {
      FUN_054f9888(uVar5,uVar7,0);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar5,param_3);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


