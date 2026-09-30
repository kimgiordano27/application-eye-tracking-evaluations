/*
FUNCTION_NAME: FUN_05ffe530
ENTRY_POINT: 05ffe530
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_2;strong_file_logging_hits_12;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_05ffe530(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint local_64;
  
  if ((DAT_06b85583 & 1) == 0) {
    FUN_02d6084c(Method_System_Xml_HtmlEncodedRawTextWriter_WriteCharEntity__);
    FUN_02d6084c(PTR_DAT_067679b0);
    FUN_02d6084c(PTR_DAT_06769388);
    FUN_02d6084c(Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRSelectInteractable>_get_Item__
                );
    FUN_02d6084c(Method_System_Xml_HtmlEncodedRawTextWriter_WriteEntityRef__);
    FUN_02d6084c(PTR_DAT_06786948);
    FUN_02d6084c(Method_System_Collections_Generic_HashSet<IXRInteractable>__ctor__);
    FUN_02d6084c(Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRSelectInteractor>__ctor__);
    FUN_02d6084c(PTR_DAT_06762d68);
    FUN_02d6084c(PTR_DAT_0675ed08);
    FUN_02d6084c(PTR_DAT_06760700);
    FUN_02d6084c(PTR_DAT_06773718);
    FUN_02d6084c(PTR_DAT_06771cd0);
    FUN_02d6084c(PTR_DAT_0675ee10);
    FUN_02d6084c(PTR_DAT_06766a18);
    FUN_02d6084c(PTR_DAT_0675e2d0);
    FUN_02d6084c(PTR_DAT_06771610);
    FUN_02d6084c(PTR_DAT_0675e670);
    FUN_02d6084c(PTR_DAT_0675e238);
    FUN_02d6084c(PTR_DAT_067679a0);
    FUN_02d6084c(Newtonsoft_Json_Serialization_ErrorContext_var);
    FUN_02d6084c(UnityEngine_Color_var);
    FUN_02d6084c(UnityEngine_UIElements_EventCategoryAttribute_var);
    FUN_02d6084c(
                Method_System_Text_RegularExpressions_GroupCollection_System_Collections_Generic_ICollection<System_Text_RegularExpressions_Group>_Clear__
                );
    FUN_02d6084c(UnityEngine_CapsuleCollider_var);
    FUN_02d6084c(Method_System_Collections_Hashtable_CopyTo__);
    FUN_02d6084c(
                Method_System_Text_RegularExpressions_GroupCollection_System_Collections_Generic_ICollection<System_Text_RegularExpressions_Group>_Remove__
                );
    FUN_02d6084c(Method_System_HashCode_Combine<uint,_uint>__);
    FUN_02d6084c(Method_System_Xml_HtmlEncodedRawTextWriter_WriteSurrogateCharEntity__);
    FUN_02d6084c(Method_System_Xml_HtmlUtf8RawTextWriter_WriteCharEntity__);
    FUN_02d6084c(Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__);
    FUN_02d6084c(Method_System_Xml_HtmlUtf8RawTextWriter_WriteSurrogateCharEntity__);
    FUN_02d6084c(Method_Oculus_Platform_Models_HttpTransferUpdate__ctor__);
    FUN_02d6084c(Firebase_Platform_FirebaseEditorDispatcher_var);
    FUN_02d6084c(UnityEngine_UIElements_ComputedStyle_var);
    FUN_02d6084c(System_Runtime_Serialization_ClassDataNode_var);
    FUN_02d6084c(PTR_DAT_06780d08);
    DAT_06b85583 = 1;
  }
  puVar2 = Method_System_Xml_HtmlUtf8RawTextWriter_WriteSurrogateCharEntity__;
  puVar1 = PTR_DAT_06762d68;
  if (param_1 == 0) {
    return 0;
  }
  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067679b0);
  uVar13 = *(undefined8 *)puVar2;
  FUN_0504920c(lVar6,0);
  FUN_05ffd714(lVar6,uVar13);
  lVar14 = *(long *)puVar1;
  lVar11 = *(long *)(lVar14 + 0x38);
  if (lVar11 == 0) {
    FUN_02d9a33c(lVar14);
    lVar11 = *(long *)(lVar14 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar3 = 
  Method_System_Text_RegularExpressions_GroupCollection_System_Collections_Generic_ICollection<System_Text_RegularExpressions_Group>_Clear__
  ;
  puVar2 = PTR_DAT_06786948;
  lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02d9a2e0();
  }
  lVar11 = FUN_032c876c(param_1,*(undefined8 *)puVar3,**(undefined8 **)(lVar11 + 0xb8),
                        *(undefined8 *)puVar2);
  lVar15 = *(long *)puVar1;
  lVar14 = *(long *)(lVar15 + 0x38);
  if (lVar14 == 0) {
    FUN_02d9a33c(lVar15);
    lVar14 = *(long *)(lVar15 + 0x38);
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar14 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_02d9a2e0();
  }
  if (lVar11 != 0) {
    lVar11 = FUN_032c876c(lVar11,*(undefined8 *)
                                  Method_System_Xml_HtmlEncodedRawTextWriter_WriteSurrogateCharEntity__
                          ,**(undefined8 **)(lVar14 + 0xb8),*(undefined8 *)puVar2);
    lVar15 = *(long *)puVar1;
    lVar14 = *(long *)(lVar15 + 0x38);
    if (lVar14 == 0) {
      FUN_02d9a33c(lVar15);
      lVar14 = *(long *)(lVar15 + 0x38);
    }
    lVar14 = *(long *)(lVar14 + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar14 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_02d9a2e0();
    }
    puVar2 = PTR_DAT_0675e2d0;
    if (lVar11 != 0) {
      uVar13 = FUN_032c876c(lVar11,*(undefined8 *)
                                    Method_System_Text_RegularExpressions_GroupCollection_System_Collections_Generic_ICollection<System_Text_RegularExpressions_Group>_Remove__
                            ,**(undefined8 **)(lVar14 + 0xb8),
                            *(undefined8 *)
                             Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRSelectInteractor>__ctor__
                           );
      plVar7 = (long *)FUN_02d60934(*(undefined8 *)puVar2,1);
      if (plVar7 != (long *)0x0) {
        lVar14 = thunk_FUN_02d9d438(param_1,*(undefined8 *)(*plVar7 + 0x40));
        if (lVar14 == 0) {
LAB_05ffeca0:
          uVar13 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar13,0);
        }
        if ((int)plVar7[3] == 0) {
LAB_05ffec9c:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        plVar7[4] = param_1;
        thunk_FUN_02dd37b4(plVar7 + 4,param_1);
        if (lVar6 != 0) {
          uVar5 = FUN_032c8f64(lVar6,*(undefined8 *)
                                      Method_System_Xml_HtmlUtf8RawTextWriter_WriteCharEntity__,
                               plVar7,*(undefined8 *)
                                       Method_System_Xml_HtmlEncodedRawTextWriter_WriteEntityRef__);
          lVar15 = *(long *)puVar1;
          lVar14 = *(long *)(lVar15 + 0x38);
          if (lVar14 == 0) {
            FUN_02d9a33c(lVar15);
            lVar14 = *(long *)(lVar15 + 0x38);
          }
          lVar14 = *(long *)(lVar14 + 0x10);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_02d9a2e0();
          }
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          puVar2 = Method_System_Xml_HtmlUtf8RawTextWriter_WriteEntityRef__;
          puVar1 = Method_System_Collections_Generic_HashSet<IXRInteractable>__ctor__;
          lVar14 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_02d9a2e0();
          }
          uVar8 = FUN_032c858c(lVar11,*(undefined8 *)puVar2,**(undefined8 **)(lVar14 + 0xb8),
                               *(undefined8 *)puVar1);
          if ((uVar8 & 1) == 0) {
            uVar8 = thunk_FUN_04e8bd3c(*(undefined8 *)Method_System_HashCode_Combine<uint,_uint>__,
                                       uVar13,0);
            puVar12 = (undefined8 *)PTR_DAT_0675e238;
            if (((uVar8 & 1) == 0) &&
               (uVar8 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                            Method_System_Collections_Hashtable_CopyTo__,uVar13,0),
               puVar12 = (undefined8 *)Method_System_Xml_HtmlEncodedRawTextWriter_WriteCharEntity__,
               (uVar8 & 1) == 0)) {
              puVar12 = (undefined8 *)PTR_DAT_06769388;
            }
          }
          else {
            uVar8 = thunk_FUN_04e8bd3c(*(undefined8 *)UnityEngine_Color_var,uVar13,0);
            puVar12 = (undefined8 *)PTR_DAT_0675ee10;
            if ((((((uVar8 & 1) == 0) &&
                  (uVar8 = thunk_FUN_04e8bd3c(*(undefined8 *)PTR_DAT_06780d08,uVar13,0),
                  puVar12 = (undefined8 *)PTR_DAT_0675ed08, (uVar8 & 1) == 0)) &&
                 (uVar8 = thunk_FUN_04e8bd3c(*(undefined8 *)UnityEngine_UIElements_ComputedStyle_var
                                             ,uVar13,0), puVar12 = (undefined8 *)PTR_DAT_06771610,
                 (uVar8 & 1) == 0)) &&
                ((uVar8 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                              UnityEngine_UIElements_EventCategoryAttribute_var,
                                             uVar13,0), puVar12 = (undefined8 *)PTR_DAT_06771cd0,
                 (uVar8 & 1) == 0 &&
                 (uVar8 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                              Firebase_Platform_FirebaseEditorDispatcher_var,uVar13,
                                             0), puVar12 = (undefined8 *)PTR_DAT_06766a18,
                 (uVar8 & 1) == 0)))) &&
               ((uVar8 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                             System_Runtime_Serialization_ClassDataNode_var,uVar13,0
                                           ), puVar12 = (undefined8 *)PTR_DAT_0675e670,
                (uVar8 & 1) == 0 &&
                ((uVar8 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                              Newtonsoft_Json_Serialization_ErrorContext_var,uVar13,
                                             0), puVar12 = (undefined8 *)PTR_DAT_06773718,
                 (uVar8 & 1) == 0 &&
                 (uVar8 = thunk_FUN_04e8bd3c(*(undefined8 *)UnityEngine_CapsuleCollider_var,uVar13,0
                                            ), puVar12 = (undefined8 *)PTR_DAT_06760700,
                 (uVar8 & 1) == 0)))))) {
              uVar9 = thunk_FUN_02dc61f4(
                                        Method_UnityEngine_UIElements_GroupBoxUtility_OnGroupBoxDetachedFromPanel__
                                        );
              uVar10 = thunk_FUN_02dc61f4(PTR_DAT_067679f0);
              uVar13 = FUN_04e8db00(uVar9,uVar13,uVar10,0);
              thunk_FUN_02dc61f4(PTR_DAT_067608d0);
              uVar9 = thunk_FUN_02d9d534();
              FUN_0503de34(uVar9,uVar13,0);
              uVar13 = thunk_FUN_02dc61f4(
                                         Method_System_Net_HttpWebRequest_RunWithTimeout<HttpWebResponse>__
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_02d609b4(uVar9,uVar13);
            }
          }
          lVar11 = FUN_02d60934(*puVar12,uVar5);
          puVar4 = Method_Oculus_Platform_Models_HttpTransferUpdate__ctor__;
          puVar3 = 
          Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRSelectInteractable>_get_Item__;
          puVar2 = PTR_DAT_067679a0;
          puVar1 = PTR_DAT_0675e258;
          if (0 < (int)uVar5) {
            uVar16 = 0;
            do {
              plVar7 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,2);
              if (plVar7 == (long *)0x0) goto LAB_05ffec98;
              lVar14 = thunk_FUN_02d9d438(param_1,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar14 == 0) goto LAB_05ffeca0;
              if ((int)plVar7[3] == 0) goto LAB_05ffec9c;
              plVar7[4] = param_1;
              thunk_FUN_02dd37b4(plVar7 + 4,param_1);
              local_64 = uVar16;
              lVar14 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x48),&local_64);
              if ((lVar14 != 0) &&
                 (lVar15 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar15 == 0))
              goto LAB_05ffeca0;
              if (*(uint *)(plVar7 + 3) < 2) goto LAB_05ffec9c;
              plVar7[5] = lVar14;
              thunk_FUN_02dd37b4(plVar7 + 5,lVar14);
              uVar13 = FUN_032c8fb4(lVar6,*(undefined8 *)puVar4,plVar7,*(undefined8 *)puVar3);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)puVar2);
              }
              uVar13 = FUN_05ffb1f0(uVar13);
              if (lVar11 == 0) goto LAB_05ffec98;
              FUN_050293c8(lVar11,uVar13,uVar16,0);
              uVar16 = uVar16 + 1;
            } while (uVar5 != uVar16);
          }
          FUN_05ffbd68(lVar6);
          return lVar11;
        }
      }
    }
  }
LAB_05ffec98:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


