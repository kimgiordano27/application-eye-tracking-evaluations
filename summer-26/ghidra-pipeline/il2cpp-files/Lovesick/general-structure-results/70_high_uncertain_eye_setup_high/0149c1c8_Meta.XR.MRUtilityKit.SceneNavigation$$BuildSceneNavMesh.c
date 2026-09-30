/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$BuildSceneNavMesh
ENTRY_POINT: 0149c1c8
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


/* WARNING: Removing unreachable block (ram,0x0149c220) */

uint Meta_XR_MRUtilityKit_SceneNavigation__BuildSceneNavMesh(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool in_ZR;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long *unaff_x28;
  undefined8 in_stack_00000000;
  
  if (!in_ZR) {
    FUN_012b8948(&stack0x00000020,
                 *(undefined8 *)
                  Method_System_Collections_ObjectModel_KeyedCollection<Type,_TypeInfo>_get_Item__);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(param_1);
  }
  plVar8 = (long *)__cxa_begin_catch();
  lVar12 = *plVar8;
  __cxa_end_catch();
  FUN_012b8948(&stack0x00000020,
               *(undefined8 *)
                Method_System_Collections_ObjectModel_KeyedCollection<Type,_TypeInfo>_get_Item__);
  if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778(lVar12);
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    uVar6 = FUN_01299a34(*(long *)(unaff_x19 + 0x40),*(undefined8 *)StringLiteral_3659);
    lVar12 = *unaff_x28;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar12);
      lVar12 = *unaff_x28;
    }
    lVar11 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
    if (lVar11 == 0) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar12);
        lVar12 = *unaff_x28;
      }
      uVar13 = **(undefined8 **)(lVar12 + 0xb8);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_u16__)
      ;
      if (lVar11 == 0) goto LAB_0149c0fc;
      FUN_012d239c(lVar11,uVar13,*(undefined8 *)StringLiteral_1734,0);
      *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18) = lVar11;
    }
    plVar8 = (long *)System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                               (uVar6,lVar11,
                                *(undefined8 *)Method_Obi_ObiNativeList<AffineTransform>_GetIntPtr__
                               );
    if (plVar8 != (long *)0x0) {
      lVar12 = *plVar8;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)
               Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<ISelectHandler>__) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0149beb8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_00d59724(plVar8,*(long *)
                                    Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<ISelectHandler>__
                            ,0);
LAB_0149beb8:
      plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
      puVar5 = Method_FlickerLightsOffStageLightPuzzleComplete_<>c_<FlickerScene>b__3_4__;
      puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      puVar3 = Method_Oculus_Interaction_ControllerSelector_<>c_<_ctor>b__26_0__;
      puVar2 = Method_System_Collections_Generic_List<NavMeshSurface>_Remove__;
      puVar1 = 
      Method_System_Collections_Generic_Dictionary<HandJointId,_JointDeltaProvider_PoseData[]>_get_Keys__
      ;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0149bf40;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar4,0);
LAB_0149bf40:
        uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_0149c09c;
          lVar12 = *plVar8;
          uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar9 == 0) goto LAB_0149c074;
          piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_0149c05c;
        }
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0149bf9c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0);
LAB_0149bf9c:
        lVar12 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        lVar11 = *unaff_x28;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar11);
          lVar11 = *unaff_x28;
        }
        lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x20);
        if (lVar14 == 0) {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar11);
            lVar11 = *unaff_x28;
          }
          uVar6 = **(undefined8 **)(lVar11 + 0xb8);
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01267c10(lVar14,uVar6,*(undefined8 *)puVar5,0);
          *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x20) = lVar14;
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132508c(lVar12,lVar14,*(undefined8 *)puVar1);
      } while( true );
    }
  }
LAB_0149c0fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0149c05c:
    if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_10310) {
      puVar7 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0149c090;
    }
  }
LAB_0149c074:
  puVar7 = (undefined8 *)FUN_00d59724(plVar8,*(long *)StringLiteral_10310,0);
LAB_0149c090:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_0149c09c:
  return in_stack_00000000._4_4_ & 1;
}


