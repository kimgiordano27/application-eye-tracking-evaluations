/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$get_TelemetryAnnotation
ENTRY_POINT: 01b38b30
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchManager__get_TelemetryAnnotation
               (void *param_1,void *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  long *unaff_x19;
  undefined4 uVar5;
  void *pvVar6;
  void *unaff_x22;
  size_t __n;
  void *unaff_x23;
  void *unaff_x24;
  size_t unaff_x25;
  undefined4 unaff_w26;
  void *unaff_x28;
  long unaff_x29;
  
  memcpy(param_1,param_2,unaff_x25);
  memcpy(unaff_x28,unaff_x22,unaff_x25);
  pvVar6 = *(void **)(unaff_x29 + -0x60);
  memcpy(pvVar6,unaff_x28,unaff_x25);
  lVar1 = *unaff_x19;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0103c244();
  }
  uVar2 = FUN_00fdc4e8(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10),pvVar6);
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0103c244();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0103c244(lVar1);
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    FUN_00fdce18(lVar1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x100),
                 *(undefined8 *)(unaff_x29 + -0x48));
    uVar5 = *(undefined4 *)(unaff_x29 + -0xc);
  }
  __n = *(size_t *)(unaff_x29 + -0x28);
  memset(unaff_x24,0,__n);
  memcpy(unaff_x23,unaff_x24,__n);
  lVar1 = *unaff_x19;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0103c244();
  }
  uVar2 = FUN_00fdc4e8(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x18));
  lVar1 = *unaff_x19;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0103c244(lVar1);
  }
  pvVar6 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                      *(long *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x80) +
                                      0x40);
  if ((uVar2 & 1) == 0) {
    memcpy(unaff_x23,pvVar6,__n);
    memcpy(unaff_x24,unaff_x23,__n);
    pvVar6 = *(void **)(unaff_x29 + -0x58);
    memcpy(pvVar6,unaff_x24,__n);
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0103c244();
    }
    uVar2 = FUN_00fdc4e8(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x18),pvVar6);
    pvVar6 = unaff_x24;
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      goto LAB_01b38d2c;
    }
  }
  lVar1 = *unaff_x19;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0103c244();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x18);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0103c244(lVar1);
  }
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  FUN_00fdce18(lVar1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x108),
               *(undefined8 *)(unaff_x29 + -0x40),pvVar6,0,unaff_x29 + -0xc);
  uVar4 = *(undefined4 *)(unaff_x29 + -0xc);
LAB_01b38d2c:
  FUN_01d66cbc(unaff_w26,uVar5,uVar4,0);
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


