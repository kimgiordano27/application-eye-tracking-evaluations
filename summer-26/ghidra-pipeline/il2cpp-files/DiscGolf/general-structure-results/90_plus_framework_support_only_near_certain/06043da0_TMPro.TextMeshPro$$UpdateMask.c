/*
FUNCTION_NAME: TMPro.TextMeshPro$$UpdateMask
ENTRY_POINT: 06043da0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06044c70) */
/* WARNING: Removing unreachable block (ram,0x06044c74) */
/* WARNING: Removing unreachable block (ram,0x06044e4c) */
/* WARNING: Removing unreachable block (ram,0x06044d6c) */

void TMPro_TextMeshPro__UpdateMask(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 in_ZR;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong extraout_x1;
  ulong extraout_x1_00;
  long lVar17;
  long lVar18;
  long in_x9;
  code *pcVar19;
  int *in_x10;
  int *piVar20;
  long *unaff_x20;
  long unaff_x23;
  long *unaff_x25;
  long *unaff_x27;
  undefined1 auVar21 [16];
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
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar8 = (undefined8 *)FUN_02dd004c();
      goto LAB_06043dd0;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar8 = (undefined8 *)(param_1 + (long)(*in_x10 + 7) * 0x10 + 0x138);
LAB_06043dd0:
  puVar2 = Method_UnityEngine_Component_GetComponents<IInteractionCaster>__;
  _in_stack_00000100 = (*(code *)*puVar8)();
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar9 = FUN_046fc988(&stack0x00000100,*(undefined8 *)puVar2);
  if ((uVar9 & 1) == 0) {
    lVar17 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar9 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x25) {
          puVar8 = (undefined8 *)(lVar17 + (long)(*piVar20 + 7) * 0x10 + 0x138);
          goto LAB_06043e60;
        }
        uVar9 = uVar9 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_02dd004c();
LAB_06043e60:
    auVar21 = (*(code *)*puVar8)();
    _in_stack_00000100 = auVar21;
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar9 = FUN_046fc8ac(&stack0x00000100,
                         *(undefined8 *)Method_UnityEngine_Component_GetComponent<LayoutGroup>__);
    if ((uVar9 & 1) != 0) goto LAB_06043f28;
    lVar17 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar9 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x25) {
          puVar8 = (undefined8 *)(lVar17 + (long)(*piVar20 + 7) * 0x10 + 0x138);
          goto LAB_06043eec;
        }
        uVar9 = uVar9 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_02dd004c();
LAB_06043eec:
    auVar21 = (*(code *)*puVar8)();
    _in_stack_00000100 = auVar21;
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar9 = FUN_046fc830(&stack0x00000100,
                         *(undefined8 *)Method_UnityEngine_Component_GetComponent<Light>__);
    if ((uVar9 & 1) != 0) goto LAB_06043f28;
  }
  else {
LAB_06043f28:
    puVar4 = Method_UnityEngine_Component_GetComponentsInChildren<OvrAvatarEntity>__;
    puVar3 = Method_UnityEngine_Component_GetComponents<Renderer>__;
    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_Component_GetComponentsInChildren<OvrAvatarEntity>__
                               );
    FUN_04e56274(lVar17,*(undefined8 *)puVar3);
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
    FUN_04e56274(lVar10,*(undefined8 *)puVar3);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
    FUN_04e56274(lVar11,*(undefined8 *)puVar3);
    lVar18 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar9 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x25) {
          puVar8 = (undefined8 *)(lVar18 + (long)(*piVar20 + 7) * 0x10 + 0x138);
          goto LAB_06043fc4;
        }
        uVar9 = uVar9 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_02dd004c();
