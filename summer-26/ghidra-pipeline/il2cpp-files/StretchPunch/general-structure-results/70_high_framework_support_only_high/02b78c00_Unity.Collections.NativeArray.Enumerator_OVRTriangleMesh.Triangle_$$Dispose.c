/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRTriangleMesh.Triangle>$$Dispose
ENTRY_POINT: 02b78c00
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Collections_NativeArray_Enumerator<OVRTriangleMesh_Triangle>__Dispose
               (undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint in_w9;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (in_w9 < param_3) {
    OVRManager_PassthroughCapabilities___ctor(0);
    in_w9 = *(uint *)(unaff_x21 + 0x18);
  }
  uVar1 = *(uint *)(unaff_x22 + 0x20);
  if ((int)(in_w9 - unaff_w20) < (int)(uVar1 - *(int *)(unaff_x22 + 0x28))) {
    FUN_033b2d60(5,0);
    uVar1 = *(uint *)(unaff_x22 + 0x20);
  }
  if (0 < (int)uVar1) {
    lVar3 = *(long *)(unaff_x22 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar4 = 0;
    puVar5 = (undefined8 *)(lVar3 + 0x38);
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_02b78d04:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < *(int *)(puVar5 + -3)) {
        in_stack_00000018 = 0;
        in_stack_00000020 = 0;
        in_stack_00000028 = 0;
        FUN_03071368(&stack0x00000018,puVar5[-2],puVar5[-1],*puVar5,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x130));
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_02b78d04;
        lVar2 = unaff_x21 + (long)(int)unaff_w20 * 0x18;
        unaff_w20 = unaff_w20 + 1;
        *(undefined8 *)(lVar2 + 0x30) = in_stack_00000028;
        *(undefined8 *)(lVar2 + 0x28) = in_stack_00000020;
        *(undefined8 *)(lVar2 + 0x20) = in_stack_00000018;
        thunk_FUN_01e10808(lVar2 + 0x28,0);
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 4;
    } while (uVar1 != uVar4);
  }
  return;
}


