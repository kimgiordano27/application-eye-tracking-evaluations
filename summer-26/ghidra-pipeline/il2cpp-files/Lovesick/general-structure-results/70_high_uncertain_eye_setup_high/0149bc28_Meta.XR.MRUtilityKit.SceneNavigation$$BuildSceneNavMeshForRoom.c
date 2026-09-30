/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$BuildSceneNavMeshForRoom
ENTRY_POINT: 0149bc28
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

uint Meta_XR_MRUtilityKit_SceneNavigation__BuildSceneNavMeshForRoom(void)

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
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long lVar15;
  long unaff_x21;
  long lVar16;
  undefined8 uVar17;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  
code_r0x0149bc28:
  FUN_01320e50(unaff_x24,*(undefined8 *)StringLiteral_7391);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0129a054(unaff_x21,unaff_x23,unaff_x24,
               *(undefined8 *)
                Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass3_0_<DOFieldOfView>b__0__);
LAB_0149bc5c:
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01299bc0(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x20 + 0x20),&stack0x00000008,
               *(undefined8 *)Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_Clear__
              );
  if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_00bc2d48(in_stack_00000008,unaff_x22,*(undefined8 *)PTR_DAT_033ef2e8);
LAB_0149ba28:
  do {
    uVar8 = FUN_012b894c(&stack0x00000020,*(undefined8 *)StringLiteral_866);
    if ((uVar8 & 1) == 0) {
      FUN_012b8948(&stack0x00000020,
                   *(undefined8 *)
                    Method_System_Collections_ObjectModel_KeyedCollection<Type,_TypeInfo>_get_Item__
                  );
      puVar2 = DG_Tweening_ShortcutExtensions_<>c__DisplayClass52_0_TypeInfo;
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        uVar11 = FUN_01299a34(*(long *)(unaff_x19 + 0x40),*(undefined8 *)StringLiteral_3659);
        lVar9 = *(long *)puVar2;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar9);
          lVar9 = *(long *)puVar2;
        }
        lVar15 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
        if (lVar15 == 0) {
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar9);
            lVar9 = *(long *)puVar2;
          }
          uVar17 = **(undefined8 **)(lVar9 + 0xb8);
          lVar15 = thunk_FUN_00d62348(*(undefined8 *)
                                       Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_u16__);
          if (lVar15 == 0) goto LAB_0149c0fc;
          FUN_012d239c(lVar15,uVar17,*(undefined8 *)StringLiteral_1734,0);
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar15;
        }
        plVar10 = (long *)System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                                    (uVar11,lVar15,
                                     *(undefined8 *)
                                      Method_Obi_ObiNativeList<AffineTransform>_GetIntPtr__);
        if (plVar10 != (long *)0x0) {
          lVar9 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar8 == 0) goto LAB_0149be94;
          piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          break;
        }
      }
LAB_0149c0fc:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    unaff_x20 = FUN_00bc2f38(&stack0x00000020,*unaff_x28);
    lVar9 = FUN_0149a528();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar10 = (long *)FUN_00bc2b6c(lVar9,*unaff_x25);
    uVar11 = FUN_00bc2c58(lVar9,*unaff_x29);
    uVar8 = FUN_0169f70c(plVar10,0,0);
    if ((uVar8 & 1) == 0) {
      uVar17 = *unaff_x27;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_01780344(uVar17,0);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c(uVar17,uVar17);
      }
      lVar9 = (**(code **)(*plVar10 + 0x218))(plVar10,uVar17,0,*(undefined8 *)(*plVar10 + 0x220));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(lVar9 + 0x18) != 0) {
        FUN_010d9fe8(lVar9,&stack0x00000008,
                     *(undefined8 *)Method_System_Collections_Generic_List<Grabbable>_Clear__);
        if (in_stack_00000008 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<SimpleTuple<FaceRebuildData,_List<int>>>>_get_Current__
                           + 300);
          if ((bVar1 <= *(byte *)(*in_stack_00000008 + 300)) &&
             (*(long *)(*(long *)(*in_stack_00000008 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<SimpleTuple<FaceRebuildData,_List<int>>>>_get_Current__
             )) goto LAB_0149bb94;
        }
        plVar10 = (long *)thunk_FUN_00d93c64();
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar11 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
        if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_014def10(uVar11,*(undefined8 *)StringLiteral_1451,0,0);
        goto LAB_0149ba28;
      }
      plVar12 = (long *)thunk_FUN_00d93c64();
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar11 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      uVar17 = FUN_015f6780(*(undefined8 *)DG_Tweening_DOTweenModuleUtils_TypeInfo,plVar10,0);
      if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_014def10(uVar11,uVar17,0,0);
    }
    else {
      plVar10 = (long *)thunk_FUN_00d93c64();
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar11 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar17 = FUN_015f5b28(*(undefined8 *)
                             System_Collections_Generic_IEnumerator<MemberInfo>_TypeInfo,
                            *(undefined8 *)(unaff_x20 + 0x10),0);
      if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_014def10(uVar11,uVar17,0,0);
    }
    in_stack_00000000._4_4_ = 0;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar14 = piVar14 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<ISelectHandler>__) {
      puVar13 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0149beb8;
    }
  }
