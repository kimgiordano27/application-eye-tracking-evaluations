/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos.ColorScope$$Dispose
ENTRY_POINT: 04d376e8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos_ColorScope__Dispose(void)

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
  
  FUN_02d9a33c();
  lVar6 = **(long **)(unaff_x22 + 0x38);
  lVar5 = *(long *)(lVar6 + 0x38);
  if (lVar5 == 0) {
    FUN_02d6084c(PTR_DAT_067680f8);
    lVar5 = *(long *)(lVar6 + 0x38);
    if (lVar5 == 0) {
      FUN_02d9a33c(lVar6);
      lVar5 = *(long *)(lVar6 + 0x38);
    }
  }
  if (*(long *)(*(long *)(lVar5 + 8) + 0x38) == 0) {
    FUN_02d9a33c();
  }
  if (unaff_w23 < 0x1ff) {
    lVar5 = *(long *)(unaff_x21 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_02d9a2e0();
      lVar5 = *(long *)(unaff_x21 + 0x20);
      uVar1 = *(ushort *)(lVar5 + 0x135);
    }
    uVar2 = *unaff_x20;
    if ((uVar1 & 1) == 0) {
      FUN_02d9a2e0();
      lVar5 = *(long *)(unaff_x21 + 0x20);
    }
    *unaff_x19 = uVar2;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x60);
    if ((*(byte *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    if (DAT_06b7795e == '\0') {
      FUN_02d6084c(PTR_DAT_067680f8);
      DAT_06b7795e = '\x01';
    }
    lVar5 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    if (*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x50) + 0x38) == 0) {
      FUN_02d9a33c();
    }
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x248);
    if ((*(byte *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    if (DAT_06b7795d == '\0') {
      FUN_02d6084c(PTR_DAT_067680f8);
      DAT_06b7795d = '\x01';
    }
    lVar5 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    if (*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x50) + 0x38) == 0) {
      FUN_02d9a33c();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    iVar3 = FUN_04d3443c();
    FUN_06013f40(unaff_x19 + 1,unaff_x20 + 1,(long)iVar3,0);
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


