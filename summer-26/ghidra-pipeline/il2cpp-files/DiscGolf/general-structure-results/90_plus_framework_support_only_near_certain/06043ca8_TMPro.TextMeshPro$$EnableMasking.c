/*
FUNCTION_NAME: TMPro.TextMeshPro$$EnableMasking
ENTRY_POINT: 06043ca8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06044c70) */
/* WARNING: Removing unreachable block (ram,0x06044c74) */
/* WARNING: Removing unreachable block (ram,0x06044e4c) */
/* WARNING: Removing unreachable block (ram,0x06044d6c) */

void TMPro_TextMeshPro__EnableMasking(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  long lVar16;
  long lVar17;
  long in_x9;
  ulong uVar18;
  code *pcVar19;
  int *piVar20;
  long lVar21;
  long *unaff_x20;
  long unaff_x23;
  long *unaff_x25;
  undefined1 auVar22 [16];
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
  
  piVar20 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar20 + -2) == param_3) {
      puVar9 = (undefined8 *)(param_1 + (long)(*piVar20 + 8) * 0x10 + 0x138);
      goto LAB_06043ce8;
    }
    in_x9 = in_x9 + -1;
    piVar20 = piVar20 + 4;
  } while (in_x9 != 0);
  puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06043ce8:
  (*(code *)*puVar9)();
  if (((extraout_x1 & 0xff00) != 0) && (lVar21 = *(long *)(unaff_x23 + 0x20), lVar21 != 0)) {
    lVar16 = *unaff_x20;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar20 + 8) * 0x10 + 0x138);
          goto LAB_06043d54;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06043d54:
    uVar10 = (*(code *)*puVar9)();
    (**(code **)(lVar21 + 0x18))
              (*(undefined8 *)(lVar21 + 0x40),uVar10,*(undefined8 *)(lVar21 + 0x28));
  }
  puVar2 = Method_UnityEngine_Component_GetComponent<MtreeBezier>__;
  lVar21 = *unaff_x20;
  uVar18 = (ulong)*(ushort *)(lVar21 + 0x12e);
  if (uVar18 != 0) {
    piVar20 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *unaff_x25) {
        puVar9 = (undefined8 *)(lVar21 + (long)(*piVar20 + 7) * 0x10 + 0x138);
        goto LAB_06043dd0;
      }
      uVar18 = uVar18 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar18 != 0);
  }
  puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06043dd0:
  puVar4 = Method_UnityEngine_Component_GetComponents<IInteractionCaster>__;
  _in_stack_00000100 = (*(code *)*puVar9)();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar18 = FUN_046fc988(&stack0x00000100,*(undefined8 *)puVar4);
  if ((uVar18 & 1) == 0) {
    lVar21 = *unaff_x20;
    uVar18 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar21 + (long)(*piVar20 + 7) * 0x10 + 0x138);
          goto LAB_06043e60;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06043e60:
    auVar22 = (*(code *)*puVar9)();
    _in_stack_00000100 = auVar22;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar18 = FUN_046fc8ac(&stack0x00000100,
                          *(undefined8 *)Method_UnityEngine_Component_GetComponent<LayoutGroup>__);
    if ((uVar18 & 1) != 0) goto LAB_06043f28;
    lVar21 = *unaff_x20;
    uVar18 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar21 + (long)(*piVar20 + 7) * 0x10 + 0x138);
          goto LAB_06043eec;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06043eec:
    auVar22 = (*(code *)*puVar9)();
    _in_stack_00000100 = auVar22;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar18 = FUN_046fc830(&stack0x00000100,
                          *(undefined8 *)Method_UnityEngine_Component_GetComponent<Light>__);
    if ((uVar18 & 1) != 0) goto LAB_06043f28;
  }
  else {
LAB_06043f28:
    puVar5 = Method_UnityEngine_Component_GetComponentsInChildren<OvrAvatarEntity>__;
    puVar3 = Method_UnityEngine_Component_GetComponents<Renderer>__;
    lVar21 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_Component_GetComponentsInChildren<OvrAvatarEntity>__
                               );
    FUN_04e56274(lVar21,*(undefined8 *)puVar3);
    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
    FUN_04e56274(lVar16,*(undefined8 *)puVar3);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
    FUN_04e56274(lVar11,*(undefined8 *)puVar3);
    lVar17 = *unaff_x20;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 7) * 0x10 + 0x138);
          goto LAB_06043fc4;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06043fc4:
    auVar22 = (*(code *)*puVar9)();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      _in_stack_00000100 = auVar22;
      thunk_FUN_02df485c(*(long *)puVar2);
      auVar22 = _in_stack_00000100;
    }
    if (auVar22._0_8_ == 0) {
      lVar21 = *(long *)(unaff_x23 + 0x30);
      if (lVar21 == 0) {
        return;
      }
      pcVar19 = *(code **)(lVar21 + 0x18);
      uVar10 = *(undefined8 *)(lVar21 + 0x40);
      lVar16 = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar22._8_8_;
      _in_stack_00000100 = auVar1 << 0x40;
      goto LAB_06044e10;
    }
    lVar17 = *unaff_x20;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 7) * 0x10 + 0x138);
          goto LAB_0604405c;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    _in_stack_00000100 = auVar22;
    puVar9 = (undefined8 *)FUN_02dd004c();
    auVar22 = _in_stack_00000100;
