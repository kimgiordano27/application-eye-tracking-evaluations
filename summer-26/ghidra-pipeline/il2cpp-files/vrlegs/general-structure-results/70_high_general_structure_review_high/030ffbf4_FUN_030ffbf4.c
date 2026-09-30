/*
FUNCTION_NAME: FUN_030ffbf4
ENTRY_POINT: 030ffbf4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0310027c) */
/* WARNING: Removing unreachable block (ram,0x03100194) */
/* WARNING: Removing unreachable block (ram,0x03100854) */

long FUN_030ffbf4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  undefined8 uVar23;
  long *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_70;
  long *local_68;
  
  puVar4 = UnityEngine_UIElements_EventBase<TransitionStartEvent>_TypeInfo;
  puVar3 = UnityEngine_UIElements_EventBase<TransitionRunEvent>_TypeInfo;
  puVar2 = UnityEngine_UIElements_EventBase<TransitionEndEvent>_TypeInfo;
  puVar1 = UnityEngine_UIElements_EventBase<TransitionCancelEvent>_TypeInfo;
  if ((DAT_0412ba32 & 1) == 0) {
    FUN_01ab69ac(UnityEngine_UIElements_EventBase<ValidateCommandEvent>_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_EventBase<WheelEvent>_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_EventCallback<ChangeEvent<bool>>_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_EventCallback<ChangeEvent<float>>_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_EventBase<TransitionStartEvent>_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_EventBase<TransitionRunEvent>_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_EventCallback<ChangeEvent<string>>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc1b28);
    FUN_01ab69ac(UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3Int>>_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_EventCallback<AttachToPanelEvent>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03ccfa78);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cd7410);
    FUN_01ab69ac(PTR_DAT_03cd97e8);
    FUN_01ab69ac(PTR_DAT_03cd97f0);
    FUN_01ab69ac(PTR_DAT_03cd7418);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03ccf9c8);
    FUN_01ab69ac(UnityEngine_UIElements_EventCallback<BlurEvent>_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_EventCallback<ContextualMenuPopulateEvent>_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_EventCallback<CustomStyleResolvedEvent>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc4f30);
    FUN_01ab69ac(UnityEngine_UIElements_EventBase<TransitionEndEvent>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cca338);
    FUN_01ab69ac(UnityEngine_UIElements_EventBase<TransitionCancelEvent>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc4f50);
    FUN_01ab69ac(UnityEngine_UIElements_EventCallback<DetachFromPanelEvent>_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_EventCallback<FocusEvent>_TypeInfo);
    DAT_0412ba32 = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (long *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  lVar7 = FUN_030ff0e0(param_1,0);
  lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  Animancer_AnimancerState__OnSetIsPlaying(lVar8,*(undefined8 *)puVar2);
  lVar9 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
  FUN_0219a4f0(lVar9,*(undefined8 *)puVar4);
  if ((lVar7 != 0) && (plVar10 = (long *)FUN_03100a14(lVar7), plVar10 != (long *)0x0)) {
    lVar19 = *plVar10;
    uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_03cd97e8) {
          puVar11 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_030ffe60;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03cd97e8,0);
LAB_030ffe60:
    puVar6 = UnityEngine_UIElements_EventCallback<ChangeEvent<float>>_TypeInfo;
    puVar5 = UnityEngine_UIElements_EventBase<WheelEvent>_TypeInfo;
    puVar4 = PTR_DAT_03cd7418;
    puVar3 = PTR_DAT_03cca338;
    puVar2 = PTR_DAT_03cc4f30;
    puVar1 = PTR_DAT_03cbed20;
    plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_030ffea0:
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar20 = *plVar10;
    lVar19 = *(long *)puVar1;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar19) {
          puVar11 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_030ffef4;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_01a472ec(plVar10,lVar19,0);
LAB_030ffef4:
    uVar21 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((uVar21 & 1) != 0) {
      lVar19 = *plVar10;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_03cd97f0) {
            puVar11 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_030fff5c;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03cd97f0,0);
LAB_030fff5c:
      plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      FUN_03100a64(lVar7,plVar12,0,&local_68);
      plVar13 = local_68;
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar19 = *local_68;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_03cd7410) {
            puVar11 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_030fffdc;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_01a472ec(local_68,*(long *)PTR_DAT_03cd7410,0);
LAB_030fffdc:
      plVar13 = (long *)(*(code *)*puVar11)(plVar13,puVar11[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      do {
        lVar20 = *plVar13;
        lVar19 = *(long *)puVar1;
        uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar19) {
              puVar11 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_0310003c;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar11 = (undefined8 *)FUN_01a472ec(plVar13,lVar19,0);
LAB_0310003c:
        uVar21 = (*(code *)*puVar11)(plVar13,puVar11[1]);
        if ((uVar21 & 1) == 0) goto LAB_03100128;
        lVar19 = *plVar13;
        uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
              puVar11 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_03100098;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar11 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)puVar4,0);
LAB_03100098:
        uVar14 = (*(code *)*puVar11)(plVar13,puVar11[1]);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar21 = FUN_0219f8b8(lVar9,uVar14,&local_70,*(undefined8 *)puVar6);
        if ((uVar21 & 1) == 0) {
          lVar19 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc4f50);
          Animancer_AnimancerState__OnSetIsPlaying(lVar19,*(undefined8 *)puVar3);
          local_70 = lVar19;
          FUN_0219b9a4(lVar9,uVar14,lVar19,*(undefined8 *)puVar5);
        }
        lVar19 = local_70;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar14 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(uVar14,uVar14);
        }
        FUN_01b5f01c(lVar19,uVar14,*(undefined8 *)puVar2);
      } while( true );
    }
    if (plVar10 == (long *)0x0) goto LAB_03100270;
    lVar7 = *plVar10;
    uVar21 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar21 == 0) goto LAB_03100248;
    piVar22 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    goto LAB_03100230;
  }
  goto LAB_03100850;
