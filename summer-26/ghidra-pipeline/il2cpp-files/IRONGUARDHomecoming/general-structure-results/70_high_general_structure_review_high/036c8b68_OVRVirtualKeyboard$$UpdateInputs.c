/*
FUNCTION_NAME: OVRVirtualKeyboard$$UpdateInputs
ENTRY_POINT: 036c8b68
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16] OVRVirtualKeyboard__UpdateInputs(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xbb0));
  *(undefined1 *)(unaff_x21 + 0x1db) = 1;
  puVar2 = Method_UnityEngine_UIElements_ScheduledItem_<>c_<_cctor>b__25_1__;
  plVar3 = *(long **)(unaff_x20 + 0x40);
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_SceneManagerHelper_<>c__DisplayClass11_0_<RequestSceneCapture>b__0__ +
                     0x130);
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_SceneManagerHelper_<>c__DisplayClass11_0_<RequestSceneCapture>b__0__)) {
      FUN_036c66bc(plVar3,unaff_w19);
      auVar4._4_4_ = extraout_var;
      auVar4._0_4_ = extraout_s0;
      auVar4._8_8_ = extraout_var_00;
      return auVar4;
    }
  }
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0403f2cc(*(undefined8 *)puVar2,0);
  return ZEXT816(0xbf800000);
}


