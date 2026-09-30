/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopySafe
ENTRY_POINT: 047dfab4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopySafe
               (long param_1,undefined8 ****param_2,undefined8 ****param_3,long param_4)

{
  undefined8 ****ppppuVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *__dest;
  undefined8 *__dest_00;
  ulong __n;
  ulong __n_00;
  long lVar7;
  long alStack_40 [2];
  undefined8 ***pppuStack_30;
  undefined8 ***pppuStack_28;
  undefined8 *puStack_20;
  void *pvStack_18;
  undefined8 *puStack_10;
  long lStack_8;
  
  alStack_40[1] = tpidr_el0;
  lStack_8 = *(long *)(alStack_40[1] + 0x28);
  lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  lVar7 = *(long *)(lVar6 + 0x30);
  __n_00 = (ulong)*(uint *)(lVar7 + 0xfc);
  __n = (ulong)*(uint *)(*(long *)(lVar6 + 0x48) + 0xfc);
  __dest_00 = (undefined8 *)((long)alStack_40 - (__n_00 + 0xf & 0x1fffffff0));
  __dest = (undefined8 *)((long)__dest_00 - (__n + 0xf & 0x1fffffff0));
  ppppuVar1 = param_2;
  if (-1 < *(int *)(lVar7 + 0x28)) {
    ppppuVar1 = &pppuStack_28;
  }
  pppuStack_30 = param_3;
  pppuStack_28 = param_2;
  memcpy(__dest_00,ppppuVar1,__n_00);
  uVar2 = FUN_03642bb8(lVar7,__dest_00);
  if ((uVar2 & 1) == 0) {
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar3 = thunk_FUN_0367fe20();
    uVar4 = thunk_FUN_036aa1c8(PTR_DAT_07a00250);
    FUN_05d7e1a0(uVar3,uVar4,0);
    if (*(long *)(alStack_40[1] + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar3,param_4);
    }
  }
  else {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    lVar6 = *(long *)(param_4 + 0x20);
    ppppuVar1 = param_2;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x28)) {
      ppppuVar1 = &pppuStack_28;
    }
    memcpy(__dest_00,ppppuVar1,__n_00);
    lVar6 = *(long *)(lVar6 + 0xc0);
    puVar5 = *(undefined8 **)(lVar6 + 0x38);
    puStack_10 = __dest_00;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x30) + 0x28)) {
      puStack_10 = (undefined8 *)*__dest_00;
    }
    (*(code *)puVar5[2])(*puVar5,puVar5,param_1,&puStack_10,&puStack_20);
    puVar5 = puStack_20;
    lVar6 = *(long *)(param_4 + 0x20);
    if (puStack_20 == (undefined8 *)0x0) {
      if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x28)) {
        param_2 = &pppuStack_28;
      }
      memcpy(__dest_00,param_2,__n_00);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x48) + 0x28)) {
        param_3 = &pppuStack_30;
      }
      memcpy(__dest,param_3,__n);
      lVar6 = *(long *)(lVar6 + 0xc0);
      puVar5 = *(undefined8 **)(lVar6 + 0x50);
      if (-1 < *(int *)(*(long *)(lVar6 + 0x30) + 0x28)) {
        __dest_00 = (undefined8 *)*__dest_00;
      }
      if (-1 < *(int *)(*(long *)(lVar6 + 0x48) + 0x28)) {
        __dest = (undefined8 *)*__dest;
      }
      puStack_20 = __dest_00;
      pvStack_18 = __dest;
      (*(code *)puVar5[2])(*puVar5,puVar5,param_1,&puStack_20,&puStack_10);
    }
    else {
      if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x48) + 0x28)) {
        param_3 = &pppuStack_30;
      }
      memcpy(__dest,param_3,__n);
      FUN_03642988(puVar5,*(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x40) + 0x80) + 0x20,__dest,
                   __n);
    }
    if (*(long *)(alStack_40[1] + 0x28) == lStack_8) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


