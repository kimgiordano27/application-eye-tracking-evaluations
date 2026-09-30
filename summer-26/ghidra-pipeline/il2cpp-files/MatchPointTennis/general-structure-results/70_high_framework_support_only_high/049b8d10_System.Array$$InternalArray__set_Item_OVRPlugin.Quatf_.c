/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Quatf>
ENTRY_POINT: 049b8d10
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


void System_Array__InternalArray__set_Item<OVRPlugin_Quatf>
               (long *param_1,void *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long alStack_1c0 [2];
  undefined1 auStack_1b0 [144];
  undefined1 auStack_120 [140];
  undefined1 auStack_94 [140];
  long lStack_8;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_04482014(param_3);
  }
  memset(auStack_94,0,0x8c);
  iVar2 = thunk_FUN_04457530(param_1,0);
  if (1 < iVar2) {
    thunk_FUN_044adef4(PTR_DAT_09f25260);
    uVar4 = thunk_FUN_0448520c();
    uVar6 = thunk_FUN_044adef4(PTR_DAT_09f25268);
    FUN_07a4f424(uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar4,param_3);
  }
  uVar3 = FUN_07a56bec(param_1,0);
  if (0 < (int)uVar3) {
    uVar8 = 0;
    do {
      memcpy(auStack_94,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      memcpy(auStack_120,param_2,0x8c);
      uVar4 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),auStack_120);
      lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04481fb8(lVar7);
      }
      alStack_1c0[1] = 0xffffffffffffffff;
      alStack_1c0[0] = lVar7;
      memcpy(auStack_1b0,auStack_94,0x8c);
      uVar5 = thunk_FUN_07a98984(alStack_1c0,uVar4,0);
      if ((uVar5 & 1) != 0) {
        iVar2 = thunk_FUN_044574ec(param_1,0,0);
        iVar2 = iVar2 + (int)uVar8;
        goto LAB_049b8e50;
      }
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
  }
  iVar2 = thunk_FUN_044574ec(param_1,0,0);
  iVar2 = iVar2 + -1;
LAB_049b8e50:
  if (*(long *)(lVar1 + 0x28) == lStack_8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


