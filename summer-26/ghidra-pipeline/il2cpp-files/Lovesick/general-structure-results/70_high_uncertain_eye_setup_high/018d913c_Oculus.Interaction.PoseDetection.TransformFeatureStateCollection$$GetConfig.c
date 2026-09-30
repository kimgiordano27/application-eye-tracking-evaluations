/*
FUNCTION_NAME: Oculus.Interaction.PoseDetection.TransformFeatureStateCollection$$GetConfig
ENTRY_POINT: 018d913c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x018d947c) */
/* WARNING: Removing unreachable block (ram,0x018d93b8) */

long Oculus_Interaction_PoseDetection_TransformFeatureStateCollection__GetConfig(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  code *in_x9;
  int *piVar13;
  long *unaff_x19;
  long lVar14;
  
  (*in_x9)();
  uVar6 = FUN_018d9540();
  puVar1 = Method_System_Span<char>__ctor__;
  if ((uVar6 & 1) != 0) {
                    /* try { // try from 018d9154 to 019d9257 has its CatchHandler @ 018d9154
                       catch() { ... } // from try @ 018d9154 with catch @ 018d9154
                       catch() { ... } // from try @ 018d9374 with catch @ 018d9154
                       catch() { ... } // from try @ 018d9444 with catch @ 018d9154
                       catch() { ... } // from try @ 018d952c with catch @ 018d9154
                       catch() { ... } // from try @ 018d95a8 with catch @ 018d9154
                       catch() { ... } // from try @ 018d9610 with catch @ 018d9154 */
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                System_Collections_Generic_List<ARTextureInfo>_TypeInfo);
    if (lVar7 != 0) {
      FUN_01320e50(lVar7,*(undefined8 *)
                          Method_System_Collections_ObjectModel_ReadOnlyCollection<ParameterExpression>_GetEnumerator__
                  );
      unaff_x19[4] = lVar7;
      lVar7 = FUN_018d8f10();
      if ((lVar7 != 0) && (plVar8 = (long *)FUN_01e3af0c(lVar7,0), plVar8 != (long *)0x0)) {
        lVar7 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar6 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)
                 Method_System_Collections_Generic_List_Enumerator<SimpleTuple<FaceRebuildData,_List<int>>>_get_Current__
               ) {
              puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_018d9218;
            }
            uVar6 = uVar6 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_00d59724(plVar8,*(long *)
                                      Method_System_Collections_Generic_List_Enumerator<SimpleTuple<FaceRebuildData,_List<int>>>_get_Current__
                              ,0);
LAB_018d9218:
        puVar5 = StringLiteral_10310;
        puVar2 = System_Xml_Schema_ConstraintStruct___TypeInfo;
        plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        puVar3 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<float>__
        ;
        puVar1 = PTR_DAT_033f6fb8;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          lVar7 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_018d92a0;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar4,0);
LAB_018d92a0:
          uVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar6 & 1) == 0) {
            if (plVar8 == (long *)0x0) goto LAB_018d93ac;
            lVar7 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar6 == 0) goto LAB_018d9384;
            piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_018d936c;
          }
          lVar7 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_018d92fc;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0);
LAB_018d92fc:
          uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          lVar14 = unaff_x19[4];
          lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_017b46ec(lVar7,0);
          *(undefined8 *)(lVar7 + 0x10) = uVar10;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_00bf15cc(lVar14,lVar7,*(undefined8 *)puVar1);
        } while( true );
      }
    }
    goto LAB_018d9474;
  }
  lVar7 = *(long *)Method_System_Span<char>__ctor__;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar1;
  }
  unaff_x19[4] = **(long **)(lVar7 + 0xb8);
  goto LAB_018d90f4;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar13 = piVar13 + 4;
    if (uVar6 == 0) break;
LAB_018d936c:
    if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_018d93a0;
    }
  }
LAB_018d9384:
  puVar9 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar5,0);
LAB_018d93a0:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_018d93ac:
  uVar10 = (**(code **)(*unaff_x19 + 0x298))();
  uVar6 = FUN_018d9540();
  puVar1 = StringLiteral_5186;
  if ((uVar6 & 1) != 0) {
    lVar14 = unaff_x19[4];
    uVar11 = FUN_01e3d1bc(*(undefined8 *)StringLiteral_10543,0);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar7 != 0) {
      FUN_01e351f8(lVar7,uVar11,uVar10,0);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar12 != 0) {
        FUN_017b46ec(lVar12,0);
        *(long *)(lVar12 + 0x10) = lVar7;
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
  return unaff_x19[4];
}


