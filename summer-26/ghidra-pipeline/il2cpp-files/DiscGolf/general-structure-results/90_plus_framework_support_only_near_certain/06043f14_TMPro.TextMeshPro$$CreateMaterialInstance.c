/*
FUNCTION_NAME: TMPro.TextMeshPro$$CreateMaterialInstance
ENTRY_POINT: 06043f14
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06044c70) */
/* WARNING: Removing unreachable block (ram,0x06044c74) */
/* WARNING: Removing unreachable block (ram,0x06044e4c) */
/* WARNING: Removing unreachable block (ram,0x06044d6c) */

void TMPro_TextMeshPro__CreateMaterialInstance(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong extraout_x1;
  ulong extraout_x1_00;
  long lVar16;
  code *pcVar17;
  int *piVar18;
  long *unaff_x20;
  long unaff_x23;
  long *unaff_x25;
  long *unaff_x27;
  undefined8 *unaff_x29;
  undefined1 auVar19 [16];
  long in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 *in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 *in_stack_00000078;
  ulong in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  ulong in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 *in_stack_000000e8;
  ulong in_stack_000000f0;
  long in_stack_00000100;
  undefined8 in_stack_00000108;
  
  uVar6 = FUN_046fc830(&stack0x00000100,**(undefined8 **)(param_1 + 0x188));
  puVar2 = Method_UnityEngine_Component_GetComponentsInChildren<OvrAvatarEntity>__;
  puVar1 = Method_UnityEngine_Component_GetComponents<Renderer>__;
  if ((uVar6 & 1) != 0) {
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_Component_GetComponentsInChildren<OvrAvatarEntity>__
                              );
    FUN_04e56274(lVar7,*(undefined8 *)puVar1);
    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_04e56274(lVar8,*(undefined8 *)puVar1);
    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_04e56274(lVar9,*(undefined8 *)puVar1);
    lVar16 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar6 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x25) {
          puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 7) * 0x10 + 0x138);
          goto LAB_06043fc4;
        }
        uVar6 = uVar6 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar6 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c();
LAB_06043fc4:
    _in_stack_00000100 = (*(code *)*puVar10)();
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02df485c(*unaff_x27);
    }
    if (in_stack_00000100 == 0) {
      lVar7 = *(long *)(unaff_x23 + 0x30);
      if (lVar7 == 0) {
        return;
      }
      pcVar17 = *(code **)(lVar7 + 0x18);
      uVar15 = *(undefined8 *)(lVar7 + 0x40);
      lVar9 = 0;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = in_stack_00000100._8_8_;
      _in_stack_00000100 = auVar19 << 0x40;
      goto LAB_06044e10;
    }
    lVar16 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar6 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x25) {
          puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 7) * 0x10 + 0x138);
          goto LAB_0604405c;
        }
        uVar6 = uVar6 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar6 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c();
LAB_0604405c:
    auVar19 = (*(code *)*puVar10)();
    _in_stack_00000100 = auVar19;
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02df485c(*unaff_x27);
    }
    if (in_stack_00000100 == 0) goto LAB_06044e54;
    lVar16 = FUN_04e56cb4(in_stack_00000100,
                          *(undefined8 *)
                           Method_UnityEngine_Component_GetComponentsInChildren<OVRHand>__);
    puVar4 = Method_UnityEngine_Component_GetComponentsInChildren<Renderer>__;
    puVar3 = Method_UnityEngine_Component_GetComponentsInChildren<NetworkObject>__;
    puVar2 = Method_UnityEngine_Component_GetComponents<Component>__;
    puVar1 = Method_UnityEngine_Component_GetComponent<MultiplayerScoreManager>__;
    if (lVar16 == 0) goto LAB_06044e54;
    FUN_03e12118(&stack0x00000020,lVar16,
                 *(undefined8 *)Method_UnityEngine_Component_GetComponentsInChildren<Transform>__);
    in_stack_000000f0 = in_stack_00000030;
    in_stack_000000e8 = in_stack_00000028;
    in_stack_000000e0 = in_stack_00000020;
    in_stack_00000020 = 0;
    in_stack_00000028 = &stack0x000000e0;
    while( true ) {
      uVar11 = FUN_05228c88(&stack0x000000e0,*(undefined8 *)puVar4);
      uVar6 = in_stack_000000f0;
      if ((uVar11 & 1) == 0) break;
      lVar16 = *unaff_x20;
      uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar11 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x25) {
            puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 7) * 0x10 + 0x138);
            goto LAB_06044150;
          }
          uVar11 = uVar11 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c();
