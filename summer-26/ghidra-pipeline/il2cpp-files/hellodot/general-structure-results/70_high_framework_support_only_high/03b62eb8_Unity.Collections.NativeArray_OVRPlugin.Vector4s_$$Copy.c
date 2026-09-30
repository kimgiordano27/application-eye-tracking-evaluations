/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 03b62eb8
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
               (void *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 auStack_1b0 [176];
  undefined1 auStack_100 [176];
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04f428ec(8);
  }
  if (0 < *(int *)(param_2 + 0x18)) {
    uVar5 = 0;
    lVar4 = 0x20;
    do {
      lVar2 = *(long *)(param_2 + 0x10);
      if (lVar2 == 0) goto LAB_03b62fb8;
      if (*(uint *)(lVar2 + 0x18) <= uVar5) {
LAB_03b62fbc:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      memcpy(auStack_1b0,(void *)(lVar2 + lVar4),0xb0);
      if (param_3 == 0) {
LAB_03b62fb8:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      pcVar6 = *(code **)(param_3 + 0x18);
      uVar3 = *(undefined8 *)(param_3 + 0x40);
      memcpy(auStack_100,auStack_1b0,0xb0);
      uVar1 = (*pcVar6)(uVar3,auStack_100,*(undefined8 *)(param_3 + 0x28));
      if ((uVar1 & 1) != 0) {
        lVar2 = *(long *)(param_2 + 0x10);
        if (lVar2 != 0) {
          if ((uint)uVar5 < *(uint *)(lVar2 + 0x18)) {
            memcpy(param_1,(void *)(lVar2 + lVar4),0xb0);
            return;
          }
          goto LAB_03b62fbc;
        }
        goto LAB_03b62fb8;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0xb0;
    } while ((long)uVar5 < (long)*(int *)(param_2 + 0x18));
  }
  memset(param_1,0,0xb0);
  return;
}


