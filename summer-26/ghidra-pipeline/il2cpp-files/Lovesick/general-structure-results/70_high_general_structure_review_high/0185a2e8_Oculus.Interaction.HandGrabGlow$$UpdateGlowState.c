/*
FUNCTION_NAME: Oculus.Interaction.HandGrabGlow$$UpdateGlowState
ENTRY_POINT: 0185a2e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0185ab00) */
/* WARNING: Removing unreachable block (ram,0x0185a8d8) */
/* WARNING: Removing unreachable block (ram,0x0185ab14) */
/* WARNING: Removing unreachable block (ram,0x0185a6dc) */

void Oculus_Interaction_HandGrabGlow__UpdateGlowState(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 *unaff_x19;
  int iVar15;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  
  thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<byte>__ctor__);
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<WitWebSocketClient_<SendRequestAsync>d__77>__
                    );
  thunk_FUN_00d48444(StringLiteral_10310);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<byte[]>_get_Item__);
  thunk_FUN_00d48444(UnityEngine_InputSystem_Controls_DoubleControl_var);
  thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
  thunk_FUN_00d48444(
                    Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
                    );
  thunk_FUN_00d48444(StringLiteral_1595);
  thunk_FUN_00d48444(StringLiteral_11286);
  thunk_FUN_00d48444(System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo);
  thunk_FUN_00d48444(PTR_DAT_033eac50);
  *(undefined1 *)(unaff_x21 + 0x65d) = 1;
  uVar8 = FUN_00da4fb8(*unaff_x20,0x80);
  **(undefined8 **)(*unaff_x24 + 0xb8) = uVar8;
  uVar8 = FUN_00da4fb8(*unaff_x20,0x80);
  *(undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 8) = uVar8;
  uVar8 = FUN_00da4fb8(*unaff_x20,0x80);
  *(undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0x10) = uVar8;
  plVar9 = (long *)thunk_FUN_00d62348(*unaff_x19);
  puVar7 = StringLiteral_10310;
  puVar6 = StringLiteral_1595;
  puVar5 = Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__;
  puVar4 = Method_Unity_Collections_NativeArray<byte>__ctor__;
  puVar3 = Method_System_Collections_Generic_List<byte[]>_get_Item__;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<WitWebSocketClient_<SendRequestAsync>d__77>__
  ;
  puVar1 = PTR_DAT_033eac50;
  if (plVar9 != (long *)0x0) {
    FUN_01320e50(plVar9,*(undefined8 *)StringLiteral_11286);
    FUN_00ac29ec(plVar9,10,*(undefined8 *)puVar6);
    FUN_00ac29ec(plVar9,0xd,*(undefined8 *)puVar6);
    FUN_00ac29ec(plVar9,9,*(undefined8 *)puVar6);
    FUN_00ac29ec(plVar9,0x5c,*(undefined8 *)puVar6);
    FUN_00ac29ec(plVar9,0xc,*(undefined8 *)puVar6);
    FUN_00ac29ec(plVar9,8,*(undefined8 *)puVar6);
    iVar15 = 0;
    do {
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_0185a4c8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar2,2);
LAB_0185a4c8:
      (*(code *)*puVar10)(plVar9,iVar15,puVar10[1]);
      iVar15 = iVar15 + 1;
    } while (iVar15 != 0x20);
    lVar12 = FUN_00da4fb8(*(undefined8 *)puVar5,1);
    if (lVar12 != 0) {
      if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0185aafc;
      *(undefined2 *)(lVar12 + 0x20) = 0x27;
      plVar11 = (long *)FUN_010dfeb8(plVar9,lVar12,*(undefined8 *)puVar4);
      if (plVar11 != (long *)0x0) {
        lVar12 = *plVar11;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0185a568;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar3,0);
LAB_0185a568:
        plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
        puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        puVar2 = UnityEngine_InputSystem_Controls_DoubleControl_var;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          lVar12 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0185a5dc;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar6,0);
