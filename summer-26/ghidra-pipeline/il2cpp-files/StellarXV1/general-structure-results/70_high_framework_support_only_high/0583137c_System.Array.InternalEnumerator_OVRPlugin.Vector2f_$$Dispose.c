/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 0583137c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Array_InternalEnumerator<OVRPlugin_Vector2f>__Dispose
          (undefined8 param_1,undefined8 ****param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 *__dest;
  undefined8 uVar9;
  ulong __n;
  undefined8 uStack_40;
  undefined8 ***pppuStack_38;
  undefined8 uStack_30;
  long lStack_28;
  void *pvStack_20;
  undefined4 *puStack_18;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  long lStack_8;
  
  lVar4 = tpidr_el0;
  lStack_8 = *(long *)(lVar4 + 0x28);
  lVar8 = *(long *)(param_4 + 0x20);
  uVar3 = *(ushort *)(lVar8 + 0x135);
  lVar5 = lVar8;
  pppuStack_38 = param_2;
  if ((uVar3 & 1) == 0) {
    lVar8 = FUN_040b1acc(lVar8);
    uVar3 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar5 = *(long *)(param_4 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
  __dest = (undefined8 *)((long)&uStack_40 - (__n + 0xf & 0x1fffffff0));
  uStack_40._4_4_ = 0;
  if ((uVar3 & 1) == 0) {
    lVar5 = FUN_040b1acc(lVar5);
  }
  piVar6 = (int *)thunk_FUN_040d6b00(param_1,*(undefined8 *)(**(long **)(lVar5 + 0xc0) + 0x80));
  lVar5 = *(long *)(param_4 + 0x20);
  if (*piVar6 == 0) {
    lVar8 = lVar5;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
      lVar8 = *(long *)(param_4 + 0x20);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x28)) {
      param_2 = &pppuStack_38;
    }
    memcpy(__dest,param_2,__n);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_040b1acc(lVar8);
    }
    FUN_040775b0(param_1,*(long *)(**(long **)(lVar8 + 0xc0) + 0x80) + 0x20,__dest,__n);
  }
  else {
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    piVar6 = (int *)thunk_FUN_040d6b00(param_1,*(undefined8 *)(**(long **)(lVar5 + 0xc0) + 0x80));
    lVar8 = *(long *)(param_4 + 0x20);
    uStack_40._4_4_ = *piVar6 + -1;
    lVar5 = lVar8;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_040b1acc(lVar8);
      lVar5 = *(long *)(param_4 + 0x20);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0x28)) {
      param_2 = &pppuStack_38;
    }
    memcpy(__dest,param_2,__n);
    uVar3 = *(ushort *)(lVar5 + 0x135);
    lVar8 = lVar5;
    if ((uVar3 & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
      uVar3 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
      lVar8 = *(long *)(param_4 + 0x20);
    }
    uVar9 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xa0);
    lVar5 = lVar8;
    if ((uVar3 & 1) == 0) {
      lVar8 = FUN_040b1acc(lVar8);
      uVar3 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
      lVar5 = *(long *)(param_4 + 0x20);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0xa0);
    if ((uVar3 & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    uStack_30 = thunk_FUN_040d6b00(param_1,*(long *)(**(long **)(lVar5 + 0xc0) + 0x80) + 0x40);
    lVar5 = *(long *)(param_4 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    puStack_18 = &uStack_c;
    lStack_28 = (long)&uStack_40 + 4;
    pvStack_20 = __dest;
    uStack_c = param_3;
    (**(code **)(lVar8 + 0x10))(uVar9,lVar8,0,&uStack_30,auStack_10);
  }
  lVar5 = *(long *)(param_4 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_040b1acc();
  }
  puVar7 = (undefined4 *)
           thunk_FUN_040d6b00(param_1,*(undefined8 *)(**(long **)(lVar5 + 0xc0) + 0x80));
  lVar5 = *(long *)(param_4 + 0x20);
  uVar1 = *puVar7;
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_040b1acc();
  }
  piVar6 = (int *)thunk_FUN_040d6b00(param_1,*(undefined8 *)(**(long **)(lVar5 + 0xc0) + 0x80));
  lVar5 = *(long *)(param_4 + 0x20);
  iVar2 = *piVar6;
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_040b1acc();
  }
  FUN_03b2ebac(param_1,*(undefined8 *)(**(long **)(lVar5 + 0xc0) + 0x80),iVar2 + 1);
  if (*(long *)(lVar4 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}


