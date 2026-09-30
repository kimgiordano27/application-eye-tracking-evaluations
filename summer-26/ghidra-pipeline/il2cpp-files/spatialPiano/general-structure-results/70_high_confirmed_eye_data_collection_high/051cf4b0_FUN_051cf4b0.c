/*
FUNCTION_NAME: FUN_051cf4b0
ENTRY_POINT: 051cf4b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;active_gaze_retrieval;active_gaze_collection;possible_biometrics
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_3;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_collection_or_telemetry_sink;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_3
*/


undefined8
FUN_051cf4b0(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,long *param_9,
            undefined8 *param_10)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  
                    /* try { // try from 051cf4b0 to 052cf4bf has its CatchHandler @ 051cf4c0 */
                    /* catch() { ... } // from try @ 051cf3d4 with catch @ 051cf4c0
                       catch() { ... } // from try @ 051cf420 with catch @ 051cf4c0
                       catch() { ... } // from try @ 051cf4b0 with catch @ 051cf4c0 */
                    /* try { // try from 051cf4c4 to 052cf4c7 has its CatchHandler @ 051cf4d0 */
                    /* try { // try from 051cf4c8 to 052cf4d3 has its CatchHandler @ 051cf2e4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 051cf4c4 with catch @ 051cf4d0
                        */
  if ((DAT_06bba533 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(System_Collections_Generic_IDictionary<string,_JsonSchema>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_Dictionary<ARAnchor,_GameObject>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_IDictionary<string,_JsonSchemaModel>_TypeInfo);
    FUN_02f08768(PTR_DAT_067ca180);
    FUN_02f08768(
                UnityEngine_Pool_CollectionPool<List<EventCallbackFunctorBase>,_EventCallbackFunctorBase>_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ClimbProvider>_TypeInfo
                );
    FUN_02f08768(System_Collections_Generic_ICollection<object>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_IDictionary<string,_JsonSchemaNode>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo);
    FUN_02f08768(System_Collections_Generic_ICollection<ParameterInfo>_TypeInfo);
    DAT_06bba533 = 1;
  }
  *param_10 = 0;
  *param_9 = 0;
  if (param_2 == (long *)0x0) goto LAB_051cfacc;
  iVar4 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (iVar4 == 1) {
    plVar15 = (long *)param_2[0x12];
    if (plVar15 == (long *)0x0) goto LAB_051cfacc;
    bVar1 = *(byte *)(*(long *)
                       System_Collections_Generic_IDictionary<string,_JsonSchemaModel>_TypeInfo +
                     0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Collections_Generic_IDictionary<string,_JsonSchemaModel>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar15);
    }
    lVar5 = FUN_051f5610(plVar15,*(undefined8 *)
                                  System_Collections_Generic_ICollection<ParameterInfo>_TypeInfo,4,0
                        );
    if (lVar5 == 0) {
LAB_051cf704:
      lVar5 = FUN_051f9208(plVar15,*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ClimbProvider>_TypeInfo
                           ,0);
      if (lVar5 != 0) {
        if (*(int *)(*(long *)PTR_DAT_067ca180 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar9 = FUN_052042b8(lVar5,0);
        lVar5 = FUN_05206ae4(lVar5,0);
        if (lVar5 == 0) goto LAB_051cfacc;
        FUN_05163f1c(lVar5,0);
        FUN_051d1380(param_1,lVar5,param_3,param_4,param_5,param_6,param_7,uVar9);
        puVar3 = 
        UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
        ;
        lVar5 = FUN_051f9208(plVar15,*(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
                             ,0);
        puVar2 = PTR_DAT_067c9338;
        if (lVar5 != 0) {
          do {
            FUN_05163f1c(param_2,0);
            iVar4 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
            if (iVar4 == 4) {
              plVar15 = (long *)(**(code **)(*param_2 + 0x248))
                                          (param_2,*(undefined8 *)(*param_2 + 0x250));
              if ((plVar15 != (long *)0x0) && (*plVar15 != *(long *)(puVar2 + 0x90))) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48();
              }
              uVar13 = thunk_FUN_04f6d944(plVar15,*(undefined8 *)puVar3,0);
              if ((uVar13 & 1) != 0) goto LAB_051cf8e4;
            }
            FUN_05163f1c(param_2,0);
            FUN_05163ac4(param_2,0);
          } while( true );
        }
      }
      lVar5 = FUN_051f9208(plVar15,*(undefined8 *)
                                    System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo
                           ,0);
      if (lVar5 != 0) {
        if (*(int *)(*(long *)PTR_DAT_067ca180 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar9 = FUN_052042b8(lVar5,0);
        *param_10 = uVar9;
      }
      lVar5 = FUN_051f9208(plVar15,*(undefined8 *)
                                    System_Collections_Generic_ICollection<object>_TypeInfo,0);
      if (lVar5 == 0) goto LAB_051cf8d8;
      lVar5 = FUN_05206ae4(lVar5,0);
      if (lVar5 == 0) {
LAB_051cfacc:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_05163f1c(lVar5,0);
      lVar5 = FUN_051ce704(param_1,lVar5,*param_3,*param_4,param_5,param_8,*param_10);
      *param_9 = lVar5;
    }
    else {
      plVar6 = (long *)FUN_051f53c8(lVar5,0);
      if (plVar6 == (long *)0x0) goto LAB_051cfacc;
      iVar4 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      if ((iVar4 != 8) &&
         (iVar4 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230)),
         iVar4 != 10)) {
        FUN_02a7da48(plVar6);
        uVar9 = FUN_051ff9d0(plVar6,0);
        thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
        FUN_02a7d698();
        uVar10 = FUN_050656a0(0);
        uVar11 = thunk_FUN_02f6ef30(System_Collections_Generic_IDictionary<string,_object>_TypeInfo)
        ;
        uVar12 = thunk_FUN_02f6ef30(System_Collections_Generic_ICollection<ParameterInfo>_TypeInfo);
        uVar10 = FUN_051b937c(uVar11,uVar10,uVar12);
LAB_051cfbb0:
        uVar9 = FUN_051658c8(plVar6,uVar9,uVar10,0,0);
        uVar10 = thunk_FUN_02f6ef30(
                                   System_Collections_Generic_IDictionary<string,_ReflectionMember>_TypeInfo
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar9,uVar10);
      }
      if (*(int *)(*(long *)PTR_DAT_067ca180 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar7 = FUN_052042b8(lVar5,0);
      if (lVar7 == 0) goto LAB_051cf704;
      plVar6 = *(long **)(lVar5 + 0x20);
      if ((plVar6 != (long *)0x0) || (plVar6 = *(long **)(lVar5 + 0x18), plVar6 != (long *)0x0)) {
        FUN_02a7da48(plVar6);
        uVar9 = FUN_051ff9d0(plVar6,0);
        thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
        FUN_02a7d698();
        uVar10 = FUN_050656a0(0);
        uVar11 = thunk_FUN_02f6ef30(
                                   System_Collections_Generic_IDictionary<string,_JsonSchemaType>_TypeInfo
                                   );
        uVar12 = thunk_FUN_02f6ef30(System_Collections_Generic_ICollection<ParameterInfo>_TypeInfo);
        uVar10 = FUN_051b937c(uVar11,uVar10,uVar12);
        goto LAB_051cfbb0;
      }
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (plVar15 = (long *)FUN_05165c24(*(long *)(param_1 + 0x20),0), plVar15 == (long *)0x0))
      goto LAB_051cfacc;
      lVar5 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)System_Collections_Generic_IDictionary<string,_JsonSchema>_TypeInfo) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_051cf8f8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_02f421d0(plVar15,*(long *)
                                     System_Collections_Generic_IDictionary<string,_JsonSchema>_TypeInfo
                            ,0);
LAB_051cf8f8:
      lVar5 = (*(code *)*puVar8)(plVar15,param_1,lVar7,puVar8[1]);
      *param_9 = lVar5;
      puVar2 = System_Collections_Generic_Dictionary<ARAnchor,_GameObject>_TypeInfo;
      plVar15 = *(long **)(param_1 + 0x28);
      if (plVar15 != (long *)0x0) {
        lVar5 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)System_Collections_Generic_Dictionary<ARAnchor,_GameObject>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_051cf96c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_02f421d0(plVar15,*(long *)
                                       System_Collections_Generic_Dictionary<ARAnchor,_GameObject>_TypeInfo
                              ,0);
LAB_051cf96c:
        iVar4 = (*(code *)*puVar8)(plVar15,puVar8[1]);
        if (2 < iVar4) {
          plVar15 = *(long **)(param_1 + 0x28);
          uVar9 = (**(code **)(*param_2 + 0x278))(param_2,*(undefined8 *)(*param_2 + 0x280));
          if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9fd8);
          }
          uVar10 = FUN_050656a0(0);
          if (*param_9 == 0) goto LAB_051cfacc;
          uVar11 = thunk_FUN_02f1863c(*param_9,0);
          uVar10 = FUN_051b9490(*(undefined8 *)
                                 System_Collections_Generic_IDictionary<string,_JsonSchemaNode>_TypeInfo
                                ,uVar10,lVar7,uVar11);
          if (*(int *)(*(long *)
                        UnityEngine_Pool_CollectionPool<List<EventCallbackFunctorBase>,_EventCallbackFunctorBase>_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)
                                UnityEngine_Pool_CollectionPool<List<EventCallbackFunctorBase>,_EventCallbackFunctorBase>_TypeInfo
                              );
          }
          uVar9 = FUN_0515e1f0(param_2,uVar9,uVar10,0);
          if (plVar15 == (long *)0x0) goto LAB_051cfacc;
          lVar5 = *plVar15;
          uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar8 = (undefined8 *)(lVar5 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_051cfa84;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_02f421d0(plVar15,*(long *)puVar2,1);
LAB_051cfa84:
          (*(code *)*puVar8)(plVar15,3,uVar9,0,puVar8[1]);
        }
      }
    }
    FUN_05163ac4(param_2,0);
    uVar9 = 1;
  }
  else {
LAB_051cf8d8:
    FUN_05163f1c(param_2,0);
LAB_051cf8e4:
    uVar9 = 0;
  }
  return uVar9;
}