LAB_0185a5dc:
          uVar13 = (*(code *)*puVar10)(plVar11,puVar10[1]);
          if ((uVar13 & 1) == 0) {
            if (plVar11 == (long *)0x0) goto LAB_0185a6d0;
            lVar12 = *plVar11;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 == 0) goto LAB_0185a6a8;
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_0185a690;
          }
          lVar12 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0185a638;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar2,0);
LAB_0185a638:
          uVar13 = (*(code *)*puVar10)(plVar11,puVar10[1]);
          lVar12 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar12 + 0x18) <= ((uint)uVar13 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          *(undefined1 *)(lVar12 + (uVar13 & 0xffff) + 0x20) = 1;
        } while( true );
      }
    }
  }
  goto LAB_0185aaf8;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0185a690:
    if (*(long *)(piVar14 + -2) == *(long *)puVar7) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0185a6c4;
    }
  }
LAB_0185a6a8:
  puVar10 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar7,0);
LAB_0185a6c4:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
LAB_0185a6d0:
  lVar12 = FUN_00da4fb8(*(undefined8 *)puVar5,1);
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x18) == 0) {
LAB_0185aafc:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined2 *)(lVar12 + 0x20) = 0x22;
    plVar11 = (long *)FUN_010dfeb8(plVar9,lVar12,*(undefined8 *)puVar4);
    if (plVar11 != (long *)0x0) {
      lVar12 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0185a764;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar3,0);
LAB_0185a764:
      plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
      puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      puVar2 = UnityEngine_InputSystem_Controls_DoubleControl_var;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar12 = *plVar11;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0185a7d8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar6,0);
LAB_0185a7d8:
        uVar13 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar11 == (long *)0x0) goto LAB_0185a8cc;
          lVar12 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 == 0) goto LAB_0185a8a4;
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_0185a88c;
        }
        lVar12 = *plVar11;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0185a834;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar2,0);
LAB_0185a834:
        uVar13 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        lVar12 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 8);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar12 + 0x18) <= ((uint)uVar13 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(undefined1 *)(lVar12 + (uVar13 & 0xffff) + 0x20) = 1;
      } while( true );
    }
  }
  goto LAB_0185aaf8;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
Oculus_Interaction_HandGrabGlow__InjectAllHandGrabGlow:
    if (*(long *)(piVar14 + -2) == *(long *)puVar7) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0185aab4;
    }
  }
LAB_0185aa98:
  puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar7,0);
LAB_0185aab4:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0185a88c:
    if (*(long *)(piVar14 + -2) == *(long *)puVar7) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0185a8c0;
    }
  }
LAB_0185a8a4:
  puVar10 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar7,0);
LAB_0185a8c0:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
LAB_0185a8cc:
  uVar8 = FUN_00da4fb8(*(undefined8 *)puVar5,5);
  FUN_016a34e8(uVar8,*(undefined8 *)puVar1,0);
  plVar9 = (long *)FUN_010dfeb8(plVar9,uVar8,*(undefined8 *)puVar4);
  if (plVar9 != (long *)0x0) {
    lVar12 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0185a95c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar3,0);
LAB_0185a95c:
    plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar1 = UnityEngine_InputSystem_Controls_DoubleControl_var;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0185a9d0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar2,0);
LAB_0185a9d0:
      uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar13 & 1) == 0) {
        if (plVar9 == (long *)0x0) {
          return;
        }
        lVar12 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 == 0) goto LAB_0185aa98;
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto Oculus_Interaction_HandGrabGlow__InjectAllHandGrabGlow;
      }
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0185aa2c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar1,0);
LAB_0185aa2c:
      uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      lVar12 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar12 + 0x18) <= ((uint)uVar13 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(undefined1 *)(lVar12 + (uVar13 & 0xffff) + 0x20) = 1;
    } while( true );
  }
LAB_0185aaf8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


