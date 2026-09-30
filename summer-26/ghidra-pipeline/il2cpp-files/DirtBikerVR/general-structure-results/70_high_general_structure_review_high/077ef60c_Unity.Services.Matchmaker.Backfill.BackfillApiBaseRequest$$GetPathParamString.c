/*
FUNCTION_NAME: Unity.Services.Matchmaker.Backfill.BackfillApiBaseRequest$$GetPathParamString
ENTRY_POINT: 077ef60c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_17;telemetry_or_network_hits_8
*/


void Unity_Services_Matchmaker_Backfill_BackfillApiBaseRequest__GetPathParamString(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  int *unaff_x19;
  long unaff_x20;
  long lVar12;
  long *plVar13;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 077ef60c to 078ef807 has its CatchHandler @ 077ef60c
                       catch() { ... } // from try @ 077ef60c with catch @ 077ef60c
                       catch() { ... } // from try @ 077ef818 with catch @ 077ef60c
                       catch() { ... } // from try @ 077ef864 with catch @ 077ef60c
                       catch() { ... } // from try @ 077ef888 with catch @ 077ef60c */
  FUN_03a8a718(System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_TypeInfo);
  FUN_03a8a718(
              System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
              );
  FUN_03a8a718(System_Runtime_Serialization_DataNode<byte>_TypeInfo);
  FUN_03a8a718(
              UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
              );
  FUN_03a8a718(System_Runtime_Serialization_DataNode<object>_TypeInfo);
  FUN_03a8a718(System_Runtime_Serialization_DataNode<sbyte>_TypeInfo);
  FUN_03a8a718(System_Runtime_Serialization_DataNode<float>_TypeInfo);
  FUN_03a8a718(System_Runtime_Serialization_DataNode<string>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x273) = 1;
  puVar2 = Unity_Properties_ContainerPropertyBag<Vector3Int>_TypeInfo;
  iVar1 = *unaff_x19;
  in_stack_00000018 = 0;
  if (iVar1 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
LAB_077ef708:
    uVar4 = FUN_0587c704(&stack0x00000018,
                         *(undefined8 *)System_Runtime_Serialization_DataNode<sbyte>_TypeInfo);
  }
  else {
    if (iVar1 == 1) {
      in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x10);
      unaff_x19[0x10] = 0;
      unaff_x19[0x11] = 0;
      *unaff_x19 = -1;
LAB_077ef6dc:
      uVar4 = FUN_0587c704(&stack0x00000018,
                           *(undefined8 *)System_Runtime_Serialization_DataNode<sbyte>_TypeInfo);
      goto LAB_077ef71c;
    }
    if (iVar1 == 2) {
      in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x10);
      unaff_x19[0x10] = 0;
      unaff_x19[0x11] = 0;
      *unaff_x19 = -1;
    }
    else {
      lVar12 = *(long *)(unaff_x19 + 8);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_077ede30(lVar12);
      iVar1 = unaff_x19[10];
      if (iVar1 == 0) {
        plVar13 = *(long **)(lVar12 + 0x10);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar5 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)
                 UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
               ) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_077ef930;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_03ac43c4(plVar13,*(long *)
                                       UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
                              ,0);
LAB_077ef930:
        uVar4 = (*(code *)*puVar6)(plVar13,puVar6[1]);
        plVar13 = *(long **)(lVar12 + 0x20);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar5 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)System_Runtime_Serialization_DataNode<byte>_TypeInfo) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_077efad4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_03ac43c4(plVar13,*(long *)System_Runtime_Serialization_DataNode<byte>_TypeInfo,
                              1);
LAB_077efad4:
        uVar9 = (*(code *)*puVar6)(plVar13,puVar6[1]);
        uVar8 = *(undefined8 *)(unaff_x19 + 0xc);
        uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    System_Collections_Generic_Dictionary<ParameterExpression,_int>_TypeInfo
                                  );
        FUN_07827e14(uVar7,uVar4,uVar9,uVar8,0);
        plVar13 = *(long **)(lVar12 + 0x18);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar12 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)System_Runtime_Serialization_DataNode<object>_TypeInfo) {
              puVar6 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
              goto LAB_077efcb0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_03ac43c4(plVar13,*(long *)
                                       System_Runtime_Serialization_DataNode<object>_TypeInfo,0xd);
LAB_077efcb0:
        lVar12 = (*(code *)*puVar6)(plVar13,uVar7,0,puVar6[1]);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        in_stack_00000018 =
             FUN_058b71ec(lVar12,*(undefined8 *)
                                  System_Runtime_Serialization_DataNode<string>_TypeInfo);
        uVar10 = FUN_0587c6c4(&stack0x00000018,
                              *(undefined8 *)System_Runtime_Serialization_DataNode<float>_TypeInfo);
        if ((uVar10 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
          thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_03fe9a90(unaff_x19 + 2,&stack0x00000018);
          return;
        }
        goto LAB_077ef708;
      }
      if (iVar1 == 2) {
        plVar13 = *(long **)(lVar12 + 0x10);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar5 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)
                 UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
               ) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_077ef8c4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_03ac43c4(plVar13,*(long *)
                                       UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
                              ,0);
