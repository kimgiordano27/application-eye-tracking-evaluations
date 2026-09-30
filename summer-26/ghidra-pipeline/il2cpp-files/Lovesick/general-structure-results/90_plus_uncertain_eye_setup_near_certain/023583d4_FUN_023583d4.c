/*
FUNCTION_NAME: FUN_023583d4
ENTRY_POINT: 023583d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 204
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02358cdc) */
/* WARNING: Removing unreachable block (ram,0x02358d50) */
/* WARNING: Removing unreachable block (ram,0x02358ee8) */
/* WARNING: Removing unreachable block (ram,0x02358dd4) */
/* WARNING: Removing unreachable block (ram,0x02358ed4) */

long FUN_023583d4(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  long lVar24;
  undefined8 uVar25;
  int local_68;
  uint uStack_64;
  
  if ((DAT_03781d37 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
    thunk_FUN_00d48444(StringLiteral_6798);
    thunk_FUN_00d48444(Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
    thunk_FUN_00d48444(PTR_DAT_033f5aa8);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_n_s16__);
    thunk_FUN_00d48444(PTR_DAT_033f1058);
    thunk_FUN_00d48444(StringLiteral_13153);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_WeakBaseFormatter_<>c__DisplayClass14_0_<CreateCallback>b__1__
                      );
    thunk_FUN_00d48444(StringLiteral_2220);
    thunk_FUN_00d48444(PTR_DAT_033eb588);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(StringLiteral_6588);
    thunk_FUN_00d48444(Method_OVRTask<__Il2CppFullySharedGenericType>_SetException__);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(System_Action<GameObject,_AxisEventData>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<long,_ComputedStyle>__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<InteractionGroupRegisteredEventArgs>__ctor__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f09a8);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_7__);
    thunk_FUN_00d48444(PTR_DAT_033ee588);
    thunk_FUN_00d48444(PTR_DAT_033ef0a8);
    thunk_FUN_00d48444(StringLiteral_541);
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    thunk_FUN_00d48444(Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f55b0);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_UIElements_Toggle_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_CaseInsensitiveHashCodeProvider_GetHashCode__);
    thunk_FUN_00d48444(
                      DigitalOpus_MB_Core_MB3_TextureCombinerPipeline_<__Step1_CollectDistinctMatTexturesAndUsedObjects>d__9_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_System_Linq_Expressions_Interpreter_LightLambda_<>c__DisplayClass74_0_<MakeRunDelegateCtor>b__0__
                      );
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_Deserialize__
                      );
    DAT_03781d37 = 1;
  }
  puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
  if (param_1 != (long *)0x0) {
    lVar18 = *param_1;
    uVar22 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)StringLiteral_13153) {
          puVar11 = (undefined8 *)(lVar18 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_023585f8;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(param_1,*(long *)StringLiteral_13153,0);
LAB_023585f8:
    puVar4 = Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_Deserialize__;
    uVar8 = (*(code *)*puVar11)(param_1,puVar11[1]);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    uVar2 = 0;
    if (param_5 != 0) {
      uVar2 = uVar8 / param_5;
    }
    uVar8 = FUN_01772558(1,uVar2,0);
    lVar18 = *(long *)puVar4;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar18);
      lVar18 = *(long *)puVar4;
    }
    puVar3 = PTR_DAT_033f1058;
    lVar24 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
    if (lVar24 == 0) {
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar18);
        lVar18 = *(long *)puVar4;
      }
      uVar25 = **(undefined8 **)(lVar18 + 0xb8);
      lVar24 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar24 == 0) goto LAB_02358ee4;
      FUN_012d239c(lVar24,uVar25,
                   *(undefined8 *)
                    Method_System_Linq_Expressions_Interpreter_LightLambda_<>c__DisplayClass74_0_<MakeRunDelegateCtor>b__0__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar24;
    }
    puVar5 = StringLiteral_541;
    puVar3 = PTR_DAT_033f09a8;
    iVar9 = FUN_010dc8e0(param_2,lVar24,
                         *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_n_s16__);
    puVar4 = PTR_DAT_033f5aa8;
    iVar9 = iVar9 + 1;
    if (uVar8 < 2) {
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
      puVar4 = UnityEngine_UIElements_Toggle_TypeInfo;
      if (lVar12 != 0) {
        FUN_01320e50(lVar12,*(undefined8 *)puVar3);
        uVar25 = FUN_00da4fb8(*(undefined8 *)PTR_DAT_033f55b0,iVar9);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar4);
        }
        uVar25 = FUN_02313400(param_1,param_2,param_3,param_4,uVar25,0);
        goto LAB_02358e14;
      }
    }
    else {
      lVar18 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5aa8);
      puVar6 = Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__;
      if (lVar18 != 0) {
        FUN_01298da0(lVar18,*(undefined8 *)
                             Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__)
        ;
        FUN_0232f164(param_3,lVar18,0);
        lVar24 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if (lVar24 != 0) {
          FUN_01298da0(lVar24,*(undefined8 *)puVar6);
          FUN_0232f164(param_4,lVar24,0);
          lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
          puVar5 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo;
          if (lVar12 != 0) {
            FUN_01320e50(lVar12,*(undefined8 *)puVar3);
            lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
            puVar3 = Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo;
            if (lVar13 != 0) {
              FUN_01320e50(lVar13,*(undefined8 *)PTR_DAT_033ee588);
              lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
              if (lVar14 != 0) {
                FUN_01320e50(lVar14,*(undefined8 *)
                                     Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_7__
                            );
                lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                if ((lVar15 != 0) &&
                   (FUN_01298da0(lVar15,*(undefined8 *)puVar6), param_2 != (long *)0x0)) {
                  lVar19 = *param_2;
                  uVar22 = (ulong)*(ushort *)(lVar19 + 0x12a);
                  if (uVar22 != 0) {
                    piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar23 + -2) ==
                          *(long *)
                           Method_Sirenix_Serialization_WeakBaseFormatter_<>c__DisplayClass14_0_<CreateCallback>b__1__
                         ) {
                        puVar11 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
                        goto LAB_0235889c;
                      }
                      uVar22 = uVar22 - 1;
                      piVar23 = piVar23 + 4;
                    } while (uVar22 != 0);
                  }
                  puVar11 = (undefined8 *)
                            FUN_00d59724(param_2,*(long *)
                                                  Method_Sirenix_Serialization_WeakBaseFormatter_<>c__DisplayClass14_0_<CreateCallback>b__1__
                                         ,0);
LAB_0235889c:
                  puVar7 = StringLiteral_6588;
                  puVar6 = StringLiteral_2220;
                  puVar5 = 
                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
                  puVar4 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
                  puVar3 = OVRManager_XrApi_TypeInfo;
                  plVar16 = (long *)(*(code *)*puVar11)(param_2,puVar11[1]);
LAB_023588dc:
                  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  lVar20 = *plVar16;
                  lVar19 = *(long *)puVar5;
                  uVar22 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar22 != 0) {
                    piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar23 + -2) == lVar19) {
                        puVar11 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
                        goto LAB_0235892c;
                      }
                      uVar22 = uVar22 - 1;
                      piVar23 = piVar23 + 4;
                    } while (uVar22 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_00d59724(plVar16,lVar19,0);
LAB_0235892c:
                  uVar22 = (*(code *)*puVar11)(plVar16,puVar11[1]);
                  if ((uVar22 & 1) != 0) {
                    lVar19 = *plVar16;
                    uVar22 = (ulong)*(ushort *)(lVar19 + 0x12a);
                    if (uVar22 != 0) {
                      piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_033eb588) {
                          puVar11 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
                          goto LAB_02358990;
                        }
                        uVar22 = uVar22 - 1;
                        piVar23 = piVar23 + 4;
                      } while (uVar22 != 0);
                    }
                    puVar11 = (undefined8 *)FUN_00d59724(plVar16,*(long *)PTR_DAT_033eb588,0);
