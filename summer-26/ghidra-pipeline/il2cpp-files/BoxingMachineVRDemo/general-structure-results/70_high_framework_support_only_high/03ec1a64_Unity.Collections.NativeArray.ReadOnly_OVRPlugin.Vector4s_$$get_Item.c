/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$get_Item
ENTRY_POINT: 03ec1a64
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__get_Item
               (long param_1,void *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong __n;
  undefined8 *__src;
  void *__s;
  long lVar8;
  long unaff_x29;
  undefined8 auStack_10 [2];
  
  lVar1 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar1 + 0x28);
  lVar8 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar8 + 0x40) + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src = (undefined8 *)((long)auStack_10 - uVar7);
  __s = (void *)((long)__src - uVar7);
  memset(__s,0,__n);
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar2 = (*(code *)**(undefined8 **)(lVar8 + 0x20))();
    if (iVar2 == 0) {
      puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38);
      uVar3 = *puVar4;
      *(undefined8 **)(unaff_x29 + -0x10) = __src;
      (*(code *)puVar4[2])(uVar3,puVar4,0,unaff_x29 + -0x10,__src);
      memcpy(__s,__src,__n);
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8))(param_1)
      ;
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48))
                (param_1,iVar2 + 1);
    }
    else {
      lVar8 = *(long *)(param_1 + 0x10);
      if (lVar8 == 0) goto LAB_03ec1c20;
      puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50);
      uVar3 = *puVar4;
      *(undefined8 **)(unaff_x29 + -0x10) = __src;
      (*(code *)puVar4[2])(uVar3,puVar4,lVar8,unaff_x29 + -0x10,__src);
      memcpy(__s,__src,__n);
    }
    lVar8 = *(long *)(param_1 + 0x18);
    if (lVar8 != 0) {
      memcpy(__src,__s,__n);
      lVar6 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
      puVar5 = *(undefined8 **)(lVar6 + 0x58);
      uVar3 = *puVar5;
      puVar4 = __src;
      if (-1 < *(int *)(*(long *)(lVar6 + 0x40) + 0x28)) {
        puVar4 = (undefined8 *)*__src;
      }
      *(undefined8 **)(unaff_x29 + -0x10) = puVar4;
      (*(code *)puVar5[2])(uVar3,puVar5,lVar8,unaff_x29 + -0x10);
    }
    memcpy(__src,__s,__n);
    memcpy(param_2,__src,__n);
    if (*(long *)(lVar1 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_03ec1c20:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


