/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$set_OnNavMeshInitialized
ENTRY_POINT: 0149b6d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0149b750) */

uint Meta_XR_MRUtilityKit_SceneNavigation__set_OnNavMeshInitialized(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 in_stack_00000000;
  
  puVar2 = DG_Tweening_ShortcutExtensions_<>c__DisplayClass52_0_TypeInfo;
  if (param_2 != 1) {
    FUN_012b8948(&stack0x00000020,*(undefined8 *)Newtonsoft_Json_Utilities_AsyncUtils_<>c_TypeInfo);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(param_1);
  }
  plVar9 = (long *)__cxa_begin_catch();
  lVar13 = *plVar9;
  __cxa_end_catch();
  FUN_012b8948(&stack0x00000020,*(undefined8 *)Newtonsoft_Json_Utilities_AsyncUtils_<>c_TypeInfo);
  if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778(lVar13);
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    uVar7 = FUN_01299a34(*(long *)(unaff_x19 + 0x40),*(undefined8 *)StringLiteral_3659);
    lVar13 = *(long *)puVar2;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar13);
      lVar13 = *(long *)puVar2;
    }
    lVar12 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
    if (lVar12 == 0) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar13);
        lVar13 = *(long *)puVar2;
      }
      uVar14 = **(undefined8 **)(lVar13 + 0xb8);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_u16__)
      ;
      if (lVar12 == 0) goto LAB_0149b640;
      FUN_012d239c(lVar12,uVar14,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<string>__ctor__,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar12;
    }
    plVar9 = (long *)System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                               (uVar7,lVar12,
                                *(undefined8 *)Method_Obi_ObiNativeList<AffineTransform>_GetIntPtr__
                               );
    if (plVar9 != (long *)0x0) {
      lVar13 = *plVar9;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)
               Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<ISelectHandler>__) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0149b400;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_00d59724(plVar9,*(long *)
                                    Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<ISelectHandler>__
                            ,0);
LAB_0149b400:
      plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
      puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      puVar5 = Method_Oculus_Interaction_ControllerSelector_<>c_<_ctor>b__26_0__;
      puVar4 = Method_System_Collections_Generic_List<NavMeshSurface>_Remove__;
      puVar3 = 
      Method_System_Collections_Generic_Dictionary<HandJointId,_JointDeltaProvider_PoseData[]>_get_Keys__
      ;
      puVar1 = System_Collections_Generic_Dictionary<string,_STMFontData>_TypeInfo;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar13 = *plVar9;
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
              puVar8 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0149b488;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar6,0);
LAB_0149b488:
        uVar10 = (*(code *)*puVar8)(plVar9,puVar8[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_0149b5e4;
          lVar13 = *plVar9;
          uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar10 == 0) goto LAB_0149b5bc;
          piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_0149b5a4;
        }
        lVar13 = *plVar9;
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
              puVar8 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0149b4e4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar5,0);
LAB_0149b4e4:
        lVar13 = (*(code *)*puVar8)(plVar9,puVar8[1]);
        lVar12 = *(long *)puVar2;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar12);
          lVar12 = *(long *)puVar2;
        }
        lVar15 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
        if (lVar15 == 0) {
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar12);
            lVar12 = *(long *)puVar2;
          }
          uVar7 = **(undefined8 **)(lVar12 + 0xb8);
          lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01267c10(lVar15,uVar7,*(undefined8 *)puVar1,0);
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar15;
        }
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132508c(lVar13,lVar15,*(undefined8 *)puVar3);
      } while( true );
    }
  }
LAB_0149b640:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0149b5a4:
    if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_10310) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0149b5d8;
    }
  }
LAB_0149b5bc:
  puVar8 = (undefined8 *)FUN_00d59724(plVar9,*(long *)StringLiteral_10310,0);
LAB_0149b5d8:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_0149b5e4:
  return in_stack_00000000._4_4_ & 1;
}


