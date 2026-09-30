/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockVariantInfo
ENTRY_POINT: 05a95fd0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddBlockVariantInfo(ulong param_1)

{
  undefined8 uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  int unaff_w23;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  
  if ((param_1 & 1) == 0) {
    FUN_0322bef4();
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if (unaff_w23 == 1) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000018 = uVar4;
    in_stack_00000020 = uVar1;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),&stack0x00000018);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    uVar2 = *(ushort *)(lVar3 + 0x135);
    if ((uVar2 & 1) == 0) {
      FUN_0322bef4(lVar3);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uVar2 = *(ushort *)(lVar3 + 0x135);
    }
    in_stack_00000048 = *(undefined8 *)(unaff_x20 + 0x20);
    if ((uVar2 & 1) == 0) {
      lVar3 = FUN_0322bef4(lVar3);
    }
    thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x30),&stack0x00000048);
    FUN_05da3e28();
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    uVar4 = *(undefined8 *)PTR_DAT_075a9098;
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    uVar2 = *(ushort *)(lVar3 + 0x135);
    if ((uVar2 & 1) == 0) {
      FUN_0322bef4();
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uVar2 = *(ushort *)(lVar3 + 0x135);
    }
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    if ((uVar2 & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    FUN_045d5be8(&stack0x00000018,uVar4,uVar1,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38))
    ;
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10);
  }
  thunk_FUN_0322ed78(uVar4);
  return;
}


