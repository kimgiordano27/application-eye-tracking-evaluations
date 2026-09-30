/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Vector3f>
ENTRY_POINT: 0239b23c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

void System_Array__InternalArray__ICollection_Add<OVRPlugin_Vector3f>
               (long param_1,undefined8 *param_2,void *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong __n;
  void *__src;
  undefined8 *__dest;
  long *plVar6;
  undefined8 *apuStack_30 [2];
  long lStack_20;
  void *pvStack_18;
  void *pvStack_10;
  long lStack_8;
  
  lVar2 = tpidr_el0;
  lStack_8 = *(long *)(lVar2 + 0x28);
  plVar6 = *(long **)(param_4 + 0x38);
  apuStack_30[1] = param_2;
  if (plVar6 == (long *)0x0) {
    FUN_01c5d288(PTR_DAT_0422fdb8);
    plVar6 = *(long **)(param_4 + 0x38);
    if (plVar6 == (long *)0x0) {
      FUN_01c723f0(param_4);
      plVar6 = *(long **)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*plVar6 + 0xfc);
  uVar5 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)apuStack_30 - uVar5);
  __src = (void *)((long)__dest - uVar5);
  if (param_1 != 0) {
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      param_2 = apuStack_30 + 1;
    }
    memcpy(__dest,param_2,__n);
    if (*(int *)(*(long *)PTR_DAT_0422fdb8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      plVar6 = *(long **)(param_4 + 0x38);
    }
    puVar1 = (undefined8 *)plVar6[1];
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    lStack_20 = param_1;
    pvStack_18 = __dest;
    pvStack_10 = __src;
    (*(code *)puVar1[2])(*puVar1,puVar1,0,&lStack_20,__src);
    memcpy(param_3,__src,__n);
    if (*(long *)(lVar2 + 0x28) == lStack_8) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  thunk_FUN_01c273e8(PTR_DAT_0422fa20);
  uVar3 = thunk_FUN_01c496e0();
  uVar4 = thunk_FUN_01c273e8(PTR_DAT_04231c48);
  FUN_0323fc78(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar3,param_4);
}


