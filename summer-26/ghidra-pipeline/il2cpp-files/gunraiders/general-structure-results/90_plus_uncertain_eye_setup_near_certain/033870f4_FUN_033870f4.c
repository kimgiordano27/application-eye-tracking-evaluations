/*
FUNCTION_NAME: FUN_033870f4
ENTRY_POINT: 033870f4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 183
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_033870f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *local_68;
  
  puVar1 = 
  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaElementDecl>_get_Current__
  ;
  if ((DAT_04533635 & 1) == 0) {
    FUN_01c5d288(System_ComponentModel_ListSortDescription_TypeInfo);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaEntity>_Dispose__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaEntity>_MoveNext__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaEntity>_get_Current__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_Dispose__
                );
    FUN_01c5d288(Oculus_Platform_Models_LivestreamingApplicationStatus_TypeInfo);
    FUN_01c5d288(UnityEngine_Splines_InterpolatorUtility_TypeInfo);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_MoveNext__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_get_Current__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Bounds>_Dispose__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_MoveNext__
                );
    FUN_01c5d288(System_Runtime_Remoting_InternalRemotingServices_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230910);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaElementDecl>_get_Current__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_get_Current__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>_MoveNext__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>_get_Current__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_Dispose__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<string,_StringBuilder>_Dispose__
                );
    DAT_04533635 = 1;
  }
  local_68 = (long *)0x0;
  lVar3 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_0338c8dc(lVar3,0);
  puVar1 = System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
  if (lVar3 == 0) goto LAB_033878a4;
  *(undefined8 *)(lVar3 + 0x18) = param_2;
  puVar2 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_MoveNext__
  ;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar4 = FUN_023c2ce0(param_2,*(undefined8 *)puVar2);
  puVar2 = Oculus_Platform_Models_LivestreamingApplicationStatus_TypeInfo;
  plVar12 = (long *)PTR_DAT_0422fb28;
  if (lVar4 != 0) {
    uVar15 = *(undefined8 *)(lVar3 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar5 = FUN_0337f350(uVar15);
    uVar15 = *(undefined8 *)puVar2;
    if (*(int *)(*plVar12 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*plVar12);
    }
    uVar15 = FUN_032e04b8(uVar15,0);
    OVRPlugin__GetTrackerPose(lVar5,uVar15,&local_68);
    plVar13 = local_68;
    if (local_68 == (long *)0x0) goto LAB_033878a4;
    lVar6 = (**(code **)(*local_68 + 0x458))(local_68,*(undefined8 *)(*local_68 + 0x460));
    if (lVar6 == 0) goto LAB_033878a4;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_033878a8;
    lVar17 = *(long *)(lVar6 + 0x20);
    lVar6 = (**(code **)(*plVar13 + 0x458))(plVar13,*(undefined8 *)(*plVar13 + 0x460));
    if (lVar6 == 0) goto LAB_033878a4;
    if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_033878a8;
    lVar16 = *(long *)(lVar6 + 0x28);
    uVar15 = FUN_032e04b8(*(undefined8 *)puVar2,0);
    uVar7 = FUN_0337ffa8(lVar5,uVar15);
    lVar6 = lVar5;
    if ((uVar7 & 1) != 0) {
      uVar15 = *(undefined8 *)System_ComponentModel_ListSortDescription_TypeInfo;
      if (*(int *)(*plVar12 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar8 = (long *)FUN_032e04b8(uVar15,0);
      plVar9 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,2);
      if (plVar9 == (long *)0x0) goto LAB_033878a4;
      if ((lVar17 != 0) &&
         (lVar6 = thunk_FUN_01c495e4(lVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0))
      goto LAB_033878ac;
      uVar14 = *(uint *)(plVar9 + 3);
      if (uVar14 == 0) goto LAB_033878a8;
      plVar9[4] = lVar17;
      if (lVar16 != 0) {
        lVar6 = thunk_FUN_01c495e4(lVar16,*(undefined8 *)(*plVar9 + 0x40));
        if (lVar6 == 0) goto LAB_033878ac;
        uVar14 = *(uint *)(plVar9 + 3);
      }
      if (uVar14 < 2) goto LAB_033878a8;
      plVar9[5] = lVar16;
      if (plVar8 == (long *)0x0) goto LAB_033878a4;
      lVar6 = (**(code **)(*plVar8 + 0x8f8))(plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x900));
    }
    if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar10 = FUN_033a78fc(0);
    if (lVar10 == 0) goto LAB_033878a4;
    uVar15 = FUN_023c14fc(lVar10,*(undefined8 *)(lVar3 + 0x18),
                          *(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_get_Current__
                         );
    *(undefined8 *)(lVar3 + 0x10) = uVar15;
    if (*(char *)(lVar4 + 0x11) != '\0') {
      lVar10 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary_Enumerator<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>_MoveNext__
                                 );
      FUN_0338c8e4(lVar10,0);
      if (lVar10 == 0) goto LAB_033878a4;
      *(long *)(lVar10 + 0x28) = lVar3;
      uVar15 = *(undefined8 *)(lVar3 + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_0337f1bc(uVar15,1,0);
      if ((uVar7 & 1) == 0) {
        uVar15 = 0;
      }
      else {
        if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar11 = FUN_033a78fc(0);
        if ((*(long *)(lVar10 + 0x28) == 0) || (lVar11 == 0)) goto LAB_033878a4;
        uVar15 = FUN_023c18ac(lVar11,*(undefined8 *)(*(long *)(lVar10 + 0x28) + 0x18),
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Bounds>_Dispose__
                             );
      }
      *(undefined8 *)(lVar10 + 0x10) = uVar15;
      if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar12 = (long *)FUN_033a78fc(0);
      if (plVar12 == (long *)0x0) goto LAB_033878a4;
      lVar11 = thunk_FUN_01bedf90(*(undefined8 *)
                                   (*plVar12 +
                                    (ulong)*(ushort *)
                                            (*(long *)
                                              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_MoveNext__
                                            + 0x50) * 0x10 + 0x140));
      uVar15 = (**(code **)(lVar11 + 8))(plVar12,lVar6,lVar11);
      *(undefined8 *)(lVar10 + 0x18) = uVar15;
      puVar1 = PTR_DAT_04230910;
      plVar12 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,1);
      if (plVar12 == (long *)0x0) goto LAB_033878a4;
      if ((lVar17 != 0) &&
         (lVar6 = thunk_FUN_01c495e4(lVar17,*(undefined8 *)(*plVar12 + 0x40)), lVar6 == 0))
      goto LAB_033878ac;
      if ((int)plVar12[3] == 0) goto LAB_033878a8;
      plVar12[4] = lVar17;
      puVar2 = 
      Method_System_Collections_Generic_Dictionary_Enumerator<string,_StringBuilder>_Dispose__;
      if (lVar5 == 0) goto LAB_033878a4;
      lVar5 = FUN_032ebd2c(lVar5,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_StringBuilder>_Dispose__
                           ,0x14,0,lVar16,plVar12,0,0);
      if (lVar5 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = FUN_0321212c(lVar5,0);
      }
      uVar7 = FUN_0321094c(uVar15,0,0);
      if ((uVar7 & 1) != 0) {
        plVar12 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar1,1);
        if (plVar12 == (long *)0x0) goto LAB_033878a4;
        if ((lVar17 != 0) &&
           (lVar5 = thunk_FUN_01c495e4(lVar17,*(undefined8 *)(*plVar12 + 0x40)), lVar5 == 0))
        goto LAB_033878ac;
        if ((int)plVar12[3] == 0) goto LAB_033878a8;
        plVar12[4] = lVar17;
        lVar5 = FUN_032ebd2c(plVar13,*(undefined8 *)puVar2,0x14,0,lVar16,plVar12,0,0);
        if (lVar5 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = FUN_0321212c(lVar5,0);
        }
      }
      if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar13 = (long *)FUN_033a78fc(0);
      plVar12 = (long *)PTR_DAT_0422fb28;
      if (plVar13 == (long *)0x0) goto LAB_033878a4;
      lVar5 = thunk_FUN_01bedf90(*(undefined8 *)
                                  (*plVar13 +
                                   (ulong)*(ushort *)
                                           (*(long *)
                                             Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__
                                           + 0x50) * 0x10 + 0x140));
      uVar15 = (**(code **)(lVar5 + 8))(plVar13,uVar15,lVar5);
      *(undefined8 *)(lVar10 + 0x20) = uVar15;
      uVar15 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary_Enumerator<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_Dispose__
                                 );
      FUN_0338f7d0(uVar15,lVar10,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_get_Current__
                   ,0);
      if (param_1 == 0) goto LAB_033878a4;
      *(undefined8 *)(param_1 + 0xe0) = uVar15;
    }
    if (*(char *)(lVar4 + 0x10) == '\0') {
      if (param_1 == 0) goto LAB_033878a4;
    }
    else {
      lVar4 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_Dispose__
                                );
      FUN_0338cae0(lVar4,0);
      if (lVar4 == 0) {
LAB_033878a4:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      *(long *)(lVar4 + 0x18) = lVar3;
      uVar15 = *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaEntity>_Dispose__
      ;
      if (*(int *)(*plVar12 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar12 = (long *)FUN_032e04b8(uVar15,0);
      plVar13 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,2);
      if (plVar13 == (long *)0x0) goto LAB_033878a4;
      if ((lVar17 != 0) &&
         (lVar3 = thunk_FUN_01c495e4(lVar17,*(undefined8 *)(*plVar13 + 0x40)), lVar3 == 0)) {
LAB_033878ac:
        uVar15 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar15,0);
      }
      uVar14 = *(uint *)(plVar13 + 3);
      if (uVar14 == 0) {
LAB_033878a8:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar13[4] = lVar17;
      if (lVar16 != 0) {
        lVar3 = thunk_FUN_01c495e4(lVar16,*(undefined8 *)(*plVar13 + 0x40));
        if (lVar3 == 0) goto LAB_033878ac;
        uVar14 = *(uint *)(plVar13 + 3);
      }
      if (uVar14 < 2) goto LAB_033878a8;
      plVar13[5] = lVar16;
      if (plVar12 == (long *)0x0) goto LAB_033878a4;
      lVar3 = (**(code **)(*plVar12 + 0x8f8))(plVar12,plVar13,*(undefined8 *)(*plVar12 + 0x900));
      if (lVar3 == 0) goto LAB_033878a4;
      uVar15 = FUN_032eb8ac(lVar3,0);
      uVar15 = FUN_02342f08(uVar15,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaEntity>_MoveNext__
                           );
      if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo);
      }
      plVar12 = (long *)FUN_033a78fc(0);
      if (plVar12 == (long *)0x0) goto LAB_033878a4;
      uVar15 = (**(code **)(*plVar12 + 0x188))(plVar12,uVar15,*(undefined8 *)(*plVar12 + 400));
      *(undefined8 *)(lVar4 + 0x10) = uVar15;
      uVar15 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaEntity>_get_Current__
                                 );
      FUN_0338f8e8(uVar15,lVar4,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>_get_Current__
                   ,0);
      if (param_1 == 0) goto LAB_033878a4;
      *(undefined8 *)(param_1 + 0xe8) = uVar15;
    }
    FUN_033924ac(param_1,lVar16,0);
  }
  return;
}


