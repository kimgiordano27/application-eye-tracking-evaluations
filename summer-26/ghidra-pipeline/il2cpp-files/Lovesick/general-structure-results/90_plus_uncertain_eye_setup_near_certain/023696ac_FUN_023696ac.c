/*
FUNCTION_NAME: FUN_023696ac
ENTRY_POINT: 023696ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02369f94) */
/* WARNING: Removing unreachable block (ram,0x02369db4) */

void FUN_023696ac(long param_1,long *param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  int local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  int local_64;
  undefined *puVar15;
  
  puVar15 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03781d79 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
    thunk_FUN_00d48444(Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
    thunk_FUN_00d48444(Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f5aa8);
    thunk_FUN_00d48444(
                      Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(StringLiteral_8567);
    thunk_FUN_00d48444(StringLiteral_2051);
    thunk_FUN_00d48444(StringLiteral_3715);
    thunk_FUN_00d48444(Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    thunk_FUN_00d48444(StringLiteral_5105);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_WeakBaseFormatter_<>c__DisplayClass14_0_<CreateCallback>b__1__
                      );
    thunk_FUN_00d48444(PTR_DAT_033eb588);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(Method_TMPro_TMP_Dropdown_SetAlpha__);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(StringLiteral_9754);
    thunk_FUN_00d48444(PTR_DAT_033ee588);
    thunk_FUN_00d48444(StringLiteral_11214);
    thunk_FUN_00d48444(PTR_DAT_033ef0a8);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_8655);
    thunk_FUN_00d48444(PTR_DAT_033f7248);
    DAT_03781d79 = 1;
  }
  local_74 = 0;
  if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_0268b4e0(param_1,0,0);
  puVar15 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo;
  if ((uVar3 & 1) == 0) {
    if (param_2 != (long *)0x0) {
      if (param_1 != 0) {
        uVar4 = FUN_0230bd48(param_1,0,0);
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar15);
        if (lVar5 != 0) {
          FUN_01320f6c(lVar5,uVar4,*(undefined8 *)StringLiteral_9754);
          puVar15 = 
          Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
          ;
          if (*(long *)(param_1 + 0x28) != 0) {
            iVar1 = *(int *)(*(long *)(param_1 + 0x28) + 0x18);
            lVar6 = FUN_0230fea8(param_1,0);
            lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar15);
            puVar15 = 
            Method_Sirenix_Serialization_WeakBaseFormatter_<>c__DisplayClass14_0_<CreateCallback>b__1__
            ;
            if (lVar7 != 0) {
              FUN_01320e50(lVar7,*(undefined8 *)StringLiteral_11214);
              lVar16 = *param_2;
              uVar3 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar3 != 0) {
                piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)puVar15) {
                    puVar8 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_0236997c;
                  }
                  uVar3 = uVar3 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar3 != 0);
              }
              puVar8 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar15,0);
LAB_0236997c:
              plVar9 = (long *)(*(code *)*puVar8)(param_2,puVar8[1]);
              puVar2 = StringLiteral_4747;
              puVar15 = Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__;
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              do {
                lVar16 = *plVar9;
                uVar3 = (ulong)*(ushort *)(lVar16 + 0x12a);
                if (uVar3 != 0) {
                  piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) ==
                        *(long *)
                         Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                       ) {
                      puVar8 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_023699fc;
                    }
                    uVar3 = uVar3 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar3 != 0);
                }
                puVar8 = (undefined8 *)
                         FUN_00d59724(plVar9,*(long *)
                                              Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                      ,0);
LAB_023699fc:
                uVar3 = (*(code *)*puVar8)(plVar9,puVar8[1]);
                if ((uVar3 & 1) == 0) {
                  if (plVar9 == (long *)0x0) goto LAB_02369da8;
                  lVar6 = *plVar9;
                  uVar3 = (ulong)*(ushort *)(lVar6 + 0x12a);
                  if (uVar3 == 0) goto LAB_02369d80;
                  piVar18 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  goto LAB_02369d68;
                }
                lVar16 = *plVar9;
                uVar3 = (ulong)*(ushort *)(lVar16 + 0x12a);
                if (uVar3 != 0) {
                  piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_033eb588) {
                      puVar8 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_02369a60;
                    }
                    uVar3 = uVar3 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar3 != 0);
                }
                puVar8 = (undefined8 *)FUN_00d59724(plVar9,*(long *)PTR_DAT_033eb588,0);
