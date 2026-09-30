/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SingletonMonoBehaviour<object>$$InitializeSingleton
ENTRY_POINT: 012a3ac4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SingletonMonoBehaviour<object>__InitializeSingleton
               (undefined8 param_1,undefined8 ****param_2,undefined8 ****param_3,
               undefined8 ****param_4,void *param_5,long param_6)

{
  undefined8 ****ppppuVar1;
  void *pvVar2;
  void *__dest;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong __n;
  undefined8 *__dest_00;
  ulong __n_00;
  undefined8 *__dest_01;
  undefined8 *puVar15;
  ulong __n_01;
  void *apvStack_80 [4];
  undefined8 ***pppuStack_60;
  long lStack_58;
  void *pvStack_50;
  undefined8 ***pppuStack_48;
  undefined8 ***pppuStack_40;
  undefined8 ***pppuStack_38;
  undefined8 ***pppuStack_30;
  undefined8 ***pppuStack_28;
  undefined8 *puStack_20;
  undefined8 *puStack_18;
  undefined8 *puStack_10;
  long lStack_8;
  
  lVar4 = tpidr_el0;
  lStack_8 = *(long *)(lVar4 + 0x28);
  lVar8 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0xe8);
  apvStack_80[1] = (void *)param_1;
  pppuStack_48 = param_2;
  pppuStack_40 = param_3;
  pppuStack_38 = param_4;
  pppuStack_30 = param_3;
  pppuStack_28 = param_2;
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_00d5941c(lVar8);
  }
  if (*(int *)(lVar8 + 0x28) < 0) {
    iVar3 = thunk_FUN_00d42afc(lVar8);
    uVar10 = iVar3 - 0x10;
  }
  else {
    uVar10 = 8;
  }
  lVar8 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_00d5941c();
  }
  if (*(int *)(lVar8 + 0x28) < 0) {
    iVar3 = thunk_FUN_00d42afc();
    uVar12 = iVar3 - 0x10;
  }
  else {
    uVar12 = 8;
  }
  lVar8 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 200);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_00d5941c();
  }
  pppuStack_60 = param_4;
  lStack_58 = lVar4;
  pvStack_50 = param_5;
  if (*(int *)(lVar8 + 0x28) < 0) {
    iVar3 = thunk_FUN_00d42afc();
    uVar7 = iVar3 - 0x10;
  }
  else {
    uVar7 = 8;
  }
  __n_00 = (ulong)uVar12;
  puVar15 = (undefined8 *)((long)apvStack_80 - (__n_00 + 0xf & 0x1fffffff0));
  __n_01 = (ulong)uVar7;
  __dest_00 = (undefined8 *)((long)puVar15 - (__n_01 + 0xf & 0x1fffffff0));
  __n = (ulong)uVar10;
  uVar9 = __n + 0xf & 0x1fffffff0;
  apvStack_80[0] = (void *)((long)__dest_00 - uVar9);
  __dest_01 = (undefined8 *)((long)apvStack_80[0] - uVar9);
  apvStack_80[3] = (void *)((long)__dest_01 - uVar9);
  apvStack_80[2] = (void *)((long)apvStack_80[3] - uVar9);
  memset(apvStack_80[2],0,__n);
  lVar8 = *(long *)(param_6 + 0x20);
  lVar4 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x48);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
    lVar8 = *(long *)(param_6 + 0x20);
  }
  ppppuVar1 = (undefined8 ****)pppuStack_48;
  if (-1 < *(int *)(lVar4 + 0x28)) {
    ppppuVar1 = &pppuStack_28;
  }
  memcpy(puVar15,ppppuVar1,__n_00);
  lVar4 = *(long *)(*(long *)(lVar8 + 0xc0) + 200);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
    lVar8 = *(long *)(param_6 + 0x20);
  }
  ppppuVar1 = (undefined8 ****)pppuStack_40;
  if (-1 < *(int *)(lVar4 + 0x28)) {
    ppppuVar1 = &pppuStack_30;
  }
  memcpy(__dest_00,ppppuVar1,__n_01);
  lVar4 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x48);
  puVar11 = *(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0xf0);
  uVar13 = *puVar11;
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  puVar14 = puVar15;
  if (-1 < *(int *)(lVar4 + 0x28)) {
    puVar14 = (undefined8 *)*puVar15;
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 200);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  pvVar2 = apvStack_80[1];
  puStack_18 = __dest_00;
  if (-1 < *(int *)(lVar4 + 0x28)) {
    puStack_18 = (undefined8 *)*__dest_00;
  }
  puStack_20 = puVar14;
  (*(code *)puVar11[2])(uVar13,puVar11,apvStack_80[1],&puStack_20,&puStack_10);
  if ((char)puStack_10 != '\0') {
    FUN_00ac2be8(pvVar2);
    uVar13 = thunk_FUN_00d93c64(pvVar2,0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
    FUN_00acb0a4();
    uVar13 = FUN_01c4b13c(uVar13,0);
    uVar5 = thunk_FUN_00d48444(System_Collections_Generic_List<fsVersionedType>_TypeInfo);
    uVar6 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                              );
    uVar13 = FUN_01600424(uVar5,uVar13,uVar6,0);
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_016f2f28(uVar5,uVar13,0);
    uVar13 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_Dictionary<string,_JToken>_get_Values__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,uVar13);
  }
  lVar8 = *(long *)(param_6 + 0x20);
  lVar4 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x48);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
    lVar8 = *(long *)(param_6 + 0x20);
  }
  ppppuVar1 = (undefined8 ****)pppuStack_48;
  if (-1 < *(int *)(lVar4 + 0x28)) {
    ppppuVar1 = &pppuStack_28;
  }
  memcpy(puVar15,ppppuVar1,__n_00);
  lVar4 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x48);
  puVar11 = *(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0xf8);
  uVar13 = *puVar11;
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  __dest = apvStack_80[2];
  if (-1 < *(int *)(lVar4 + 0x28)) {
    puVar15 = (undefined8 *)*puVar15;
  }
  puStack_10 = puVar15;
  (*(code *)puVar11[2])(uVar13,puVar11,pvVar2,&puStack_10,&puStack_20);
  puVar15 = puStack_20;
  lVar8 = *(long *)(param_6 + 0x20);
  lVar4 = *(long *)(*(long *)(lVar8 + 0xc0) + 200);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
    lVar8 = *(long *)(param_6 + 0x20);
  }
  ppppuVar1 = (undefined8 ****)pppuStack_40;
  if (-1 < *(int *)(lVar4 + 0x28)) {
    ppppuVar1 = &pppuStack_30;
  }
  memcpy(__dest_00,ppppuVar1,__n_01);
  lVar4 = *(long *)(*(long *)(lVar8 + 0xc0) + 0xe8);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  pvVar2 = apvStack_80[0];
  ppppuVar1 = (undefined8 ****)pppuStack_60;
  if (-1 < *(int *)(lVar4 + 0x28)) {
    ppppuVar1 = &pppuStack_38;
  }
  memcpy(apvStack_80[0],ppppuVar1,__n);
  memcpy(__dest_01,pvVar2,__n);
  memcpy(__dest,__dest_01,__n);
  if (puVar15 != (undefined8 *)0x0) {
    lVar8 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    lVar4 = *(long *)(lVar8 + 200);
    puVar11 = *(undefined8 **)(lVar8 + 0x100);
    uVar13 = *puVar11;
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      lVar4 = FUN_00d5941c();
    }
    if (-1 < *(int *)(lVar4 + 0x28)) {
      __dest_00 = (undefined8 *)*__dest_00;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      lVar4 = FUN_00d5941c();
    }
    if (-1 < *(int *)(lVar4 + 0x28)) {
      __dest_01 = (undefined8 *)*__dest_01;
    }
    puStack_20 = __dest_00;
    puStack_18 = __dest_01;
    (*(code *)puVar11[2])(uVar13,puVar11,puVar15,&puStack_20,__dest_01);
    pvVar2 = apvStack_80[3];
    memcpy(apvStack_80[3],__dest,__n);
    memcpy(pvStack_50,pvVar2,__n);
    if (*(long *)(lStack_58 + 0x28) == lStack_8) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


