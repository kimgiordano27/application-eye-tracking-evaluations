/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Equals
ENTRY_POINT: 06e25458
PROGRAM: Hyper-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Equals
               (undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_08d8ca5c(8);
  }
  if (0 < *(int *)(param_2 + 0x18)) {
    uVar4 = 0;
    lVar3 = 0x20;
    do {
      lVar2 = *(long *)(param_2 + 0x10);
      if (lVar2 == 0) goto LAB_06e25538;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_06e2553c:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      if (param_3 == 0) {
LAB_06e25538:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      memcpy(&stack0x00000000,(void *)(lVar2 + lVar3),0x48);
      memcpy(&stack0x00000048,&stack0x00000000,0x48);
      uVar1 = (**(code **)(param_3 + 0x18))
                        (*(undefined8 *)(param_3 + 0x40),&stack0x00000048,
                         *(undefined8 *)(param_3 + 0x28));
      if ((uVar1 & 1) != 0) {
        lVar2 = *(long *)(param_2 + 0x10);
        if (lVar2 != 0) {
          if ((uint)uVar4 < *(uint *)(lVar2 + 0x18)) {
            memcpy(param_1,(void *)(lVar2 + lVar3),0x48);
            return;
          }
          goto LAB_06e2553c;
        }
        goto LAB_06e25538;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x48;
    } while ((long)uVar4 < (long)*(int *)(param_2 + 0x18));
  }
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}