LAB_06043fc4:
    auVar21 = (*(code *)*puVar8)();
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      _in_stack_00000100 = auVar21;
      thunk_FUN_02df485c(*unaff_x27);
      auVar21 = _in_stack_00000100;
    }
    if (auVar21._0_8_ == 0) {
      lVar17 = *(long *)(unaff_x23 + 0x30);
      if (lVar17 == 0) {
        return;
      }
      pcVar19 = *(code **)(lVar17 + 0x18);
      uVar16 = *(undefined8 *)(lVar17 + 0x40);
      lVar10 = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar21._8_8_;
      _in_stack_00000100 = auVar1 << 0x40;
      goto LAB_06044e10;
    }
    lVar18 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar9 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x25) {
          puVar8 = (undefined8 *)(lVar18 + (long)(*piVar20 + 7) * 0x10 + 0x138);
          goto LAB_0604405c;
        }
        uVar9 = uVar9 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar9 != 0);
    }
    _in_stack_00000100 = auVar21;
    puVar8 = (undefined8 *)FUN_02dd004c();
    auVar21 = _in_stack_00000100;
LAB_0604405c:
    _in_stack_00000100 = auVar21;
    auVar21 = (*(code *)*puVar8)();
    _in_stack_00000100 = auVar21;
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02df485c(*unaff_x27);
    }
    if (in_stack_00000100 == 0) goto LAB_06044e54;
    lVar18 = FUN_04e56cb4(in_stack_00000100,
                          *(undefined8 *)
                           Method_UnityEngine_Component_GetComponentsInChildren<OVRHand>__);
    puVar6 = Method_UnityEngine_Component_GetComponentsInChildren<Renderer>__;
    puVar5 = Method_UnityEngine_Component_GetComponentsInChildren<NetworkObject>__;
    puVar4 = Method_UnityEngine_Component_GetComponents<Component>__;
    puVar3 = Method_UnityEngine_Component_GetComponent<MultiplayerScoreManager>__;
    if (lVar18 == 0) goto LAB_06044e54;
    FUN_03e12118(&stack0x00000020,lVar18,
                 *(undefined8 *)Method_UnityEngine_Component_GetComponentsInChildren<Transform>__);
    in_stack_000000f0 = in_stack_00000030;
    in_stack_000000e8 = in_stack_00000028;
    in_stack_000000e0 = in_stack_00000020;
    in_stack_00000020 = 0;
    in_stack_00000028 = &stack0x000000e0;
    while( true ) {
      uVar12 = FUN_05228c88(&stack0x000000e0,*(undefined8 *)puVar6);
      uVar9 = in_stack_000000f0;
      if ((uVar12 & 1) == 0) break;
      lVar18 = *unaff_x20;
      uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar12 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x25) {
            puVar8 = (undefined8 *)(lVar18 + (long)(*piVar20 + 7) * 0x10 + 0x138);
            goto LAB_06044150;
          }
          uVar12 = uVar12 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_02dd004c();
LAB_06044150:
      auVar21 = (*(code *)*puVar8)();
      _in_stack_00000100 = auVar21;
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x27);
      }
      uVar12 = FUN_046fc988(&stack0x00000100,*(undefined8 *)puVar2);
      if ((uVar12 & 1) == 0) {
        lVar18 = *unaff_x20;
        uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar12 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x25) {
              puVar8 = (undefined8 *)(lVar18 + (long)(*piVar20 + 7) * 0x10 + 0x138);
              goto LAB_060441d4;
            }
            uVar12 = uVar12 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_02dd004c();
LAB_060441d4:
        auVar21 = (*(code *)*puVar8)();
        _in_stack_00000100 = auVar21;
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02df485c(*unaff_x27);
        }
        if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        auVar21 = FUN_04e56f6c(in_stack_00000100,uVar9,*(undefined8 *)puVar5);
        _in_stack_000000d0 = auVar21;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar3);
        }
        uVar12 = FUN_046fc988(&stack0x000000d0,
                              *(undefined8 *)
                               Method_UnityEngine_Component_GetComponents<AvatarLODParent>__);
        if ((uVar12 & 1) != 0) goto LAB_0604423c;
        lVar18 = *unaff_x20;
        uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar12 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x25) {
              puVar8 = (undefined8 *)(lVar18 + (long)(*piVar20 + 7) * 0x10 + 0x138);
              goto LAB_06044334;
            }
            uVar12 = uVar12 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_02dd004c();
