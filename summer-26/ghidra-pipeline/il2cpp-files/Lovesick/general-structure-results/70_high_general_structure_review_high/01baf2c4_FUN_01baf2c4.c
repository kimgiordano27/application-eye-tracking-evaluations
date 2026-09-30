/*
FUNCTION_NAME: FUN_01baf2c4
ENTRY_POINT: 01baf2c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_01baf2c4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  byte bVar17;
  byte bVar18;
  long *local_68;
  undefined *puVar12;
  
  puVar12 = Meta_WitAi_Requests_WitSocketRequest_<>c__DisplayClass54_0_TypeInfo;
  if ((DAT_0377e73a & 1) == 0) {
    thunk_FUN_00d48444(Obi_ObiUpdater_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Sirenix_Utilities_ImmutableList_<System_Collections_Generic_IEnumerable<System_Object>_GetEnumerator>d__25_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3670);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
    thunk_FUN_00d48444(StringLiteral_10711);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<Vector2>_ResizeUninitialized__);
    thunk_FUN_00d48444(System_Action<byte[],_int,_bool>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponent<DebugUIHandlerPanel>__);
    thunk_FUN_00d48444(Meta_WitAi_Requests_WitSocketRequest_<>c__DisplayClass54_0_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    DAT_0377e73a = 1;
  }
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
  puVar12 = 
  Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__;
  if (lVar7 != 0) {
    FUN_013b0f04(lVar7,*(undefined8 *)System_Action<byte[],_int,_bool>_TypeInfo);
    plVar8 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar12);
    if ((plVar8 != (long *)0x0) &&
       (FUN_0160aa4c(plVar8,0),
       puVar12 = 
       Method_Sirenix_Utilities_ImmutableList_<System_Collections_Generic_IEnumerable<System_Object>_GetEnumerator>d__25_System_Collections_IEnumerator_Reset__
       , param_1 != 0)) {
      if (*(int *)(param_1 + 0x10) < 1) {
        plVar13 = (long *)0x0;
        bVar18 = 0;
        bVar17 = 0;
LAB_01baf994:
        if (bVar18 == 0) {
          if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_01bafa88(plVar13,0);
          if ((uVar10 & 1) != 0) {
            uVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
            if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar12);
            }
            plVar13 = (long *)FUN_01bb5848(uVar14,bVar17);
          }
          return plVar13;
        }
        thunk_FUN_00d48444(
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                          );
        uVar14 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar12 = Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__;
LAB_01bafa5c:
        uVar11 = thunk_FUN_00d48444(puVar12);
        FUN_017a9608(uVar14,uVar11,0);
        uVar11 = thunk_FUN_00d48444(StringLiteral_242);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar14,uVar11);
      }
      uVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      uVar14 = *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
      iVar15 = 0;
      plVar13 = (long *)0x0;
LAB_01baf3fc:
      uVar2 = FUN_015fa29c(param_1,iVar15,0);
      iVar5 = iVar15;
      if (uVar2 < 0x30) {
        if (uVar2 < 0x21) {
          if (uVar2 < 0xd) {
            if (uVar2 == 9) {
LAB_01baf650:
              if (bVar18 != 0) goto LAB_01baf848;
LAB_01baf8d8:
              bVar18 = 0;
              iVar5 = iVar15;
              goto LAB_01baf8dc;
            }
            if (uVar2 != 10) goto LAB_01baf788;
          }
          else if (uVar2 != 0xd) {
            if (uVar2 != 0x20) goto LAB_01baf788;
            goto LAB_01baf650;
          }
          uVar16 = 1;
        }
        else if (uVar2 == 0x22) {
          bVar18 = bVar18 ^ 1;
          bVar17 = bVar17 | bVar18;
        }
        else {
          if (uVar2 == 0x2c) {
            if (bVar18 != 0) goto LAB_01baf848;
            iVar5 = FUN_0160b5d0(plVar8,0);
            if ((iVar5 < 1 & (bVar17 ^ 0xff)) == 0) {
              uVar11 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
              if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar12);
              }
              uVar11 = FUN_01bb5848(uVar11,bVar17);
              if (plVar13 == (long *)0x0) goto LAB_01bafa14;
              (**(code **)(*plVar13 + 0x278))
                        (plVar13,uVar14,uVar11,*(undefined8 *)(*plVar13 + 0x280));
            }
            uVar14 = *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
LAB_01baf8c4:
            FUN_0160bae4(plVar8,0,0);
LAB_01baf8d4:
            bVar17 = 0;
            goto LAB_01baf8d8;
          }
          if (uVar2 == 0x2f) {
            lVar9 = *(long *)puVar12;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar9 = *(long *)puVar12;
            }
            if (((bVar18 == 0 && *(char *)(*(long *)(lVar9 + 0xb8) + 2) != '\0') &&
                (iVar15 + 1 < *(int *)(param_1 + 0x10))) &&
               (sVar3 = FUN_015fa29c(param_1,iVar15 + 1,0), sVar3 == 0x2f)) {
              do {
                iVar15 = iVar15 + 1;
                if ((*(int *)(param_1 + 0x10) <= iVar15) ||
                   (sVar3 = FUN_015fa29c(param_1,iVar15,0), sVar3 == 10)) break;
                sVar3 = FUN_015fa29c(param_1,iVar15,0);
              } while (sVar3 != 0xd);
              goto LAB_01baf8d8;
            }
          }
LAB_01baf788:
          uVar4 = FUN_015fa29c(param_1,iVar15,0);
          FUN_0160cd0c(plVar8,uVar4,0);
        }
      }
      else {
        if (uVar2 < 0x5e) {
          if (0x5b < uVar2) {
            if (uVar2 != 0x5c) {
              if (uVar2 == 0x5d) goto LAB_01baf668;
              goto LAB_01baf788;
            }
            iVar5 = iVar15 + 1;
            if (bVar18 == 0) {
              bVar18 = 0;
              goto LAB_01baf8dc;
            }
            uVar6 = FUN_015fa29c(param_1,iVar5,0);
            uVar1 = uVar6 & 0xffff;
            if (uVar1 < 0x67) {
              if (uVar1 == 0x62) {
                uVar6 = 8;
              }
              else if (uVar1 == 0x66) {
                uVar6 = 0xc;
              }
              goto switchD_01baf918_caseD_6f;
            }
            switch(uVar1) {
            case 0x6e:
              uVar6 = 10;
              break;
            case 0x72:
              uVar6 = 0xd;
              break;
            case 0x74:
              uVar6 = 9;
              break;
            case 0x75:
              uVar11 = FUN_01601d40(param_1,iVar15 + 2,4,0);
              uVar4 = FUN_0176ef0c(uVar11,0x200,0);
              FUN_0160cd0c(plVar8,uVar4,0);
              iVar15 = iVar15 + 5;
              goto System_Linq_Expressions_Error__LabelMustBeVoidOrHaveExpression;
            }
switchD_01baf918_caseD_6f:
            FUN_0160cd0c(plVar8,uVar6,0);
            bVar18 = 1;
            goto LAB_01baf8dc;
          }
          if (uVar2 != 0x3a) {
            if (uVar2 != 0x5b) goto LAB_01baf788;
            if (bVar18 != 0) goto LAB_01baf848;
            lVar9 = thunk_FUN_00d62348(*(undefined8 *)Obi_ObiUpdater_TypeInfo);
            if (lVar9 != 0) {
              FUN_01ab7bfc(lVar9,0);
LAB_01baf594:
              FUN_013b1b6c(lVar7,lVar9,
                           *(undefined8 *)Method_Obi_ObiNativeList<Vector2>_ResizeUninitialized__);
              if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar10 = FUN_01bafc08(plVar13,0);
              if ((uVar10 & 1) != 0) {
                FUN_013b17d4(lVar7,&local_68,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__
                            );
                if (plVar13 == (long *)0x0) goto LAB_01bafa14;
                (**(code **)(*plVar13 + 0x278))
                          (plVar13,uVar14,local_68,*(undefined8 *)(*plVar13 + 0x280));
              }
              uVar14 = *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
              FUN_0160bae4(plVar8,0,0);
              FUN_013b17d4(lVar7,&local_68,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__)
              ;
              uVar16 = 0;
              plVar13 = local_68;
              goto LAB_01baf8d8;
            }
            goto LAB_01bafa14;
          }
          if (bVar18 == 0) {
            uVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
            goto LAB_01baf8c4;
          }
        }
        else {
          if (uVar2 == 0xfeff) goto LAB_01baf8dc;
          if (uVar2 == 0x7d) {
LAB_01baf668:
            if (bVar18 == 0) {
              if (*(int *)(lVar7 + 0x18) != 0) {
                FUN_013b1910(lVar7,&local_68,*(undefined8 *)StringLiteral_10711);
                iVar5 = FUN_0160b5d0(plVar8,0);
                if ((iVar5 < 1 & (bVar17 ^ 0xff)) == 0) {
                  uVar11 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
                  if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar12);
                  }
                  uVar11 = FUN_01bb5848(uVar11,bVar17);
                  if (plVar13 == (long *)0x0) goto LAB_01bafa14;
                  (**(code **)(*plVar13 + 0x278))
                            (plVar13,uVar14,uVar11,*(undefined8 *)(*plVar13 + 0x280));
                }
                if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar10 = FUN_01bafc08(plVar13,0);
                if ((uVar10 & 1) != 0) {
                  if (plVar13 == (long *)0x0) goto LAB_01bafa14;
                  (**(code **)(*plVar13 + 0x268))
                            (plVar13,~uVar16 & 1,*(undefined8 *)(*plVar13 + 0x270));
                }
                uVar14 = *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
                FUN_0160bae4(plVar8,0,0);
                if (0 < *(int *)(lVar7 + 0x18)) {
                  FUN_013b17d4(lVar7,&local_68,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__
                              );
                  bVar17 = 0;
                  plVar13 = local_68;
                  goto LAB_01baf8d8;
                }
                goto LAB_01baf8d4;
              }
              thunk_FUN_00d48444(
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                                );
              uVar14 = thunk_FUN_00d62348();
              FUN_00ac2be8();
              puVar12 = 
              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000093C_PostfixBurstDelegate_var
              ;
              goto LAB_01bafa5c;
            }
          }
          else {
            if (uVar2 != 0x7b) goto LAB_01baf788;
            if (bVar18 == 0) {
              lVar9 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3670);
              if (lVar9 != 0) {
                FUN_01ab8f14(lVar9,0);
                goto LAB_01baf594;
              }
              goto LAB_01bafa14;
            }
          }
        }
LAB_01baf848:
        uVar4 = FUN_015fa29c(param_1,iVar15,0);
        FUN_0160cd0c(plVar8,uVar4,0);
System_Linq_Expressions_Error__LabelMustBeVoidOrHaveExpression:
        bVar18 = 1;
        iVar5 = iVar15;
      }
LAB_01baf8dc:
      iVar15 = iVar5 + 1;
      if (*(int *)(param_1 + 0x10) <= iVar15) goto LAB_01baf994;
      goto LAB_01baf3fc;
    }
  }
LAB_01bafa14:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


