/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 049b87e8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__set_Item<OVRPlugin_BodyJointLocation>
               (long *param_1,void *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  long lStack0000000000000198;
  
  lVar1 = tpidr_el0;
  lStack0000000000000198 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_04482014(param_3);
  }
  in_stack_00000178 = 0;
  in_stack_00000170 = 0;
  in_stack_00000188 = 0;
  in_stack_00000180 = 0;
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  in_stack_00000168 = 0;
  in_stack_00000160 = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  in_stack_00000148 = 0;
  in_stack_00000140 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  iVar2 = thunk_FUN_04457530(param_1,0);
  if (1 < iVar2) {
    thunk_FUN_044adef4(PTR_DAT_09f25260);
    uVar5 = thunk_FUN_0448520c();
    uVar6 = thunk_FUN_044adef4(PTR_DAT_09f25268);
    FUN_07a4f424(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar5,param_3);
  }
  uVar3 = FUN_07a56bec(param_1,0);
  if (0 < (int)uVar3) {
    uVar8 = 0;
    do {
      memcpy(&stack0x00000110,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      memcpy(&stack0x00000090,param_2,0x80);
      thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000090);
      lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        FUN_04481fb8(lVar7);
      }
      memcpy(&stack0x00000010,&stack0x00000110,0x80);
      uVar4 = thunk_FUN_07a98984();
      if ((uVar4 & 1) != 0) {
        iVar2 = thunk_FUN_044574ec(param_1,0,0);
        iVar2 = iVar2 + (int)uVar8;
        goto LAB_049b891c;
      }
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
  }
  iVar2 = thunk_FUN_044574ec(param_1,0,0);
  iVar2 = iVar2 + -1;
LAB_049b891c:
  if (*(long *)(lVar1 + 0x28) == lStack0000000000000198) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


