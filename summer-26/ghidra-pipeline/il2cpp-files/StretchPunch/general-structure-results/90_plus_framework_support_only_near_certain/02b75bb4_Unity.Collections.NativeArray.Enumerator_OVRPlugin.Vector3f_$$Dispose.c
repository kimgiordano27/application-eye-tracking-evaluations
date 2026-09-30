/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 02b75bb4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector3f>__Dispose
               (long param_1,long param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3);
  }
  uVar2 = *(uint *)(param_2 + 0x18);
  if (uVar2 < param_3) {
    OVRManager_PassthroughCapabilities___ctor(0);
    uVar2 = *(uint *)(param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((int)(uVar2 - param_3) < (int)(uVar1 - *(int *)(param_1 + 0x28))) {
    FUN_033b2d60(5,0);
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  if (0 < (int)uVar1) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar5 = 0;
    puVar6 = (undefined4 *)(lVar4 + 0x38);
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_02b75cc8:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < (int)puVar6[-6]) {
        in_stack_00000018 = 0;
        in_stack_00000020 = 0;
        in_stack_00000028 = 0;
        FUN_03071200(puVar6[-2],puVar6[-1],*puVar6,&stack0x00000018,*(undefined8 *)(puVar6 + -4),
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x130));
        if (*(uint *)(param_2 + 0x18) <= param_3) goto LAB_02b75cc8;
        lVar3 = param_2 + (long)(int)param_3 * 0x18;
        param_3 = param_3 + 1;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_00000028;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_00000020;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000018;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 8;
    } while (uVar1 != uVar5);
  }
  return;
}


