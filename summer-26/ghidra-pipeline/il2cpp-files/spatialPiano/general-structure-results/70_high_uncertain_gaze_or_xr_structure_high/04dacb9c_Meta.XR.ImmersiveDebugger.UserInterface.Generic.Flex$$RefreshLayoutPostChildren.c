/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$RefreshLayoutPostChildren
ENTRY_POINT: 04dacb9c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16]
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__RefreshLayoutPostChildren
          (undefined2 *param_1,undefined4 param_2,long param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar4 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  lVar4 = *(long *)(param_3 + 0x20);
  uVar1 = *param_1;
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c();
  }
  auVar5 = FUN_0334f834(uVar1,param_2,0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xf0));
  lVar4 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c();
  }
  uVar3 = FUN_0347b618(auVar5._0_8_,auVar5._8_8_,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x100));
  lVar4 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x60);
  if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  if (DAT_06bb79d0 == '\0') {
    FUN_02f08768(PTR_DAT_067ca1b0);
    DAT_06bb79d0 = '\x01';
  }
  lVar4 = *(long *)(lVar4 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c();
  }
  if (*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  lVar4 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c();
  }
  iVar2 = FUN_04dab938(param_1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x90));
  FUN_0609bf0c(uVar3,param_1 + 1,(long)iVar2,0);
  return auVar5;
}


