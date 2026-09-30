/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockVariantInfo
ENTRY_POINT: 052bae0c
PROGRAM: Untangled-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddBlockVariantInfo
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  ulong uVar1;
  long *unaff_x19;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  long *unaff_x23;
  undefined4 uVar3;
  
  uVar1 = FUN_066cd30c(param_4,0);
  lVar2 = 0;
  if ((uVar1 & 1) != 0) {
    if (unaff_x20 == 0) goto LAB_052baed8;
    lVar2 = *(long *)(unaff_x20 + 0xa8);
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c();
  if ((uVar1 & 1) != 0) {
    if (unaff_x22 == 0) goto LAB_052baed8;
    uVar3 = FUN_067413b4();
    *(undefined4 *)((long)unaff_x19 + 0x21c) = uVar3;
    *(undefined4 *)(unaff_x19 + 0x44) = param_2;
    *(undefined4 *)((long)unaff_x19 + 0x224) = param_3;
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(lVar2,0);
  if ((uVar1 & 1) != 0) {
    if (lVar2 == 0) goto LAB_052baed8;
    uVar3 = FUN_067413b4(lVar2,0);
    *(undefined4 *)(unaff_x19 + 0x45) = uVar3;
    *(undefined4 *)((long)unaff_x19 + 0x22c) = param_2;
    *(undefined4 *)(unaff_x19 + 0x46) = param_3;
  }
  lVar2 = unaff_x19[0x23];
  (**(code **)(*unaff_x19 + 0x528))();
  if (lVar2 != 0) {
    FUN_0475b7b0(lVar2,*(undefined8 *)PTR_DAT_06d3d288);
    return;
  }
LAB_052baed8:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


