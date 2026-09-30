/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$ReceiveUpdatedRoom
ENTRY_POINT: 0149c1e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_SceneNavigation__ReceiveUpdatedRoom(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long *unaff_x28;
  undefined8 in_stack_00000000;
  
  FUN_012b8948(&stack0x00000020,*param_1);
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778(unaff_x20);
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    uVar6 = FUN_01299a34(*(long *)(unaff_x19 + 0x40),*(undefined8 *)StringLiteral_3659);
    lVar9 = *unaff_x28;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar9);
      lVar9 = *unaff_x28;
    }
    lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
    if (lVar12 == 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar9);
        lVar9 = *unaff_x28;
      }
      uVar13 = **(undefined8 **)(lVar9 + 0xb8);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_u16__)
      ;
      if (lVar12 == 0) goto LAB_0149c0fc;
      FUN_012d239c(lVar12,uVar13,*(undefined8 *)StringLiteral_1734,0);
      *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18) = lVar12;
    }
    plVar7 = (long *)System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                               (uVar6,lVar12,
                                *(undefined8 *)Method_Obi_ObiNativeList<AffineTransform>_GetIntPtr__
                               );
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)
               Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<ISelectHandler>__) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0149beb8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_00d59724(plVar7,*(long *)
                                    Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<ISelectHandler>__
                            ,0);
LAB_0149beb8:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar5 = Method_FlickerLightsOffStageLightPuzzleComplete_<>c_<FlickerScene>b__3_4__;
      puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      puVar3 = Method_Oculus_Interaction_ControllerSelector_<>c_<_ctor>b__26_0__;
      puVar2 = Method_System_Collections_Generic_List<NavMeshSurface>_Remove__;
      puVar1 = 
      Method_System_Collections_Generic_Dictionary<HandJointId,_JointDeltaProvider_PoseData[]>_get_Keys__
      ;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0149bf40;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar4,0);
LAB_0149bf40:
        uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_0149c09c;
          lVar9 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar10 == 0) goto LAB_0149c074;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_0149c05c;
        }
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0149bf9c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar3,0);
LAB_0149bf9c:
        lVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        lVar12 = *unaff_x28;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar12);
          lVar12 = *unaff_x28;
        }
        lVar14 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x20);
        if (lVar14 == 0) {
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar12);
            lVar12 = *unaff_x28;
          }
          uVar6 = **(undefined8 **)(lVar12 + 0xb8);
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01267c10(lVar14,uVar6,*(undefined8 *)puVar5,0);
          *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x20) = lVar14;
        }
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132508c(lVar9,lVar14,*(undefined8 *)puVar1);
      } while( true );
    }
  }
LAB_0149c0fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0149c05c:
    if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_10310) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0149c090;
    }
  }
LAB_0149c074:
  puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)StringLiteral_10310,0);
LAB_0149c090:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0149c09c:
  return in_stack_00000000._4_4_ & 1;
}


