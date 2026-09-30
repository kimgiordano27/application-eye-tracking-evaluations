/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddSceneInfo
ENTRY_POINT: 01432d88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_BuildingBlocks_Telemetry__AddSceneInfo(code *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  long *unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  long *unaff_x22;
  uint unaff_w23;
  uint unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  uint uStack0000000000000010;
  uint uStack0000000000000014;
  
  uVar3 = (*param_1)();
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
  uVar7 = 0x800;
  if ((uVar3 & 1) == 0) {
    uVar7 = 0;
  }
  if (uVar6 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x22) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0x14) * 0x10 + 0x138);
        goto LAB_01432de8;
      }
      uVar6 = uVar6 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_00d59724();
LAB_01432de8:
  uVar3 = (*(code *)*puVar4)();
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
  uVar8 = 0x1000;
  if ((uVar3 & 1) == 0) {
    uVar8 = 0;
  }
  if (uVar6 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x22) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0x24) * 0x10 + 0x138);
        goto LAB_01432e50;
      }
      uVar6 = uVar6 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_00d59724();
LAB_01432e50:
  iVar1 = (*(code *)*puVar4)();
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar6 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x22) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0x24) * 0x10 + 0x138);
        goto LAB_01432ebc;
      }
      uVar6 = uVar6 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_00d59724();
LAB_01432ebc:
  iVar2 = (*(code *)*puVar4)();
  return unaff_w27 | unaff_w26 & 1 | uStack0000000000000014 | uStack0000000000000010 |
         uStack000000000000000c | unaff_w21 | uStack0000000000000008 | unaff_w28 | unaff_w29 |
         unaff_w20 | unaff_w23 | uVar7 | uVar8 | (uint)(iVar1 == 1) << 0xd |
         (uint)(iVar2 == 1) << 0xe;
}


