/*
FUNCTION_NAME: Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig$$.ctor
ENTRY_POINT: 051cf5b8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;active_gaze_retrieval;active_gaze_collection;possible_biometrics
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_collection_or_telemetry_sink;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Oculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfig___ctor(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool in_ZR;
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
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *plVar15;
  
  if (in_ZR) {
    plVar15 = (long *)unaff_x19[0x12];
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
        FUN_052042b8(lVar5,0);
        lVar5 = FUN_05206ae4(lVar5,0);
        if (lVar5 == 0) goto LAB_051cfacc;
        FUN_05163f1c(lVar5,0);
        FUN_051d1380();
        puVar3 = 
        UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
        ;
        lVar5 = FUN_051f9208(plVar15,*(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
                             ,0);
        puVar2 = PTR_DAT_067c9338;
        if (lVar5 != 0) {
          do {
            FUN_05163f1c();
            iVar4 = (**(code **)(*unaff_x19 + 0x238))();
            if (iVar4 == 4) {
              plVar15 = (long *)(**(code **)(*unaff_x19 + 0x248))();
              if ((plVar15 != (long *)0x0) && (*plVar15 != *(long *)(puVar2 + 0x90))) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48();
              }
              uVar13 = thunk_FUN_04f6d944(plVar15,*(undefined8 *)puVar3,0);
              if ((uVar13 & 1) != 0) goto LAB_051cf8e4;
            }
            FUN_05163f1c();
            FUN_05163ac4();
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
        *unaff_x21 = uVar9;
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
      lVar5 = FUN_051ce704();
      *unaff_x22 = lVar5;
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
      if ((*(long *)(unaff_x20 + 0x20) == 0) ||
         (plVar15 = (long *)FUN_05165c24(*(long *)(unaff_x20 + 0x20),0), plVar15 == (long *)0x0))
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
      lVar5 = (*(code *)*puVar8)(plVar15);
      *unaff_x22 = lVar5;
      puVar2 = System_Collections_Generic_Dictionary<ARAnchor,_GameObject>_TypeInfo;
      plVar15 = *(long **)(unaff_x20 + 0x28);
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
          plVar15 = *(long **)(unaff_x20 + 0x28);
          (**(code **)(*unaff_x19 + 0x278))();
          if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9fd8);
          }
          uVar9 = FUN_050656a0(0);
          if (*unaff_x22 == 0) goto LAB_051cfacc;
          uVar10 = thunk_FUN_02f1863c(*unaff_x22,0);
          FUN_051b9490(*(undefined8 *)
                        System_Collections_Generic_IDictionary<string,_JsonSchemaNode>_TypeInfo,
                       uVar9,lVar7,uVar10);
          if (*(int *)(*(long *)
                        UnityEngine_Pool_CollectionPool<List<EventCallbackFunctorBase>,_EventCallbackFunctorBase>_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)
                                UnityEngine_Pool_CollectionPool<List<EventCallbackFunctorBase>,_EventCallbackFunctorBase>_TypeInfo
                              );
          }
          uVar9 = FUN_0515e1f0();
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
    FUN_05163ac4();
    uVar9 = 1;
  }
  else {
LAB_051cf8d8:
    FUN_05163f1c();
LAB_051cf8e4:
    uVar9 = 0;
  }
  return uVar9;
}


