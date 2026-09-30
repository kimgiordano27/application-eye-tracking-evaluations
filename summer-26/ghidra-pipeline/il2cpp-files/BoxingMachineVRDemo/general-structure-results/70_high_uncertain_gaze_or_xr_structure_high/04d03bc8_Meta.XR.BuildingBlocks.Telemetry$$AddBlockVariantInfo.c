/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockVariantInfo
ENTRY_POINT: 04d03bc8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddBlockVariantInfo
               (long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x23;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x23 + 0x28);
  lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18);
  uVar1 = *(uint *)(lVar3 + 0xfc);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0(lVar3);
  }
  puVar2 = (undefined8 *)
           FUN_02d609d8(param_2,lVar3,(long)&stack0x00000000 - ((ulong)uVar1 + 0xf & 0x1fffffff0));
  if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18) + 0x28)) {
    puVar2 = (undefined8 *)*puVar2;
  }
  lVar3 = *param_1;
  *(undefined8 **)(unaff_x29 + -0x10) = puVar2;
  lVar3 = *(long *)(lVar3 + 0x240);
  (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,param_1,unaff_x29 + -0x10);
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


