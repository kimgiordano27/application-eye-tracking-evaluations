/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector4s>
ENTRY_POINT: 05bd7c1c
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector4s>
               (undefined8 param_1,void *param_2,long param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong __n;
  long lVar8;
  void *__dest;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_20;
  void *pvStack_18;
  int iStack_10;
  undefined4 uStack_c;
  long lStack_8;
  
  lStack_20 = tpidr_el0;
  lStack_8 = *(long *)(lStack_20 + 0x28);
  lVar7 = *(long *)(param_3 + 0x38);
  pvStack_18 = param_2;
  if (lVar7 == 0) {
    FUN_04980b90(param_3);
    lVar7 = *(long *)(param_3 + 0x38);
  }
  uVar5 = *(uint *)(*(long *)(lVar7 + 8) + 0xfc);
  __n = (ulong)uVar5;
  if ((*(ushort *)(*(long *)(lVar7 + 8) + 0x135) & 1) == 0) {
    lVar4 = FUN_04980b34();
    lVar7 = *(long *)(param_3 + 0x38);
    uVar5 = *(uint *)(lVar4 + 0xfc);
  }
  lVar10 = (long)&lStack_20 - ((ulong)(uVar5 + 0x10) + 0xf & 0x1fffffff0);
  lVar6 = *(long *)(lVar7 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar4 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_04980b34(lVar6);
    lVar7 = *(long *)(param_3 + 0x38);
    uVar1 = *(ushort *)(*(long *)(lVar7 + 0x20) + 0x135);
    lVar4 = *(long *)(lVar7 + 0x20);
  }
  lVar11 = lVar10 - ((ulong)(*(int *)(lVar6 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar6 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_04980b34(lVar4);
    lVar7 = *(long *)(param_3 + 0x38);
    uVar1 = *(ushort *)(*(long *)(lVar7 + 0x20) + 0x135);
    lVar6 = *(long *)(lVar7 + 0x20);
  }
  lVar4 = lVar11 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_04980b34(lVar6);
    lVar7 = *(long *)(param_3 + 0x38);
  }
  lVar9 = lVar4 - ((ulong)(*(int *)(lVar6 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar6 = *(long *)(lVar7 + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_04980b34();
    lVar7 = *(long *)(param_3 + 0x38);
  }
  lVar8 = lVar9 - ((ulong)(*(int *)(lVar6 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  __dest = (void *)(lVar8 - (__n + 0xf & 0x1fffffff0));
  memcpy(__dest,pvStack_18,__n);
  lVar6 = *(long *)(lVar7 + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_04980b34();
    lVar7 = *(long *)(param_3 + 0x38);
  }
  FUN_04948b64(lVar6,*(undefined8 *)(lVar7 + 0x10),lVar10,__dest,0,&iStack_10);
  iVar3 = iStack_10;
  lVar6 = *(long *)(param_3 + 0x38);
  lVar10 = (long)iStack_10;
  lVar7 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_04980b34();
    lVar6 = *(long *)(param_3 + 0x38);
  }
  FUN_04948b64(lVar7,*(undefined8 *)(lVar6 + 0x28),lVar11,param_1,0,&iStack_10);
  if (iStack_10 < iVar3) {
    bVar2 = false;
  }
  else {
    lVar6 = *(long *)(param_3 + 0x38);
    lVar7 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04980b34();
      lVar6 = *(long *)(param_3 + 0x38);
    }
    FUN_04948b64(lVar7,*(undefined8 *)(lVar6 + 0x30),lVar4,param_1,0,&iStack_10);
    lVar6 = *(long *)(param_3 + 0x38);
    lVar7 = CONCAT44(uStack_c,iStack_10);
    lVar4 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04980b34();
      lVar6 = *(long *)(param_3 + 0x38);
    }
    FUN_04948b64(lVar4,*(undefined8 *)(lVar6 + 0x28),lVar9,param_1,0,&iStack_10);
    lVar11 = (long)iStack_10;
    memcpy(__dest,pvStack_18,__n);
    lVar6 = *(long *)(param_3 + 0x38);
    lVar4 = *(long *)(lVar6 + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04980b34();
      lVar6 = *(long *)(param_3 + 0x38);
    }
    FUN_04948b64(lVar4,*(undefined8 *)(lVar6 + 0x38),lVar8,__dest,0,&iStack_10);
    iVar3 = FUN_09c63b4c((lVar7 - lVar10) + lVar11,iVar3,CONCAT44(uStack_c,iStack_10),iVar3,0);
    bVar2 = iVar3 == 0;
  }
  if (*(long *)(lStack_20 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


