/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.BoneCapsule>
ENTRY_POINT: 033389e8
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


int System_Array__InternalArray__get_Item<OVRPlugin_BoneCapsule>
              (long *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long local_a8 [3];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_02dcfd74(param_3);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  iVar1 = thunk_FUN_02da56d8(param_1,0);
  if (1 < iVar1) {
    thunk_FUN_02dfd288(&DAT_06b37980);
    uVar3 = thunk_FUN_02dd3144();
    uVar5 = thunk_FUN_02dfd288(&DAT_06b99890);
    FUN_054f9888(uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar3,param_3);
  }
  uVar2 = FUN_0550100c(param_1,0);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&local_68,(void *)((long)param_1 + uVar7 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      uStack_78 = param_2[1];
      local_80 = *param_2;
      local_70 = param_2[2];
      uVar3 = thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&local_80);
      lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02dcfd18(lVar6);
      }
      local_a8[1] = 0xffffffffffffffff;
      uStack_90 = uStack_60;
      local_a8[2] = local_68;
      local_88 = local_58;
      local_a8[0] = lVar6;
      uVar4 = thunk_FUN_05542350(local_a8,uVar3,0);
      if ((uVar4 & 1) != 0) {
        iVar1 = thunk_FUN_02da5698(param_1,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_02da5698(param_1,0,0);
  return iVar1 + -1;
}


