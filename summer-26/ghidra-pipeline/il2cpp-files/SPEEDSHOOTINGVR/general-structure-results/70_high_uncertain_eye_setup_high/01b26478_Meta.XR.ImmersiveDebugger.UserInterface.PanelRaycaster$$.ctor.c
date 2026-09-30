/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$.ctor
ENTRY_POINT: 01b26478
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster___ctor(long param_1)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  void *__src;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  undefined8 *__dest;
  undefined8 *__dest_00;
  void *unaff_x22;
  ulong __n;
  code *pcVar6;
  void *pvVar7;
  ulong __n_00;
  long unaff_x28;
  long unaff_x29;
  
  lVar4 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  __n = (ulong)*(uint *)(**(long **)(param_1 + 0xc0) + 0xfc);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_0103c244(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  uVar5 = __n + 0xf & 0x1fffffff0;
  __n_00 = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0xfc);
  __dest = (undefined8 *)(&stack0x00000000 + -uVar5);
  __dest_00 = (undefined8 *)((long)__dest - uVar5);
  pvVar7 = (void *)((long)__dest_00 - (__n_00 + 0xf & 0x1fffffff0));
  lVar4 = lVar2;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_0103c244(lVar2);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0xc0) + 0x40);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_0103c244(lVar4);
  }
  plVar3 = (long *)(*pcVar6)(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x40));
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0103c244(*(long *)(unaff_x19 + 0x20));
  }
  __src = (void *)thunk_FUN_01023220();
  memcpy(__dest,__src,__n);
  memcpy(pvVar7,unaff_x22,__n_00);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0103c244();
  }
  pvVar7 = (void *)thunk_FUN_01023220(pvVar7,*(undefined8 *)
                                              (*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x80));
  memcpy(__dest_00,pvVar7,__n);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0103c244();
  }
  if (-1 < *(int *)(**(long **)(lVar2 + 0xc0) + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0103c244();
  }
  if (-1 < *(int *)(**(long **)(lVar2 + 0xc0) + 0x28)) {
    __dest_00 = (undefined8 *)*__dest_00;
  }
  lVar2 = *plVar3;
  *(undefined8 **)(unaff_x29 + -0x20) = __dest;
  *(undefined8 **)(unaff_x29 + -0x18) = __dest_00;
  lVar2 = *(long *)(lVar2 + 0x1a0);
  (**(code **)(lVar2 + 0x10))
            (*(undefined8 *)(lVar2 + 8),lVar2,plVar3,unaff_x29 + -0x20,unaff_x29 + -0xc);
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined4 *)(unaff_x29 + -0xc));
  }
  return;
}


