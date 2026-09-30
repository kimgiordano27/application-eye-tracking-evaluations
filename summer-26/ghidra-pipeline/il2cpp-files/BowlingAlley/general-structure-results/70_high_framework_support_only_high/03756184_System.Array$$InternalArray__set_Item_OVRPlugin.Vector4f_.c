/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Vector4f>
ENTRY_POINT: 03756184
PROGRAM: BowlingAlley-libil2cpp.so
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
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_03293514(param_3);
  }
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  iVar1 = thunk_FUN_032f6668(param_1,0);
  if (1 < iVar1) {
    thunk_FUN_032e1da0(PTR_DAT_0727fb90);
    uVar4 = thunk_FUN_032a56a0();
    uVar5 = thunk_FUN_032e1da0(PTR_DAT_0727fb98);
    FUN_05934a58(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar4,param_3);
  }
  uVar2 = FUN_0593be7c(param_1,0);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000050,(void *)((long)param_1 + uVar7 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      in_stack_00000038 = param_2[1];
      in_stack_00000030 = *param_2;
      in_stack_00000048 = param_2[3];
      in_stack_00000040 = param_2[2];
      thunk_FUN_032a52d0(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000030);
      lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        FUN_032934b8(lVar6);
      }
      uVar3 = thunk_FUN_0597d930();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_032f6624(param_1,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_032f6624(param_1,0,0);
  return iVar1 + -1;
}


