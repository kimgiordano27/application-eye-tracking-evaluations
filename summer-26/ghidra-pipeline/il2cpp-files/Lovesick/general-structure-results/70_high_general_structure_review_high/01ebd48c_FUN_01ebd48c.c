/*
FUNCTION_NAME: FUN_01ebd48c
ENTRY_POINT: 01ebd48c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_01ebd48c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  
  if ((DAT_0377ff3c & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(Method_System_Enum_ToObject__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_JsonSchemaNode>_MoveNext__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>__ctor__
                      );
    thunk_FUN_00d48444(System_Func<STMAutoDelayData,_string>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidAmbientTemperature>__
                      );
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    DAT_0377ff3c = 1;
  }
  puVar3 = Method_System_Enum_ToObject__;
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar1 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  if (param_1 == (long *)0x0) {
LAB_01ebdb44:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar6 = thunk_FUN_00d93c64(param_1,0);
  lVar13 = *(long *)puVar2;
  uVar16 = *(undefined8 *)puVar3;
  uVar15 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar13);
  }
  puVar5 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
  puVar3 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<string,_JsonSchemaNode>_MoveNext__;
  puVar1 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
  uVar16 = FUN_01780344(uVar16,0);
  uVar7 = FUN_01789ac0(uVar6,uVar16,0);
  if ((uVar7 & 1) != 0) {
    uVar16 = *(undefined8 *)
              Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
    ;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar16 = FUN_01780344(uVar16,0);
    uVar7 = FUN_0178a8c4(uVar6,uVar16,0);
    if ((uVar7 & 1) != 0) {
      plVar8 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                         );
      puVar2 = Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
      if (plVar8 != (long *)0x0) {
        FUN_0160aa4c(plVar8,0);
        lVar13 = thunk_FUN_00d6225c(param_1,*(undefined8 *)puVar2);
        if (lVar13 != 0) {
          lVar17 = *(long *)puVar2;
          plVar9 = (long *)thunk_FUN_00d6225c(param_1,lVar17);
          lVar13 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar7 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar17) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_01ebd794;
              }
              uVar7 = uVar7 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar9,lVar17,0);
LAB_01ebd794:
          plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
          if (plVar9 != (long *)0x0) {
            lVar13 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar7 != 0) {
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) ==
                    *(long *)
                     Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_01ebd7fc;
                }
                uVar7 = uVar7 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar7 != 0);
            }
            puVar10 = (undefined8 *)
                      FUN_00d59724(plVar9,*(long *)
                                           Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                   ,0);
LAB_01ebd7fc:
            uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
            if ((uVar7 & 1) == 0) {
              return uVar15;
            }
            FUN_0160c430(plVar8,*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>__ctor__
                         ,0);
            lVar13 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar7 != 0) {
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_01ebd894;
                }
                uVar7 = uVar7 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar7 != 0);
            }
            puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar2,1);
LAB_01ebd894:
            puVar4 = 
            Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidAmbientTemperature>__;
            plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
            lVar13 = thunk_FUN_00d6225c(plVar11,*(undefined8 *)puVar3);
            if (lVar13 == 0) goto LAB_01ebdaec;
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar6 = FUN_01731954(0);
            if (plVar11 != (long *)0x0) {
              uVar15 = *(undefined8 *)puVar3;
              lVar13 = thunk_FUN_00d6225c(plVar11,uVar15);
              if (lVar13 == 0) {
LAB_01ebdb48:
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(plVar11,uVar15);
              }
              lVar13 = *(long *)puVar3;
              plVar12 = (long *)thunk_FUN_00d6225c(plVar11,lVar13);
              if (plVar12 == (long *)0x0) {
LAB_01ebdb54:
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(plVar11,lVar13);
              }
              lVar17 = *plVar12;
              uVar15 = *(undefined8 *)puVar1;
              uVar7 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar7 != 0) {
                piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar13) goto LAB_01ebd964;
                  uVar7 = uVar7 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar7 != 0);
              }
LAB_01ebd950:
              puVar10 = (undefined8 *)FUN_00d59724(plVar12,lVar13,0);
LAB_01ebd970:
              uVar6 = (*(code *)*puVar10)(plVar12,uVar15,uVar6,puVar10[1]);
              do {
                FUN_0160c430(plVar8,uVar6,0);
                lVar13 = *plVar9;
                uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
                if (uVar7 != 0) {
                  piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                      puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_01ebd9e0;
                    }
                    uVar7 = uVar7 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar7 != 0);
                }
                puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar2,0);
LAB_01ebd9e0:
                uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
                if ((uVar7 & 1) == 0) {
                  FUN_0160c430(plVar8,*(undefined8 *)System_Func<STMAutoDelayData,_string>_TypeInfo,
                               0);
                  lVar13 = *plVar8;
                  param_1 = plVar8;
                  goto LAB_01ebdb24;
                }
                FUN_0160c430(plVar8,*(undefined8 *)puVar4,0);
                lVar13 = *plVar9;
                uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
                if (uVar7 != 0) {
                  piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                      puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                      goto LAB_01ebda50;
                    }
                    uVar7 = uVar7 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar7 != 0);
                }
                puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar2,1);
LAB_01ebda50:
                plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
                lVar13 = thunk_FUN_00d6225c(plVar11,*(undefined8 *)puVar3);
                if (lVar13 != 0) goto code_r0x01ebda6c;
LAB_01ebdaec:
                if (plVar11 == (long *)0x0) break;
                uVar6 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
              } while( true );
            }
          }
        }
      }
      goto LAB_01ebdb44;
    }
  }
  lVar13 = thunk_FUN_00d6225c(param_1,*(undefined8 *)puVar3);
  if (lVar13 == 0) {
    lVar13 = *param_1;
LAB_01ebdb24:
                    /* WARNING: Could not recover jumptable at 0x01ebdb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(lVar13 + 0x168))(param_1,*(undefined8 *)(lVar13 + 0x170));
    return uVar6;
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_01731954(0);
  uVar15 = *(undefined8 *)puVar3;
  lVar13 = thunk_FUN_00d6225c(param_1,uVar15);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(param_1,uVar15);
  }
  lVar13 = *(long *)puVar3;
  plVar8 = (long *)thunk_FUN_00d6225c(param_1,lVar13);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(param_1,lVar13);
  }
  lVar17 = *plVar8;
  uVar15 = *(undefined8 *)puVar1;
  uVar7 = (ulong)*(ushort *)(lVar17 + 0x12a);
  if (uVar7 != 0) {
    piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar13) {
        puVar10 = (undefined8 *)(lVar17 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_01ebd75c;
      }
      uVar7 = uVar7 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar7 != 0);
  }
  puVar10 = (undefined8 *)FUN_00d59724(plVar8,lVar13,0);
LAB_01ebd75c:
                    /* WARNING: Could not recover jumptable at 0x01ebd784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)*puVar10)(plVar8,uVar15,uVar6,puVar10[1]);
  return uVar6;
code_r0x01ebda6c:
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_01731954(0);
  if (plVar11 == (long *)0x0) goto LAB_01ebdb44;
  uVar15 = *(undefined8 *)puVar3;
  lVar13 = thunk_FUN_00d6225c(plVar11,uVar15);
  if (lVar13 == 0) goto LAB_01ebdb48;
  lVar13 = *(long *)puVar3;
  plVar12 = (long *)thunk_FUN_00d6225c(plVar11,lVar13);
  if (plVar12 == (long *)0x0) goto LAB_01ebdb54;
  lVar17 = *plVar12;
  uVar15 = *(undefined8 *)puVar1;
  uVar7 = (ulong)*(ushort *)(lVar17 + 0x12a);
  if (uVar7 == 0) goto LAB_01ebd950;
  piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
  while (*(long *)(piVar14 + -2) != lVar13) {
    uVar7 = uVar7 - 1;
    piVar14 = piVar14 + 4;
    if (uVar7 == 0) goto LAB_01ebd950;
  }
LAB_01ebd964:
  puVar10 = (undefined8 *)(lVar17 + (long)*piVar14 * 0x10 + 0x138);
  goto LAB_01ebd970;
}


