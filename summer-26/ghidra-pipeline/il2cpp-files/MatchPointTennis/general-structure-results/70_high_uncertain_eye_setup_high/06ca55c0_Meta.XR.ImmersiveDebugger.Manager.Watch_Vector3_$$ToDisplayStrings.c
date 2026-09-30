/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$ToDisplayStrings
ENTRY_POINT: 06ca55c0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ToDisplayStrings(long param_1,long *param_2)

{
  ushort uVar1;
  bool bVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *unaff_x19;
  size_t unaff_x20;
  code *pcVar7;
  undefined8 *__dest;
  undefined8 *__dest_00;
  size_t __n;
  size_t unaff_x24;
  void *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_04481fb8(param_1);
  }
  pvVar3 = (void *)thunk_FUN_044a5a9c(*(undefined8 *)(unaff_x29 + -0x30),
                                      *(long *)(*(long *)(*(long *)(param_1 + 0xc0) + 8) + 0x80) +
                                      0x20);
  memcpy(unaff_x27,pvVar3,unaff_x20);
  memcpy(unaff_x26,*(void **)(unaff_x29 + -0x28),unaff_x24);
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  pvVar3 = (void *)thunk_FUN_044a5a9c();
  memcpy(unaff_x28,pvVar3,unaff_x20);
  if (param_2 == (long *)0x0) {
LAB_06ca5860:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_04481fb8();
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x28)) {
    unaff_x27 = (undefined8 *)*unaff_x27;
  }
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_04481fb8();
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x28)) {
    unaff_x28 = (undefined8 *)*unaff_x28;
  }
  lVar4 = *param_2;
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x27;
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x28;
  lVar4 = *(long *)(lVar4 + 0x1c0);
  (**(code **)(lVar4 + 0x10))
            (*(undefined8 *)(lVar4 + 8),lVar4,param_2,unaff_x29 + -0x20,unaff_x29 + -0xc);
  if (*(char *)(unaff_x29 + -0xc) == '\0') {
    lVar4 = *(long *)(unaff_x29 + -0x38);
    bVar2 = false;
  }
  else {
    lVar6 = *unaff_x19;
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_04481fb8(lVar6);
      uVar1 = *(ushort *)(*unaff_x19 + 0x135);
      lVar4 = *unaff_x19;
    }
    __dest = *(undefined8 **)(unaff_x29 + -0x40);
    __n = *(size_t *)(unaff_x29 + -0x50);
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x70);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_04481fb8(lVar4);
    }
    plVar5 = (long *)(*pcVar7)(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x70));
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8(lVar4);
    }
    pvVar3 = (void *)thunk_FUN_044a5a9c(*(undefined8 *)(unaff_x29 + -0x30),
                                        *(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80) +
                                        0x40);
    memcpy(__dest,pvVar3,__n);
    memcpy(unaff_x26,*(void **)(unaff_x29 + -0x28),unaff_x24);
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    __dest_00 = *(undefined8 **)(unaff_x29 + -0x48);
    pvVar3 = (void *)thunk_FUN_044a5a9c();
    memcpy(__dest_00,pvVar3,__n);
    if (plVar5 == (long *)0x0) goto LAB_06ca5860;
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x18) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    lVar6 = *unaff_x19;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04481fb8();
    }
    lVar4 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x18) + 0x28)) {
      __dest_00 = (undefined8 *)*__dest_00;
    }
    lVar6 = *plVar5;
    *(undefined8 **)(unaff_x29 + -0x20) = __dest;
    *(undefined8 **)(unaff_x29 + -0x18) = __dest_00;
    lVar6 = *(long *)(lVar6 + 0x1c0);
    (**(code **)(lVar6 + 0x10))
              (*(undefined8 *)(lVar6 + 8),lVar6,plVar5,unaff_x29 + -0x20,unaff_x29 + -0xc);
    bVar2 = *(char *)(unaff_x29 + -0xc) != '\0';
  }
  if (*(long *)(lVar4 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