LAB_06044150:
      auVar19 = (*(code *)*puVar10)();
      _in_stack_00000100 = auVar19;
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x27);
      }
      uVar11 = FUN_046fc988(&stack0x00000100,*unaff_x29);
      if ((uVar11 & 1) == 0) {
        lVar16 = *unaff_x20;
        uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar11 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x25) {
              puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 7) * 0x10 + 0x138);
              goto LAB_060441d4;
            }
            uVar11 = uVar11 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c();
LAB_060441d4:
        auVar19 = (*(code *)*puVar10)();
        _in_stack_00000100 = auVar19;
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02df485c(*unaff_x27);
        }
        if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        auVar19 = FUN_04e56f6c(in_stack_00000100,uVar6,*(undefined8 *)puVar3);
        _in_stack_000000d0 = auVar19;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar1);
        }
        uVar11 = FUN_046fc988(&stack0x000000d0,
                              *(undefined8 *)
                               Method_UnityEngine_Component_GetComponents<AvatarLODParent>__);
        if ((uVar11 & 1) != 0) goto LAB_0604423c;
        lVar16 = *unaff_x20;
        uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar11 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x25) {
              puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 7) * 0x10 + 0x138);
              goto LAB_06044334;
            }
            uVar11 = uVar11 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c();
LAB_06044334:
        auVar19 = (*(code *)*puVar10)();
        _in_stack_00000100 = auVar19;
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02df485c(*unaff_x27);
        }
        uVar11 = FUN_046fc830(&stack0x00000100,
                              *(undefined8 *)Method_UnityEngine_Component_GetComponent<Light>__);
        if ((uVar11 & 1) == 0) {
          lVar16 = *unaff_x20;
          uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar11 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *unaff_x25) {
                puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                goto LAB_060443c0;
              }
              uVar11 = uVar11 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar11 != 0);
          }
          puVar10 = (undefined8 *)FUN_02dd004c();
LAB_060443c0:
          auVar19 = (*(code *)*puVar10)();
          _in_stack_00000100 = auVar19;
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_02df485c(*unaff_x27);
          }
          if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          auVar19 = FUN_04e56f6c(in_stack_00000100,uVar6,*(undefined8 *)puVar3);
          _in_stack_000000d0 = auVar19;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar1);
          }
          uVar11 = FUN_046fc830(&stack0x000000d0,
                                *(undefined8 *)
                                 Method_UnityEngine_Component_GetComponent<LobbyPlayerSingleUI>__);
          if ((uVar11 & 1) != 0) goto LAB_06044428;
          lVar16 = *unaff_x20;
          uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar11 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *unaff_x25) {
                puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                goto LAB_06044520;
              }
              uVar11 = uVar11 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar11 != 0);
          }
          puVar10 = (undefined8 *)FUN_02dd004c();
LAB_06044520:
          auVar19 = (*(code *)*puVar10)();
          _in_stack_00000100 = auVar19;
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_02df485c(*unaff_x27);
          }
          uVar11 = FUN_046fc8ac(&stack0x00000100,
                                *(undefined8 *)
                                 Method_UnityEngine_Component_GetComponent<LayoutGroup>__);
          if ((uVar11 & 1) != 0) {
            lVar16 = *unaff_x20;
            uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar11 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *unaff_x25) {
                  puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                  goto LAB_060445ac;
                }
                uVar11 = uVar11 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar11 != 0);
            }
            puVar10 = (undefined8 *)FUN_02dd004c();
LAB_060445ac:
            auVar19 = (*(code *)*puVar10)();
            _in_stack_00000100 = auVar19;
            if (*(int *)(*unaff_x27 + 0xe4) == 0) {
              thunk_FUN_02df485c(*unaff_x27);
            }
            if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            auVar19 = FUN_04e56f6c(in_stack_00000100,uVar6,*(undefined8 *)puVar3);
            _in_stack_000000d0 = auVar19;
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)puVar1);
            }
            uVar11 = FUN_046fc8ac(&stack0x000000d0,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponents<BaseInputModule>__);
            if ((uVar11 & 1) != 0) {
              lVar16 = *unaff_x20;
              uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar11 != 0) {
                piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *unaff_x25) {
                    puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                    goto LAB_06044664;
                  }
                  uVar11 = uVar11 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar11 != 0);
              }
              puVar10 = (undefined8 *)FUN_02dd004c();