LAB_077ef8c4:
        uVar4 = (*(code *)*puVar6)(plVar13,puVar6[1]);
        plVar13 = *(long **)(lVar12 + 0x20);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar5 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)System_Runtime_Serialization_DataNode<byte>_TypeInfo) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_077efa38;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_03ac43c4(plVar13,*(long *)System_Runtime_Serialization_DataNode<byte>_TypeInfo,
                              1);
LAB_077efa38:
        uVar9 = (*(code *)*puVar6)(plVar13,puVar6[1]);
        uVar8 = *(undefined8 *)(unaff_x19 + 0xc);
        uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_TypeInfo
                                  );
        FUN_0782a97c(uVar7,uVar4,uVar9,uVar8,0);
        plVar13 = *(long **)(lVar12 + 0x18);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar12 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)System_Runtime_Serialization_DataNode<object>_TypeInfo) {
              puVar6 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x11) * 0x10 + 0x138);
              goto LAB_077efc10;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_03ac43c4(plVar13,*(long *)
                                       System_Runtime_Serialization_DataNode<object>_TypeInfo,0x11);
LAB_077efc10:
        lVar12 = (*(code *)*puVar6)(plVar13,uVar7,0,puVar6[1]);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        in_stack_00000018 =
             FUN_058b71ec(lVar12,*(undefined8 *)
                                  System_Runtime_Serialization_DataNode<string>_TypeInfo);
        uVar10 = FUN_0587c6c4(&stack0x00000018,
                              *(undefined8 *)System_Runtime_Serialization_DataNode<float>_TypeInfo);
        if ((uVar10 & 1) == 0) {
          *unaff_x19 = 1;
          *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
          thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_03fe9a90(unaff_x19 + 2,&stack0x00000018);
          return;
        }
        goto LAB_077ef6dc;
      }
      if (iVar1 != 3) {
        thunk_FUN_03af1434(PTR_DAT_08486870);
        uVar4 = thunk_FUN_03ac74bc();
        uVar9 = thunk_FUN_03af1434(
                                  System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo
                                  );
        FUN_06750b44(uVar4,uVar9,0);
        uVar9 = thunk_FUN_03af1434(
                                  System_Collections_Generic_Dictionary<PropertyName,_object>_TypeInfo
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar4,uVar9);
      }
      plVar13 = (long *)(unaff_x19 + 0xe);
      if (*plVar13 == 0) {
        if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar5 = FUN_0351a5ac(1,*(undefined8 *)System_Runtime_Serialization_DataNode<byte>_TypeInfo);
        *plVar13 = lVar5;
        thunk_FUN_03afed3c(plVar13);
      }
      plVar13 = *(long **)(lVar12 + 0x10);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)
               UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
             ) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_077ef99c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_03ac43c4(plVar13,*(long *)
                                     UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
                            ,0);
LAB_077ef99c:
      uVar7 = (*(code *)*puVar6)(plVar13,puVar6[1]);
      uVar4 = *(undefined8 *)(unaff_x19 + 0xc);
      uVar9 = *(undefined8 *)(unaff_x19 + 0xe);
      uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                                );
      FUN_0782bf30(uVar8,uVar7,uVar9,uVar4,0);
      plVar13 = *(long **)(lVar12 + 0x18);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar12 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)System_Runtime_Serialization_DataNode<object>_TypeInfo) {
            puVar6 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x13) * 0x10 + 0x138);
            goto LAB_077efb70;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_03ac43c4(plVar13,*(long *)System_Runtime_Serialization_DataNode<object>_TypeInfo,
                            0x13);
LAB_077efb70:
      lVar12 = (*(code *)*puVar6)(plVar13,uVar8,0,puVar6[1]);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_00000018 =
           FUN_058b71ec(lVar12,*(undefined8 *)System_Runtime_Serialization_DataNode<string>_TypeInfo
                       );
      uVar10 = FUN_0587c6c4(&stack0x00000018,
                            *(undefined8 *)System_Runtime_Serialization_DataNode<float>_TypeInfo);
      if ((uVar10 & 1) == 0) {
        *unaff_x19 = 2;
        *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
        thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_03fe9a90(unaff_x19 + 2,&stack0x00000018);
        return;
      }
    }
    uVar4 = FUN_0587c704(&stack0x00000018,
                         *(undefined8 *)System_Runtime_Serialization_DataNode<sbyte>_TypeInfo);
  }
LAB_077ef71c:
  puVar3 = System_Runtime_Serialization_DataNode<int>_TypeInfo;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *unaff_x19 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar3);
  return;
}


