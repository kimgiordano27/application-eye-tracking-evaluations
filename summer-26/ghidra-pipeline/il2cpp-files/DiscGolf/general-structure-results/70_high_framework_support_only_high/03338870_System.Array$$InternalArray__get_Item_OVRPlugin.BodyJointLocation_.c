/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 03338870
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


int System_Array__InternalArray__get_Item<OVRPlugin_BodyJointLocation>
              (long param_1,long *param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  ulong uVar7;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  
  if (param_1 == 0) {
    FUN_02dcfd74();
  }
  in_stack_000000e0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  iVar1 = thunk_FUN_02da56d8(param_2,0);
  if (1 < iVar1) {
    thunk_FUN_02dfd288(&DAT_06b37980);
    uVar4 = thunk_FUN_02dd3144();
    uVar5 = thunk_FUN_02dfd288(&DAT_06b99890);
    FUN_054f9888(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar4);
  }
  uVar2 = FUN_0550100c(param_2,0);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x000000a0,(void *)((long)param_2 + uVar7 * *(uint *)(*param_2 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_2 + 0x104));
      memcpy(&stack0x00000058,param_3,0x48);
      thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000058);
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        FUN_02dcfd18(lVar6);
      }
      memcpy(&stack0x00000010,&stack0x000000a0,0x48);
      uVar3 = thunk_FUN_05542350();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_02da5698(param_2,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_02da5698(param_2,0,0);
  return iVar1 + -1;
}


