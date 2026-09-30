/*
FUNCTION_NAME: System.Array$$Resize<OVRPlugin.Quatf>
ENTRY_POINT: 03bbe44c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__Resize<OVRPlugin_Quatf>(long *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
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
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_0322bf50(param_3);
  }
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  iVar1 = thunk_FUN_03201a1c(param_1,0);
  if (1 < iVar1) {
    thunk_FUN_03257e30(PTR_DAT_075d6460);
    uVar4 = thunk_FUN_0322f148();
    uVar5 = thunk_FUN_03257e30(PTR_DAT_075d6468);
    FUN_05e12d58(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar4,param_3);
  }
  uVar2 = FUN_05e1a3d8(param_1,0);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000050,(void *)((long)param_1 + uVar7 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      in_stack_00000038 = param_2[1];
      in_stack_00000030 = *param_2;
      in_stack_00000048 = param_2[3];
      in_stack_00000040 = param_2[2];
      thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000030);
      lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        FUN_0322bef4(lVar6);
      }
      uVar3 = thunk_FUN_05e5b8f0();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_032019d8(param_1,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_032019d8(param_1,0,0);
  return iVar1 + -1;
}