LAB_02369a60:
                lVar16 = (*(code *)*puVar8)(plVar9,puVar8[1]);
                lVar10 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_022fb2d8(lVar10,0);
                lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                             Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_01320e50(lVar11,*(undefined8 *)PTR_DAT_033ee588);
                *(long *)(lVar10 + 0x18) = lVar11;
                lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                             UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                           );
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_01320e50(lVar11,*(undefined8 *)PTR_DAT_033f6e48);
                *(long *)(lVar10 + 0x20) = lVar11;
                lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                             Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__
                                           );
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_022f9928(lVar11,lVar16,0);
                *(long *)(lVar10 + 0x10) = lVar11;
                lVar11 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5aa8);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_01298da0(lVar11,*(undefined8 *)
                                     Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__
                            );
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar12 = FUN_00da4fb8(*(undefined8 *)
                                       Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                                      *(undefined4 *)(*(long *)(lVar16 + 0x10) + 0x18));
                lVar17 = *(long *)(lVar16 + 0x10);
                if (lVar17 == 0) {
LAB_02369ec0:
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar20 = 8;
                while( true ) {
                  uVar3 = lVar20 - 8;
                  if ((long)(int)*(uint *)(lVar17 + 0x18) <= (long)uVar3) break;
                  if (*(uint *)(lVar17 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  local_70 = *(undefined4 *)(lVar17 + lVar20 * 4);
                  uVar13 = FUN_0129eff4(lVar11,&local_70,&local_74,*(undefined8 *)puVar15);
                  if ((uVar13 & 1) == 0) {
                    if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    local_74 = *(int *)(*(long *)(lVar10 + 0x18) + 0x18);
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (*(uint *)(lVar12 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    *(int *)(lVar12 + lVar20 * 4) = local_74;
                    lVar17 = *(long *)(lVar16 + 0x10);
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (*(uint *)(lVar17 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    local_70 = *(undefined4 *)(lVar17 + lVar20 * 4);
                    local_64 = local_74;
                    FUN_0129a054(lVar11,&local_70,&local_64,
                                 *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                    lVar17 = *(long *)(lVar16 + 0x10);
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (*(uint *)(lVar17 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    lVar19 = *(long *)(lVar10 + 0x18);
                    FUN_0132138c(lVar5,*(undefined4 *)(lVar17 + lVar20 * 4),&local_70,
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                );
                    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_00ca0af8(lVar19,CONCAT44(uStack_6c,local_70),
                                 *(undefined8 *)OVRManager_XrApi_TypeInfo);
                    lVar17 = *(long *)(lVar16 + 0x10);
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (*(uint *)(lVar17 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    lVar19 = *(long *)(lVar10 + 0x20);
                    local_70 = *(undefined4 *)(lVar17 + lVar20 * 4);
                    FUN_01299bc0(lVar6,&local_70,&local_64,
                                 *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo)
                    ;
                    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_00ac20f0(lVar19,local_64 + iVar1,*(undefined8 *)puVar2);
                  }
                  else {
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (*(uint *)(lVar12 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    *(int *)(lVar12 + lVar20 * 4) = local_74;
                  }
                  lVar17 = *(long *)(lVar16 + 0x10);
                  lVar20 = lVar20 + 1;
                  if (lVar17 == 0) goto LAB_02369ec0;
                }
                lVar16 = *(long *)(lVar10 + 0x10);
                uVar4 = FUN_010df6b8(lVar12,*(undefined8 *)StringLiteral_8567);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c(uVar4,uVar4);
                }
                FUN_022f8ff8(lVar16,uVar4,0);
                FUN_00ca11d0(lVar7,lVar10,*(undefined8 *)Method_TMPro_TMP_Dropdown_SetAlpha__);
              } while( true );
            }
          }
        }
      }
      goto LAB_02369f1c;
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar15 = MetaXRAcousticNativeInterface_UnityNativeInterface_TypeInfo;
  }
  else {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar15 = Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__;
  }
  uVar14 = thunk_FUN_00d48444(puVar15);
  FUN_016ec5b8(uVar4,uVar14,0);
  uVar14 = thunk_FUN_00d48444(TMPro_HighlightState_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar4,uVar14);
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar18 = piVar18 + 4;
    if (uVar3 == 0) break;
LAB_02369d68:
    if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_10310) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_02369d9c;
    }
  }
LAB_02369d80:
  puVar8 = (undefined8 *)FUN_00d59724(plVar9,*(long *)StringLiteral_10310,0);
LAB_02369d9c:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_02369da8:
  puVar15 = PTR_DAT_033f7248;
  FUN_022fabf0(lVar7,param_1,lVar5,0,0);
  if ((param_3 & 1) != 0) {
    FUN_023563ac(param_1,param_2,0);
  }
  FUN_023135a0(param_1,0,0);
  lVar5 = *(long *)puVar15;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar5 = *(long *)puVar15;
  }
  puVar2 = StringLiteral_5105;
  lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar6 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar15;
    }
    uVar4 = **(undefined8 **)(lVar5 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar6 == 0) {
LAB_02369f1c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_012d239c(lVar6,uVar4,*(undefined8 *)StringLiteral_8655,0);
    *(long *)(*(long *)(*(long *)puVar15 + 0xb8) + 8) = lVar6;
  }
  puVar15 = StringLiteral_2051;
  uVar4 = FUN_010dcdb8(lVar7,lVar6,
                       *(undefined8 *)
                        Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                      );
  FUN_010dfe04(uVar4,*(undefined8 *)puVar15);
  return;
}