LAB_0149be94:
  puVar13 = (undefined8 *)
            FUN_00d59724(plVar10,*(long *)
                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<ISelectHandler>__
                         ,0);
LAB_0149beb8:
  plVar10 = (long *)(*(code *)*puVar13)(plVar10,puVar13[1]);
  puVar7 = Method_FlickerLightsOffStageLightPuzzleComplete_<>c_<FlickerScene>b__3_4__;
  puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar5 = Method_Oculus_Interaction_ControllerSelector_<>c_<_ctor>b__26_0__;
  puVar4 = Method_System_Collections_Generic_List<NavMeshSurface>_Remove__;
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<HandJointId,_JointDeltaProvider_PoseData[]>_get_Keys__
  ;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar9 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0149bf40;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar6,0);
LAB_0149bf40:
    uVar8 = (*(code *)*puVar13)(plVar10,puVar13[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar10 == (long *)0x0) goto LAB_0149c09c;
      lVar9 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar8 == 0) goto LAB_0149c074;
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      goto LAB_0149c05c;
    }
    lVar9 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0149bf9c;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar5,0);
LAB_0149bf9c:
    lVar9 = (*(code *)*puVar13)(plVar10,puVar13[1]);
    lVar15 = *(long *)puVar2;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar15);
      lVar15 = *(long *)puVar2;
    }
    lVar16 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x20);
    if (lVar16 == 0) {
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar15);
        lVar15 = *(long *)puVar2;
      }
      uVar11 = **(undefined8 **)(lVar15 + 0xb8);
      lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01267c10(lVar16,uVar11,*(undefined8 *)puVar7,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = lVar16;
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0132508c(lVar9,lVar16,*(undefined8 *)puVar3);
  } while( true );
LAB_0149bb94:
  unaff_x22 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ec0d8);
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01499f08(unaff_x22);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar11;
  *(long **)(unaff_x22 + 0x18) = plVar10;
  uVar11 = *unaff_x27;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar11 = FUN_01780344(uVar11,0);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar11;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar8 = FUN_0129aa60(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x20 + 0x20),
                       *(undefined8 *)Method_System_Collections_Generic_List<DebugUI_Widget>_Clear__
                      );
  if ((uVar8 & 1) == 0) goto code_r0x0149bc08;
  goto LAB_0149bc5c;
code_r0x0149bc08:
  unaff_x21 = *(long *)(unaff_x19 + 0x40);
  unaff_x23 = *(undefined8 *)(unaff_x20 + 0x20);
  unaff_x24 = thunk_FUN_00d62348(*(undefined8 *)System_Runtime_Remoting_Metadata_SoapAttribute_var);
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  goto code_r0x0149bc28;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar14 = piVar14 + 4;
    if (uVar8 == 0) break;
LAB_0149c05c:
    if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_10310) {
      puVar13 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0149c090;
    }
  }
LAB_0149c074:
  puVar13 = (undefined8 *)FUN_00d59724(plVar10,*(long *)StringLiteral_10310,0);
LAB_0149c090:
  (*(code *)*puVar13)(plVar10,puVar13[1]);
LAB_0149c09c:
  return in_stack_00000000._4_4_ & 1;
}


