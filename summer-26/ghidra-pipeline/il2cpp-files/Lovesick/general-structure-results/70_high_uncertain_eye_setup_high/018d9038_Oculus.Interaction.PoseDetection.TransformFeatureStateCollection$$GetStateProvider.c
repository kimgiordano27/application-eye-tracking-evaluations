/*
FUNCTION_NAME: Oculus.Interaction.PoseDetection.TransformFeatureStateCollection$$GetStateProvider
ENTRY_POINT: 018d9038
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x018d93b8) */
/* WARNING: Removing unreachable block (ram,0x018d947c) */

long Oculus_Interaction_PoseDetection_TransformFeatureStateCollection__GetStateProvider
               (long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  
  if ((DAT_03779a87 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<SimpleTuple<FaceRebuildData,_List<int>>>_get_Current__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<float>__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(PTR_DAT_033f6fb8);
    thunk_FUN_00d48444(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_ObjectModel_ReadOnlyCollection<ParameterExpression>_GetEnumerator__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<ARTextureInfo>_TypeInfo);
    thunk_FUN_00d48444(System_Xml_Schema_ConstraintStruct___TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5186);
    thunk_FUN_00d48444(Method_System_Span<char>__ctor__);
    thunk_FUN_00d48444(StringLiteral_10543);
    DAT_03779a87 = 1;
  }
  if (param_1[4] == 0) {
    lVar6 = FUN_018d8f10(param_1);
    if (lVar6 == 0) goto LAB_018d9474;
    uVar7 = FUN_01e3ad94(lVar6,0);
    if ((uVar7 & 1) == 0) {
      uVar8 = (**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0));
      uVar7 = FUN_018d9540(param_1,uVar8);
      puVar1 = Method_System_Span<char>__ctor__;
      if ((uVar7 & 1) == 0) {
        lVar6 = *(long *)Method_System_Span<char>__ctor__;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar1;
        }
        param_1[4] = **(long **)(lVar6 + 0xb8);
        goto LAB_018d90f4;
      }
    }
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                System_Collections_Generic_List<ARTextureInfo>_TypeInfo);
    if (lVar6 != 0) {
      FUN_01320e50(lVar6,*(undefined8 *)
                          Method_System_Collections_ObjectModel_ReadOnlyCollection<ParameterExpression>_GetEnumerator__
                  );
      param_1[4] = lVar6;
      lVar6 = FUN_018d8f10(param_1);
      if ((lVar6 != 0) && (plVar9 = (long *)FUN_01e3af0c(lVar6,0), plVar9 != (long *)0x0)) {
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)
                 Method_System_Collections_Generic_List_Enumerator<SimpleTuple<FaceRebuildData,_List<int>>>_get_Current__
               ) {
              puVar10 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_018d9218;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_00d59724(plVar9,*(long *)
                                       Method_System_Collections_Generic_List_Enumerator<SimpleTuple<FaceRebuildData,_List<int>>>_get_Current__
                               ,0);
LAB_018d9218:
        puVar5 = StringLiteral_10310;
        puVar2 = System_Xml_Schema_ConstraintStruct___TypeInfo;
        plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        puVar3 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<float>__
        ;
        puVar1 = PTR_DAT_033f6fb8;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          lVar6 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar7 != 0) {
            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_018d92a0;
              }
              uVar7 = uVar7 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar4,0);
LAB_018d92a0:
          uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar7 & 1) == 0) {
            if (plVar9 == (long *)0x0) goto LAB_018d93ac;
            lVar6 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar7 == 0) goto LAB_018d9384;
            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_018d936c;
          }
          lVar6 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar7 != 0) {
            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_018d92fc;
              }
              uVar7 = uVar7 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar3,0);
LAB_018d92fc:
          uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          lVar14 = param_1[4];
          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_017b46ec(lVar6,0);
          *(undefined8 *)(lVar6 + 0x10) = uVar8;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_00bf15cc(lVar14,lVar6,*(undefined8 *)puVar1);
        } while( true );
      }
    }
    goto LAB_018d9474;
  }
  goto LAB_018d90f4;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
LAB_018d936c:
    if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
      puVar10 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_018d93a0;
    }
  }
LAB_018d9384:
  puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar5,0);
LAB_018d93a0:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_018d93ac:
  uVar8 = (**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0));
  uVar7 = FUN_018d9540(param_1,uVar8);
  puVar1 = StringLiteral_5186;
  if ((uVar7 & 1) != 0) {
    lVar14 = param_1[4];
    uVar11 = FUN_01e3d1bc(*(undefined8 *)StringLiteral_10543,0);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar6 != 0) {
      FUN_01e351f8(lVar6,uVar11,uVar8,0);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar12 != 0) {
        FUN_017b46ec(lVar12,0);
        *(long *)(lVar12 + 0x10) = lVar6;
        if (lVar14 != 0) {
          FUN_01323a14(lVar14,0,lVar12,
                       *(undefined8 *)
                        System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
          goto LAB_018d90f4;
        }
      }
    }
LAB_018d9474:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_018d90f4:
  return param_1[4];
}