LAB_02358990:
                    lVar19 = (*(code *)*puVar11)(plVar16,puVar11[1]);
                    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    iVar1 = *(int *)(lVar13 + 0x18);
                    lVar20 = FUN_022f92c8(lVar19,0);
                    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    iVar10 = FUN_013836e0(lVar20,*(undefined8 *)
                                                  DigitalOpus_MB_Core_MB3_TextureCombinerPipeline_<__Step1_CollectDistinctMatTexturesAndUsedObjects>d__9_TypeInfo
                                         );
                    if ((long)(ulong)param_5 < (long)(iVar10 + iVar1)) {
                      uVar25 = FUN_00da4fb8(*(undefined8 *)PTR_DAT_033f55b0,iVar9);
                      uVar25 = FUN_02358ff4(lVar13,lVar14,lVar18,lVar24,lVar15,uVar25);
                      FUN_00ca2630(lVar12,uVar25,
                                   *(undefined8 *)System_Action<GameObject,_AxisEventData>_TypeInfo)
                      ;
                      lVar20 = *(long *)
                                Method_System_Collections_Generic_Dictionary<long,_ComputedStyle>__ctor__
                      ;
                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                      uVar22 = FUN_00da5b18(*(undefined8 *)
                                             (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 200));
                      if ((uVar22 & 1) == 0) {
                        *(undefined4 *)(lVar13 + 0x18) = 0;
                      }
                      else {
                        iVar1 = *(int *)(lVar13 + 0x18);
                        *(undefined4 *)(lVar13 + 0x18) = 0;
                        if (0 < iVar1) {
                          FUN_0179519c(*(undefined8 *)(lVar13 + 0x10),0,iVar1,0);
                        }
                      }
                      lVar20 = *(long *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<InteractionGroupRegisteredEventArgs>__ctor__
                      ;
                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                      uVar22 = FUN_00da5b18(*(undefined8 *)
                                             (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 200));
                      if ((uVar22 & 1) == 0) {
                        *(undefined4 *)(lVar14 + 0x18) = 0;
                      }
                      else {
                        iVar1 = *(int *)(lVar14 + 0x18);
                        *(undefined4 *)(lVar14 + 0x18) = 0;
                        if (0 < iVar1) {
                          FUN_0179519c(*(undefined8 *)(lVar14 + 0x10),0,iVar1,0);
                        }
                      }
                      FUN_0129a9f4(lVar15,*(undefined8 *)StringLiteral_6798);
                    }
                    lVar20 = FUN_022f92c8(lVar19,0);
                    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    plVar17 = (long *)FUN_01383b50(lVar20,*(undefined8 *)
                                                                                                                      
                                                  Method_System_Collections_CaseInsensitiveHashCodeProvider_GetHashCode__
                                                  );
                    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    do {
                      lVar21 = *plVar17;
                      lVar20 = *(long *)puVar5;
                      uVar22 = (ulong)*(ushort *)(lVar21 + 0x12a);
                      if (uVar22 != 0) {
                        piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar23 + -2) == lVar20) {
                            puVar11 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
                            goto LAB_02358b64;
                          }
                          uVar22 = uVar22 - 1;
                          piVar23 = piVar23 + 4;
                        } while (uVar22 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_00d59724(plVar17,lVar20,0);
LAB_02358b64:
                      uVar22 = (*(code *)*puVar11)(plVar17,puVar11[1]);
                      if ((uVar22 & 1) == 0) goto LAB_02358c60;
                      lVar20 = *plVar17;
                      uVar22 = (ulong)*(ushort *)(lVar20 + 0x12a);
                      if (uVar22 != 0) {
                        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar23 + -2) == *(long *)puVar6) {
                            puVar11 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
                            goto LAB_02358bc0;
                          }
                          uVar22 = uVar22 - 1;
                          piVar23 = piVar23 + 4;
                        } while (uVar22 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_00d59724(plVar17,*(long *)puVar6,0);
LAB_02358bc0:
                      uVar8 = (*(code *)*puVar11)(plVar17,puVar11[1]);
                      lVar20 = *param_1;
                      uVar22 = (ulong)*(ushort *)(lVar20 + 0x12a);
                      if (uVar22 != 0) {
                        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar23 + -2) == *(long *)puVar7) {
                            puVar11 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
                            goto LAB_02358c1c;
                          }
                          uVar22 = uVar22 - 1;
                          piVar23 = piVar23 + 4;
                        } while (uVar22 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar7,0);
