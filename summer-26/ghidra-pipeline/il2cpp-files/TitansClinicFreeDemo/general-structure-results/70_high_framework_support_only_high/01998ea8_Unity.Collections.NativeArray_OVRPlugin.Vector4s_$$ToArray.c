/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$ToArray
ENTRY_POINT: 01998ea8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4s>__ToArray
               (long param_1,uint param_2,int param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  if (*(uint *)(param_1 + 0x18) < param_2) {
    FUN_01f886e4(0);
  }
  if ((param_3 < 0) || (*(int *)(param_1 + 0x18) - param_3 < (int)param_2)) {
    FUN_01f88710(0);
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f795cc(8,0);
  }
  if ((int)param_2 < (int)(param_3 + param_2)) {
    lVar4 = (long)(int)param_2 * 0x6c + 0x20;
    lVar5 = (long)(int)(param_3 + param_2) - (long)(int)param_2;
    do {
      lVar2 = *(long *)(param_1 + 0x10);
      if (lVar2 == 0) {
LAB_01998fa4:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if (*(uint *)(lVar2 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      memcpy(&stack0x00000000,(void *)(lVar2 + lVar4),0x6c);
      if (param_4 == 0) goto LAB_01998fa4;
      pcVar6 = *(code **)(param_4 + 0x18);
      uVar3 = *(undefined8 *)(param_4 + 0x40);
      memcpy(&stack0x00000070,&stack0x00000000,0x6c);
      uVar1 = (*pcVar6)(uVar3,&stack0x00000070,*(undefined8 *)(param_4 + 0x28));
      if ((uVar1 & 1) != 0) {
        return param_2;
      }
      param_2 = param_2 + 1;
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + 0x6c;
    } while (lVar5 != 0);
  }
  return 0xffffffff;
}


