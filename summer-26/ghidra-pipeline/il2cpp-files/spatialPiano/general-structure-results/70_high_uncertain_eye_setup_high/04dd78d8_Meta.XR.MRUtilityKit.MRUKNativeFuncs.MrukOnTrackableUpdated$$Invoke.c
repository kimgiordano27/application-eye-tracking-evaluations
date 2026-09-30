/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnTrackableUpdated$$Invoke
ENTRY_POINT: 04dd78d8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnTrackableUpdated__Invoke(ushort *param_1,long param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined2 *unaff_x19;
  undefined2 *unaff_x20;
  long unaff_x21;
  long lVar7;
  uint unaff_w23;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_02f41e9c();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0xc0) + 0x160) + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x58);
  plVar6 = *(long **)(lVar4 + 0x38);
  if (plVar6 == (long *)0x0) {
    FUN_02f41ef8(lVar4);
    plVar6 = *(long **)(lVar4 + 0x38);
  }
  lVar7 = *plVar6;
  lVar4 = *(long *)(lVar7 + 0x38);
  if (lVar4 == 0) {
    FUN_02f08768(PTR_DAT_067ca1b0);
    lVar4 = *(long *)(lVar7 + 0x38);
    if (lVar4 == 0) {
      FUN_02f41ef8(lVar7);
      lVar4 = *(long *)(lVar7 + 0x38);
    }
  }
  if (*(long *)(*(long *)(lVar4 + 8) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  if (unaff_w23 < 0x1ff) {
    lVar4 = *(long *)(unaff_x21 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c();
      lVar4 = *(long *)(unaff_x21 + 0x20);
      uVar1 = *(ushort *)(lVar4 + 0x135);
    }
    uVar2 = *unaff_x19;
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c();
      lVar4 = *(long *)(unaff_x21 + 0x20);
    }
    *unaff_x20 = uVar2;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02f41e9c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x60);
    if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    if (DAT_06bb79d3 == '\0') {
      FUN_02f08768(PTR_DAT_067ca1b0);
      DAT_06bb79d3 = '\x01';
    }
    lVar4 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02f41e9c();
    }
    if (*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x50) + 0x38) == 0) {
      FUN_02f41ef8();
    }
    lVar4 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02f41e9c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x188);
    if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    if (DAT_06bb79d4 == '\0') {
      FUN_02f08768(PTR_DAT_067ca1b0);
      DAT_06bb79d4 = '\x01';
    }
    lVar4 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02f41e9c();
    }
    if (*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x50) + 0x38) == 0) {
      FUN_02f41ef8();
    }
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    iVar3 = FUN_04dd57c0();
    FUN_0609bf0c(unaff_x20 + 1,unaff_x19 + 1,(long)iVar3,0);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}


