/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0364122c
PROGRAM: hellodot-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_Reset
               (long param_1,long param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long in_x9;
  undefined8 *__dest;
  void *unaff_x20;
  long unaff_x21;
  ulong __n;
  long unaff_x23;
  long lVar4;
  long lVar5;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  __n = (ulong)*(uint *)(param_1 + 0xfc);
  __dest = (undefined8 *)(in_x9 - (__n + 0xf & 0x1fffffff0));
  lVar4 = *(long *)(param_2 + 0x10);
  if (-1 < *(int *)(param_1 + 0x28)) {
    param_3 = (void *)(unaff_x29 + -0x20);
  }
  memcpy(__dest,param_3,__n);
  if (lVar4 != 0) {
    puVar2 = *(undefined8 **)(*(long *)(unaff_x26 + 0xc0) + 0x18);
    uVar1 = *puVar2;
    puVar3 = __dest;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x26 + 0xc0) + 0x10) + 0x28)) {
      puVar3 = (undefined8 *)*__dest;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
    (*(code *)puVar2[2])(uVar1,puVar2,lVar4,unaff_x29 + -0x18,unaff_x29 + -0x10);
    if (*(char *)(unaff_x29 + -0x10) == '\0') {
      uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30))();
    }
    else {
      lVar5 = *(long *)(unaff_x21 + 0x20);
      lVar4 = *(long *)(unaff_x23 + 0x10);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x28)) {
        unaff_x20 = (void *)(unaff_x29 + -0x20);
      }
      memcpy(__dest,unaff_x20,__n);
      if (lVar4 == 0) goto LAB_0364134c;
      lVar5 = *(long *)(lVar5 + 0xc0);
      puVar2 = *(undefined8 **)(lVar5 + 0x20);
      uVar1 = *puVar2;
      if (-1 < *(int *)(*(long *)(lVar5 + 0x10) + 0x28)) {
        __dest = (undefined8 *)*__dest;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = __dest;
      (*(code *)puVar2[2])(uVar1,puVar2,lVar4,unaff_x29 + -0x18,unaff_x29 + -0x10);
      uVar1 = *(undefined8 *)(unaff_x29 + -0x10);
    }
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
LAB_0364134c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


