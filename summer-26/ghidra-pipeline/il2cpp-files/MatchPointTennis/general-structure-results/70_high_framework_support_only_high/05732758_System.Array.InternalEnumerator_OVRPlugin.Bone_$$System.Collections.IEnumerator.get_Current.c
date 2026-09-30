/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Bone>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 05732758
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


long System_Array_InternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  uint uVar6;
  
  puVar1 = PTR_DAT_09f261c0;
  if ((DAT_0a51d4c6 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f261c0);
    DAT_0a51d4c6 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 == 0) goto LAB_05732854;
  if (((*(char *)(lVar3 + 0x4e9) == '\0') || (*(char *)(param_1 + 0xa4) != '\0')) ||
     (*(char *)(param_1 + 0x100) != '\0')) {
    puVar4 = (undefined4 *)FUN_05732874(param_1);
    uVar2 = *puVar4;
    if (0 < *(int *)(param_1 + 0xe0)) {
      plVar5 = *(long **)(param_1 + 0xe8);
      if (plVar5 == (long *)0x0) {
LAB_05732854:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar2 = (**(code **)(*plVar5 + 0x1a8))(plVar5,uVar2,param_1,*(undefined8 *)(*plVar5 + 0x1b0));
      lVar3 = *(long *)(param_1 + 0xf0);
      if ((lVar3 != 0) && (0 < *(int *)(param_1 + 0xe0) + -1)) {
        uVar6 = 0;
        do {
          if (*(uint *)(lVar3 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar5 = *(long **)(lVar3 + (long)(int)uVar6 * 8 + 0x20);
          if (plVar5 == (long *)0x0) break;
          uVar2 = (**(code **)(*plVar5 + 0x1a8))
                            (plVar5,uVar2,param_1,*(undefined8 *)(*plVar5 + 0x1b0));
          uVar6 = uVar6 + 1;
          if (*(int *)(param_1 + 0xe0) + -1 <= (int)uVar6) goto LAB_05732858;
          lVar3 = *(long *)(param_1 + 0xf0);
        } while (lVar3 != 0);
        goto LAB_05732854;
      }
    }
LAB_05732858:
    *(undefined4 *)(param_1 + 0xf8) = uVar2;
    *(undefined1 *)(param_1 + 0xa4) = 0;
  }
  return param_1 + 0xf8;
}


