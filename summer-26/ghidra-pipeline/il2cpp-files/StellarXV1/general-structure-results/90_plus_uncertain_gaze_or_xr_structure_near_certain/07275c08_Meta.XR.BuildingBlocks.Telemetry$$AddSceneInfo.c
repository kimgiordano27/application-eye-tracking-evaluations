/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddSceneInfo
ENTRY_POINT: 07275c08
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddSceneInfo(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  char cVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar10;
  undefined1 unaff_w22;
  int iVar11;
  
  do {
    *(undefined1 *)(unaff_x21 + 0x743) = unaff_w22;
    do {
      if (*(int *)(unaff_x19 + 0x30) < *(int *)(unaff_x19 + 0xe4)) {
        lVar6 = *(long *)(unaff_x19 + 0x58);
        if (lVar6 == 0) goto LAB_07275eac;
        if (*(uint *)(lVar6 + 0x18) <= *(uint *)(unaff_x19 + 0xd4))
        goto Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_MaskMeshFilters;
        iVar3 = *(int *)(unaff_x19 + 0xd8);
        *(undefined1 *)(lVar6 + (int)*(uint *)(unaff_x19 + 0xd4) + 0x20) = 1;
        if (iVar3 < 1) goto LAB_07275ce0;
        iVar11 = 0;
        goto LAB_07275c64;
      }
      FUN_07275f40();
      FUN_07275680();
    } while ((*(byte *)(unaff_x21 + 0x743) & 1) != 0);
    FUN_04077588();
  } while( true );
LAB_07275c64:
  do {
    plVar10 = *(long **)(unaff_x19 + 0x50);
    if (plVar10 == (long *)0x0) goto LAB_07275eac;
    lVar6 = *plVar10;
    uVar1 = *(undefined4 *)(unaff_x19 + 0xd4);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x20) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_07275cc0;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar10,*unaff_x20,2);
LAB_07275cc0:
    (*(code *)*puVar2)(plVar10,uVar1,puVar2[1]);
    iVar3 = *(int *)(unaff_x19 + 0xd8);
    iVar11 = iVar11 + 1;
  } while (iVar11 < iVar3);
LAB_07275ce0:
  if (iVar3 == 3) {
    iVar3 = *(int *)(unaff_x19 + 0x30);
    lVar6 = *(long *)(unaff_x19 + 0x88);
    *(int *)(unaff_x19 + 0x30) = iVar3 + 1;
    if (lVar6 == 0) goto LAB_07275eac;
    uVar5 = iVar3 + 2;
    if (*(uint *)(lVar6 + 0x18) <= uVar5)
    goto Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_MaskMeshFilters;
    *(char *)(lVar6 + (int)uVar5 + 0x20) = (char)*(undefined4 *)(unaff_x19 + 0xd4);
LAB_07275e3c:
    iVar3 = *(int *)(unaff_x19 + 0x30);
    lVar6 = *(long *)(unaff_x19 + 0x88);
    *(int *)(unaff_x19 + 0x30) = iVar3 + 1;
    if (lVar6 == 0) goto LAB_07275eac;
    uVar5 = iVar3 + 2;
    if (*(uint *)(lVar6 + 0x18) <= uVar5)
    goto Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_MaskMeshFilters;
    *(char *)(lVar6 + (int)uVar5 + 0x20) = (char)*(undefined4 *)(unaff_x19 + 0xd4);
  }
  else {
    if (iVar3 == 2) goto LAB_07275e3c;
    if (iVar3 != 1) {
      lVar6 = *(long *)(unaff_x19 + 0x58);
      if (lVar6 == 0) goto LAB_07275eac;
      if (*(uint *)(lVar6 + 0x18) <= iVar3 - 4U)
      goto Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_MaskMeshFilters;
      iVar11 = *(int *)(unaff_x19 + 0x30);
      lVar4 = *(long *)(unaff_x19 + 0x88);
      *(undefined1 *)(lVar6 + (int)(iVar3 - 4U) + 0x20) = 1;
      *(int *)(unaff_x19 + 0x30) = iVar11 + 1;
      if (lVar4 == 0) goto LAB_07275eac;
      uVar5 = iVar11 + 2;
      if (*(uint *)(lVar4 + 0x18) <= uVar5)
      goto Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_MaskMeshFilters;
      *(char *)(lVar4 + (int)uVar5 + 0x20) = (char)*(undefined4 *)(unaff_x19 + 0xd4);
      iVar3 = *(int *)(unaff_x19 + 0x30);
      lVar6 = *(long *)(unaff_x19 + 0x88);
      *(int *)(unaff_x19 + 0x30) = iVar3 + 1;
      if (lVar6 == 0) goto LAB_07275eac;
      uVar5 = iVar3 + 2;
      if (*(uint *)(lVar6 + 0x18) <= uVar5)
      goto Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_MaskMeshFilters;
      *(char *)(lVar6 + (int)uVar5 + 0x20) = (char)*(undefined4 *)(unaff_x19 + 0xd4);
      iVar3 = *(int *)(unaff_x19 + 0x30);
      lVar6 = *(long *)(unaff_x19 + 0x88);
      *(int *)(unaff_x19 + 0x30) = iVar3 + 1;
      if (lVar6 == 0) goto LAB_07275eac;
      uVar5 = iVar3 + 2;
      if (*(uint *)(lVar6 + 0x18) <= uVar5)
      goto Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_MaskMeshFilters;
      *(char *)(lVar6 + (int)uVar5 + 0x20) = (char)*(undefined4 *)(unaff_x19 + 0xd4);
      iVar3 = *(int *)(unaff_x19 + 0x30);
      lVar6 = *(long *)(unaff_x19 + 0x88);
      *(int *)(unaff_x19 + 0x30) = iVar3 + 1;
      if (lVar6 == 0) goto LAB_07275eac;
      uVar5 = iVar3 + 2;
      if (*(uint *)(lVar6 + 0x18) <= uVar5)
      goto Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_MaskMeshFilters;
      *(char *)(lVar6 + (int)uVar5 + 0x20) = (char)*(undefined4 *)(unaff_x19 + 0xd4);
      iVar3 = *(int *)(unaff_x19 + 0x30);
      lVar6 = *(long *)(unaff_x19 + 0x88);
      *(int *)(unaff_x19 + 0x30) = iVar3 + 1;
      if (lVar6 == 0) goto LAB_07275eac;
      uVar5 = iVar3 + 2;
      if (*(uint *)(lVar6 + 0x18) <= uVar5)
      goto Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_MaskMeshFilters;
      cVar8 = *(char *)(unaff_x19 + 0xd8) + -4;
      goto LAB_07275e94;
    }
  }
  iVar3 = *(int *)(unaff_x19 + 0x30);
  lVar6 = *(long *)(unaff_x19 + 0x88);
  *(int *)(unaff_x19 + 0x30) = iVar3 + 1;
  if (lVar6 != 0) {
    uVar5 = iVar3 + 2;
    if (uVar5 < *(uint *)(lVar6 + 0x18)) {
      cVar8 = (char)*(undefined4 *)(unaff_x19 + 0xd4);
LAB_07275e94:
      *(char *)(lVar6 + (int)uVar5 + 0x20) = cVar8;
      return;
    }
Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_MaskMeshFilters:
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_07275eac:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


