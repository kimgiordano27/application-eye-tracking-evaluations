/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SingletonMonoBehaviour<object>$$Awake
ENTRY_POINT: 012a3c44
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SingletonMonoBehaviour<object>__Awake(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  void *__dest;
  undefined8 *puVar9;
  undefined8 uVar10;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  size_t unaff_x25;
  void *pvVar11;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  size_t unaff_x28;
  long unaff_x29;
  
  lVar4 = *(long *)(unaff_x20 + 0x20);
  pvVar11 = *(void **)(unaff_x29 + -0x98);
  if (-1 < *(int *)(param_1 + 0x28)) {
    pvVar11 = (void *)(unaff_x29 + -0x78);
  }
  memcpy(unaff_x27,pvVar11,unaff_x25);
  lVar1 = *(long *)(*(long *)(lVar4 + 0xc0) + 200);
  if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
    lVar1 = FUN_00d5941c();
    lVar4 = *(long *)(unaff_x20 + 0x20);
  }
  pvVar11 = *(void **)(unaff_x29 + -0x90);
  if (-1 < *(int *)(lVar1 + 0x28)) {
    pvVar11 = (void *)(unaff_x29 + -0x80);
  }
  memcpy(unaff_x24,pvVar11,unaff_x28);
  lVar1 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
  puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0xf0);
  uVar7 = *puVar5;
  if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
    lVar1 = FUN_00d5941c();
  }
  puVar9 = unaff_x27;
  if (-1 < *(int *)(lVar1 + 0x28)) {
    puVar9 = (undefined8 *)*unaff_x27;
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 200);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  puVar3 = unaff_x24;
  if (-1 < *(int *)(lVar4 + 0x28)) {
    puVar3 = (undefined8 *)*unaff_x24;
  }
  *(undefined8 **)(unaff_x29 + -0x70) = puVar9;
  *(undefined8 **)(unaff_x29 + -0x68) = puVar3;
  uVar10 = *(undefined8 *)(unaff_x29 + -200);
  (*(code *)puVar5[2])(uVar7,puVar5,uVar10,unaff_x29 + -0x70,unaff_x29 + -0x60);
  if (*(char *)(unaff_x29 + -0x60) != '\0') {
    FUN_00ac2be8(uVar10);
    uVar7 = thunk_FUN_00d93c64(uVar10,0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
    FUN_00acb0a4();
    uVar7 = FUN_01c4b13c(uVar7,0);
    uVar10 = thunk_FUN_00d48444(System_Collections_Generic_List<fsVersionedType>_TypeInfo);
    uVar2 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                              );
    uVar7 = FUN_01600424(uVar10,uVar7,uVar2,0);
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_016f2f28(uVar10,uVar7,0);
    uVar7 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_Dictionary<string,_JToken>_get_Values__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar7);
  }
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
    lVar1 = *(long *)(unaff_x20 + 0x20);
  }
  pvVar11 = *(void **)(unaff_x29 + -0x98);
  if (-1 < *(int *)(lVar4 + 0x28)) {
    pvVar11 = (void *)(unaff_x29 + -0x78);
  }
  memcpy(unaff_x27,pvVar11,unaff_x25);
  lVar4 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
  puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0xc0) + 0xf8);
  uVar7 = *puVar5;
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  pvVar11 = *(void **)(unaff_x29 + -0xc0);
  if (-1 < *(int *)(lVar4 + 0x28)) {
    unaff_x27 = (undefined8 *)*unaff_x27;
  }
  *(undefined8 **)(unaff_x29 + -0x60) = unaff_x27;
  (*(code *)puVar5[2])(uVar7,puVar5,uVar10,unaff_x29 + -0x60,unaff_x29 + -0x70);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x29 + -0x70);
  lVar4 = *(long *)(*(long *)(lVar8 + 0xc0) + 200);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pvVar6 = *(void **)(unaff_x29 + -0x90);
  if (-1 < *(int *)(lVar4 + 0x28)) {
    pvVar6 = (void *)(unaff_x29 + -0x80);
  }
  memcpy(unaff_x24,pvVar6,unaff_x28);
  lVar4 = *(long *)(*(long *)(lVar8 + 0xc0) + 0xe8);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  __dest = *(void **)(unaff_x29 + -0xd0);
  pvVar6 = *(void **)(unaff_x29 + -0xb0);
  if (-1 < *(int *)(lVar4 + 0x28)) {
    pvVar6 = (void *)(unaff_x29 + -0x88);
  }
  memcpy(__dest,pvVar6,unaff_x23);
  memcpy(unaff_x26,__dest,unaff_x23);
  memcpy(pvVar11,unaff_x26,unaff_x23);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar8 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  lVar4 = *(long *)(lVar8 + 200);
  puVar5 = *(undefined8 **)(lVar8 + 0x100);
  uVar7 = *puVar5;
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  if (-1 < *(int *)(lVar4 + 0x28)) {
    unaff_x24 = (undefined8 *)*unaff_x24;
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe8);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  if (-1 < *(int *)(lVar4 + 0x28)) {
    unaff_x26 = (undefined8 *)*unaff_x26;
  }
  *(undefined8 **)(unaff_x29 + -0x70) = unaff_x24;
  *(undefined8 **)(unaff_x29 + -0x68) = unaff_x26;
  (*(code *)puVar5[2])(uVar7,puVar5,lVar1,unaff_x29 + -0x70,unaff_x26);
  pvVar6 = *(void **)(unaff_x29 + -0xb8);
  memcpy(pvVar6,pvVar11,unaff_x23);
  memcpy(*(void **)(unaff_x29 + -0xa0),pvVar6,unaff_x23);
  if (*(long *)(*(long *)(unaff_x29 + -0xa8) + 0x28) == *(long *)(unaff_x29 + -0x58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


