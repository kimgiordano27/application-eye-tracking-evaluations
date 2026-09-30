/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 01b36fb8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionManagerForAddon__get_TelemetryAnnotation
               (long param_1,undefined8 param_2)

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
  long *unaff_x21;
  undefined8 *__dest;
  undefined8 *__dest_00;
  size_t __n;
  size_t unaff_x24;
  void *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
                    /* try { // try from 01b36fb8 to 01c36fcf has its CatchHandler @ 01b37028 */
  pvVar3 = (void *)thunk_FUN_01023220(param_2,param_1 + 0x20);
  memcpy(unaff_x27,pvVar3,unaff_x20);
                    /* try { // try from 01b36fd0 to 01c36fff has its CatchHandler @ 01b36f14 */
  memcpy(unaff_x26,*(void **)(unaff_x29 + -0x28),unaff_x24);
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_0103c244();
  }
  pvVar3 = (void *)thunk_FUN_01023220();
  memcpy(unaff_x28,pvVar3,unaff_x20);
  if (unaff_x21 == (long *)0x0) {
LAB_01b37230:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244();
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x28)) {
    unaff_x27 = (undefined8 *)*unaff_x27;
  }
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244();
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x28)) {
    unaff_x28 = (undefined8 *)*unaff_x28;
  }
  lVar4 = *unaff_x21;
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x27;
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x28;
  (**(code **)(*(long *)(lVar4 + 0x1c0) + 0x10))(*(undefined8 *)(*(long *)(lVar4 + 0x1c0) + 8));
  if (*(char *)(unaff_x29 + -0xc) == '\0') {
    lVar4 = *(long *)(unaff_x29 + -0x38);
    bVar2 = false;
  }
  else {
    lVar6 = *unaff_x19;
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_0103c244(lVar6);
      uVar1 = *(ushort *)(*unaff_x19 + 0x135);
      lVar4 = *unaff_x19;
    }
    __dest = *(undefined8 **)(unaff_x29 + -0x40);
    __n = *(size_t *)(unaff_x29 + -0x50);
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x70);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_0103c244(lVar4);
    }
    plVar5 = (long *)(*pcVar7)(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x70));
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244(lVar4);
    }
    pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x30),
                                        *(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80) +
                                        0x40);
    memcpy(__dest,pvVar3,__n);
    memcpy(unaff_x26,*(void **)(unaff_x29 + -0x28),unaff_x24);
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    __dest_00 = *(undefined8 **)(unaff_x29 + -0x48);
    pvVar3 = (void *)thunk_FUN_01023220();
    memcpy(__dest_00,pvVar3,__n);
    if (plVar5 == (long *)0x0) goto LAB_01b37230;
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x18) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    lVar6 = *unaff_x19;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244();
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


