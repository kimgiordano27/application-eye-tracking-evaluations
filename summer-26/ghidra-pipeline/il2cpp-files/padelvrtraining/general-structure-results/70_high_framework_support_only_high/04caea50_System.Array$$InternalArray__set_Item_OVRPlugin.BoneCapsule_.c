/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.BoneCapsule>
ENTRY_POINT: 04caea50
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__set_Item<OVRPlugin_BoneCapsule>
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
  long local_678 [2];
  undefined1 auStack_668 [512];
  undefined1 auStack_468 [512];
  undefined1 auStack_268 [512];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_03d8f2c8(param_3);
  }
  memset(auStack_268,0,0x200);
  iVar2 = thunk_FUN_03d9e884(param_1,0);
  if (1 < iVar2) {
    thunk_FUN_03d1e194(PTR_DAT_091f9158);
    uVar4 = thunk_FUN_03d2ef40();
    uVar6 = thunk_FUN_03d1e194(PTR_DAT_091f9160);
    FUN_071895f4(uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar4,param_3);
  }
  uVar3 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(param_1,0);
  if (0 < (int)uVar3) {
    uVar8 = 0;
    do {
      memcpy(auStack_268,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      memcpy(auStack_468,param_2,0x200);
      uVar4 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),auStack_468);
      lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c(lVar7);
      }
      local_678[1] = 0xffffffffffffffff;
      local_678[0] = lVar7;
      memcpy(auStack_668,auStack_268,0x200);
      uVar5 = thunk_FUN_071d4ed8(local_678,uVar4,0);
      if ((uVar5 & 1) != 0) {
        iVar2 = thunk_FUN_03d9e840(param_1,0,0);
        iVar2 = iVar2 + (int)uVar8;
        goto LAB_04caeb9c;
      }
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
  }
  iVar2 = thunk_FUN_03d9e840(param_1,0,0);
  iVar2 = iVar2 + -1;
LAB_04caeb9c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


