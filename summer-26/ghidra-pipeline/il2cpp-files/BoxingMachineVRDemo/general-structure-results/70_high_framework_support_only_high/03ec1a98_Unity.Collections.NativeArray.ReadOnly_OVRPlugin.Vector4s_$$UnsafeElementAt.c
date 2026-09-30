/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$UnsafeElementAt
ENTRY_POINT: 03ec1a98
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__UnsafeElementAt(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong in_x9;
  void *unaff_x19;
  size_t unaff_x20;
  undefined8 *__src;
  void *__s;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  __src = (undefined8 *)(param_1 - (in_x9 & 0x1fffffff0));
  __s = (void *)((long)__src - (in_x9 & 0x1fffffff0));
  memset(__s,0,unaff_x20);
  if (*(long *)(unaff_x24 + 0x10) != 0) {
    iVar1 = (*(code *)**(undefined8 **)(unaff_x26 + 0x20))();
    if (iVar1 == 0) {
      puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x38);
      uVar2 = *puVar3;
      *(undefined8 **)(unaff_x29 + -0x10) = __src;
      (*(code *)puVar3[2])(uVar2,puVar3,0,unaff_x29 + -0x10,__src);
      memcpy(__s,__src,unaff_x20);
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8))();
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x48))();
    }
    else {
      lVar5 = *(long *)(unaff_x24 + 0x10);
      if (lVar5 == 0) goto LAB_03ec1c20;
      puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x50);
      uVar2 = *puVar3;
      *(undefined8 **)(unaff_x29 + -0x10) = __src;
      (*(code *)puVar3[2])(uVar2,puVar3,lVar5,unaff_x29 + -0x10,__src);
      memcpy(__s,__src,unaff_x20);
    }
    lVar5 = *(long *)(unaff_x24 + 0x18);
    if (lVar5 != 0) {
      memcpy(__src,__s,unaff_x20);
      lVar6 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      puVar4 = *(undefined8 **)(lVar6 + 0x58);
      uVar2 = *puVar4;
      puVar3 = __src;
      if (-1 < *(int *)(*(long *)(lVar6 + 0x40) + 0x28)) {
        puVar3 = (undefined8 *)*__src;
      }
      *(undefined8 **)(unaff_x29 + -0x10) = puVar3;
      (*(code *)puVar4[2])(uVar2,puVar4,lVar5,unaff_x29 + -0x10);
    }
    memcpy(__src,__s,unaff_x20);
    memcpy(unaff_x19,__src,unaff_x20);
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_03ec1c20:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


