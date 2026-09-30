/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04cb59c8
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


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerator_get_Current
          (long param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (0 < iVar3) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
LAB_04cb5a78:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar5 = 0;
    puVar6 = (undefined4 *)(lVar4 + 0x2c);
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_04cb5a74:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      if (-1 < (int)puVar6[-3]) {
        plVar1 = (long *)FUN_03c15d30(*(undefined8 *)
                                       (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x118));
        if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_04cb5a74;
        if (plVar1 == (long *)0x0) goto LAB_04cb5a78;
        uVar2 = (**(code **)(*plVar1 + 0x1b8))
                          (plVar1,*puVar6,param_2,*(undefined8 *)(*plVar1 + 0x1c0));
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        iVar3 = *(int *)(param_1 + 0x20);
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 4;
    } while ((long)uVar5 < (long)iVar3);
  }
  return 0;
}


