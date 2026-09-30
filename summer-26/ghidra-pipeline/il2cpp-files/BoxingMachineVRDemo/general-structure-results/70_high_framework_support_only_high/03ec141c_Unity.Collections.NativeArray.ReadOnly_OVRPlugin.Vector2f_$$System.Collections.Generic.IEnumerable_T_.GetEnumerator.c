/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector2f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 03ec141c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1,long param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x21;
  
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x18))
              (*(undefined8 *)(param_1 + 0x40),param_3,*(undefined8 *)(param_1 + 0x28));
  }
  plVar2 = (long *)(param_2 + 0x40);
  if (*plVar2 == 0) {
    *plVar2 = param_3;
LAB_03ec14a4:
    thunk_FUN_02dd37b4(plVar2,param_3);
    return;
  }
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (*(int *)(param_2 + 0x38) <= (int)(uVar1 + 1)) {
      lVar3 = *(long *)(param_2 + 0x30);
      *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + -1;
      if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03ec14e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),param_3,*(undefined8 *)(lVar3 + 0x28));
        return;
      }
      return;
    }
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x98);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 != 0) {
      if (*(uint *)(lVar4 + 0x18) <= uVar1) {
        FUN_03aac494(lVar3,param_3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                    );
        return;
      }
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      plVar2 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *plVar2 = param_3;
      goto LAB_03ec14a4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


