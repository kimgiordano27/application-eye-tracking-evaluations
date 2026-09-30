/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$get_Renderer
ENTRY_POINT: 01b3a7f4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__get_Renderer(undefined8 param_1,void *param_2)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  long *unaff_x19;
  long *unaff_x20;
  code *pcVar7;
  undefined8 *unaff_x21;
  undefined8 *__dest;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  size_t unaff_x27;
  size_t unaff_x28;
  long unaff_x29;
  
  memcpy(unaff_x25,param_2,unaff_x27);
  if (unaff_x20 == (long *)0x0) {
LAB_01b3aa0c:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x80) + 0x28)) {
    unaff_x24 = (undefined8 *)*unaff_x24;
  }
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x80) + 0x28)) {
    unaff_x25 = (undefined8 *)*unaff_x25;
  }
  lVar3 = *unaff_x20;
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x24;
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x25;
  (**(code **)(*(long *)(lVar3 + 0x1c0) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 0x1c0) + 8));
  if (*(char *)(unaff_x29 + -0xc) == '\0') {
    bVar2 = false;
  }
  else {
    lVar6 = *unaff_x19;
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_0103c244(lVar6);
      uVar1 = *(ushort *)(*unaff_x19 + 0x135);
      lVar3 = *unaff_x19;
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x90);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_0103c244(lVar3);
    }
    plVar4 = (long *)(*pcVar7)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x90));
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244(lVar3);
    }
    pvVar5 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x30),
                                        *(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x60);
    memcpy(unaff_x21,pvVar5,unaff_x23);
    memcpy(unaff_x26,*(void **)(unaff_x29 + -0x28),unaff_x28);
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    __dest = *(undefined8 **)(unaff_x29 + -0x68);
    pvVar5 = (void *)thunk_FUN_01023220();
    memcpy(__dest,pvVar5,unaff_x23);
    if (plVar4 == (long *)0x0) goto LAB_01b3aa0c;
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0xa8) + 0x28)) {
      unaff_x21 = (undefined8 *)*unaff_x21;
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0xa8) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    lVar3 = *plVar4;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
    *(undefined8 **)(unaff_x29 + -0x18) = __dest;
    lVar3 = *(long *)(lVar3 + 0x1c0);
    (**(code **)(lVar3 + 0x10))
              (*(undefined8 *)(lVar3 + 8),lVar3,plVar4,unaff_x29 + -0x20,unaff_x29 + -0xc);
    bVar2 = *(char *)(unaff_x29 + -0xc) != '\0';
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


