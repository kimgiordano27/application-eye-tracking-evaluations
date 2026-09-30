/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddSceneInfo
ENTRY_POINT: 051815bc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddSceneInfo(long param_1)

{
  long lVar1;
  ulong in_x9;
  long in_x10;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar2;
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  undefined8 unaff_x27;
  undefined4 unaff_w28;
  long unaff_x29;
  
  uVar2 = **(undefined8 **)(in_x10 + 0x20);
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_02dcfd18(param_1);
  }
  lVar1 = *(long *)(param_1 + 0xc0);
  *(undefined4 *)(unaff_x29 + -0xc) = unaff_w28;
  lVar1 = *(long *)(lVar1 + 0x20);
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x22;
  *(undefined8 *)(unaff_x29 + -0x28) = unaff_x27;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  (**(code **)(lVar1 + 0x10))(uVar2,lVar1,0,unaff_x29 + -0x28);
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02dcfd18();
  }
  FUN_02d965e0();
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(unaff_w25 < unaff_w26);
}


