/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector3f>$$UnsafeElementAt
ENTRY_POINT: 03bc77e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 125
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector3f>__UnsafeElementAt
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
               undefined8 param_6,long param_7)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  ulong uVar1;
  long lVar2;
  int unaff_w25;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (in_ZR || in_NG != in_OV) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    do {
      if (*(uint *)(param_2 + 0x18) <= param_5) {
LAB_03bc78b8:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      in_stack_00000020 = param_3;
      in_stack_00000028 = param_4;
      DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                (**(undefined8 **)(*(long *)(param_7 + 0x20) + 0xc0),&stack0x00000020);
      lVar2 = **(long **)(*(long *)(param_7 + 0x20) + 0xc0);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        FUN_02b76218(lVar2);
      }
      if (*(uint *)(param_2 + 0x18) <= param_5) goto LAB_03bc78b8;
      uVar1 = thunk_FUN_04dd5180();
      if ((uVar1 & 1) != 0) {
        return param_5;
      }
      param_5 = param_5 - 1;
    } while (unaff_w25 <= (int)param_5);
  }
  return 0xffffffff;
}


