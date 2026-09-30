/*
FUNCTION_NAME: FUN_077b9710
ENTRY_POINT: 077b9710
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void FUN_077b9710(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  
  if ((DAT_08987052 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084be158);
    FUN_03a8a718(PTR_DAT_08498188);
    FUN_03a8a718(Unity_Hierarchy_HierarchyNodeTypeHandlerBaseEnumerable_Enumerator_var);
    FUN_03a8a718(System_Action<ulong,_OVRSpatialAnchor_OperationResult>_TypeInfo);
    FUN_03a8a718(System_Action<Vector4,_int>_TypeInfo);
    FUN_03a8a718(System_Action<VisualElement,_int>_TypeInfo);
    FUN_03a8a718(System_Action<VisualElement,_MatchResultInfo>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08486bc0);
    DAT_08987052 = 1;
  }
  uVar3 = FUN_065cd268(param_2,0);
  puVar4 = System_Action<VisualElement,_StyleValues>_TypeInfo;
  if ((uVar3 & 1) == 0) {
    plVar10 = *(long **)(param_1 + 0xe8);
    if (plVar10 == (long *)0x0) goto LAB_077b9a40;
    lVar5 = *plVar10;
    lVar11 = *(long *)System_Action<ulong,_OVRSpatialAnchor_OperationResult>_TypeInfo;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)(lVar11 + 0x20)) {
          lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
          goto LAB_077b9810;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    lVar5 = FUN_03ac43c4(plVar10);
LAB_077b9810:
    lVar5 = thunk_FUN_03aa9644(*(undefined8 *)(lVar5 + 8),lVar11);
    lVar5 = (**(code **)(lVar5 + 8))(plVar10,param_2,lVar5);
    puVar1 = System_Action<VisualElement,_int>_TypeInfo;
    puVar4 = System_Action<XRLayout,_Camera>_TypeInfo;
    if (lVar5 != 0) {
      uVar9 = *(undefined8 *)(lVar5 + 0x20);
      lVar5 = *(long *)System_Action<VisualElement,_int>_TypeInfo;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar5 = *(long *)puVar1;
      }
      puVar4 = PTR_DAT_084be158;
      puVar6 = *(undefined8 **)(lVar5 + 0xb8);
      lVar11 = puVar6[1];
      if (lVar11 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar12 = *puVar6;
        lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08498188);
        FUN_04962b78(lVar11,uVar12,*(undefined8 *)System_Action<Vector4,_int>_TypeInfo,0);
        plVar10 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar10 = lVar11;
        thunk_FUN_03afed3c(plVar10,lVar11);
      }
      lVar5 = FUN_044c97ac(uVar9,lVar11,*(undefined8 *)puVar4);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_065cfce4(lVar5,*(undefined8 *)
                                    System_Action<VisualElement,_MatchResultInfo>_TypeInfo,
                             *(undefined8 *)PTR_DAT_08486bc0,0);
      }
      plVar10 = *(long **)(param_1 + 0xb0);
      if (plVar10 == (long *)0x0) {
LAB_077b9a40:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar11 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Unity_Hierarchy_HierarchyNodeTypeHandlerBaseEnumerable_Enumerator_var) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_077b9960;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_03ac43c4(plVar10,*(long *)
                                     Unity_Hierarchy_HierarchyNodeTypeHandlerBaseEnumerable_Enumerator_var
                            ,0);
LAB_077b9960:
      uVar9 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      uVar3 = FUN_065cc2f0(uVar9,lVar5,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar11 = thunk_FUN_03af1434(
                                 System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo
                                 );
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      lVar11 = thunk_FUN_03af1434(
                                 System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo
                                 );
      uVar2 = *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x2c);
      uVar9 = thunk_FUN_03af1434(PTR_DAT_084867c8);
      lVar11 = FUN_03a8a804(uVar9,5);
      if (lVar11 == 0) goto LAB_077b9a40;
      uVar9 = thunk_FUN_03af1434(
                                System_Action<OVRSpatialAnchor_OperationResult,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                                );
      FUN_0350a870(lVar11,0,uVar9);
      lVar8 = *(long *)(param_1 + 0xb0);
      if (lVar8 == 0) goto LAB_077b9a40;
      uVar9 = thunk_FUN_03af1434(
                                Unity_Hierarchy_HierarchyNodeTypeHandlerBaseEnumerable_Enumerator_var
                                );
      uVar9 = FUN_0351a5ac(0,uVar9,lVar8);
      FUN_0350a870(lVar11,1,uVar9);
      uVar9 = thunk_FUN_03af1434(System_Action<byte[],_int,_int>_TypeInfo);
      FUN_0350a870(lVar11,2,uVar9);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_03af1434(PTR_DAT_084919d0);
      }
      FUN_0350b94c(lVar11);
      FUN_0350a870(lVar11,3,lVar5);
      uVar9 = thunk_FUN_03af1434(System_Action<Column,_int,_int>_TypeInfo);
      FUN_0350a870(lVar11,4,uVar9);
      uVar9 = FUN_065ce45c(lVar11,0);
      goto LAB_077b99b0;
    }
  }
  uVar9 = thunk_FUN_03af1434(puVar4);
  uVar2 = 0x33;
LAB_077b99b0:
  uVar9 = FUN_077b9aec(uVar2,uVar9,0);
  uVar12 = thunk_FUN_03af1434(System_Action<DebugManager_UIMode,_bool>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar9,uVar12);
}


