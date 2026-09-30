/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$get_Item
ENTRY_POINT: 03c6c298
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__get_Item(void)

{
  undefined8 *puVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  ulong uVar2;
  int in_w8;
  long lVar3;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  long unaff_x23;
  long lVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  if (!in_ZR && in_NG == in_OV) {
    lVar4 = (long)(int)unaff_w19 * 0x18 + 0x20;
    lVar5 = (long)in_w8 - (long)(int)unaff_w19;
    do {
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) {
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Dispose:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(uint *)(lVar3 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      if (unaff_x20 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Dispose;
      in_stack_00000020 = *puVar1;
      in_stack_00000028 = puVar1[1];
      in_stack_00000030 = puVar1[2];
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000020,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar2 & 1) != 0) goto LAB_03c6c318;
      unaff_w19 = unaff_w19 + 1;
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + 0x18;
    } while (lVar5 != 0);
  }
  unaff_w19 = 0xffffffff;
LAB_03c6c318:
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000038) {
    return unaff_w19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


