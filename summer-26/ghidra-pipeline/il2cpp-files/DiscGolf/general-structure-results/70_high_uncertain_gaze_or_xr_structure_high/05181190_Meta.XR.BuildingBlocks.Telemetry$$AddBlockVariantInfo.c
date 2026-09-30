/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockVariantInfo
ENTRY_POINT: 05181190
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


void Meta_XR_BuildingBlocks_Telemetry__AddBlockVariantInfo(undefined8 param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uVar5;
  long unaff_x23;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x23 + 0x28);
  lVar3 = *(long *)(param_2 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02dcfd18(lVar3);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  lVar4 = (long)&stack0x00000000 -
          ((ulong)*(uint *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0xfc) + 0xf & 0x1fffffff0);
  lVar3 = lVar2;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_02dcfd18(lVar2);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x19 + 0x20);
  }
  uVar5 = **(undefined8 **)(*(long *)(lVar2 + 0xc0) + 0x28);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02dcfd18(lVar3);
  }
  lVar2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
  *(long *)(unaff_x29 + -0x10) = lVar4;
  (**(code **)(lVar2 + 0x10))(uVar5,lVar2,param_1,unaff_x29 + -0x10,lVar4);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x18),lVar4);
  if (*(long *)(unaff_x23 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


