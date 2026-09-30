/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredLights$$SetupLights
ENTRY_POINT: 023584a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 180
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02358cdc) */
/* WARNING: Removing unreachable block (ram,0x02358d50) */
/* WARNING: Removing unreachable block (ram,0x02358ee8) */
/* WARNING: Removing unreachable block (ram,0x02358dd4) */
/* WARNING: Removing unreachable block (ram,0x02358ed4) */

long UnityEngine_Rendering_Universal_Internal_DeferredLights__SetupLights(long param_1)

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
  undefined4 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  long unaff_x19;
  undefined8 uVar26;
  long *unaff_x23;
  uint unaff_w28;
  long *unaff_x29;
  int iStack0000000000000048;
  undefined4 uStack000000000000004c;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xb38));
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
  thunk_FUN_00d48444(Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_Deserialize__
                    );
  *(undefined1 *)(unaff_x19 + 0xd37) = 1;
  puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
  if (unaff_x23 != (long *)0x0) {
    lVar20 = *unaff_x23;
    uVar24 = (ulong)*(ushort *)(lVar20 + 0x12a);
    if (uVar24 != 0) {
      piVar25 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == *(long *)StringLiteral_13153) {
          puVar12 = (undefined8 *)(lVar20 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_023585f8;
        }
        uVar24 = uVar24 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar24 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724();
LAB_023585f8:
    puVar4 = Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_Deserialize__;
    uVar8 = (*(code *)*puVar12)();
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    uVar2 = 0;
    if (unaff_w28 != 0) {
      uVar2 = uVar8 / unaff_w28;
    }
    uVar8 = FUN_01772558(1,uVar2,0);
    lVar20 = *(long *)puVar4;
    if (*(int *)(lVar20 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar20);
      lVar20 = *(long *)puVar4;
    }
    puVar3 = PTR_DAT_033f1058;
    if (*(long *)(*(long *)(lVar20 + 0xb8) + 8) == 0) {
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar20);
        lVar20 = *(long *)puVar4;
      }
      uVar26 = **(undefined8 **)(lVar20 + 0xb8);
      lVar20 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar20 == 0) goto LAB_02358ee4;
      FUN_012d239c(lVar20,uVar26,
                   *(undefined8 *)
                    Method_System_Linq_Expressions_Interpreter_LightLambda_<>c__DisplayClass74_0_<MakeRunDelegateCtor>b__0__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar20;
    }
    puVar5 = StringLiteral_541;
    puVar3 = PTR_DAT_033f09a8;
    iVar9 = FUN_010dc8e0();
    puVar4 = PTR_DAT_033f5aa8;
    iVar9 = iVar9 + 1;
    if (uVar8 < 2) {
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
      puVar4 = UnityEngine_UIElements_Toggle_TypeInfo;
      if (lVar13 != 0) {
        FUN_01320e50(lVar13,*(undefined8 *)puVar3);
        FUN_00da4fb8(*(undefined8 *)PTR_DAT_033f55b0,iVar9);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar4);
        }
        uVar26 = FUN_02313400();
        goto LAB_02358e14;
      }
    }
    else {
      lVar20 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5aa8);
      puVar6 = Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__;
      if (lVar20 != 0) {
        FUN_01298da0(lVar20,*(undefined8 *)
                             Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__)
        ;
        FUN_0232f164();
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if (lVar14 != 0) {
          FUN_01298da0(lVar14,*(undefined8 *)puVar6);
          FUN_0232f164();
          lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
          puVar5 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo;
          if (lVar13 != 0) {
            FUN_01320e50(lVar13,*(undefined8 *)puVar3);
            lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
            puVar3 = Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo;
            if (lVar15 != 0) {
              FUN_01320e50(lVar15,*(undefined8 *)PTR_DAT_033ee588);
              lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
              if (lVar16 != 0) {
                FUN_01320e50(lVar16,*(undefined8 *)
                                     Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_7__
                            );
                lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                if ((lVar17 != 0) &&
                   (FUN_01298da0(lVar17,*(undefined8 *)puVar6), unaff_x29 != (long *)0x0)) {
                  lVar21 = *unaff_x29;
                  uVar24 = (ulong)*(ushort *)(lVar21 + 0x12a);
                  if (uVar24 != 0) {
                    piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) ==
                          *(long *)
                           Method_Sirenix_Serialization_WeakBaseFormatter_<>c__DisplayClass14_0_<CreateCallback>b__1__
                         ) {
                        puVar12 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
                        goto LAB_0235889c;
                      }
                      uVar24 = uVar24 - 1;
                      piVar25 = piVar25 + 4;
                    } while (uVar24 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_00d59724();
LAB_0235889c:
                  puVar7 = StringLiteral_6588;
                  puVar6 = StringLiteral_2220;
                  puVar5 = 
                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
                  puVar4 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
                  puVar3 = OVRManager_XrApi_TypeInfo;
                  plVar18 = (long *)(*(code *)*puVar12)();
LAB_023588dc:
                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  lVar22 = *plVar18;
                  lVar21 = *(long *)puVar5;
                  uVar24 = (ulong)*(ushort *)(lVar22 + 0x12a);
                  if (uVar24 != 0) {
                    piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == lVar21) {
                        puVar12 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
                        goto LAB_0235892c;
                      }
                      uVar24 = uVar24 - 1;
                      piVar25 = piVar25 + 4;
                    } while (uVar24 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_00d59724(plVar18,lVar21,0);
LAB_0235892c:
                  uVar24 = (*(code *)*puVar12)(plVar18,puVar12[1]);
                  if ((uVar24 & 1) != 0) {
                    lVar21 = *plVar18;
                    uVar24 = (ulong)*(ushort *)(lVar21 + 0x12a);
                    if (uVar24 != 0) {
                      piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_033eb588) {
                          puVar12 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
                          goto LAB_02358990;
                        }
                        uVar24 = uVar24 - 1;
                        piVar25 = piVar25 + 4;
                      } while (uVar24 != 0);
                    }
                    puVar12 = (undefined8 *)FUN_00d59724(plVar18,*(long *)PTR_DAT_033eb588,0);
LAB_02358990:
                    lVar21 = (*(code *)*puVar12)(plVar18,puVar12[1]);
                    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    iVar1 = *(int *)(lVar15 + 0x18);
                    lVar22 = FUN_022f92c8(lVar21,0);
                    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    iVar10 = FUN_013836e0(lVar22,*(undefined8 *)
                                                  DigitalOpus_MB_Core_MB3_TextureCombinerPipeline_<__Step1_CollectDistinctMatTexturesAndUsedObjects>d__9_TypeInfo
                                         );
                    if ((long)(ulong)unaff_w28 < (long)(iVar10 + iVar1)) {
                      uVar26 = FUN_00da4fb8(*(undefined8 *)PTR_DAT_033f55b0,iVar9);
                      uVar26 = FUN_02358ff4(lVar15,lVar16,lVar20,lVar14,lVar17,uVar26);
                      FUN_00ca2630(lVar13,uVar26,
                                   *(undefined8 *)System_Action<GameObject,_AxisEventData>_TypeInfo)
                      ;
                      lVar22 = *(long *)
                                Method_System_Collections_Generic_Dictionary<long,_ComputedStyle>__ctor__
                      ;
                      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                      uVar24 = FUN_00da5b18(*(undefined8 *)
                                             (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 200));
                      if ((uVar24 & 1) == 0) {
                        *(undefined4 *)(lVar15 + 0x18) = 0;
                      }
                      else {
                        iVar1 = *(int *)(lVar15 + 0x18);
                        *(undefined4 *)(lVar15 + 0x18) = 0;
                        if (0 < iVar1) {
                          FUN_0179519c(*(undefined8 *)(lVar15 + 0x10),0,iVar1,0);
                        }
                      }
                      lVar22 = *(long *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<InteractionGroupRegisteredEventArgs>__ctor__
                      ;
                      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                      uVar24 = FUN_00da5b18(*(undefined8 *)
                                             (*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 200));
                      if ((uVar24 & 1) == 0) {
                        *(undefined4 *)(lVar16 + 0x18) = 0;
                      }
                      else {
                        iVar1 = *(int *)(lVar16 + 0x18);
                        *(undefined4 *)(lVar16 + 0x18) = 0;
                        if (0 < iVar1) {
                          FUN_0179519c(*(undefined8 *)(lVar16 + 0x10),0,iVar1,0);
                        }
                      }
                      FUN_0129a9f4(lVar17,*(undefined8 *)StringLiteral_6798);
                    }
                    lVar22 = FUN_022f92c8(lVar21,0);
                    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    plVar19 = (long *)FUN_01383b50(lVar22,*(undefined8 *)
                                                                                                                      
                                                  Method_System_Collections_CaseInsensitiveHashCodeProvider_GetHashCode__
                                                  );
                    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    do {
                      lVar23 = *plVar19;
                      lVar22 = *(long *)puVar5;
                      uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
                      if (uVar24 != 0) {
                        piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar25 + -2) == lVar22) {
                            puVar12 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
                            goto LAB_02358b64;
                          }
                          uVar24 = uVar24 - 1;
                          piVar25 = piVar25 + 4;
                        } while (uVar24 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_00d59724(plVar19,lVar22,0);
LAB_02358b64:
                      uVar24 = (*(code *)*puVar12)(plVar19,puVar12[1]);
                      if ((uVar24 & 1) == 0) goto LAB_02358c60;
                      lVar22 = *plVar19;
                      uVar24 = (ulong)*(ushort *)(lVar22 + 0x12a);
                      if (uVar24 != 0) {
                        piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar25 + -2) == *(long *)puVar6) {
                            puVar12 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
                            goto LAB_02358bc0;
                          }
                          uVar24 = uVar24 - 1;
                          piVar25 = piVar25 + 4;
                        } while (uVar24 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_00d59724(plVar19,*(long *)puVar6,0);
LAB_02358bc0:
                      uVar11 = (*(code *)*puVar12)(plVar19,puVar12[1]);
                      lVar22 = *unaff_x23;
                      uVar24 = (ulong)*(ushort *)(lVar22 + 0x12a);
                      if (uVar24 != 0) {
                        piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar25 + -2) == *(long *)puVar7) {
                            puVar12 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
                            goto LAB_02358c1c;
                          }
                          uVar24 = uVar24 - 1;
                          piVar25 = piVar25 + 4;
                        } while (uVar24 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_00d59724();
LAB_02358c1c:
                      uVar26 = (*(code *)*puVar12)();
                      FUN_00ca0af8(lVar15,uVar26,*(undefined8 *)puVar3);
                      iStack0000000000000048 = *(int *)(lVar15 + 0x18) + -1;
                      uStack000000000000004c = uVar11;
                      FUN_0129a054(lVar17,(long)&stack0x00000048 + 4,&stack0x00000048,
                                   *(undefined8 *)puVar4);
                    } while( true );
                  }
                  if (plVar18 == (long *)0x0) goto LAB_02358dc8;
                  lVar21 = *plVar18;
                  uVar24 = (ulong)*(ushort *)(lVar21 + 0x12a);
                  if (uVar24 == 0) goto LAB_02358d98;
                  piVar25 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
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
  if (plVar19 != (long *)0x0) {
    lVar22 = *plVar19;
    uVar24 = (ulong)*(ushort *)(lVar22 + 0x12a);
    if (uVar24 != 0) {
      piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == *(long *)StringLiteral_10310) {
          puVar12 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
          goto LAB_02358cc0;
        }
        uVar24 = uVar24 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar24 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar19,*(long *)StringLiteral_10310,0);
LAB_02358cc0:
    (*(code *)*puVar12)(plVar19,puVar12[1]);
  }
  FUN_00c9e4d8(lVar16,lVar21,
               *(undefined8 *)Method_OVRTask<__Il2CppFullySharedGenericType>_SetException__);
  goto LAB_023588dc;
  while( true ) {
    uVar24 = uVar24 - 1;
    piVar25 = piVar25 + 4;
    if (uVar24 == 0) break;
LAB_02358d80:
    if (*(long *)(piVar25 + -2) == *(long *)StringLiteral_10310) {
      puVar12 = (undefined8 *)(lVar21 + (long)*piVar25 * 0x10 + 0x138);
      goto LAB_02358dbc;
    }
  }
LAB_02358d98:
  puVar12 = (undefined8 *)FUN_00d59724(plVar18,*(long *)StringLiteral_10310,0);
LAB_02358dbc:
  (*(code *)*puVar12)(plVar18,puVar12[1]);
LAB_02358dc8:
  if (*(int *)(lVar15 + 0x18) < 1) {
    return lVar13;
  }
  uVar26 = FUN_00da4fb8(*(undefined8 *)PTR_DAT_033f55b0,iVar9);
  uVar26 = FUN_02358ff4(lVar15,lVar16,lVar20,lVar14,lVar17,uVar26);
LAB_02358e14:
  FUN_00ca2630(lVar13,uVar26,*(undefined8 *)System_Action<GameObject,_AxisEventData>_TypeInfo);
  return lVar13;
}


