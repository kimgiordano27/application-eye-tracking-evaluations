/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$OnSceneLoadedEvent
ENTRY_POINT: 0149bb5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0149c1f0) */

uint Meta_XR_MRUtilityKit_SceneNavigation__OnSceneLoadedEvent
               (undefined **param_1,undefined8 param_2)

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
  int *piVar16;
  long unaff_x19;
  long lVar17;
  undefined8 uVar18;
  undefined8 *unaff_x24;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  
  do {
    if (*(int *)(*(long *)param_1[0x7b] + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_014def10(param_2,*(undefined8 *)StringLiteral_1451,0,0);
LAB_0149ba28:
    uVar8 = FUN_012b894c(&stack0x00000020,*(undefined8 *)StringLiteral_866);
    if ((uVar8 & 1) == 0) {
      FUN_012b8948(&stack0x00000020,
                   *(undefined8 *)
                    Method_System_Collections_ObjectModel_KeyedCollection<Type,_TypeInfo>_get_Item__
                  );
      puVar2 = DG_Tweening_ShortcutExtensions_<>c__DisplayClass52_0_TypeInfo;
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        uVar12 = FUN_01299a34(*(long *)(unaff_x19 + 0x40),*(undefined8 *)StringLiteral_3659);
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
          uVar18 = **(undefined8 **)(lVar9 + 0xb8);
          lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                       Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_u16__);
          if (lVar10 == 0) goto LAB_0149c0fc;
          FUN_012d239c(lVar10,uVar18,*(undefined8 *)StringLiteral_1734,0);
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar10;
        }
        plVar11 = (long *)System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                                    (uVar12,lVar10,
                                     *(undefined8 *)
                                      Method_Obi_ObiNativeList<AffineTransform>_GetIntPtr__);
        if (plVar11 != (long *)0x0) {
          lVar9 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar8 == 0) goto LAB_0149be94;
          piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          break;
        }
      }
LAB_0149c0fc:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar9 = FUN_00bc2f38(&stack0x00000020,*unaff_x24);
    lVar10 = FUN_0149a528();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar11 = (long *)FUN_00bc2b6c(lVar10,*unaff_x28);
    uVar12 = FUN_00bc2c58(lVar10,*unaff_x29);
    uVar8 = FUN_0169f70c(plVar11,0,0);
    if ((uVar8 & 1) != 0) {
      plVar11 = (long *)thunk_FUN_00d93c64();
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar12 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar18 = FUN_015f5b28(*(undefined8 *)
                             System_Collections_Generic_IEnumerator<MemberInfo>_TypeInfo,
                            *(undefined8 *)(lVar9 + 0x10),0);
      if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_014def10(uVar12,uVar18,0,0);
LAB_0149ba24:
      in_stack_00000000._4_4_ = 0;
      goto LAB_0149ba28;
    }
    uVar18 = *unaff_x27;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar18 = FUN_01780344(uVar18,0);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c(uVar18,uVar18);
    }
    lVar10 = (**(code **)(*plVar11 + 0x218))(plVar11,uVar18,0,*(undefined8 *)(*plVar11 + 0x220));
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(lVar10 + 0x18) == 0) {
      plVar14 = (long *)thunk_FUN_00d93c64();
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar12 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
      uVar18 = FUN_015f6780(*(undefined8 *)DG_Tweening_DOTweenModuleUtils_TypeInfo,plVar11,0);
      if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_014def10(uVar12,uVar18,0,0);
      goto LAB_0149ba24;
    }
    FUN_010d9fe8(lVar10,&stack0x00000008,
                 *(undefined8 *)Method_System_Collections_Generic_List<Grabbable>_Clear__);
    if (in_stack_00000008 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<SimpleTuple<FaceRebuildData,_List<int>>>>_get_Current__
                       + 300);
      if ((*(byte *)(*in_stack_00000008 + 300) < bVar1) ||
         (*(long *)(*(long *)(*in_stack_00000008 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<SimpleTuple<FaceRebuildData,_List<int>>>>_get_Current__
         )) goto LAB_0149bb3c;
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ec0d8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01499f08(lVar10);
      *(undefined8 *)(lVar10 + 0x10) = uVar12;
      *(long **)(lVar10 + 0x18) = plVar11;
      uVar12 = *unaff_x27;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_01780344(uVar12,0);
      *(undefined8 *)(lVar10 + 0x38) = uVar12;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar8 = FUN_0129aa60(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(lVar9 + 0x20),
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<DebugUI_Widget>_Clear__);
      if ((uVar8 & 1) == 0) {
        lVar17 = *(long *)(unaff_x19 + 0x40);
        uVar12 = *(undefined8 *)(lVar9 + 0x20);
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                     System_Runtime_Remoting_Metadata_SoapAttribute_var);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320e50(lVar13,*(undefined8 *)StringLiteral_7391);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0129a054(lVar17,uVar12,lVar13,
                     *(undefined8 *)
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass3_0_<DOFieldOfView>b__0__
                    );
      }
      if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01299bc0(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(lVar9 + 0x20),&stack0x00000008,
                   *(undefined8 *)
                    Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_Clear__);
      if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00bc2d48(in_stack_00000008,lVar10,*(undefined8 *)PTR_DAT_033ef2e8);
      goto LAB_0149ba28;
    }
LAB_0149bb3c:
    plVar11 = (long *)thunk_FUN_00d93c64();
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    param_2 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
    param_1 = &StringLiteral_597;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar16 = piVar16 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar16 + -2) ==
        *(long *)Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<ISelectHandler>__) {
      puVar15 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0149beb8;
    }
  }
LAB_0149be94:
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
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
          puVar15 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0149bf40;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar8 != 0);
    }
    puVar15 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar6,0);
LAB_0149bf40:
    uVar8 = (*(code *)*puVar15)(plVar11,puVar15[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar11 == (long *)0x0) goto LAB_0149c09c;
      lVar9 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar8 == 0) goto LAB_0149c074;
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
          puVar15 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0149bf9c;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 4;
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
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar16 = piVar16 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_10310) {
      puVar15 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0149c090;
    }
  }
LAB_0149c074:
  puVar15 = (undefined8 *)FUN_00d59724(plVar11,*(long *)StringLiteral_10310,0);
LAB_0149c090:
  (*(code *)*puVar15)(plVar11,puVar15[1]);
LAB_0149c09c:
  return in_stack_00000000._4_4_ & 1;
}


