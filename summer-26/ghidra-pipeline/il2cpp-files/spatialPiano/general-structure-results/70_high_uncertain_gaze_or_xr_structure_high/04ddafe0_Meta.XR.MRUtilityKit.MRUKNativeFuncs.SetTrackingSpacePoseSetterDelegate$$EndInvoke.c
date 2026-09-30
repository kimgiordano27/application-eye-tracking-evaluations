/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.SetTrackingSpacePoseSetterDelegate$$EndInvoke
ENTRY_POINT: 04ddafe0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8
Meta_XR_MRUtilityKit_MRUKNativeFuncs_SetTrackingSpacePoseSetterDelegate__EndInvoke(long *param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined2 *unaff_x19;
  undefined2 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar6;
  uint unaff_w23;
  
  if (param_1 == (long *)0x0) {
    FUN_02f41ef8();
    param_1 = *(long **)(unaff_x22 + 0x38);
  }
  lVar6 = *param_1;
  lVar5 = *(long *)(lVar6 + 0x38);
  if (lVar5 == 0) {
    FUN_02f08768(PTR_DAT_067ca1b0);
    lVar5 = *(long *)(lVar6 + 0x38);
    if (lVar5 == 0) {
      FUN_02f41ef8(lVar6);
      lVar5 = *(long *)(lVar6 + 0x38);
    }
  }
  if (*(long *)(*(long *)(lVar5 + 8) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  if (unaff_w23 < 0x80) {
    lVar5 = *(long *)(unaff_x21 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c();
      lVar5 = *(long *)(unaff_x21 + 0x20);
      uVar1 = *(ushort *)(lVar5 + 0x135);
    }
    uVar2 = *unaff_x19;
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c();
      lVar5 = *(long *)(unaff_x21 + 0x20);
    }
    *unaff_x20 = uVar2;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x60);
    if ((*(ushort *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    if (DAT_06bb79e7 == '\0') {
      FUN_02f08768(PTR_DAT_067ca1b0);
      DAT_06bb79e7 = '\x01';
    }
    lVar5 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c();
    }
    if (*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x50) + 0x38) == 0) {
      FUN_02f41ef8();
    }
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x128);
    if ((*(ushort *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    if (DAT_06bb79e5 == '\0') {
      FUN_02f08768(PTR_DAT_067ca1b0);
      DAT_06bb79e5 = '\x01';
    }
    lVar5 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c();
    }
    if (*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x50) + 0x38) == 0) {
      FUN_02f41ef8();
    }
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    iVar3 = FUN_04dd9630();
    FUN_0609bf0c(unaff_x20 + 2,unaff_x19 + 2,(long)iVar3,0);
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