LAB_06044334:
        auVar21 = (*(code *)*puVar8)();
        _in_stack_00000100 = auVar21;
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02df485c(*unaff_x27);
        }
        uVar12 = FUN_046fc830(&stack0x00000100,
                              *(undefined8 *)Method_UnityEngine_Component_GetComponent<Light>__);
        if ((uVar12 & 1) == 0) {
          lVar18 = *unaff_x20;
          uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar12 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *unaff_x25) {
                puVar8 = (undefined8 *)(lVar18 + (long)(*piVar20 + 7) * 0x10 + 0x138);
                goto LAB_060443c0;
              }
              uVar12 = uVar12 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_02dd004c();
LAB_060443c0:
          auVar21 = (*(code *)*puVar8)();
          _in_stack_00000100 = auVar21;
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_02df485c(*unaff_x27);
          }
          if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          auVar21 = FUN_04e56f6c(in_stack_00000100,uVar9,*(undefined8 *)puVar5);
          _in_stack_000000d0 = auVar21;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar3);
          }
          uVar12 = FUN_046fc830(&stack0x000000d0,
                                *(undefined8 *)
                                 Method_UnityEngine_Component_GetComponent<LobbyPlayerSingleUI>__);
          if ((uVar12 & 1) != 0) goto LAB_06044428;
          lVar18 = *unaff_x20;
          uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar12 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *unaff_x25) {
                puVar8 = (undefined8 *)(lVar18 + (long)(*piVar20 + 7) * 0x10 + 0x138);
                goto LAB_06044520;
              }
              uVar12 = uVar12 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_02dd004c();
LAB_06044520:
          auVar21 = (*(code *)*puVar8)();
          _in_stack_00000100 = auVar21;
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_02df485c(*unaff_x27);
          }
          uVar12 = FUN_046fc8ac(&stack0x00000100,
                                *(undefined8 *)
                                 Method_UnityEngine_Component_GetComponent<LayoutGroup>__);
          if ((uVar12 & 1) != 0) {
            lVar18 = *unaff_x20;
            uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar12 != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *unaff_x25) {
                  puVar8 = (undefined8 *)(lVar18 + (long)(*piVar20 + 7) * 0x10 + 0x138);
                  goto LAB_060445ac;
                }
                uVar12 = uVar12 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_02dd004c();
LAB_060445ac:
            auVar21 = (*(code *)*puVar8)();
            _in_stack_00000100 = auVar21;
            if (*(int *)(*unaff_x27 + 0xe4) == 0) {
              thunk_FUN_02df485c(*unaff_x27);
            }
            if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            auVar21 = FUN_04e56f6c(in_stack_00000100,uVar9,*(undefined8 *)puVar5);
            _in_stack_000000d0 = auVar21;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)puVar3);
            }
            uVar12 = FUN_046fc8ac(&stack0x000000d0,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponents<BaseInputModule>__);
            if ((uVar12 & 1) != 0) {
              lVar18 = *unaff_x20;
              uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar12 != 0) {
                piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *unaff_x25) {
                    puVar8 = (undefined8 *)(lVar18 + (long)(*piVar20 + 7) * 0x10 + 0x138);
                    goto LAB_06044664;
                  }
                  uVar12 = uVar12 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_02dd004c();
