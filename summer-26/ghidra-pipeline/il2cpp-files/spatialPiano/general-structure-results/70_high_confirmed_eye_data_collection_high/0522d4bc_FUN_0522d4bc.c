/*
FUNCTION_NAME: FUN_0522d4bc
ENTRY_POINT: 0522d4bc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;active_gaze_retrieval;active_gaze_collection;possible_biometrics
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_7;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_collection_or_telemetry_sink;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_7
*/


long FUN_0522d4bc(undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_06bba85b & 1) == 0) {
    FUN_02f08768(PTR_DAT_067d7690);
    FUN_02f08768(PTR_DAT_067d7680);
    FUN_02f08768(PTR_DAT_067d7688);
    FUN_02f08768(PTR_DAT_067c96c8);
    FUN_02f08768(System_Nullable<CompositionLayerAnalytics_UsageMetricsEvent>_TypeInfo);
    FUN_02f08768(PTR_DAT_067c96d0);
    FUN_02f08768(
                UnityEngine_Pool_CollectionPool<Dictionary<int,_List<int>>,_KeyValuePair<int,_List<int>>>_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ClimbProvider>_TypeInfo
                );
    FUN_02f08768(Oculus_Interaction_MAction<TeleportInteractable>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_ICollection<object>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_IEnumerator<XAttribute>_TypeInfo);
    FUN_02f08768(System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo);
    FUN_02f08768(PTR_DAT_067ce970);
    FUN_02f08768(System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_ICollection<ParameterInfo>_TypeInfo);
    DAT_06bba85b = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  if (param_2 != (long *)0x0) {
    uVar10 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
    puVar6 = System_Nullable<CompositionLayerAnalytics_UsageMetricsEvent>_TypeInfo;
    puVar4 = System_Collections_Generic_IEnumerator<XAttribute>_TypeInfo;
    puVar3 = System_Collections_Generic_ICollection<object>_TypeInfo;
    puVar2 = PTR_DAT_067d7690;
    puVar1 = PTR_DAT_067c96d0;
    if ((uVar10 & 1) == 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      do {
        iVar8 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        if (iVar8 != 4) {
          if (iVar8 == 5) {
            return lVar17;
          }
          if (iVar8 == 0xd) {
            return lVar17;
          }
LAB_0522da24:
          FUN_02a7da48(param_2);
          uVar9 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
          local_90 = thunk_FUN_02f6ef30(System_Comparison<XmlReflectionMember>_TypeInfo);
          uStack_88 = 0xffffffffffffffff;
          local_80 = uVar9;
          uVar13 = FUN_0510aa48(&local_90,0);
          uVar14 = thunk_FUN_02f6ef30(System_Nullable<XRManagementAnalytics_BuildEvent>_TypeInfo);
          uVar13 = FUN_04f65260(uVar14,uVar13,0);
          uVar13 = FUN_0515d378(param_2,uVar13,0);
          uVar14 = thunk_FUN_02f6ef30(Unity_AppUI_UI_NumericalField<double>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar13,uVar14);
        }
        plVar11 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250))
        ;
        if (plVar11 == (long *)0x0) goto LAB_0522dab0;
        lVar12 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        uVar10 = FUN_051b9374(lVar12,0);
        if ((uVar10 & 1) != 0) {
          return lVar17;
        }
        if (lVar12 == 0) goto LAB_0522dab0;
        sVar7 = FUN_04f69818(lVar12,0,0);
        if (sVar7 == 0x24) {
          uVar10 = thunk_FUN_04f6d944(lVar12,*(undefined8 *)puVar3,0);
          if (((((uVar10 & 1) == 0) &&
               (uVar10 = thunk_FUN_04f6d944(lVar12,*(undefined8 *)
                                                                                                        
                                                  System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo
                                            ,0), (uVar10 & 1) == 0)) &&
              (uVar10 = thunk_FUN_04f6d944(lVar12,*(undefined8 *)
                                                                                                      
                                                  System_Collections_Generic_ICollection<ParameterInfo>_TypeInfo
                                           ,0), (uVar10 & 1) == 0)) &&
             ((uVar10 = thunk_FUN_04f6d944(lVar12,*(undefined8 *)
                                                                                                      
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ClimbProvider>_TypeInfo
                                           ,0), (uVar10 & 1) == 0 &&
              (uVar10 = thunk_FUN_04f6d944(lVar12,*(undefined8 *)
                                                                                                      
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
                                           ,0), (uVar10 & 1) == 0)))) {
            return lVar17;
          }
          if (param_3 == (long *)0x0) goto LAB_0522dab0;
          lVar16 = (**(code **)(*param_3 + 0x248))
                             (param_3,*(undefined8 *)
                                       Oculus_Interaction_MAction<TeleportInteractable>_TypeInfo,
                              *(undefined8 *)(*param_3 + 0x250));
          if (lVar16 == 0) {
            if (lVar17 == 0) {
              lVar17 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d7688);
              FUN_0492c420(lVar17,*(undefined8 *)PTR_DAT_067d7680);
            }
            local_70 = 0;
            while( true ) {
              local_78 = local_70;
              uVar13 = FUN_03e1ba94(&local_78,*(undefined8 *)puVar6);
              uVar13 = FUN_04f65260(*(undefined8 *)puVar4,uVar13,0);
              lVar16 = (**(code **)(*param_3 + 0x238))
                                 (param_3,uVar13,*(undefined8 *)(*param_3 + 0x240));
              if (lVar16 == 0) break;
              FUN_03e1b994(&local_70,local_70._4_4_ + 1,*(undefined8 *)puVar1);
            }
            local_78 = local_70;
            uVar13 = FUN_03e1ba94(&local_78,*(undefined8 *)puVar6);
            lVar16 = FUN_04f65260(*(undefined8 *)puVar4,uVar13,0);
            uVar13 = FUN_04f65260(*(undefined8 *)
                                   System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo,lVar16,
                                  0);
            puVar5 = Oculus_Interaction_MAction<TeleportInteractable>_TypeInfo;
            if (lVar17 == 0) goto LAB_0522dab0;
            FUN_0492cd38(lVar17,uVar13,
                         *(undefined8 *)Oculus_Interaction_MAction<TeleportInteractable>_TypeInfo,
                         *(undefined8 *)puVar2);
            (**(code **)(*param_3 + 0x1f8))
                      (param_3,lVar16,*(undefined8 *)puVar5,*(undefined8 *)(*param_3 + 0x200));
          }
          uVar10 = thunk_FUN_04f6d944(lVar12,*(undefined8 *)puVar3,0);
          if ((uVar10 & 1) != 0) {
            return lVar17;
          }
          uVar13 = FUN_04f73508(lVar12,1,0);
          FUN_05163f1c(param_2,0);
          uVar14 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
          uVar10 = FUN_051b2e70(uVar14,0);
          if ((uVar10 & 1) == 0) goto LAB_0522da24;
          if (lVar17 == 0) {
            lVar17 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d7688);
            FUN_0492c420(lVar17,*(undefined8 *)PTR_DAT_067d7680);
          }
          plVar11 = (long *)(**(code **)(*param_2 + 0x248))
                                      (param_2,*(undefined8 *)(*param_2 + 0x250));
          if (plVar11 == (long *)0x0) {
            uVar14 = 0;
          }
          else {
            uVar14 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
          }
          uVar13 = FUN_04f6f6b4(lVar16,*(undefined8 *)PTR_DAT_067ce970,uVar13,0);
          if (lVar17 == 0) goto LAB_0522dab0;
          FUN_0492cd38(lVar17,uVar13,uVar14,*(undefined8 *)puVar2);
        }
        else {
          if (sVar7 != 0x40) {
            return lVar17;
          }
          if (lVar17 == 0) {
            lVar17 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d7688);
            FUN_0492c420(lVar17,*(undefined8 *)PTR_DAT_067d7680);
          }
          uVar13 = FUN_04f73508(lVar12,1,0);
          FUN_05163f1c(param_2,0);
          if (*(int *)(*(long *)
                        UnityEngine_Pool_CollectionPool<Dictionary<int,_List<int>>,_KeyValuePair<int,_List<int>>>_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar14 = FUN_0522c120(param_2);
          if (lVar17 == 0) goto LAB_0522dab0;
          uVar15 = FUN_0492cd38(lVar17,uVar13,uVar14,*(undefined8 *)puVar2);
          uVar10 = FUN_0522e98c(uVar15,uVar13,&local_68);
          if ((uVar10 & 1) != 0) {
            if (param_3 == (long *)0x0) goto LAB_0522dab0;
            (**(code **)(*param_3 + 0x1f8))
                      (param_3,local_68,uVar14,*(undefined8 *)(*param_3 + 0x200));
          }
        }
        uVar10 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
      } while ((uVar10 & 1) != 0);
    }
    return lVar17;
  }
LAB_0522dab0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