LAB_0604405c:
    _in_stack_00000100 = auVar22;
    auVar22 = (*(code *)*puVar9)();
    _in_stack_00000100 = auVar22;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar2);
    }
    if (in_stack_00000100 == 0) goto LAB_06044e54;
    lVar17 = FUN_04e56cb4(in_stack_00000100,
                          *(undefined8 *)
                           Method_UnityEngine_Component_GetComponentsInChildren<OVRHand>__);
    puVar7 = Method_UnityEngine_Component_GetComponentsInChildren<Renderer>__;
    puVar6 = Method_UnityEngine_Component_GetComponentsInChildren<NetworkObject>__;
    puVar5 = Method_UnityEngine_Component_GetComponents<Component>__;
    puVar3 = Method_UnityEngine_Component_GetComponent<MultiplayerScoreManager>__;
    if (lVar17 == 0) goto LAB_06044e54;
    FUN_03e12118(&stack0x00000020,lVar17,
                 *(undefined8 *)Method_UnityEngine_Component_GetComponentsInChildren<Transform>__);
    in_stack_000000f0 = in_stack_00000030;
    in_stack_000000e8 = in_stack_00000028;
    in_stack_000000e0 = in_stack_00000020;
    in_stack_00000020 = 0;
    in_stack_00000028 = &stack0x000000e0;
    while( true ) {
      uVar12 = FUN_05228c88(&stack0x000000e0,*(undefined8 *)puVar7);
      uVar18 = in_stack_000000f0;
      if ((uVar12 & 1) == 0) break;
      lVar17 = *unaff_x20;
      uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar12 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x25) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 7) * 0x10 + 0x138);
            goto LAB_06044150;
          }
          uVar12 = uVar12 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06044150:
      auVar22 = (*(code *)*puVar9)();
      _in_stack_00000100 = auVar22;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar2);
      }
      uVar12 = FUN_046fc988(&stack0x00000100,*(undefined8 *)puVar4);
      if ((uVar12 & 1) == 0) {
        lVar17 = *unaff_x20;
        uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar12 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x25) {
              puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 7) * 0x10 + 0x138);
              goto LAB_060441d4;
            }
            uVar12 = uVar12 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02dd004c();
LAB_060441d4:
        auVar22 = (*(code *)*puVar9)();
        _in_stack_00000100 = auVar22;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar2);
        }
        if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        auVar22 = FUN_04e56f6c(in_stack_00000100,uVar18,*(undefined8 *)puVar6);
        _in_stack_000000d0 = auVar22;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar3);
        }
        uVar12 = FUN_046fc988(&stack0x000000d0,
                              *(undefined8 *)
                               Method_UnityEngine_Component_GetComponents<AvatarLODParent>__);
        if ((uVar12 & 1) != 0) goto LAB_0604423c;
        lVar17 = *unaff_x20;
        uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar12 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x25) {
              puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 7) * 0x10 + 0x138);
              goto LAB_06044334;
            }
            uVar12 = uVar12 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06044334:
        auVar22 = (*(code *)*puVar9)();
        _in_stack_00000100 = auVar22;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar2);
        }
        uVar12 = FUN_046fc830(&stack0x00000100,
                              *(undefined8 *)Method_UnityEngine_Component_GetComponent<Light>__);
        if ((uVar12 & 1) == 0) {
          lVar17 = *unaff_x20;
          uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar12 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *unaff_x25) {
                puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 7) * 0x10 + 0x138);
                goto LAB_060443c0;
              }
              uVar12 = uVar12 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)FUN_02dd004c();
