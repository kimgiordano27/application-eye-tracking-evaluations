/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockInfo
ENTRY_POINT: 04cfb6e0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddBlockInfo
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar3;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  
  FUN_03351690(param_2,param_3,0,*param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x21;
  thunk_FUN_02dd37b4();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  *(undefined4 *)(unaff_x20 + 0x20) = unaff_s11;
  *(undefined4 *)(unaff_x20 + 0x24) = unaff_s10;
  *(undefined4 *)(unaff_x20 + 0x28) = unaff_s9;
  *(undefined4 *)(unaff_x20 + 0x2c) = unaff_s8;
  if (lVar3 == 0) {
    return;
  }
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  puVar1 = PTR_DAT_0676a848;
  uVar2 = thunk_FUN_02d9d534(*unaff_x27);
  FUN_04cb597c();
  FUN_033511f0(lVar3,uVar2,1,*(undefined8 *)puVar1);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar2 = thunk_FUN_02d9d534(*unaff_x26);
  FUN_04cb597c();
  if (lVar3 != 0) {
    FUN_033511f0(lVar3,uVar2,0,*(undefined8 *)PTR_DAT_0676a858);
    lVar3 = *(long *)(unaff_x20 + 0x18);
    uVar2 = thunk_FUN_02d9d534(*unaff_x25);
    FUN_04cb597c();
    if (lVar3 != 0) {
      FUN_033511f0(lVar3,uVar2,0,*(undefined8 *)PTR_DAT_0676a8e8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


