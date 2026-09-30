/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.BoneCapsule>
ENTRY_POINT: 037558a4
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


int System_Array__InternalArray__set_Item<OVRPlugin_BoneCapsule>
              (long param_1,long *param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000018;
  
  if (param_1 == 0) {
    FUN_03293514(param_4);
  }
  in_stack_00000018 = 0;
  iVar1 = thunk_FUN_032f6668(param_2,0);
  if (iVar1 < 2) {
    uVar2 = FUN_0593be7c(param_2,0);
    if (0 < (int)uVar2) {
      uVar6 = 0;
      do {
        memcpy(&stack0x00000018,(void *)((long)param_2 + uVar6 * *(uint *)(*param_2 + 0x104) + 0x20)
               ,(ulong)*(uint *)(*param_2 + 0x104));
        in_stack_00000008 = param_3;
        uVar3 = thunk_FUN_032a52d0(*(undefined8 *)(*(long *)(param_4 + 0x38) + 8),&stack0x00000008);
        uVar4 = FUN_06c11820(&stack0x00000018,uVar3,
                             *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x10));
        if ((uVar4 & 1) != 0) {
          iVar1 = thunk_FUN_032f6624(param_2,0,0);
          return iVar1 + (int)uVar6;
        }
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
    }
    iVar1 = thunk_FUN_032f6624(param_2,0,0);
    return iVar1 + -1;
  }
  thunk_FUN_032e1da0(PTR_DAT_0727fb90);
  uVar3 = thunk_FUN_032a56a0();
  uVar5 = thunk_FUN_032e1da0(PTR_DAT_0727fb98);
  FUN_05934a58(uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar3,param_4);
}


