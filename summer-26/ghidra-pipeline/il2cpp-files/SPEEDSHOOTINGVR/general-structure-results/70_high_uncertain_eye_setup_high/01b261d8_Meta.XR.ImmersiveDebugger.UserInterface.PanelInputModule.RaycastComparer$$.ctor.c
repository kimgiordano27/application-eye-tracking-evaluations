/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule.RaycastComparer$$.ctor
ENTRY_POINT: 01b261d8
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


void Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer___ctor(long param_1)

{
  ushort uVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long in_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  size_t unaff_x23;
  void *unaff_x24;
  size_t unaff_x25;
  void *unaff_x26;
  code *pcVar6;
  long unaff_x28;
  long unaff_x29;
  
  if (param_1 != in_x9) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc8d0();
  }
  pvVar2 = (void *)thunk_FUN_01040230();
  memcpy(unaff_x26,pvVar2,unaff_x25);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar3 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x40);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_0103c244(lVar3);
  }
  plVar4 = (long *)(*pcVar6)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x40));
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0103c244(*(long *)(unaff_x19 + 0x20));
  }
  pvVar2 = (void *)thunk_FUN_01023220();
  memcpy(unaff_x20,pvVar2,unaff_x23);
  memcpy(unaff_x24,unaff_x26,unaff_x25);
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0103c244();
  }
  pvVar2 = (void *)thunk_FUN_01023220();
  memcpy(unaff_x21,pvVar2,unaff_x23);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  if (-1 < *(int *)(**(long **)(lVar3 + 0xc0) + 0x28)) {
    unaff_x20 = (undefined8 *)*unaff_x20;
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  if (-1 < *(int *)(**(long **)(lVar3 + 0xc0) + 0x28)) {
    unaff_x21 = (undefined8 *)*unaff_x21;
  }
  lVar3 = *plVar4;
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x20;
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x21;
  lVar3 = *(long *)(lVar3 + 0x1a0);
  (**(code **)(lVar3 + 0x10))
            (*(undefined8 *)(lVar3 + 8),lVar3,plVar4,unaff_x29 + -0x20,unaff_x29 + -0xc);
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined4 *)(unaff_x29 + -0xc));
  }
  return;
}


