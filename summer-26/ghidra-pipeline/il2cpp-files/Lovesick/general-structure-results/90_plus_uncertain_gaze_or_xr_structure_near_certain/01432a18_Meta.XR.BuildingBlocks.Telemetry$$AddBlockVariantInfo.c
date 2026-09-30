/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockVariantInfo
ENTRY_POINT: 01432a18
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_BuildingBlocks_Telemetry__AddBlockVariantInfo(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  long *unaff_x19;
  ulong unaff_x21;
  long *unaff_x22;
  uint unaff_w26;
  uint uStack000000000000000c;
  uint uStack0000000000000014;
  
  uVar8 = (ulong)*(ushort *)(param_1 + 0x12a);
  uStack0000000000000014 = 2;
  if ((param_2 & 1) == 0) {
    uStack0000000000000014 = 0;
  }
  if (uVar8 != 0) {
    piVar17 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar17 + 6) * 0x10 + 0x138);
        goto LAB_01432a74;
      }
      uVar8 = uVar8 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724();
LAB_01432a74:
  uVar4 = (*(code *)*puVar3)();
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
  uVar9 = 4;
  if ((uVar4 & 1) == 0) {
    uVar9 = 0;
  }
  if (uVar8 != 0) {
    piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar17 + 2) * 0x10 + 0x138);
        goto LAB_01432ae0;
      }
      uVar8 = uVar8 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724();
LAB_01432ae0:
  uVar4 = (*(code *)*puVar3)();
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
  uStack000000000000000c = 8;
  if ((uVar4 & 1) == 0) {
    uStack000000000000000c = 0;
  }
  if (uVar8 != 0) {
    piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar17 + 8) * 0x10 + 0x138);
        goto LAB_01432b4c;
      }
      uVar8 = uVar8 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724();
LAB_01432b4c:
  uVar8 = (*(code *)*puVar3)();
  uVar5 = 0x10;
  if ((uVar8 & 1) == 0) {
    uVar5 = 0;
  }
  uVar6 = 0x20;
  if ((unaff_x21 & 1) == 0) {
    uVar6 = 0;
  }
  uVar4 = FUN_01432f3c(&stack0x00000018);
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
  uVar10 = 0x40;
  if ((uVar4 & 1) == 0) {
    uVar10 = 0;
  }
  if (uVar8 != 0) {
    piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar17 + 10) * 0x10 + 0x138);
        goto LAB_01432bd8;
      }
      uVar8 = uVar8 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724();
LAB_01432bd8:
  uVar4 = (*(code *)*puVar3)();
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
  uVar11 = 0x80;
  if ((uVar4 & 1) == 0) {
    uVar11 = 0;
  }
  if (uVar8 != 0) {
    piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar17 + 0xc) * 0x10 + 0x138);
        goto LAB_01432c40;
      }
      uVar8 = uVar8 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724();
LAB_01432c40:
  uVar4 = (*(code *)*puVar3)();
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
  uVar12 = 0x100;
  if ((uVar4 & 1) == 0) {
    uVar12 = 0;
  }
  if (uVar8 != 0) {
    piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar17 + 0xe) * 0x10 + 0x138);
        goto LAB_01432cb0;
      }
      uVar8 = uVar8 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724();
LAB_01432cb0:
  uVar4 = (*(code *)*puVar3)();
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
  uVar13 = 0x200;
  if ((uVar4 & 1) == 0) {
    uVar13 = 0;
  }
  if (uVar8 != 0) {
    piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar17 + 0x10) * 0x10 + 0x138);
        goto LAB_01432d18;
      }
      uVar8 = uVar8 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724();
LAB_01432d18:
  uVar4 = (*(code *)*puVar3)();
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
  uVar14 = 0x400;
  if ((uVar4 & 1) == 0) {
    uVar14 = 0;
  }
  if (uVar8 != 0) {
    piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar17 + 0x12) * 0x10 + 0x138);
        goto LAB_01432d80;
      }
      uVar8 = uVar8 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724();
LAB_01432d80:
  uVar4 = (*(code *)*puVar3)();
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
  uVar15 = 0x800;
  if ((uVar4 & 1) == 0) {
    uVar15 = 0;
  }
  if (uVar8 != 0) {
    piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar17 + 0x14) * 0x10 + 0x138);
        goto LAB_01432de8;
      }
      uVar8 = uVar8 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724();
LAB_01432de8:
  uVar4 = (*(code *)*puVar3)();
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
  uVar16 = 0x1000;
  if ((uVar4 & 1) == 0) {
    uVar16 = 0;
  }
  if (uVar8 != 0) {
    piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar17 + 0x24) * 0x10 + 0x138);
        goto LAB_01432e50;
      }
      uVar8 = uVar8 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724();
LAB_01432e50:
  iVar1 = (*(code *)*puVar3)();
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
  if (uVar8 != 0) {
    piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar17 + 0x24) * 0x10 + 0x138);
        goto LAB_01432ebc;
      }
      uVar8 = uVar8 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724();
LAB_01432ebc:
  iVar2 = (*(code *)*puVar3)();
  return uVar6 | unaff_w26 & 1 | uStack0000000000000014 | uVar9 | uStack000000000000000c | uVar5 |
         uVar10 | uVar11 | uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | (uint)(iVar1 == 1) << 0xd |
         (uint)(iVar2 == 1) << 0xe;
}