LAB_02358c1c:
                      uVar25 = (*(code *)*puVar11)(param_1,uVar8,puVar11[1]);
                      FUN_00ca0af8(lVar13,uVar25,*(undefined8 *)puVar3);
                      local_68 = *(int *)(lVar13 + 0x18) + -1;
                      uStack_64 = uVar8;
                      FUN_0129a054(lVar15,&uStack_64,&local_68,*(undefined8 *)puVar4);
                    } while( true );
                  }
                  if (plVar16 == (long *)0x0) goto LAB_02358dc8;
                  lVar19 = *plVar16;
                  uVar22 = (ulong)*(ushort *)(lVar19 + 0x12a);
                  if (uVar22 == 0) goto LAB_02358d98;
                  piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  goto LAB_02358d80;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02358ee4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_02358c60:
  if (plVar17 != (long *)0x0) {
    lVar20 = *plVar17;
    uVar22 = (ulong)*(ushort *)(lVar20 + 0x12a);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)StringLiteral_10310) {
          puVar11 = (undefined8 *)(lVar20 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_02358cc0;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar17,*(long *)StringLiteral_10310,0);
LAB_02358cc0:
    (*(code *)*puVar11)(plVar17,puVar11[1]);
  }
  FUN_00c9e4d8(lVar14,lVar19,
               *(undefined8 *)Method_OVRTask<__Il2CppFullySharedGenericType>_SetException__);
  goto LAB_023588dc;
  while( true ) {
    uVar22 = uVar22 - 1;
    piVar23 = piVar23 + 4;
    if (uVar22 == 0) break;
LAB_02358d80:
    if (*(long *)(piVar23 + -2) == *(long *)StringLiteral_10310) {
      puVar11 = (undefined8 *)(lVar19 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_02358dbc;
    }
  }
LAB_02358d98:
  puVar11 = (undefined8 *)FUN_00d59724(plVar16,*(long *)StringLiteral_10310,0);
LAB_02358dbc:
  (*(code *)*puVar11)(plVar16,puVar11[1]);
LAB_02358dc8:
  if (*(int *)(lVar13 + 0x18) < 1) {
    return lVar12;
  }
  uVar25 = FUN_00da4fb8(*(undefined8 *)PTR_DAT_033f55b0,iVar9);
  uVar25 = FUN_02358ff4(lVar13,lVar14,lVar18,lVar24,lVar15,uVar25);
LAB_02358e14:
  FUN_00ca2630(lVar12,uVar25,*(undefined8 *)System_Action<GameObject,_AxisEventData>_TypeInfo);
  return lVar12;
}


