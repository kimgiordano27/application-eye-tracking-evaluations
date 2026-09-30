/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector3f>$$get_Length
ENTRY_POINT: 028765fc
PROGRAM: sharks-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector3f>__get_Length
               (undefined8 param_1,undefined8 param_2,void *param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong __n;
  long lVar4;
  long unaff_x20;
  undefined8 *puVar5;
  void *__dest;
  long unaff_x24;
  long lVar6;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  lVar6 = *(long *)(param_4 + 0x20);
  lVar4 = *(long *)(lVar6 + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar4 + 0x70) + 0xfc);
  puVar5 = (undefined8 *)
           (&stack0x00000000 +
           -((ulong)*(uint *)(*(long *)(lVar4 + 0x60) + 0xfc) + 0xf & 0x1fffffff0));
  __dest = (void *)((long)puVar5 - (__n + 0xf & 0x1fffffff0));
  memcpy(__dest,param_3,__n);
  puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0xf8);
  uVar2 = *puVar3;
  *(void **)(unaff_x29 + -0x18) = __dest;
  (*(code *)puVar3[2])(uVar2);
  if (*(char *)(unaff_x29 + -0xc) == '\0') {
    bVar1 = false;
  }
  else {
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78);
    uVar2 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    (*(code *)puVar3[2])(uVar2);
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar3 = *(undefined8 **)(lVar4 + 0x100);
    uVar2 = *puVar3;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x60) + 0x28)) {
      puVar5 = (undefined8 *)*puVar5;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    (*(code *)puVar3[2])(uVar2);
    bVar1 = *(char *)(unaff_x29 + -0xc) != '\0';
  }
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


