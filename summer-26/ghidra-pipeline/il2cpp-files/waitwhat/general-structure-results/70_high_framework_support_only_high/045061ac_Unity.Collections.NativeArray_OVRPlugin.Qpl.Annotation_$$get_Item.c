/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$get_Item
ENTRY_POINT: 045061ac
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__get_Item
               (long param_1,uint param_2,int param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  if (*(uint *)(param_1 + 0x18) < param_2) {
    FUN_05951134(0);
  }
  if ((param_3 < 0) || (*(int *)(param_1 + 0x18) - param_3 < (int)param_2)) {
    FUN_05951160(0);
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05941350(8,0);
  }
  if ((int)param_2 < (int)(param_3 + param_2)) {
    lVar5 = (long)(int)(param_3 + param_2) - (long)(int)param_2;
    lVar6 = (long)(int)param_2 * 0x18 + 0x20;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) {
LAB_045062c8:
        if (*(long *)(lVar2 + 0x28) == lStack_48) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_045062f0;
      }
      if (*(uint *)(lVar4 + 0x18) <= param_2) {
        if (*(long *)(lVar2 + 0x28) == lStack_48) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        goto LAB_045062f0;
      }
      if (param_4 == 0) goto LAB_045062c8;
      puVar1 = (undefined8 *)(lVar4 + lVar6);
      uStack_58 = puVar1[1];
      uStack_60 = *puVar1;
      uStack_50 = puVar1[2];
      uVar3 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),&uStack_60,*(undefined8 *)(param_4 + 0x28))
      ;
      if ((uVar3 & 1) != 0) goto LAB_0450629c;
      lVar5 = lVar5 + -1;
      lVar6 = lVar6 + 0x18;
      param_2 = param_2 + 1;
    } while (lVar5 != 0);
  }
  param_2 = 0xffffffff;
LAB_0450629c:
  if (*(long *)(lVar2 + 0x28) == lStack_48) {
    return param_2;
  }
LAB_045062f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