LAB_06044664:
              auVar21 = (*(code *)*puVar8)();
              _in_stack_00000100 = auVar21;
              if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                thunk_FUN_02df485c(*unaff_x27);
              }
              if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              auVar21 = FUN_04e56f6c(in_stack_00000100,uVar9,*(undefined8 *)puVar5);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860(0,auVar21._8_8_,auVar21._0_8_);
              }
              FUN_04e56ff0(lVar17,uVar9,auVar21._0_8_,auVar21._8_8_,*(undefined8 *)puVar4);
            }
          }
        }
        else {
LAB_06044428:
          lVar18 = *unaff_x20;
          uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar12 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *unaff_x25) {
                puVar8 = (undefined8 *)(lVar18 + (long)(*piVar20 + 7) * 0x10 + 0x138);
                goto LAB_060444b8;
              }
              uVar12 = uVar12 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_02dd004c();
LAB_060444b8:
          auVar21 = (*(code *)*puVar8)();
          _in_stack_00000100 = auVar21;
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_02df485c(*unaff_x27);
          }
          if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          auVar21 = FUN_04e56f6c(in_stack_00000100,uVar9,*(undefined8 *)puVar5);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_04e56ff0(lVar10,uVar9,auVar21._0_8_,auVar21._8_8_,*(undefined8 *)puVar4);
        }
      }
      else {
LAB_0604423c:
        lVar18 = *unaff_x20;
        uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar12 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x25) {
              puVar8 = (undefined8 *)(lVar18 + (long)(*piVar20 + 7) * 0x10 + 0x138);
              goto LAB_060442cc;
            }
            uVar12 = uVar12 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_02dd004c();
LAB_060442cc:
        auVar21 = (*(code *)*puVar8)();
        _in_stack_00000100 = auVar21;
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02df485c(*unaff_x27);
        }
        if (in_stack_00000100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        auVar21 = FUN_04e56f6c(in_stack_00000100,uVar9,*(undefined8 *)puVar5);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04e56ff0(lVar11,uVar9,auVar21._0_8_,auVar21._8_8_,*(undefined8 *)puVar4);
      }
    }
    FUN_05228c84(&stack0x000000e0,
                 *(undefined8 *)
                  Method_UnityEngine_Component_GetComponentsInChildren<RectTransform>__);
    puVar2 = Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifier>__;
    if (lVar17 == 0) goto LAB_06044e54;
    iVar7 = FUN_04e56ca4(lVar17,*(undefined8 *)
                                 Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifier>__
                        );
    if ((0 < iVar7) && (lVar18 = *(long *)(unaff_x23 + 0x28), lVar18 != 0)) {
      (**(code **)(lVar18 + 0x18))
                (*(undefined8 *)(lVar18 + 0x40),lVar17,*(undefined8 *)(lVar18 + 0x28));
    }
    if (lVar10 == 0) goto LAB_06044e54;
    iVar7 = FUN_04e56ca4(lVar10,*(undefined8 *)puVar2);
    if ((0 < iVar7) && (lVar17 = *(long *)(unaff_x23 + 0x30), lVar17 != 0)) {
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),lVar10,*(undefined8 *)(lVar17 + 0x28));
    }
    if (lVar11 == 0) goto LAB_06044e54;
    iVar7 = FUN_04e56ca4(lVar11,*(undefined8 *)puVar2);
    if ((0 < iVar7) && (lVar17 = *(long *)(unaff_x23 + 0x38), lVar17 != 0)) {
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),lVar11,*(undefined8 *)(lVar17 + 0x28));
    }
  }
  lVar17 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar9 != 0) {
    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *unaff_x25) {
        puVar8 = (undefined8 *)(lVar17 + (long)(*piVar20 + 10) * 0x10 + 0x138);
        goto LAB_060447c8;
      }
      uVar9 = uVar9 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_02dd004c();
LAB_060447c8:
  (*(code *)*puVar8)();
  if ((extraout_x1 & 0xff00) == 0) {
    lVar17 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar9 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x25) {
          puVar8 = (undefined8 *)(lVar17 + (long)(*piVar20 + 10) * 0x10 + 0x138);
          goto LAB_0604482c;
        }
        uVar9 = uVar9 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_02dd004c();