LAB_03100128:
  if (plVar13 != (long *)0x0) {
    lVar19 = *plVar13;
    uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar11 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03100184;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)PTR_DAT_03cbed08,0);
LAB_03100184:
    (*(code *)*puVar11)(plVar13,puVar11[1]);
  }
  goto LAB_030ffea0;
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar22 = piVar22 + 4;
    if (uVar21 == 0) break;
LAB_03100230:
    if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar11 = (undefined8 *)(lVar7 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_03100264;
    }
  }
LAB_03100248:
  puVar11 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03cbed08,0);
LAB_03100264:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_03100270:
  if (lVar9 != 0) {
    FUN_0219c9c0(lVar9,&local_d8,
                 *(undefined8 *)UnityEngine_UIElements_EventCallback<ChangeEvent<bool>>_TypeInfo);
    uStack_98 = uStack_d0;
    local_a0 = local_d8;
    uStack_88 = uStack_c0;
    uStack_90 = local_c8;
    local_80 = local_b8;
    do {
      uVar21 = FUN_021bc4c4(&local_a0,
                            *(undefined8 *)
                             UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3Int>>_TypeInfo)
      ;
      puVar1 = PTR_DAT_03ccf9c8;
      if ((uVar21 & 1) == 0) {
        FUN_021bca9c(&local_a0,
                     *(undefined8 *)
                      UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo);
        return lVar8;
      }
      FUN_01b5f1d8(&local_a0,&local_d8,
                   *(undefined8 *)UnityEngine_UIElements_EventCallback<AttachToPanelEvent>_TypeInfo)
      ;
      local_b0 = local_d8;
      uStack_a8 = uStack_d0;
      FUN_01b5f2c8(&local_b0,&local_d8,
                   *(undefined8 *)UnityEngine_UIElements_EventCallback<BlurEvent>_TypeInfo);
      plVar10 = local_d8;
      if (local_d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar7 = *local_d8;
      uVar21 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar1) {
            puVar11 = (undefined8 *)(lVar7 + (long)(*piVar22 + 8) * 0x10 + 0x138);
            goto LAB_03100370;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_01a472ec(local_d8,*(long *)puVar1,8);
LAB_03100370:
      uVar14 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      FUN_01b5f2c8(&local_b0,&local_d8,
                   *(undefined8 *)UnityEngine_UIElements_EventCallback<BlurEvent>_TypeInfo);
      plVar10 = local_d8;
      if (local_d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar7 = *local_d8;
      uVar21 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar1) {
            puVar11 = (undefined8 *)(lVar7 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_031003ec;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_01a472ec(local_d8,*(long *)puVar1,0);
LAB_031003ec:
      uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      FUN_01b5f2c8(&local_b0,&local_d8,
                   *(undefined8 *)UnityEngine_UIElements_EventCallback<BlurEvent>_TypeInfo);
      plVar10 = local_d8;
      if (local_d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar7 = *local_d8;
      uVar21 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar1) {
            puVar11 = (undefined8 *)(lVar7 + (long)(*piVar22 + 1) * 0x10 + 0x138);
            goto LAB_0310046c;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_01a472ec(local_d8,*(long *)puVar1,1);
LAB_0310046c:
      uVar16 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      FUN_01b5f3b4(&local_b0,&local_d8,
                   *(undefined8 *)
                    UnityEngine_UIElements_EventCallback<ContextualMenuPopulateEvent>_TypeInfo);
      plVar10 = local_d8;
      FUN_01b5f2c8(&local_b0,&local_d8,
                   *(undefined8 *)UnityEngine_UIElements_EventCallback<BlurEvent>_TypeInfo);
      plVar13 = local_d8;
      if (local_d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar7 = *local_d8;
      uVar21 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar1) {
            puVar11 = (undefined8 *)(lVar7 + (long)(*piVar22 + 2) * 0x10 + 0x138);
            goto LAB_03100508;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_01a472ec(local_d8,*(long *)puVar1,2);
LAB_03100508:
      lVar7 = (*(code *)*puVar11)(plVar13,puVar11[1]);
      if (lVar7 == 0) {
        uVar17 = 0;
      }
      else {
        FUN_01b5f2c8(&local_b0,&local_d8,
                     *(undefined8 *)UnityEngine_UIElements_EventCallback<BlurEvent>_TypeInfo);
        plVar13 = local_d8;
        if (local_d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar7 = *local_d8;
        uVar21 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar1) {
              puVar11 = (undefined8 *)(lVar7 + (long)(*piVar22 + 2) * 0x10 + 0x138);
              goto LAB_031005b8;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar11 = (undefined8 *)FUN_01a472ec(local_d8,*(long *)puVar1,2);
LAB_031005b8:
        uVar17 = (*(code *)*puVar11)(plVar13,puVar11[1]);
        lVar7 = *(long *)UnityEngine_UIElements_EventCallback<FocusEvent>_TypeInfo;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar7);
          lVar7 = *(long *)UnityEngine_UIElements_EventCallback<FocusEvent>_TypeInfo;
        }
        lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar9 == 0) {
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar7);
            lVar7 = *(long *)UnityEngine_UIElements_EventCallback<FocusEvent>_TypeInfo;
          }
          uVar23 = **(undefined8 **)(lVar7 + 0xb8);
          lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccfa78);
          FUN_021de1ac(lVar9,uVar23,
                       *(undefined8 *)
                        UnityEngine_UIElements_EventCallback<DetachFromPanelEvent>_TypeInfo,0);
          plVar13 = (long *)(*(long *)(*(long *)
                                        UnityEngine_UIElements_EventCallback<FocusEvent>_TypeInfo +
                                      0xb8) + 8);
          *plVar13 = lVar9;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13,lVar9);
        }
        uVar17 = FUN_01f6d39c(uVar17,lVar9,
                              *(undefined8 *)
                               UnityEngine_UIElements_EventCallback<ChangeEvent<string>>_TypeInfo);
        uVar17 = FUN_01f7108c(uVar17,*(undefined8 *)PTR_DAT_03cc1b28);
      }
      FUN_01b5f2c8(&local_b0,&local_d8,
                   *(undefined8 *)UnityEngine_UIElements_EventCallback<BlurEvent>_TypeInfo);
      plVar13 = local_d8;
      if (local_d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar7 = *local_d8;
      uVar21 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar1) {
            puVar11 = (undefined8 *)(lVar7 + (long)(*piVar22 + 6) * 0x10 + 0x138);
            goto LAB_03100714;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_01a472ec(local_d8,*(long *)puVar1,6);
LAB_03100714:
      uVar23 = (*(code *)*puVar11)(plVar13,puVar11[1]);
      uVar18 = thunk_FUN_01a89e68(*(undefined8 *)
                                   UnityEngine_UIElements_EventBase<ValidateCommandEvent>_TypeInfo);
      FUN_030fed4c(uVar18,uVar14,uVar15,uVar16,plVar10,uVar17,uVar23);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01b5f01c(lVar8,uVar18,
                   *(undefined8 *)
                    UnityEngine_UIElements_EventCallback<CustomStyleResolvedEvent>_TypeInfo);
    } while( true );
  }
LAB_03100850:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


