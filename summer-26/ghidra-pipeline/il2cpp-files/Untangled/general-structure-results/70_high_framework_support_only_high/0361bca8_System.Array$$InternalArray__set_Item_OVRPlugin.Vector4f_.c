/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Vector4f>
ENTRY_POINT: 0361bca8
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_Vector4f>
              (long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_02eea7c4(param_4);
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  iVar1 = thunk_FUN_02ebb4bc(param_1,0);
  if (1 < iVar1) {
    thunk_FUN_02f239f0(PTR_DAT_06d36ba8);
    uVar3 = thunk_FUN_02ef1808();
    uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d36bb0);
    FUN_056130c0(uVar3,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar3,param_4);
  }
  uVar2 = FUN_0561a77c(param_1,0);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000010,(void *)((long)param_1 + uVar7 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      uVar3 = thunk_FUN_02ef1438(*(undefined8 *)(*(long *)(param_4 + 0x38) + 8));
      lVar4 = thunk_FUN_02eb3268(*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x10));
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar5 = FUN_0436aef4(&stack0x00000010,uVar3,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x10))
      ;
      if ((uVar5 & 1) != 0) {
        iVar1 = thunk_FUN_02ebb478(param_1,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_02ebb478(param_1,0,0);
  return iVar1 + -1;
}