LAB_06044664:
              auVar19 = (*(code *)*puVar10)();
              _in_stack_00000100 = auVar19;
              if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                thunk_FUN_02df485c(*unaff_x27);
              }
              if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              auVar19 = FUN_04e56f6c(in_stack_00000100,uVar6,*(undefined8 *)puVar3);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860(0,auVar19._8_8_,auVar19._0_8_);
              }
              FUN_04e56ff0(lVar7,uVar6,auVar19._0_8_,auVar19._8_8_,*(undefined8 *)puVar2);
            }
          }
        }
        else {
LAB_06044428:
          lVar16 = *unaff_x20;
          uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar11 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *unaff_x25) {
                puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                goto LAB_060444b8;
              }
              uVar11 = uVar11 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar11 != 0);
          }
          puVar10 = (undefined8 *)FUN_02dd004c();
LAB_060444b8:
          auVar19 = (*(code *)*puVar10)();
          _in_stack_00000100 = auVar19;
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_02df485c(*unaff_x27);
          }
          if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          auVar19 = FUN_04e56f6c(in_stack_00000100,uVar6,*(undefined8 *)puVar3);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_04e56ff0(lVar8,uVar6,auVar19._0_8_,auVar19._8_8_,*(undefined8 *)puVar2);
        }
      }
      else {
LAB_0604423c:
        lVar16 = *unaff_x20;
        uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar11 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x25) {
              puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 7) * 0x10 + 0x138);
              goto LAB_060442cc;
            }
            uVar11 = uVar11 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c();
LAB_060442cc:
        auVar19 = (*(code *)*puVar10)();
        _in_stack_00000100 = auVar19;
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02df485c(*unaff_x27);
        }
        if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        auVar19 = FUN_04e56f6c(in_stack_00000100,uVar6,*(undefined8 *)puVar3);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04e56ff0(lVar9,uVar6,auVar19._0_8_,auVar19._8_8_,*(undefined8 *)puVar2);
      }
    }
    FUN_05228c84(&stack0x000000e0,
                 *(undefined8 *)
                  Method_UnityEngine_Component_GetComponentsInChildren<RectTransform>__);
    puVar1 = Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifier>__;
    if (lVar7 == 0) goto LAB_06044e54;
    iVar5 = FUN_04e56ca4(lVar7,*(undefined8 *)
                                Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifier>__
                        );
    if ((0 < iVar5) && (lVar16 = *(long *)(in_stack_00000010 + 0x28), lVar16 != 0)) {
      (**(code **)(lVar16 + 0x18))
                (*(undefined8 *)(lVar16 + 0x40),lVar7,*(undefined8 *)(lVar16 + 0x28));
    }
    if (lVar8 == 0) goto LAB_06044e54;
    iVar5 = FUN_04e56ca4(lVar8,*(undefined8 *)puVar1);
    if ((0 < iVar5) && (lVar7 = *(long *)(in_stack_00000010 + 0x30), lVar7 != 0)) {
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),lVar8,*(undefined8 *)(lVar7 + 0x28))
      ;
    }
    if (lVar9 == 0) goto LAB_06044e54;
    iVar5 = FUN_04e56ca4(lVar9,*(undefined8 *)puVar1);
    if ((0 < iVar5) && (lVar7 = *(long *)(in_stack_00000010 + 0x38), lVar7 != 0)) {
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),lVar9,*(undefined8 *)(lVar7 + 0x28))
      ;
    }
  }
  lVar7 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar6 != 0) {
    piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *unaff_x25) {
        puVar10 = (undefined8 *)(lVar7 + (long)(*piVar18 + 10) * 0x10 + 0x138);
        goto LAB_060447c8;
      }
      uVar6 = uVar6 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar6 != 0);
  }
  puVar10 = (undefined8 *)FUN_02dd004c();
