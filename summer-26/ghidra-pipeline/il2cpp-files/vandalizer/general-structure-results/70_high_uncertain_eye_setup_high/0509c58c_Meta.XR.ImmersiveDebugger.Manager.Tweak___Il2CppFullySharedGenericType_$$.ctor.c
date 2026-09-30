/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 0509c58c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Tweak<__Il2CppFullySharedGenericType>___ctor
               (long param_1,undefined8 ****param_2,undefined8 ****param_3,undefined8 ****param_4,
               void *param_5,long param_6)

{
  undefined8 ****ppppuVar1;
  void *__src;
  void *__dest;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *__dest_00;
  ulong uVar7;
  undefined8 *__dest_01;
  undefined8 *__dest_02;
  ulong __n;
  undefined8 uVar8;
  long lVar9;
  ulong __n_00;
  void *local_d0;
  ulong local_c8;
  long local_c0;
  void *pvStack_b8;
  undefined8 ***local_b0;
  undefined8 ***local_a8;
  undefined8 ***local_a0;
  undefined8 ***local_98;
  undefined8 ***pppuStack_90;
  void *local_88;
  void *pvStack_80;
  void *local_78;
  void *pvStack_70;
  long local_68;
  
  local_c0 = tpidr_el0;
  local_68 = *(long *)(local_c0 + 0x28);
  lVar4 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
  uVar7 = (ulong)*(uint *)(*(long *)(lVar4 + 0x68) + 0xfc);
  __n = (ulong)*(uint *)(*(long *)(lVar4 + 0x70) + 0xfc);
  __n_00 = (ulong)*(uint *)(*(long *)(lVar4 + 0x78) + 0xfc);
  local_c8 = (ulong)*(uint *)(*(long *)(lVar4 + 0x88) + 0xfc);
  __dest_00 = (undefined8 *)((long)&local_d0 - (uVar7 + 0xf & 0x1fffffff0));
  __dest_01 = (undefined8 *)((long)__dest_00 - (__n + 0xf & 0x1fffffff0));
  __dest_02 = (undefined8 *)((long)__dest_01 - (__n_00 + 0xf & 0x1fffffff0));
  local_d0 = (void *)((long)__dest_02 - (local_c8 + 0xf & 0x1fffffff0));
  plVar5 = *(long **)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(lVar4 + 0x60);
  pvStack_b8 = param_5;
  local_b0 = param_3;
  local_a8 = param_4;
  local_a0 = param_4;
  local_98 = param_3;
  pppuStack_90 = param_2;
  if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar8 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar8,0);
  if (plVar5 != (long *)0x0) {
    lVar4 = (**(code **)(*plVar5 + 0x428))(plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x430));
    lVar9 = *(long *)(param_6 + 0x20);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x68) + 0x28)) {
      param_2 = &pppuStack_90;
    }
    memcpy(__dest_00,param_2,uVar7);
    ppppuVar1 = (undefined8 ****)local_b0;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x70) + 0x28)) {
      ppppuVar1 = &local_98;
    }
    memcpy(__dest_01,ppppuVar1,__n);
    ppppuVar1 = (undefined8 ****)local_a8;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x78) + 0x28)) {
      ppppuVar1 = &local_a0;
    }
    memcpy(__dest_02,ppppuVar1,__n_00);
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x40);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0322bef4(lVar9);
    }
    if (lVar4 != 0) {
      lVar2 = thunk_FUN_0322f04c(lVar4,lVar9);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2730(lVar4,lVar9);
      }
      lVar2 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      lVar9 = *(long *)(lVar2 + 0x40);
      puVar6 = *(undefined8 **)(lVar2 + 0x80);
      uVar8 = *puVar6;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0322bef4(lVar9);
      }
      lVar3 = thunk_FUN_0322f04c(lVar4,lVar9);
      __dest = pvStack_b8;
      lVar2 = local_c0;
      uVar7 = local_c8;
      __src = local_d0;
      if (lVar3 != 0) {
        lVar4 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
        if (-1 < *(int *)(*(long *)(lVar4 + 0x68) + 0x28)) {
          __dest_00 = (undefined8 *)*__dest_00;
        }
        if (-1 < *(int *)(*(long *)(lVar4 + 0x70) + 0x28)) {
          __dest_01 = (undefined8 *)*__dest_01;
        }
        if (-1 < *(int *)(*(long *)(lVar4 + 0x78) + 0x28)) {
          __dest_02 = (undefined8 *)*__dest_02;
        }
        pvStack_70 = local_d0;
        local_88 = __dest_00;
        pvStack_80 = __dest_01;
        local_78 = __dest_02;
        (*(code *)puVar6[2])(uVar8,puVar6,lVar3,&local_88,local_d0);
        memcpy(__dest,__src,uVar7);
        if (*(long *)(lVar2 + 0x28) == local_68) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(lVar4,lVar9);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


