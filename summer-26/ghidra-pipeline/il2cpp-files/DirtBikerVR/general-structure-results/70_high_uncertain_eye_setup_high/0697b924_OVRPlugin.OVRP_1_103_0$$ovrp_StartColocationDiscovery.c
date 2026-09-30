/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_StartColocationDiscovery
ENTRY_POINT: 0697b924
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_103_0__ovrp_StartColocationDiscovery(void)

{
  char cVar1;
  int in_w8;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x28;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (in_w8 == 0) {
    FUN_03a8a718(PTR_DAT_084868a0);
    *(undefined1 *)(unaff_x28 + 0xd89) = 1;
  }
  cVar1 = DAT_08974d88;
  lVar2 = *unaff_x20;
  uVar5 = *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x20);
  *(undefined8 *)(unaff_x23 + 0x28) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18);
  *(undefined4 *)(unaff_x19 + 0x28c) = uVar5;
  if (cVar1 == '\0') {
    FUN_03a8a718();
    lVar2 = *unaff_x20;
    DAT_08974d88 = '\x01';
  }
  cVar1 = DAT_08974d8b;
  uVar5 = *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x50);
  *(undefined8 *)(unaff_x19 + 0x290) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x48);
  *(undefined4 *)(unaff_x19 + 0x298) = uVar5;
  if (cVar1 == '\0') {
    FUN_03a8a718();
    lVar2 = *unaff_x20;
    DAT_08974d8b = '\x01';
  }
  cVar1 = *(char *)(unaff_x28 + 0xd89);
  uVar5 = *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x44);
  *(undefined8 *)(unaff_x23 + 0x40) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x3c);
  *(undefined4 *)(unaff_x19 + 0x2a4) = uVar5;
  if (cVar1 == '\0') {
    FUN_03a8a718();
    lVar2 = *unaff_x20;
    *(undefined1 *)(unaff_x28 + 0xd89) = 1;
  }
  cVar1 = DAT_08974d88;
  uVar5 = *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x20);
  *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18);
  *(undefined4 *)(unaff_x19 + 0x2b0) = uVar5;
  if (cVar1 == '\0') {
    FUN_03a8a718();
    lVar2 = *unaff_x20;
    DAT_08974d88 = '\x01';
  }
  cVar1 = DAT_08974d8b;
  uVar5 = *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x50);
  *(undefined8 *)(unaff_x23 + 0x58) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x48);
  *(undefined4 *)(unaff_x19 + 700) = uVar5;
  if (cVar1 == '\0') {
    FUN_03a8a718();
    lVar2 = *unaff_x20;
    DAT_08974d8b = '\x01';
  }
  cVar1 = *(char *)(unaff_x22 + 0x81b);
  uVar5 = *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x44);
  *(undefined8 *)(unaff_x19 + 0x2c0) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x3c);
  *(undefined4 *)(unaff_x19 + 0x2c8) = uVar5;
  if (cVar1 == '\0') {
    FUN_03a8a718(PTR_DAT_0848d6e8);
    *(undefined1 *)(unaff_x22 + 0x81b) = 1;
  }
  lVar2 = *(long *)(*unaff_x21 + 0xb8);
  uVar6 = *(undefined8 *)(lVar2 + 0x60);
  uVar4 = *(undefined8 *)(lVar2 + 0x78);
  uVar3 = *(undefined8 *)(lVar2 + 0x70);
  uVar10 = *(undefined8 *)(lVar2 + 0x48);
  uVar9 = *(undefined8 *)(lVar2 + 0x40);
  uVar8 = *(undefined8 *)(lVar2 + 0x58);
  uVar7 = *(undefined8 *)(lVar2 + 0x50);
  cVar1 = *(char *)(unaff_x26 + 0xd8f);
  *(undefined8 *)(unaff_x19 + 0x2f4) = *(undefined8 *)(lVar2 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x2ec) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x304) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x2fc) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x2d4) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x2cc) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x2e4) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x2dc) = uVar7;
  if (cVar1 == '\0') {
    FUN_03a8a718(PTR_DAT_084868a0);
    *(undefined1 *)(unaff_x26 + 0xd8f) = 1;
  }
  cVar1 = *(char *)(unaff_x24 + 0xd8a);
  uVar5 = *(undefined4 *)(*(undefined8 **)(*unaff_x20 + 0xb8) + 1);
  *(undefined8 *)(unaff_x23 + 0xb0) = **(undefined8 **)(*unaff_x20 + 0xb8);
  *(undefined4 *)(unaff_x19 + 0x314) = uVar5;
  if (cVar1 == '\0') {
    FUN_03a8a718(PTR_DAT_08486860);
    *(undefined1 *)(unaff_x24 + 0xd8a) = 1;
  }
  uVar3 = **(undefined8 **)(*unaff_x25 + 0xb8);
  cVar1 = *(char *)(unaff_x28 + 0xd89);
  *(undefined8 *)(unaff_x23 + 0xc4) = (*(undefined8 **)(*unaff_x25 + 0xb8))[1];
  *(undefined8 *)(unaff_x23 + 0xbc) = uVar3;
  if (cVar1 == '\0') {
    FUN_03a8a718(PTR_DAT_084868a0);
    *(undefined1 *)(unaff_x28 + 0xd89) = 1;
  }
  cVar1 = DAT_08974d88;
  lVar2 = *unaff_x20;
  uVar5 = *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x20);
  *(undefined8 *)(unaff_x19 + 0x328) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18);
  *(undefined4 *)(unaff_x19 + 0x330) = uVar5;
  if (cVar1 == '\0') {
    FUN_03a8a718();
    lVar2 = *unaff_x20;
    DAT_08974d88 = '\x01';
  }
  cVar1 = DAT_08974d8b;
  uVar5 = *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x50);
  *(undefined8 *)(unaff_x23 + 0xd8) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x48);
  *(undefined4 *)(unaff_x19 + 0x33c) = uVar5;
  if (cVar1 == '\0') {
    FUN_03a8a718();
    lVar2 = *unaff_x20;
    DAT_08974d8b = '\x01';
  }
  cVar1 = *(char *)(unaff_x24 + 0xd8a);
  uVar5 = *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x44);
  *(undefined8 *)(unaff_x19 + 0x340) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x3c);
  *(undefined4 *)(unaff_x19 + 0x348) = uVar5;
  if (cVar1 == '\0') {
    FUN_03a8a718(PTR_DAT_08486860);
    *(undefined1 *)(unaff_x24 + 0xd8a) = 1;
  }
  uVar3 = **(undefined8 **)(*unaff_x25 + 0xb8);
  cVar1 = *(char *)(unaff_x22 + 0x81b);
  *(undefined8 *)(unaff_x23 + 0xf8) = (*(undefined8 **)(*unaff_x25 + 0xb8))[1];
  *(undefined8 *)(unaff_x23 + 0xf0) = uVar3;
  if (cVar1 == '\0') {
    FUN_03a8a718(PTR_DAT_0848d6e8);
    *(undefined1 *)(unaff_x22 + 0x81b) = 1;
  }
  lVar2 = *(long *)(*unaff_x21 + 0xb8);
  uVar6 = *(undefined8 *)(lVar2 + 0x60);
  uVar4 = *(undefined8 *)(lVar2 + 0x78);
  uVar3 = *(undefined8 *)(lVar2 + 0x70);
  uVar10 = *(undefined8 *)(lVar2 + 0x48);
  uVar9 = *(undefined8 *)(lVar2 + 0x40);
  uVar8 = *(undefined8 *)(lVar2 + 0x58);
  uVar7 = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(unaff_x19 + 900) = *(undefined8 *)(lVar2 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x37c) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x394) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x38c) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x364) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x35c) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x374) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x36c) = uVar7;
  FUN_06927884();
  return;
}