LAB_060447c8:
  (*(code *)*puVar10)();
  if ((extraout_x1 & 0xff00) == 0) {
    lVar7 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x25) {
          puVar10 = (undefined8 *)(lVar7 + (long)(*piVar18 + 10) * 0x10 + 0x138);
          goto LAB_0604482c;
        }
        uVar6 = uVar6 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar6 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c();
LAB_0604482c:
    (*(code *)*puVar10)();
    if ((extraout_x1_00 & 0xff) == 0) {
      return;
    }
  }
  puVar2 = Method_UnityEngine_Component_GetComponentsInChildren<RawImage>__;
  puVar1 = Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__;
  lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_UnityEngine_Component_GetComponentsInChildren<RawImage>__);
  FUN_04d95918(lVar7,*(undefined8 *)puVar1);
  lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_04d95918(lVar8,*(undefined8 *)puVar1);
  lVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_04d95918(lVar9,*(undefined8 *)puVar1);
  lVar16 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar6 != 0) {
    piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *unaff_x25) {
        puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 10) * 0x10 + 0x138);
        goto LAB_060448dc;
      }
      uVar6 = uVar6 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar6 != 0);
  }
  puVar10 = (undefined8 *)FUN_02dd004c();
LAB_060448dc:
  lVar16 = (*(code *)*puVar10)();
  puVar4 = Method_UnityEngine_Component_GetComponents<Collider>__;
  puVar3 = Method_UnityEngine_Component_GetComponents<MonoBehaviour>__;
  puVar2 = Method_UnityEngine_Component_GetComponent<OvrAvatarHandJointType>__;
  puVar10 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OvrAvatarEntity>__;
  puVar1 = Method_UnityEngine_Component_GetComponent<MonoBehaviour>__;
  if (lVar16 != 0) {
    FUN_04d96af4(&stack0x00000020,lVar16,
                 *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRManager>__);
    in_stack_000000c0 = in_stack_00000040;
    in_stack_00000058 = &stack0x000000a0;
    in_stack_000000a8 = in_stack_00000028;
    in_stack_000000a0 = in_stack_00000020;
    in_stack_000000b8 = in_stack_00000038;
    in_stack_000000b0 = in_stack_00000030;
    in_stack_00000050 = 0;
    while( true ) {
      uVar11 = FUN_0520e87c(&stack0x000000a0,*puVar10);
      lVar14 = in_stack_000000b8;
      uVar6 = in_stack_000000b0;
      lVar16 = in_stack_00000050;
      if ((uVar11 & 1) == 0) break;
      if (in_stack_000000b8 == 0) {
LAB_06044c1c:
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04d966b8(lVar8,uVar6 & 0xffffffff,0,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponents<IMaterialModifier>__)
        ;
      }
      else {
        lVar16 = *(long *)(in_stack_000000b8 + 0x38);
        if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NetworkObject>__ + 0xe4) ==
            0) {
          thunk_FUN_02df485c();
        }
        if (lVar16 == 0) goto LAB_06044c1c;
        lVar16 = *(long *)(lVar14 + 0x38);
        if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NetworkObject>__ + 0xe4) ==
            0) {
          thunk_FUN_02df485c();
        }
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04e57418(&stack0x00000020,lVar16,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRGrabbable>__);
        in_stack_00000070 = in_stack_00000020;
        in_stack_00000020 = 0;
        in_stack_00000078 = in_stack_00000028;
        in_stack_00000088 = in_stack_00000038;
        in_stack_00000080 = in_stack_00000030;
        in_stack_00000098 = in_stack_00000048;
        in_stack_00000090 = in_stack_00000040;
        in_stack_00000028 = &stack0x00000070;
        while( true ) {
          uVar12 = FUN_05228778(&stack0x00000070,*(undefined8 *)puVar2);
          uVar15 = in_stack_00000090;
          lVar16 = in_stack_00000088;
          uVar11 = in_stack_00000080;
          puVar10 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OvrAvatarEntity>__;
          if ((uVar12 & 1) == 0) break;
          in_stack_00000060 = in_stack_00000088;
          in_stack_00000068 = in_stack_00000090;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar12 = FUN_046fc988(&stack0x00000060,*(undefined8 *)puVar3);
          if ((uVar12 & 1) == 0) {
            in_stack_00000060 = lVar16;
            in_stack_00000068 = uVar15;
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar12 = FUN_046fc830(&stack0x00000060,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponent<LobbyListSingleUI>__);
            if ((uVar12 & 1) == 0) {
              in_stack_00000060 = lVar16;
              in_stack_00000068 = uVar15;
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar12 = FUN_046fc8ac(&stack0x00000060,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponents<CanvasGroup>__);
              if ((uVar12 & 1) != 0) {
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                uVar12 = FUN_04d968ac(lVar7,uVar6 & 0xffffffff,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponents<Mask>__);
                if ((uVar12 & 1) == 0) {
                  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                               Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                             );
                  FUN_04e56274(uVar13,*(undefined8 *)
                                       Method_UnityEngine_Component_GetComponentsInChildren<Image>__
                              );
                  FUN_04d966b8(lVar7,uVar6 & 0xffffffff,uVar13,
                               *(undefined8 *)
                                Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
                }
                lVar14 = FUN_04d96618(lVar7,uVar6 & 0xffffffff,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                     );
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                FUN_04e56ff0(lVar14,uVar11,lVar16,uVar15,*(undefined8 *)puVar4);
              }
            }
            else {
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar12 = FUN_04d968ac(lVar8,uVar6 & 0xffffffff,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponents<Mask>__);
              if ((uVar12 & 1) == 0) {
                uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                             Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                           );
                FUN_04e56274(uVar13,*(undefined8 *)
                                     Method_UnityEngine_Component_GetComponentsInChildren<Image>__);
                FUN_04d966b8(lVar8,uVar6 & 0xffffffff,uVar13,
                             *(undefined8 *)
                              Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
              }
              lVar14 = FUN_04d96618(lVar8,uVar6 & 0xffffffff,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                   );
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_04e56ff0(lVar14,uVar11,lVar16,uVar15,*(undefined8 *)puVar4);
            }
          }
          else {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar12 = FUN_04d968ac(lVar9,uVar6 & 0xffffffff,
                                  *(undefined8 *)Method_UnityEngine_Component_GetComponents<Mask>__)
            ;
            if ((uVar12 & 1) == 0) {
              uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                           Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                         );
              FUN_04e56274(uVar13,*(undefined8 *)
                                   Method_UnityEngine_Component_GetComponentsInChildren<Image>__);
              FUN_04d966b8(lVar9,uVar6 & 0xffffffff,uVar13,
                           *(undefined8 *)
                            Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
            }
            lVar14 = FUN_04d96618(lVar9,uVar6 & 0xffffffff,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                 );
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_04e56ff0(lVar14,uVar11,lVar16,uVar15,*(undefined8 *)puVar4);
          }
        }
        FUN_052288b4(&stack0x00000070,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRSkeleton>__);
      }
    }
    FUN_0520e9a0(in_stack_00000058,
                 *(undefined8 *)
                  Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__)
    ;
    puVar1 = Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifierVolume>__;
    if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(lVar16);
    }
    if (lVar7 != 0) {
      iVar5 = FUN_04d96350(lVar7,*(undefined8 *)
                                  Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifierVolume>__
                          );
      if ((0 < iVar5) && (lVar16 = *(long *)(in_stack_00000010 + 0x40), lVar16 != 0)) {
        (**(code **)(lVar16 + 0x18))
                  (*(undefined8 *)(lVar16 + 0x40),lVar7,*(undefined8 *)(lVar16 + 0x28));
      }
      if (lVar8 != 0) {
        iVar5 = FUN_04d96350(lVar8,*(undefined8 *)puVar1);
        if ((0 < iVar5) && (lVar7 = *(long *)(in_stack_00000010 + 0x48), lVar7 != 0)) {
          (**(code **)(lVar7 + 0x18))
                    (*(undefined8 *)(lVar7 + 0x40),lVar8,*(undefined8 *)(lVar7 + 0x28));
        }
        if (lVar9 != 0) {
          iVar5 = FUN_04d96350(lVar9,*(undefined8 *)puVar1);
          if (iVar5 < 1) {
            return;
          }
          lVar7 = *(long *)(in_stack_00000010 + 0x50);
          if (lVar7 == 0) {
            return;
          }
          pcVar17 = *(code **)(lVar7 + 0x18);
          uVar15 = *(undefined8 *)(lVar7 + 0x40);
LAB_06044e10:
          (*pcVar17)(uVar15,lVar9,*(undefined8 *)(lVar7 + 0x28));
          return;
        }
      }
    }
  }
LAB_06044e54:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


