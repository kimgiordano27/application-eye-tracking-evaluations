/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 02b01c18
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_InternalEnumerator<OVRPlugin_Vector3f>__Dispose
               (long *param_1,long param_2,undefined8 *param_3,uint param_4)

{
  ulong uVar1;
  int in_w8;
  undefined8 *puVar2;
  long lVar3;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  if ((int)param_4 < in_w8) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    puVar2 = (undefined8 *)(param_2 + (long)(int)param_4 * 0x38 + 0x20);
    lVar3 = (long)in_w8 - (long)(int)param_4;
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      in_stack_000000f0 = puVar2[6];
      in_stack_000000d8 = puVar2[3];
      in_stack_000000d0 = puVar2[2];
      in_stack_000000e8 = puVar2[5];
      in_stack_000000e0 = puVar2[4];
      in_stack_000000c8 = puVar2[1];
      in_stack_000000c0 = *puVar2;
      in_stack_00000098 = param_3[3];
      in_stack_00000090 = param_3[2];
      in_stack_000000a8 = param_3[5];
      in_stack_000000a0 = param_3[4];
      in_stack_000000b0 = param_3[6];
      in_stack_00000088 = param_3[1];
      in_stack_00000080 = *param_3;
      uVar1 = (**(code **)(*param_1 + 0x1b8))
                        (param_1,&stack0x000000c0,&stack0x00000080,*(undefined8 *)(*param_1 + 0x1c0)
                        );
      if ((uVar1 & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 + 1;
      lVar3 = lVar3 + -1;
      puVar2 = puVar2 + 7;
    } while (lVar3 != 0);
  }
  return 0xffffffff;
}


