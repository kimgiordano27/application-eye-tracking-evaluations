/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 03c6e888
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray<OVRPlugin_Vector4s>__System_Collections_IEnumerable_GetEnumerator
               (long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w22;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  if ((**(char **)(lVar3 + 0xb8) != '\0') && (*(int *)(unaff_x19 + 0x18) == 0)) {
    uVar2 = thunk_FUN_02d93fb0(0);
    *(undefined4 *)(unaff_x19 + 0x1c) = uVar2;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  lVar3 = *(long *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
  if (lVar3 != 0) {
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
      thunk_FUN_02dd37b4();
      thunk_FUN_02d6ec70();
      return unaff_w22 < 8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


