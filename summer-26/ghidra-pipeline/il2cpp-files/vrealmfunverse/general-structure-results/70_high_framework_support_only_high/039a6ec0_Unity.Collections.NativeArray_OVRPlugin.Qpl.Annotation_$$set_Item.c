/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$set_Item
ENTRY_POINT: 039a6ec0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__set_Item(undefined8 param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int in_w9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if (in_w9 == 0) {
    thunk_FUN_02b9ad44(param_1);
  }
  uVar1 = FUN_039a5cf4();
  if ((uVar1 & 1) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218(lVar4);
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44();
    }
    puVar2 = (undefined8 *)thunk_FUN_02b7978c();
    in_stack_00000038 = puVar2[1];
    in_stack_00000030 = *puVar2;
    in_stack_00000048 = puVar2[3];
    in_stack_00000040 = puVar2[2];
    in_stack_00000050 = puVar2[4];
    uVar3 = FUN_03389dfc(*(undefined8 *)(unaff_x19 + 0x10),&stack0x00000030,0,
                         *(undefined4 *)(unaff_x19 + 0x18),
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) +
                                                                  0xc0) + 0xd0) + 0x20) + 0xc0) +
                          0x150));
  }
  return uVar3;
}


