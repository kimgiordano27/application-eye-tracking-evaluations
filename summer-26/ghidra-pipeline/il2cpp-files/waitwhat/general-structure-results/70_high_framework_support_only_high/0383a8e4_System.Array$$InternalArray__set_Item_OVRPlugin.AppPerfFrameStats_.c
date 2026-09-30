/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 0383a8e4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_AppPerfFrameStats>
              (long *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_031c0a30(param_3);
  }
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  iVar1 = thunk_FUN_03196068(param_1,0);
  if (1 < iVar1) {
    thunk_FUN_031edd38(&DAT_07259f68);
    uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar5 = thunk_FUN_031edd38(&DAT_072e0930);
    FUN_05940bf8(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar4,param_3);
  }
  uVar2 = FUN_059483e8(param_1,0);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000070,(void *)((long)param_1 + uVar7 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      in_stack_00000048 = param_2[1];
      in_stack_00000040 = *param_2;
      in_stack_00000058 = param_2[3];
      in_stack_00000050 = param_2[2];
      in_stack_00000068 = param_2[5];
      in_stack_00000060 = param_2[4];
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000040);
      lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        FUN_031c09d4(lVar6);
      }
      uVar3 = thunk_FUN_05988210();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_03196028(param_1,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_03196028(param_1,0,0);
  return iVar1 + -1;
}


