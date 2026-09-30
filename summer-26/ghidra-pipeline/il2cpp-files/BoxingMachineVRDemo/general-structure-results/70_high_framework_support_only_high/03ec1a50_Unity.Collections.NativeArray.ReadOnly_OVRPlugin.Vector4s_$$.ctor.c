/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 03ec1a50
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>___ctor
               (long param_1,void *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong __n;
  undefined8 *__src;
  void *__s;
  long lVar6;
  undefined8 *puStack_10;
  long lStack_8;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar6 + 0x40) + 0xfc);
  uVar5 = __n + 0xf & 0x1fffffff0;
  __src = (undefined8 *)((long)&puStack_10 - uVar5);
  __s = (void *)((long)__src - uVar5);
  memset(__s,0,__n);
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar2 = (*(code *)**(undefined8 **)(lVar6 + 0x20))();
    puStack_10 = __src;
    if (iVar2 == 0) {
      puVar3 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38);
      (*(code *)puVar3[2])(*puVar3,puVar3,0,&puStack_10,__src);
      memcpy(__s,__src,__n);
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8))(param_1)
      ;
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48))
                (param_1,iVar2 + 1);
    }
    else {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_03ec1c20;
      puVar3 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50);
      (*(code *)puVar3[2])(*puVar3,puVar3,*(long *)(param_1 + 0x10),&puStack_10,__src);
      memcpy(__s,__src,__n);
    }
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 != 0) {
      memcpy(__src,__s,__n);
      lVar4 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
      puVar3 = *(undefined8 **)(lVar4 + 0x58);
      puStack_10 = __src;
      if (-1 < *(int *)(*(long *)(lVar4 + 0x40) + 0x28)) {
        puStack_10 = (undefined8 *)*__src;
      }
      (*(code *)puVar3[2])(*puVar3,puVar3,lVar6,&puStack_10);
    }
    memcpy(__src,__s,__n);
    memcpy(param_2,__src,__n);
    if (*(long *)(lVar1 + 0x28) == lStack_8) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_03ec1c20:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


