/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 036279d0
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


int System_Array__InternalArray__set_Item<OVRPlugin_Qpl_Annotation_Builder_Entry>
              (long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  ulong uVar7;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (param_1 == 0) {
    FUN_02eea7c4();
  }
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  iVar1 = thunk_FUN_02ebb4bc(param_2,0);
  if (1 < iVar1) {
    thunk_FUN_02f239f0(PTR_DAT_06d36ba8);
    uVar4 = thunk_FUN_02ef1808();
    uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d36bb0);
    FUN_056130c0(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar4);
  }
  uVar2 = FUN_0561a77c(param_2,0);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000030,(void *)((long)param_2 + uVar7 * *(uint *)(*param_2 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_2 + 0x104));
      in_stack_00000020 = unaff_x22;
      in_stack_00000028 = unaff_x21;
      thunk_FUN_02ef1438(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000020);
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        FUN_02eea768(lVar6);
      }
      uVar3 = thunk_FUN_0565dc68();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_02ebb478(param_2,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_02ebb478(param_2,0,0);
  return iVar1 + -1;
}


