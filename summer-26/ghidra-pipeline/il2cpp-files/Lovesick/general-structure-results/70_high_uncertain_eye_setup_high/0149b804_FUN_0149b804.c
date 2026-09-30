/*
FUNCTION_NAME: FUN_0149b804
ENTRY_POINT: 0149b804
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0149c1f0) */

undefined4 FUN_0149b804(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  int *piVar17;
  long lVar18;
  undefined8 uVar19;
  long *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
                    /* try { // try from 0149b810 to 0159b81f has its CatchHandler @ 0149ba30 */
  if ((DAT_03776c6f & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<NavMeshSurface>_Remove__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass3_0_<DOFieldOfView>b__0__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<DebugUI_Widget>_Clear__);
    thunk_FUN_00d48444(Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_Clear__);
    thunk_FUN_00d48444(StringLiteral_3659);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Grabbable>_Clear__);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<AffineTransform>_GetIntPtr__);
    thunk_FUN_00d48444(
                      Method_System_Collections_ObjectModel_KeyedCollection<Type,_TypeInfo>_get_Item__
                      );
    thunk_FUN_00d48444(StringLiteral_866);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_KeyValuePair<int,_DynamicResolutionHandler>_get_Value__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_u16__);
    thunk_FUN_00d48444(Method_UnityEngine_Object_FindObjectOfType<OVRManager>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<SimpleTuple<FaceRebuildData,_List<int>>>>_get_Current__
                      );
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(
                      Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<ISelectHandler>__
                      );
    thunk_FUN_00d48444(Method_Oculus_Interaction_ControllerSelector_<>c_<_ctor>b__26_0__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(PTR_DAT_033ec0d8);
    thunk_FUN_00d48444(PTR_DAT_033ef2e8);
    thunk_FUN_00d48444(Oculus_Interaction_Locomotion_StepLocomotionBroadcaster_<>c_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<HandJointId,_JointDeltaProvider_PoseData[]>_get_Keys__
                      );
    thunk_FUN_00d48444(StringLiteral_7391);
    thunk_FUN_00d48444(System_Runtime_Remoting_Metadata_SoapAttribute_var);
    thunk_FUN_00d48444(StringLiteral_3921);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<GUILayoutOption>_ToArray__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_1734);
    thunk_FUN_00d48444(Method_FlickerLightsOffStageLightPuzzleComplete_<>c_<FlickerScene>b__3_4__);
    thunk_FUN_00d48444(DG_Tweening_ShortcutExtensions_<>c__DisplayClass52_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_720);
    thunk_FUN_00d48444(StringLiteral_1451);
    thunk_FUN_00d48444(DG_Tweening_DOTweenModuleUtils_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<MemberInfo>_TypeInfo);
    DAT_03776c6f = 1;
  }
  puVar6 = StringLiteral_3921;
  puVar5 = Method_UnityEngine_Object_FindObjectOfType<OVRManager>__;
  puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar3 = Method_System_Collections_Generic_List<GUILayoutOption>_ToArray__;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<int,_DynamicResolutionHandler>_get_Value__
  ;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = (long *)0x0;
  if (*(long *)(param_1 + 0x38) == 0) {
    return 1;
  }
  FUN_01323390(*(long *)(param_1 + 0x38),&local_98,
               *(undefined8 *)Oculus_Interaction_Locomotion_StepLocomotionBroadcaster_<>c_TypeInfo);
  local_70 = local_88;
  uVar16 = 1;
  uStack_78 = uStack_90;
  local_80 = local_98;
LAB_0149ba28:
  do {
    uVar8 = FUN_012b894c(&local_80,*(undefined8 *)StringLiteral_866);
    if ((uVar8 & 1) == 0) goto LAB_0149bd88;
    lVar9 = FUN_00bc2f38(&local_80,*(undefined8 *)puVar2);
    lVar10 = FUN_0149a528(param_1,lVar9);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar11 = (long *)FUN_00bc2b6c(lVar10,*(undefined8 *)puVar6);
    uVar12 = FUN_00bc2c58(lVar10,*(undefined8 *)puVar3);
    uVar8 = FUN_0169f70c(plVar11,0,0);
    if ((uVar8 & 1) == 0) {
      uVar19 = *(undefined8 *)puVar5;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_01780344(uVar19,0);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c(uVar19,uVar19);
      }
      lVar10 = (**(code **)(*plVar11 + 0x218))(plVar11,uVar19,0,*(undefined8 *)(*plVar11 + 0x220));
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(lVar10 + 0x18) == 0) {
        plVar14 = (long *)thunk_FUN_00d93c64(param_1,0);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar12 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
        uVar19 = FUN_015f6780(*(undefined8 *)DG_Tweening_DOTweenModuleUtils_TypeInfo,plVar11,0);
        if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_014def10(uVar12,uVar19,0,0);
        uVar16 = 0;
        goto LAB_0149ba28;
      }
      FUN_010d9fe8(lVar10,&local_98,
                   *(undefined8 *)Method_System_Collections_Generic_List<Grabbable>_Clear__);
      if (local_98 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<SimpleTuple<FaceRebuildData,_List<int>>>>_get_Current__
                         + 300);
        if ((bVar1 <= *(byte *)(*local_98 + 300)) &&
           (*(long *)(*(long *)(*local_98 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)
             Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<SimpleTuple<FaceRebuildData,_List<int>>>>_get_Current__
           )) {
          lVar10 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ec0d8);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01499f08(lVar10);
          *(undefined8 *)(lVar10 + 0x10) = uVar12;
          *(long **)(lVar10 + 0x18) = plVar11;
          uVar12 = *(undefined8 *)puVar5;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_01780344(uVar12,0);
          *(undefined8 *)(lVar10 + 0x38) = uVar12;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar8 = FUN_0129aa60(*(long *)(param_1 + 0x40),*(undefined8 *)(lVar9 + 0x20),
                               *(undefined8 *)
                                Method_System_Collections_Generic_List<DebugUI_Widget>_Clear__);
          if ((uVar8 & 1) == 0) {
            lVar18 = *(long *)(param_1 + 0x40);
            uVar12 = *(undefined8 *)(lVar9 + 0x20);
            lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                         System_Runtime_Remoting_Metadata_SoapAttribute_var);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01320e50(lVar13,*(undefined8 *)StringLiteral_7391);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0129a054(lVar18,uVar12,lVar13,
                         *(undefined8 *)
                          Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass3_0_<DOFieldOfView>b__0__
                        );
          }
          if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01299bc0(*(long *)(param_1 + 0x40),*(undefined8 *)(lVar9 + 0x20),&local_98,
                       *(undefined8 *)
                        Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_Clear__);
          if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_00bc2d48(local_98,lVar10,*(undefined8 *)PTR_DAT_033ef2e8);
          goto LAB_0149ba28;
        }
      }
      plVar11 = (long *)thunk_FUN_00d93c64(param_1,0);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar12 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
      if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_014def10(uVar12,*(undefined8 *)StringLiteral_1451,0,0);
      goto LAB_0149ba28;
    }
    plVar11 = (long *)thunk_FUN_00d93c64(param_1,0);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar12 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar19 = FUN_015f5b28(*(undefined8 *)System_Collections_Generic_IEnumerator<MemberInfo>_TypeInfo
                          ,*(undefined8 *)(lVar9 + 0x10),0);
    if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_014def10(uVar12,uVar19,0,0);
    uVar16 = 0;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar17 = piVar17 + 4;
    if (uVar8 == 0) break;
