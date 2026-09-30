/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector2f>$$get_Current
ENTRY_POINT: 01617b14
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector2f>__get_Current(long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x25;
  long lVar5;
  int unaff_w27;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000028;
  
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar4 = unaff_w27 / (int)uVar2;
    }
    uVar3 = unaff_w27 - iVar4 * uVar2;
    if (uVar3 < uVar2) {
      lVar5 = *(long *)(unaff_x20 + 0x18);
      piVar1 = (int *)(param_1 + (ulong)uVar3 * 4 + 0x20);
      if (lVar5 == 0)
      goto Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose;
      if (unaff_w19 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = lVar5 + (long)(int)unaff_w19 * 0x28;
        *(int *)(lVar5 + 0x20) = unaff_w27;
        *(int *)(lVar5 + 0x24) = *piVar1 + -1;
        *(undefined4 *)(lVar5 + 0x28) = in_stack_00000028._4_4_;
        uVar7 = unaff_x25[1];
        uVar6 = *unaff_x25;
        *(undefined8 *)(lVar5 + 0x40) = unaff_x25[2];
        *(undefined8 *)(lVar5 + 0x38) = uVar7;
        *(undefined8 *)(lVar5 + 0x30) = uVar6;
        thunk_FUN_01286abc(lVar5 + 0x38,0);
        *piVar1 = unaff_w19 + 1;
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


