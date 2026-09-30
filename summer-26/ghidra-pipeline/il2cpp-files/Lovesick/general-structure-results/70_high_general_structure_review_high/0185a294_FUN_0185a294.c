/*
FUNCTION_NAME: FUN_0185a294
ENTRY_POINT: 0185a294
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0185ab00) */
/* WARNING: Removing unreachable block (ram,0x0185a8d8) */
/* WARNING: Removing unreachable block (ram,0x0185ab14) */
/* WARNING: Removing unreachable block (ram,0x0185a6dc) */

void FUN_0185a294(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  int iVar16;
  
  puVar2 = Method_System_Collections_Generic_List<EventSystem>_IndexOf__;
  puVar3 = 
  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenStateChanged__
  ;
  puVar1 = System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo;
  if ((DAT_0377965d & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<EventSystem>_IndexOf__);
    thunk_FUN_00d48444(
                      Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                      );
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
    DAT_0377965d = 1;
  }
  uVar9 = FUN_00da4fb8(*(undefined8 *)puVar2,0x80);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar9;
  uVar9 = FUN_00da4fb8(*(undefined8 *)puVar2,0x80);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar9;
  uVar9 = FUN_00da4fb8(*(undefined8 *)puVar2,0x80);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = uVar9;
  plVar10 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar8 = StringLiteral_10310;
  puVar7 = StringLiteral_1595;
  puVar6 = Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__;
  puVar5 = Method_Unity_Collections_NativeArray<byte>__ctor__;
  puVar4 = Method_System_Collections_Generic_List<byte[]>_get_Item__;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<WitWebSocketClient_<SendRequestAsync>d__77>__
  ;
  puVar1 = PTR_DAT_033eac50;
  if (plVar10 != (long *)0x0) {
    FUN_01320e50(plVar10,*(undefined8 *)StringLiteral_11286);
    FUN_00ac29ec(plVar10,10,*(undefined8 *)puVar7);
    FUN_00ac29ec(plVar10,0xd,*(undefined8 *)puVar7);
    FUN_00ac29ec(plVar10,9,*(undefined8 *)puVar7);
    FUN_00ac29ec(plVar10,0x5c,*(undefined8 *)puVar7);
    FUN_00ac29ec(plVar10,0xc,*(undefined8 *)puVar7);
    FUN_00ac29ec(plVar10,8,*(undefined8 *)puVar7);
    iVar16 = 0;
    do {
      lVar13 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_0185a4c8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,2);
LAB_0185a4c8:
      (*(code *)*puVar11)(plVar10,iVar16,puVar11[1]);
      iVar16 = iVar16 + 1;
    } while (iVar16 != 0x20);
    lVar13 = FUN_00da4fb8(*(undefined8 *)puVar6,1);
    if (lVar13 != 0) {
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_0185aafc;
      *(undefined2 *)(lVar13 + 0x20) = 0x27;
      plVar12 = (long *)FUN_010dfeb8(plVar10,lVar13,*(undefined8 *)puVar5);
      if (plVar12 != (long *)0x0) {
        lVar13 = *plVar12;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0185a568;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar4,0);
LAB_0185a568:
        plVar12 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
        puVar7 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        puVar2 = UnityEngine_InputSystem_Controls_DoubleControl_var;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          lVar13 = *plVar12;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar7) {
                puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0185a5dc;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar7,0);
LAB_0185a5dc:
          uVar14 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          if ((uVar14 & 1) == 0) {
            if (plVar12 == (long *)0x0) goto LAB_0185a6d0;
            lVar13 = *plVar12;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 == 0) goto LAB_0185a6a8;
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_0185a690;
          }
          lVar13 = *plVar12;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0185a638;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar2,0);
LAB_0185a638:
          uVar14 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          lVar13 = **(long **)(*(long *)puVar3 + 0xb8);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar13 + 0x18) <= ((uint)uVar14 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          *(undefined1 *)(lVar13 + (uVar14 & 0xffff) + 0x20) = 1;
        } while( true );
      }
    }
  }
  goto LAB_0185aaf8;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0185a690:
    if (*(long *)(piVar15 + -2) == *(long *)puVar8) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0185a6c4;
    }
  }
LAB_0185a6a8:
  puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,0);
LAB_0185a6c4:
  (*(code *)*puVar11)(plVar12,puVar11[1]);
LAB_0185a6d0:
  lVar13 = FUN_00da4fb8(*(undefined8 *)puVar6,1);
  if (lVar13 != 0) {
    if (*(int *)(lVar13 + 0x18) == 0) {
LAB_0185aafc:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined2 *)(lVar13 + 0x20) = 0x22;
    plVar12 = (long *)FUN_010dfeb8(plVar10,lVar13,*(undefined8 *)puVar5);
    if (plVar12 != (long *)0x0) {
      lVar13 = *plVar12;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0185a764;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar4,0);
LAB_0185a764:
      plVar12 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
      puVar7 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      puVar2 = UnityEngine_InputSystem_Controls_DoubleControl_var;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar13 = *plVar12;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar7) {
              puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0185a7d8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar7,0);
LAB_0185a7d8:
        uVar14 = (*(code *)*puVar11)(plVar12,puVar11[1]);
        if ((uVar14 & 1) == 0) {
          if (plVar12 == (long *)0x0) goto LAB_0185a8cc;
          lVar13 = *plVar12;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 == 0) goto LAB_0185a8a4;
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_0185a88c;
        }
        lVar13 = *plVar12;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0185a834;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar2,0);
LAB_0185a834:
        uVar14 = (*(code *)*puVar11)(plVar12,puVar11[1]);
        lVar13 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar13 + 0x18) <= ((uint)uVar14 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(undefined1 *)(lVar13 + (uVar14 & 0xffff) + 0x20) = 1;
      } while( true );
    }
  }
  goto LAB_0185aaf8;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
Oculus_Interaction_HandGrabGlow__InjectAllHandGrabGlow:
    if (*(long *)(piVar15 + -2) == *(long *)puVar8) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0185aab4;
    }
  }
LAB_0185aa98:
  puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar8,0);
LAB_0185aab4:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0185a88c:
    if (*(long *)(piVar15 + -2) == *(long *)puVar8) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0185a8c0;
    }
  }
LAB_0185a8a4:
  puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar8,0);
LAB_0185a8c0:
  (*(code *)*puVar11)(plVar12,puVar11[1]);
LAB_0185a8cc:
  uVar9 = FUN_00da4fb8(*(undefined8 *)puVar6,5);
  FUN_016a34e8(uVar9,*(undefined8 *)puVar1,0);
  plVar10 = (long *)FUN_010dfeb8(plVar10,uVar9,*(undefined8 *)puVar5);
  if (plVar10 != (long *)0x0) {
    lVar13 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0185a95c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar4,0);
LAB_0185a95c:
    plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
    puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar1 = UnityEngine_InputSystem_Controls_DoubleControl_var;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar13 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0185a9d0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,0);
LAB_0185a9d0:
      uVar14 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar10 == (long *)0x0) {
          return;
        }
        lVar13 = *plVar10;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 == 0) goto LAB_0185aa98;
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto Oculus_Interaction_HandGrabGlow__InjectAllHandGrabGlow;
      }
      lVar13 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0185aa2c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar1,0);
LAB_0185aa2c:
      uVar14 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      lVar13 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar13 + 0x18) <= ((uint)uVar14 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(undefined1 *)(lVar13 + (uVar14 & 0xffff) + 0x20) = 1;
    } while( true );
  }
LAB_0185aaf8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