LAB_060443c0:
          auVar22 = (*(code *)*puVar9)();
          _in_stack_00000100 = auVar22;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar2);
          }
          if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          auVar22 = FUN_04e56f6c(in_stack_00000100,uVar18,*(undefined8 *)puVar6);
          _in_stack_000000d0 = auVar22;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar3);
          }
          uVar12 = FUN_046fc830(&stack0x000000d0,
                                *(undefined8 *)
                                 Method_UnityEngine_Component_GetComponent<LobbyPlayerSingleUI>__);
          if ((uVar12 & 1) != 0) goto LAB_06044428;
          lVar17 = *unaff_x20;
          uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar12 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *unaff_x25) {
                puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 7) * 0x10 + 0x138);
                goto LAB_06044520;
              }
              uVar12 = uVar12 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06044520:
          auVar22 = (*(code *)*puVar9)();
          _in_stack_00000100 = auVar22;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar2);
          }
          uVar12 = FUN_046fc8ac(&stack0x00000100,
                                *(undefined8 *)
                                 Method_UnityEngine_Component_GetComponent<LayoutGroup>__);
          if ((uVar12 & 1) != 0) {
            lVar17 = *unaff_x20;
            uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar12 != 0) {
              piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *unaff_x25) {
                  puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 7) * 0x10 + 0x138);
                  goto LAB_060445ac;
                }
                uVar12 = uVar12 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)FUN_02dd004c();
LAB_060445ac:
            auVar22 = (*(code *)*puVar9)();
            _in_stack_00000100 = auVar22;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)puVar2);
            }
            if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            auVar22 = FUN_04e56f6c(in_stack_00000100,uVar18,*(undefined8 *)puVar6);
            _in_stack_000000d0 = auVar22;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)puVar3);
            }
            uVar12 = FUN_046fc8ac(&stack0x000000d0,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponents<BaseInputModule>__);
            if ((uVar12 & 1) != 0) {
              lVar17 = *unaff_x20;
              uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar12 != 0) {
                piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *unaff_x25) {
                    puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 7) * 0x10 + 0x138);
                    goto LAB_06044664;
                  }
                  uVar12 = uVar12 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar12 != 0);
              }
              puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06044664:
              auVar22 = (*(code *)*puVar9)();
              _in_stack_00000100 = auVar22;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02df485c(*(long *)puVar2);
              }
              if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              auVar22 = FUN_04e56f6c(in_stack_00000100,uVar18,*(undefined8 *)puVar6);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860(0,auVar22._8_8_,auVar22._0_8_);
              }
              FUN_04e56ff0(lVar21,uVar18,auVar22._0_8_,auVar22._8_8_,*(undefined8 *)puVar5);
            }
          }
        }
        else {
LAB_06044428:
          lVar17 = *unaff_x20;
          uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar12 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *unaff_x25) {
                puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 7) * 0x10 + 0x138);
                goto LAB_060444b8;
              }
              uVar12 = uVar12 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)FUN_02dd004c();
LAB_060444b8:
          auVar22 = (*(code *)*puVar9)();
          _in_stack_00000100 = auVar22;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar2);
          }
          if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          auVar22 = FUN_04e56f6c(in_stack_00000100,uVar18,*(undefined8 *)puVar6);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_04e56ff0(lVar16,uVar18,auVar22._0_8_,auVar22._8_8_,*(undefined8 *)puVar5);
        }
      }
      else {
LAB_0604423c:
        lVar17 = *unaff_x20;
        uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar12 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x25) {
              puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 7) * 0x10 + 0x138);
              goto LAB_060442cc;
            }
            uVar12 = uVar12 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02dd004c();
LAB_060442cc:
        auVar22 = (*(code *)*puVar9)();
        _in_stack_00000100 = auVar22;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar2);
        }
        if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        auVar22 = FUN_04e56f6c(in_stack_00000100,uVar18,*(undefined8 *)puVar6);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04e56ff0(lVar11,uVar18,auVar22._0_8_,auVar22._8_8_,*(undefined8 *)puVar5);
      }
    }
    FUN_05228c84(&stack0x000000e0,
                 *(undefined8 *)
                  Method_UnityEngine_Component_GetComponentsInChildren<RectTransform>__);
    puVar2 = Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifier>__;
    if (lVar21 == 0) goto LAB_06044e54;
    iVar8 = FUN_04e56ca4(lVar21,*(undefined8 *)
                                 Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifier>__
                        );
    if ((0 < iVar8) && (lVar17 = *(long *)(unaff_x23 + 0x28), lVar17 != 0)) {
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),lVar21,*(undefined8 *)(lVar17 + 0x28));
    }
    if (lVar16 == 0) goto LAB_06044e54;
    iVar8 = FUN_04e56ca4(lVar16,*(undefined8 *)puVar2);
    if ((0 < iVar8) && (lVar21 = *(long *)(unaff_x23 + 0x30), lVar21 != 0)) {
      (**(code **)(lVar21 + 0x18))
                (*(undefined8 *)(lVar21 + 0x40),lVar16,*(undefined8 *)(lVar21 + 0x28));
    }
    if (lVar11 == 0) goto LAB_06044e54;
    iVar8 = FUN_04e56ca4(lVar11,*(undefined8 *)puVar2);
    if ((0 < iVar8) && (lVar21 = *(long *)(unaff_x23 + 0x38), lVar21 != 0)) {
      (**(code **)(lVar21 + 0x18))
                (*(undefined8 *)(lVar21 + 0x40),lVar11,*(undefined8 *)(lVar21 + 0x28));
    }
  }
  lVar21 = *unaff_x20;
  uVar18 = (ulong)*(ushort *)(lVar21 + 0x12e);
  if (uVar18 != 0) {
    piVar20 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *unaff_x25) {
        puVar9 = (undefined8 *)(lVar21 + (long)(*piVar20 + 10) * 0x10 + 0x138);
        goto LAB_060447c8;
      }
      uVar18 = uVar18 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar18 != 0);
  }
  puVar9 = (undefined8 *)FUN_02dd004c();
