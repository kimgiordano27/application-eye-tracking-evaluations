/*
FUNCTION_NAME: Oculus.Interaction.PoseDetection.FingerFeatureConfigBuilder.OpenCloseStateBuilder$$get_Neutral
ENTRY_POINT: 051cf600
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_3
*/


undefined8
Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OpenCloseStateBuilder__get_Neutral(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  lVar4 = FUN_051f5610();
  if (lVar4 != 0) {
    plVar5 = (long *)FUN_051f53c8(lVar4,0);
    if (plVar5 == (long *)0x0) goto LAB_051cfacc;
    iVar3 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
    if ((iVar3 != 8) &&
       (iVar3 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230)), iVar3 != 10
       )) {
      FUN_02a7da48(plVar5);
      uVar8 = FUN_051ff9d0(plVar5,0);
      thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
      FUN_02a7d698();
      uVar9 = FUN_050656a0(0);
      uVar10 = thunk_FUN_02f6ef30(System_Collections_Generic_IDictionary<string,_object>_TypeInfo);
      uVar11 = thunk_FUN_02f6ef30(System_Collections_Generic_ICollection<ParameterInfo>_TypeInfo);
      uVar9 = FUN_051b937c(uVar10,uVar9,uVar11);
LAB_051cfbb0:
      uVar8 = FUN_051658c8(plVar5,uVar8,uVar9,0,0);
      uVar9 = thunk_FUN_02f6ef30(
                                System_Collections_Generic_IDictionary<string,_ReflectionMember>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar8,uVar9);
    }
    if (*(int *)(*(long *)PTR_DAT_067ca180 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar6 = FUN_052042b8(lVar4,0);
    if (lVar6 != 0) {
      plVar5 = *(long **)(lVar4 + 0x20);
      if ((plVar5 != (long *)0x0) || (plVar5 = *(long **)(lVar4 + 0x18), plVar5 != (long *)0x0)) {
        FUN_02a7da48(plVar5);
        uVar8 = FUN_051ff9d0(plVar5,0);
        thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
        FUN_02a7d698();
        uVar9 = FUN_050656a0(0);
        uVar10 = thunk_FUN_02f6ef30(
                                   System_Collections_Generic_IDictionary<string,_JsonSchemaType>_TypeInfo
                                   );
        uVar11 = thunk_FUN_02f6ef30(System_Collections_Generic_ICollection<ParameterInfo>_TypeInfo);
        uVar9 = FUN_051b937c(uVar10,uVar9,uVar11);
        goto LAB_051cfbb0;
      }
      if ((*(long *)(unaff_x20 + 0x20) == 0) ||
         (plVar5 = (long *)FUN_05165c24(*(long *)(unaff_x20 + 0x20),0), plVar5 == (long *)0x0))
      goto LAB_051cfacc;
      lVar4 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Collections_Generic_IDictionary<string,_JsonSchema>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_051cf8f8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02f421d0(plVar5,*(long *)
                                    System_Collections_Generic_IDictionary<string,_JsonSchema>_TypeInfo
                            ,0);
LAB_051cf8f8:
      lVar4 = (*(code *)*puVar7)(plVar5);
      *unaff_x22 = lVar4;
      puVar1 = System_Collections_Generic_Dictionary<ARAnchor,_GameObject>_TypeInfo;
      plVar5 = *(long **)(unaff_x20 + 0x28);
      if (plVar5 == (long *)0x0) goto LAB_051cfa9c;
      lVar4 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Collections_Generic_Dictionary<ARAnchor,_GameObject>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_051cf96c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02f421d0(plVar5,*(long *)
                                    System_Collections_Generic_Dictionary<ARAnchor,_GameObject>_TypeInfo
                            ,0);
LAB_051cf96c:
      iVar3 = (*(code *)*puVar7)(plVar5,puVar7[1]);
      if (iVar3 < 3) goto LAB_051cfa9c;
      plVar5 = *(long **)(unaff_x20 + 0x28);
      (**(code **)(*unaff_x19 + 0x278))();
      if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9fd8);
      }
      uVar8 = FUN_050656a0(0);
      if (*unaff_x22 != 0) {
        uVar9 = thunk_FUN_02f1863c(*unaff_x22,0);
        FUN_051b9490(*(undefined8 *)
                      System_Collections_Generic_IDictionary<string,_JsonSchemaNode>_TypeInfo,uVar8,
                     lVar6,uVar9);
        if (*(int *)(*(long *)
                      UnityEngine_Pool_CollectionPool<List<EventCallbackFunctorBase>,_EventCallbackFunctorBase>_TypeInfo
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)
                              UnityEngine_Pool_CollectionPool<List<EventCallbackFunctorBase>,_EventCallbackFunctorBase>_TypeInfo
                            );
        }
        uVar8 = FUN_0515e1f0();
        if (plVar5 != (long *)0x0) {
          lVar4 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar4 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_051cfa84;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_02f421d0(plVar5,*(long *)puVar1,1);
LAB_051cfa84:
          (*(code *)*puVar7)(plVar5,3,uVar8,0,puVar7[1]);
          goto LAB_051cfa9c;
        }
      }
      goto LAB_051cfacc;
    }
  }
  lVar4 = FUN_051f9208();
  if (lVar4 != 0) {
    if (*(int *)(*(long *)PTR_DAT_067ca180 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_052042b8(lVar4,0);
    lVar4 = FUN_05206ae4(lVar4,0);
    if (lVar4 == 0) goto LAB_051cfacc;
    FUN_05163f1c(lVar4,0);
    FUN_051d1380();
    puVar2 = 
    UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo;
    lVar4 = FUN_051f9208();
    puVar1 = PTR_DAT_067c9338;
    if (lVar4 != 0) {
      do {
        FUN_05163f1c();
        iVar3 = (**(code **)(*unaff_x19 + 0x238))();
        if (iVar3 == 4) {
          plVar5 = (long *)(**(code **)(*unaff_x19 + 0x248))();
          if ((plVar5 != (long *)0x0) && (*plVar5 != *(long *)(puVar1 + 0x90))) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48();
          }
          uVar12 = thunk_FUN_04f6d944(plVar5,*(undefined8 *)puVar2,0);
          if ((uVar12 & 1) != 0) {
            return 0;
          }
        }
        FUN_05163f1c();
        FUN_05163ac4();
      } while( true );
    }
  }
  lVar4 = FUN_051f9208();
  if (lVar4 != 0) {
    if (*(int *)(*(long *)PTR_DAT_067ca180 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar8 = FUN_052042b8(lVar4,0);
    *unaff_x21 = uVar8;
  }
  lVar4 = FUN_051f9208();
  if (lVar4 == 0) {
    FUN_05163f1c();
    return 0;
  }
  lVar4 = FUN_05206ae4(lVar4,0);
  if (lVar4 != 0) {
    FUN_05163f1c(lVar4,0);
    lVar4 = FUN_051ce704();
    *unaff_x22 = lVar4;
LAB_051cfa9c:
    FUN_05163ac4();
    return 1;
  }
LAB_051cfacc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


