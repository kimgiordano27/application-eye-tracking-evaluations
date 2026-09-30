/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$SetPosition
ENTRY_POINT: 04dada10
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__SetPosition
          (ushort *param_1,ushort *param_2,long param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x1a8) + 0x20) + 0x135) & 1) == 0)
  {
    FUN_02f41e9c();
  }
  lVar5 = *(long *)(param_3 + 0x20);
  uVar1 = *param_2;
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x160) + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x58);
  plVar6 = *(long **)(lVar5 + 0x38);
  if (plVar6 == (long *)0x0) {
    FUN_02f41ef8(lVar5);
    plVar6 = *(long **)(lVar5 + 0x38);
  }
  lVar7 = *plVar6;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_02f08768(PTR_DAT_067ca1b0);
    lVar5 = *(long *)(lVar7 + 0x38);
    if (lVar5 == 0) {
      FUN_02f41ef8(lVar7);
      lVar5 = *(long *)(lVar7 + 0x38);
    }
  }
  if (*(long *)(*(long *)(lVar5 + 8) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  if (uVar1 < 0x7f) {
    lVar5 = *(long *)(param_3 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c();
      lVar5 = *(long *)(param_3 + 0x20);
      uVar1 = *(ushort *)(lVar5 + 0x135);
    }
    uVar2 = *param_2;
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c();
      lVar5 = *(long *)(param_3 + 0x20);
    }
    *param_1 = uVar2;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x60);
    if ((*(ushort *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    if (DAT_06bb79d0 == '\0') {
      FUN_02f08768(PTR_DAT_067ca1b0);
      DAT_06bb79d0 = '\x01';
    }
    lVar5 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c();
    }
    if (*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x50) + 0x38) == 0) {
      FUN_02f41ef8();
    }
    lVar5 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x188);
    if ((*(ushort *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    if (DAT_06bb79d4 == '\0') {
      FUN_02f08768(PTR_DAT_067ca1b0);
      DAT_06bb79d4 = '\x01';
    }
    lVar5 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c();
    }
    if (*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x50) + 0x38) == 0) {
      FUN_02f41ef8();
    }
    lVar5 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c();
    }
    iVar3 = FUN_04dab938(param_1,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x90));
    FUN_0609bf0c(param_1 + 1,param_2 + 1,(long)iVar3,0);
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