LAB_060447c8:
  (*(code *)*puVar9)();
  if ((extraout_x1_00 & 0xff00) == 0) {
    lVar21 = *unaff_x20;
    uVar18 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar21 + (long)(*piVar20 + 10) * 0x10 + 0x138);
          goto LAB_0604482c;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar9 = (undefined8 *)FUN_02dd004c();
LAB_0604482c:
    (*(code *)*puVar9)();
    if ((extraout_x1_01 & 0xff) == 0) {
      return;
    }
  }
  puVar4 = Method_UnityEngine_Component_GetComponentsInChildren<RawImage>__;
  puVar2 = Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__;
  lVar21 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_UnityEngine_Component_GetComponentsInChildren<RawImage>__);
  FUN_04d95918(lVar21,*(undefined8 *)puVar2);
  lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_04d95918(lVar11,*(undefined8 *)puVar2);
  lVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_04d95918(lVar16,*(undefined8 *)puVar2);
  lVar17 = *unaff_x20;
  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar18 != 0) {
    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *unaff_x25) {
        puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 10) * 0x10 + 0x138);
        goto LAB_060448dc;
      }
      uVar18 = uVar18 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar18 != 0);
  }
  puVar9 = (undefined8 *)FUN_02dd004c();
LAB_060448dc:
  lVar17 = (*(code *)*puVar9)();
  puVar5 = Method_UnityEngine_Component_GetComponents<Collider>__;
  puVar3 = Method_UnityEngine_Component_GetComponents<MonoBehaviour>__;
  puVar4 = Method_UnityEngine_Component_GetComponent<OvrAvatarHandJointType>__;
  puVar9 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OvrAvatarEntity>__;
  puVar2 = Method_UnityEngine_Component_GetComponent<MonoBehaviour>__;
  if (lVar17 != 0) {
    FUN_04d96af4(&stack0x00000020,lVar17,
                 *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRManager>__);
    in_stack_000000c0 = in_stack_00000040;
    in_stack_00000058 = &stack0x000000a0;
    in_stack_000000a8 = in_stack_00000028;
    in_stack_000000a0 = in_stack_00000020;
    in_stack_000000b8 = in_stack_00000038;
    in_stack_000000b0 = in_stack_00000030;
    in_stack_00000050 = 0;
    while( true ) {
      uVar12 = FUN_0520e87c(&stack0x000000a0,*puVar9);
      lVar15 = in_stack_000000b8;
      uVar18 = in_stack_000000b0;
      lVar17 = in_stack_00000050;
      if ((uVar12 & 1) == 0) break;
      if (in_stack_000000b8 == 0) {
LAB_06044c1c:
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04d966b8(lVar11,uVar18 & 0xffffffff,0,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponents<IMaterialModifier>__)
        ;
      }
      else {
        lVar17 = *(long *)(in_stack_000000b8 + 0x38);
        if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NetworkObject>__ + 0xe4) ==
            0) {
          thunk_FUN_02df485c();
        }
        if (lVar17 == 0) goto LAB_06044c1c;
        lVar17 = *(long *)(lVar15 + 0x38);
        if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NetworkObject>__ + 0xe4) ==
            0) {
          thunk_FUN_02df485c();
        }
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04e57418(&stack0x00000020,lVar17,
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
          uVar13 = FUN_05228778(&stack0x00000070,*(undefined8 *)puVar4);
          uVar10 = in_stack_00000090;
          lVar17 = in_stack_00000088;
          uVar12 = in_stack_00000080;
          puVar9 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OvrAvatarEntity>__;
          if ((uVar13 & 1) == 0) break;
          in_stack_00000060 = in_stack_00000088;
          in_stack_00000068 = in_stack_00000090;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar13 = FUN_046fc988(&stack0x00000060,*(undefined8 *)puVar3);
          if ((uVar13 & 1) == 0) {
            in_stack_00000060 = lVar17;
            in_stack_00000068 = uVar10;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar13 = FUN_046fc830(&stack0x00000060,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponent<LobbyListSingleUI>__);
            if ((uVar13 & 1) == 0) {
              in_stack_00000060 = lVar17;
              in_stack_00000068 = uVar10;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar13 = FUN_046fc8ac(&stack0x00000060,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponents<CanvasGroup>__);
              if ((uVar13 & 1) != 0) {
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                uVar13 = FUN_04d968ac(lVar21,uVar18 & 0xffffffff,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponents<Mask>__);
                if ((uVar13 & 1) == 0) {
                  uVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                               Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                             );
                  FUN_04e56274(uVar14,*(undefined8 *)
                                       Method_UnityEngine_Component_GetComponentsInChildren<Image>__
                              );
                  FUN_04d966b8(lVar21,uVar18 & 0xffffffff,uVar14,
                               *(undefined8 *)
                                Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
                }
                lVar15 = FUN_04d96618(lVar21,uVar18 & 0xffffffff,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                     );
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                FUN_04e56ff0(lVar15,uVar12,lVar17,uVar10,*(undefined8 *)puVar5);
              }
            }
            else {
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar13 = FUN_04d968ac(lVar11,uVar18 & 0xffffffff,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponents<Mask>__);
              if ((uVar13 & 1) == 0) {
                uVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                             Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                           );
                FUN_04e56274(uVar14,*(undefined8 *)
                                     Method_UnityEngine_Component_GetComponentsInChildren<Image>__);
                FUN_04d966b8(lVar11,uVar18 & 0xffffffff,uVar14,
                             *(undefined8 *)
                              Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
              }
              lVar15 = FUN_04d96618(lVar11,uVar18 & 0xffffffff,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                   );
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_04e56ff0(lVar15,uVar12,lVar17,uVar10,*(undefined8 *)puVar5);
            }
          }
          else {
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar13 = FUN_04d968ac(lVar16,uVar18 & 0xffffffff,
                                  *(undefined8 *)Method_UnityEngine_Component_GetComponents<Mask>__)
            ;
            if ((uVar13 & 1) == 0) {
              uVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                           Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                         );
              FUN_04e56274(uVar14,*(undefined8 *)
                                   Method_UnityEngine_Component_GetComponentsInChildren<Image>__);
              FUN_04d966b8(lVar16,uVar18 & 0xffffffff,uVar14,
                           *(undefined8 *)
                            Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
            }
            lVar15 = FUN_04d96618(lVar16,uVar18 & 0xffffffff,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                 );
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_04e56ff0(lVar15,uVar12,lVar17,uVar10,*(undefined8 *)puVar5);
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
    puVar2 = Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifierVolume>__;
    if (lVar17 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(lVar17);
    }
    if (lVar21 != 0) {
      iVar8 = FUN_04d96350(lVar21,*(undefined8 *)
                                   Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifierVolume>__
                          );
      if ((0 < iVar8) && (lVar17 = *(long *)(unaff_x23 + 0x40), lVar17 != 0)) {
        (**(code **)(lVar17 + 0x18))
                  (*(undefined8 *)(lVar17 + 0x40),lVar21,*(undefined8 *)(lVar17 + 0x28));
      }
      if (lVar11 != 0) {
        iVar8 = FUN_04d96350(lVar11,*(undefined8 *)puVar2);
        if ((0 < iVar8) && (lVar21 = *(long *)(unaff_x23 + 0x48), lVar21 != 0)) {
          (**(code **)(lVar21 + 0x18))
                    (*(undefined8 *)(lVar21 + 0x40),lVar11,*(undefined8 *)(lVar21 + 0x28));
        }
        if (lVar16 != 0) {
          iVar8 = FUN_04d96350(lVar16,*(undefined8 *)puVar2);
          if (iVar8 < 1) {
            return;
          }
          lVar21 = *(long *)(unaff_x23 + 0x50);
          if (lVar21 == 0) {
            return;
          }
          pcVar19 = *(code **)(lVar21 + 0x18);
          uVar10 = *(undefined8 *)(lVar21 + 0x40);
LAB_06044e10:
          (*pcVar19)(uVar10,lVar16,*(undefined8 *)(lVar21 + 0x28));
          return;
        }
      }
    }
  }
LAB_06044e54:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