LAB_0604482c:
    (*(code *)*puVar8)();
    if ((extraout_x1_00 & 0xff) == 0) {
      return;
    }
  }
  puVar3 = Method_UnityEngine_Component_GetComponentsInChildren<RawImage>__;
  puVar2 = Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__;
  lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_UnityEngine_Component_GetComponentsInChildren<RawImage>__);
  FUN_04d95918(lVar17,*(undefined8 *)puVar2);
  lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_04d95918(lVar11,*(undefined8 *)puVar2);
  lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_04d95918(lVar10,*(undefined8 *)puVar2);
  lVar18 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar9 != 0) {
    piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *unaff_x25) {
        puVar8 = (undefined8 *)(lVar18 + (long)(*piVar20 + 10) * 0x10 + 0x138);
        goto LAB_060448dc;
      }
      uVar9 = uVar9 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_02dd004c();
LAB_060448dc:
  lVar18 = (*(code *)*puVar8)();
  puVar5 = Method_UnityEngine_Component_GetComponents<Collider>__;
  puVar4 = Method_UnityEngine_Component_GetComponents<MonoBehaviour>__;
  puVar3 = Method_UnityEngine_Component_GetComponent<OvrAvatarHandJointType>__;
  puVar8 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OvrAvatarEntity>__;
  puVar2 = Method_UnityEngine_Component_GetComponent<MonoBehaviour>__;
  if (lVar18 != 0) {
    FUN_04d96af4(&stack0x00000020,lVar18,
                 *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRManager>__);
    in_stack_000000c0 = in_stack_00000040;
    in_stack_00000058 = &stack0x000000a0;
    in_stack_000000a8 = in_stack_00000028;
    in_stack_000000a0 = in_stack_00000020;
    in_stack_000000b8 = in_stack_00000038;
    in_stack_000000b0 = in_stack_00000030;
    in_stack_00000050 = 0;
    while( true ) {
      uVar12 = FUN_0520e87c(&stack0x000000a0,*puVar8);
      lVar15 = in_stack_000000b8;
      uVar9 = in_stack_000000b0;
      lVar18 = in_stack_00000050;
      if ((uVar12 & 1) == 0) break;
      if (in_stack_000000b8 == 0) {
LAB_06044c1c:
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04d966b8(lVar11,uVar9 & 0xffffffff,0,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponents<IMaterialModifier>__)
        ;
      }
      else {
        lVar18 = *(long *)(in_stack_000000b8 + 0x38);
        if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NetworkObject>__ + 0xe4) ==
            0) {
          thunk_FUN_02df485c();
        }
        if (lVar18 == 0) goto LAB_06044c1c;
        lVar18 = *(long *)(lVar15 + 0x38);
        if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NetworkObject>__ + 0xe4) ==
            0) {
          thunk_FUN_02df485c();
        }
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04e57418(&stack0x00000020,lVar18,
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
          uVar13 = FUN_05228778(&stack0x00000070,*(undefined8 *)puVar3);
          uVar16 = in_stack_00000090;
          lVar18 = in_stack_00000088;
          uVar12 = in_stack_00000080;
          puVar8 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OvrAvatarEntity>__;
          if ((uVar13 & 1) == 0) break;
          in_stack_00000060 = in_stack_00000088;
          in_stack_00000068 = in_stack_00000090;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar13 = FUN_046fc988(&stack0x00000060,*(undefined8 *)puVar4);
          if ((uVar13 & 1) == 0) {
            in_stack_00000060 = lVar18;
            in_stack_00000068 = uVar16;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar13 = FUN_046fc830(&stack0x00000060,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponent<LobbyListSingleUI>__);
            if ((uVar13 & 1) == 0) {
              in_stack_00000060 = lVar18;
              in_stack_00000068 = uVar16;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar13 = FUN_046fc8ac(&stack0x00000060,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponents<CanvasGroup>__);
              if ((uVar13 & 1) != 0) {
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                uVar13 = FUN_04d968ac(lVar17,uVar9 & 0xffffffff,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponents<Mask>__);
                if ((uVar13 & 1) == 0) {
                  uVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                               Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                             );
                  FUN_04e56274(uVar14,*(undefined8 *)
                                       Method_UnityEngine_Component_GetComponentsInChildren<Image>__
                              );
                  FUN_04d966b8(lVar17,uVar9 & 0xffffffff,uVar14,
                               *(undefined8 *)
                                Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
                }
                lVar15 = FUN_04d96618(lVar17,uVar9 & 0xffffffff,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                     );
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                FUN_04e56ff0(lVar15,uVar12,lVar18,uVar16,*(undefined8 *)puVar5);
              }
            }
            else {
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar13 = FUN_04d968ac(lVar11,uVar9 & 0xffffffff,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponents<Mask>__);
              if ((uVar13 & 1) == 0) {
                uVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                             Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                           );
                FUN_04e56274(uVar14,*(undefined8 *)
                                     Method_UnityEngine_Component_GetComponentsInChildren<Image>__);
                FUN_04d966b8(lVar11,uVar9 & 0xffffffff,uVar14,
                             *(undefined8 *)
                              Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
              }
              lVar15 = FUN_04d96618(lVar11,uVar9 & 0xffffffff,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                   );
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_04e56ff0(lVar15,uVar12,lVar18,uVar16,*(undefined8 *)puVar5);
            }
          }
          else {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar13 = FUN_04d968ac(lVar10,uVar9 & 0xffffffff,
                                  *(undefined8 *)Method_UnityEngine_Component_GetComponents<Mask>__)
            ;
            if ((uVar13 & 1) == 0) {
              uVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                           Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                         );
              FUN_04e56274(uVar14,*(undefined8 *)
                                   Method_UnityEngine_Component_GetComponentsInChildren<Image>__);
              FUN_04d966b8(lVar10,uVar9 & 0xffffffff,uVar14,
                           *(undefined8 *)
                            Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
            }
            lVar15 = FUN_04d96618(lVar10,uVar9 & 0xffffffff,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                 );
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_04e56ff0(lVar15,uVar12,lVar18,uVar16,*(undefined8 *)puVar5);
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
    if (lVar18 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(lVar18);
    }
    if (lVar17 != 0) {
      iVar7 = FUN_04d96350(lVar17,*(undefined8 *)
                                   Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifierVolume>__
                          );
      if ((0 < iVar7) && (lVar18 = *(long *)(unaff_x23 + 0x40), lVar18 != 0)) {
        (**(code **)(lVar18 + 0x18))
                  (*(undefined8 *)(lVar18 + 0x40),lVar17,*(undefined8 *)(lVar18 + 0x28));
      }
      if (lVar11 != 0) {
        iVar7 = FUN_04d96350(lVar11,*(undefined8 *)puVar2);
        if ((0 < iVar7) && (lVar17 = *(long *)(unaff_x23 + 0x48), lVar17 != 0)) {
          (**(code **)(lVar17 + 0x18))
                    (*(undefined8 *)(lVar17 + 0x40),lVar11,*(undefined8 *)(lVar17 + 0x28));
        }
        if (lVar10 != 0) {
          iVar7 = FUN_04d96350(lVar10,*(undefined8 *)puVar2);
          if (iVar7 < 1) {
            return;
          }
          lVar17 = *(long *)(unaff_x23 + 0x50);
          if (lVar17 == 0) {
            return;
          }
          pcVar19 = *(code **)(lVar17 + 0x18);
          uVar16 = *(undefined8 *)(lVar17 + 0x40);
LAB_06044e10:
          (*pcVar19)(uVar16,lVar10,*(undefined8 *)(lVar17 + 0x28));
          return;
        }
      }
    }
  }
LAB_06044e54:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


