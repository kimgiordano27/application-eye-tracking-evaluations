/*
FUNCTION_NAME: FUN_06cd3608
ENTRY_POINT: 06cd3608
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x06cd3914) */
/* WARNING: Removing unreachable block (ram,0x06cd394c) */
/* WARNING: Removing unreachable block (ram,0x06cd397c) */

void FUN_06cd3608(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  
  puVar2 = System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
  if ((DAT_07a50a39 & 1) == 0) {
    FUN_031f20f4(System_Collections_Generic_List<InteractableGroup_InteractableLimits>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IList<Column>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IList<ContentCatalogDataEntry>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_List<XRLoader>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_List<XRLoadAnchorResult>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_List<JsonParser_JsonValue>_TypeInfo);
    FUN_031f20f4(
                System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>_TypeInfo
                );
    FUN_031f20f4(System_Collections_Generic_List<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_ICollection<ParameterInfo>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
    DAT_07a50a39 = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 != 0) {
    FUN_06dd21d4(lVar5,0);
  }
  if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  FUN_05827928(*(long *)(param_1 + 0x100),
               *(undefined8 *)System_Collections_Generic_IList<Column>_TypeInfo);
  puVar4 = 
  System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>_TypeInfo;
  puVar3 = System_Collections_Generic_IList<ContentCatalogDataEntry>_TypeInfo;
  puVar2 = System_Collections_Generic_ICollection<ParameterInfo>_TypeInfo;
  lVar10 = *(long *)(param_1 + 0xa8);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  iVar1 = *(int *)(lVar10 + 0x20);
  if (iVar1 < 1) {
    fVar14 = 0.0;
  }
  else {
    iVar12 = 0;
    fVar14 = 0.0;
    while( true ) {
      uVar6 = FUN_0431fec4(lVar10,iVar12,*(undefined8 *)puVar4);
      lVar10 = thunk_FUN_0322f04c(uVar6,*(undefined8 *)puVar2);
      if (lVar10 == 0) {
        if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        fVar14 = 1.0;
        FUN_05827784(0x3f800000,*(long *)(param_1 + 0x100),uVar6,*(undefined8 *)puVar3);
      }
      iVar12 = iVar12 + 1;
      if (iVar1 == iVar12) break;
      lVar10 = *(long *)(param_1 + 0xa8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
    }
  }
  puVar4 = System_Collections_Generic_List<JsonParser_JsonValue>_TypeInfo;
  lVar10 = *(long *)(param_1 + 0xa0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  iVar1 = *(int *)(lVar10 + 0x20);
  if (0 < iVar1) {
    iVar12 = 0;
    while( true ) {
      uVar6 = FUN_0431fec4(lVar10,iVar12,*(undefined8 *)puVar4);
      lVar10 = thunk_FUN_0322f04c(uVar6,*(undefined8 *)puVar2);
      if ((lVar10 == 0) && (uVar7 = FUN_06cd0be0(param_1,uVar6), (uVar7 & 1) == 0)) {
        if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        FUN_05827784(0,*(long *)(param_1 + 0x100),uVar6,*(undefined8 *)puVar3);
      }
      iVar12 = iVar12 + 1;
      if (iVar1 == iVar12) break;
      lVar10 = *(long *)(param_1 + 0xa0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
    }
  }
  puVar4 = System_Collections_Generic_List<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo;
  lVar10 = *(long *)(param_1 + 0xf8);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  iVar1 = *(int *)(lVar10 + 0x20);
  if (iVar1 < 1) {
LAB_06cd38f0:
    if (lVar5 != 0) {
      FUN_06dd225c(lVar5,0);
    }
    if (*(long *)(param_1 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    FUN_0546c284(fVar14,*(long *)(param_1 + 0xe0),
                 *(undefined8 *)
                  System_Collections_Generic_List<InteractableGroup_InteractableLimits>_TypeInfo);
    return;
  }
  iVar12 = 0;
  do {
    plVar8 = (long *)FUN_0431fec4(lVar10,iVar12,*(undefined8 *)puVar4);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar10 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_06cd38a8;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)puVar2,1);
LAB_06cd38a8:
    fVar13 = (float)(*(code *)*puVar9)(plVar8,param_1,puVar9[1]);
    if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    FUN_05827784(*(long *)(param_1 + 0x100),plVar8,*(undefined8 *)puVar3);
    iVar12 = iVar12 + 1;
    if (fVar14 <= fVar13) {
      fVar14 = fVar13;
    }
    if (iVar12 == iVar1) goto LAB_06cd38f0;
    lVar10 = *(long *)(param_1 + 0xf8);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
  } while( true );
}


