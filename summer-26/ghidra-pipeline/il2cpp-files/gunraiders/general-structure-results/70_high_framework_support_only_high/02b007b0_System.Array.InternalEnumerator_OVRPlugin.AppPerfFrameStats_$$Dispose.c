/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$Dispose
ENTRY_POINT: 02b007b0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose
               (long *param_1,long param_2,undefined8 *param_3,uint param_4,int param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  iVar1 = (param_4 - param_5) + 1;
  if (iVar1 <= (int)param_4) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      lVar2 = param_2 + (long)(int)param_4 * 0x20;
      in_stack_00000068 = *(undefined8 *)(lVar2 + 0x28);
      in_stack_00000060 = *(undefined8 *)(lVar2 + 0x20);
      in_stack_00000078 = *(undefined8 *)(lVar2 + 0x38);
      in_stack_00000070 = *(undefined8 *)(lVar2 + 0x30);
      in_stack_00000048 = param_3[1];
      in_stack_00000040 = *param_3;
      in_stack_00000058 = param_3[3];
      in_stack_00000050 = param_3[2];
      uVar3 = (**(code **)(*param_1 + 0x1b8))
                        (param_1,&stack0x00000060,&stack0x00000040,*(undefined8 *)(*param_1 + 0x1c0)
                        );
      if ((uVar3 & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 - 1;
    } while (iVar1 <= (int)param_4);
  }
  return 0xffffffff;
}