LAB_0149c05c:
    if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_10310) {
      puVar15 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0149c090;
    }
  }
LAB_0149c074:
  puVar15 = (undefined8 *)FUN_00d59724(plVar11,*(long *)StringLiteral_10310,0);
LAB_0149c090:
  (*(code *)*puVar15)(plVar11,puVar15[1]);
  return uVar16;
LAB_0149bd88:
  FUN_012b8948(&local_80,
               *(undefined8 *)
                Method_System_Collections_ObjectModel_KeyedCollection<Type,_TypeInfo>_get_Item__);
  puVar2 = DG_Tweening_ShortcutExtensions_<>c__DisplayClass52_0_TypeInfo;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar12 = FUN_01299a34(*(long *)(param_1 + 0x40),*(undefined8 *)StringLiteral_3659);
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar9);
      lVar9 = *(long *)puVar2;
    }
    lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
    if (lVar10 == 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar9 = *(long *)puVar2;
      }
      uVar19 = **(undefined8 **)(lVar9 + 0xb8);
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_u16__)
      ;
      if (lVar10 == 0) goto LAB_0149c0fc;
      FUN_012d239c(lVar10,uVar19,*(undefined8 *)StringLiteral_1734,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar10;
    }
    plVar11 = (long *)System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                                (uVar12,lVar10,
                                 *(undefined8 *)
                                  Method_Obi_ObiNativeList<AffineTransform>_GetIntPtr__);
    if (plVar11 != (long *)0x0) {
      lVar9 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar8 != 0) {
        piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)
               Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<ISelectHandler>__) {
            puVar15 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0149beb8;
          }
          uVar8 = uVar8 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar8 != 0);
      }
      puVar15 = (undefined8 *)
                FUN_00d59724(plVar11,*(long *)
                                      Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<ISelectHandler>__
                             ,0);
LAB_0149beb8:
      plVar11 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
      puVar7 = Method_FlickerLightsOffStageLightPuzzleComplete_<>c_<FlickerScene>b__3_4__;
      puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      puVar5 = Method_Oculus_Interaction_ControllerSelector_<>c_<_ctor>b__26_0__;
      puVar4 = Method_System_Collections_Generic_List<NavMeshSurface>_Remove__;
      puVar3 = 
      Method_System_Collections_Generic_Dictionary<HandJointId,_JointDeltaProvider_PoseData[]>_get_Keys__
      ;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar9 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
              puVar15 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0149bf40;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar15 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar6,0);
LAB_0149bf40:
        uVar8 = (*(code *)*puVar15)(plVar11,puVar15[1]);
        if ((uVar8 & 1) == 0) {
          if (plVar11 == (long *)0x0) {
            return uVar16;
          }
          lVar9 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar8 == 0) goto LAB_0149c074;
          piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_0149c05c;
        }
        lVar9 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
              puVar15 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0149bf9c;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar15 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar5,0);
LAB_0149bf9c:
        lVar9 = (*(code *)*puVar15)(plVar11,puVar15[1]);
        lVar10 = *(long *)puVar2;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar10);
          lVar10 = *(long *)puVar2;
        }
        lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
        if (lVar13 == 0) {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar10);
            lVar10 = *(long *)puVar2;
          }
          uVar12 = **(undefined8 **)(lVar10 + 0xb8);
          lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01267c10(lVar13,uVar12,*(undefined8 *)puVar7,0);
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = lVar13;
        }
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132508c(lVar9,lVar13,*(undefined8 *)puVar3);
      } while( true );
    }
  }
LAB_0149c0fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


