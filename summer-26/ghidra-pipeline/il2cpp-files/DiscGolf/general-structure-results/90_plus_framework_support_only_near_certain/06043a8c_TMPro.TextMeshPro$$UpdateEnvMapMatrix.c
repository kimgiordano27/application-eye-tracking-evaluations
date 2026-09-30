/*
FUNCTION_NAME: TMPro.TextMeshPro$$UpdateEnvMapMatrix
ENTRY_POINT: 06043a8c
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

void TMPro_TextMeshPro__UpdateEnvMapMatrix(long param_1,undefined8 param_2,long param_3)

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
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  long lVar17;
  long lVar18;
  long lVar19;
  long in_x9;
  code *pcVar20;
  int *piVar21;
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
  
  piVar21 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar21 + -2) == param_3) {
      puVar9 = (undefined8 *)(param_1 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_06043ac8;
    }
    in_x9 = in_x9 + -1;
    piVar21 = piVar21 + 4;
  } while (in_x9 != 0);
  puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06043ac8:
  uVar10 = (*(code *)*puVar9)();
  if (((uVar10 & 1) != 0) && (lVar17 = *(long *)(unaff_x23 + 0x58), lVar17 != 0)) {
    (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
  }
  lVar17 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar10 != 0) {
    piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *unaff_x25) {
        puVar9 = (undefined8 *)(lVar17 + (long)(*piVar21 + 9) * 0x10 + 0x138);
        goto LAB_06043b40;
      }
      uVar10 = uVar10 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar10 != 0);
  }
  puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06043b40:
  (*(code *)*puVar9)();
  if ((extraout_x1 & 0xff) == 0) {
    lVar17 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar10 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar17 + (long)(*piVar21 + 9) * 0x10 + 0x138);
          goto LAB_06043ba4;
        }
        uVar10 = uVar10 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06043ba4:
    (*(code *)*puVar9)();
    if ((extraout_x1_00 & 0xff00) != 0) goto LAB_06043bb8;
  }
  else {
LAB_06043bb8:
    lVar17 = *(long *)(unaff_x23 + 0x18);
    if (lVar17 != 0) {
      lVar18 = *unaff_x20;
      uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar10 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *unaff_x25) {
            puVar9 = (undefined8 *)(lVar18 + (long)(*piVar21 + 9) * 0x10 + 0x138);
            goto LAB_06043c10;
          }
          uVar10 = uVar10 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06043c10:
      uVar11 = (*(code *)*puVar9)();
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),uVar11,*(undefined8 *)(lVar17 + 0x28));
    }
  }
  lVar17 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar10 != 0) {
    piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *unaff_x25) {
        puVar9 = (undefined8 *)(lVar17 + (long)(*piVar21 + 8) * 0x10 + 0x138);
        goto LAB_06043c84;
      }
      uVar10 = uVar10 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar10 != 0);
  }
  puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06043c84:
  (*(code *)*puVar9)();
  if ((extraout_x1_01 & 0xff) == 0) {
    lVar17 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar10 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar17 + (long)(*piVar21 + 8) * 0x10 + 0x138);
          goto LAB_06043ce8;
        }
        uVar10 = uVar10 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06043ce8:
    (*(code *)*puVar9)();
    if ((extraout_x1_02 & 0xff00) != 0) goto LAB_06043cfc;
  }
  else {
LAB_06043cfc:
    lVar17 = *(long *)(unaff_x23 + 0x20);
    if (lVar17 != 0) {
      lVar18 = *unaff_x20;
      uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar10 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *unaff_x25) {
            puVar9 = (undefined8 *)(lVar18 + (long)(*piVar21 + 8) * 0x10 + 0x138);
            goto LAB_06043d54;
          }
          uVar10 = uVar10 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06043d54:
      uVar11 = (*(code *)*puVar9)();
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),uVar11,*(undefined8 *)(lVar17 + 0x28));
    }
  }
  puVar2 = Method_UnityEngine_Component_GetComponent<MtreeBezier>__;
  lVar17 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar10 != 0) {
    piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *unaff_x25) {
        puVar9 = (undefined8 *)(lVar17 + (long)(*piVar21 + 7) * 0x10 + 0x138);
        goto LAB_06043dd0;
      }
      uVar10 = uVar10 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar10 != 0);
  }
  puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06043dd0:
  puVar4 = Method_UnityEngine_Component_GetComponents<IInteractionCaster>__;
  _in_stack_00000100 = (*(code *)*puVar9)();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar10 = FUN_046fc988(&stack0x00000100,*(undefined8 *)puVar4);
  if ((uVar10 & 1) == 0) {
    lVar17 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar10 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar17 + (long)(*piVar21 + 7) * 0x10 + 0x138);
          goto LAB_06043e60;
        }
        uVar10 = uVar10 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06043e60:
    auVar22 = (*(code *)*puVar9)();
    _in_stack_00000100 = auVar22;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar10 = FUN_046fc8ac(&stack0x00000100,
                          *(undefined8 *)Method_UnityEngine_Component_GetComponent<LayoutGroup>__);
    if ((uVar10 & 1) != 0) goto LAB_06043f28;
    lVar17 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar10 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar17 + (long)(*piVar21 + 7) * 0x10 + 0x138);
          goto LAB_06043eec;
        }
        uVar10 = uVar10 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06043eec:
    auVar22 = (*(code *)*puVar9)();
    _in_stack_00000100 = auVar22;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar10 = FUN_046fc830(&stack0x00000100,
                          *(undefined8 *)Method_UnityEngine_Component_GetComponent<Light>__);
    if ((uVar10 & 1) != 0) goto LAB_06043f28;
  }
  else {
LAB_06043f28:
    puVar5 = Method_UnityEngine_Component_GetComponentsInChildren<OvrAvatarEntity>__;
    puVar3 = Method_UnityEngine_Component_GetComponents<Renderer>__;
    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_Component_GetComponentsInChildren<OvrAvatarEntity>__
                               );
    FUN_04e56274(lVar17,*(undefined8 *)puVar3);
    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
    FUN_04e56274(lVar18,*(undefined8 *)puVar3);
    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
    FUN_04e56274(lVar12,*(undefined8 *)puVar3);
    lVar19 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar10 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
          goto LAB_06043fc4;
        }
        uVar10 = uVar10 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar10 != 0);
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
      lVar17 = *(long *)(unaff_x23 + 0x30);
      if (lVar17 == 0) {
        return;
      }
      pcVar20 = *(code **)(lVar17 + 0x18);
      uVar11 = *(undefined8 *)(lVar17 + 0x40);
      lVar18 = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar22._8_8_;
      _in_stack_00000100 = auVar1 << 0x40;
      goto LAB_06044e10;
    }
    lVar19 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar10 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
          goto LAB_0604405c;
        }
        uVar10 = uVar10 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar10 != 0);
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
    lVar19 = FUN_04e56cb4(in_stack_00000100,
                          *(undefined8 *)
                           Method_UnityEngine_Component_GetComponentsInChildren<OVRHand>__);
    puVar7 = Method_UnityEngine_Component_GetComponentsInChildren<Renderer>__;
    puVar6 = Method_UnityEngine_Component_GetComponentsInChildren<NetworkObject>__;
    puVar5 = Method_UnityEngine_Component_GetComponents<Component>__;
    puVar3 = Method_UnityEngine_Component_GetComponent<MultiplayerScoreManager>__;
    if (lVar19 == 0) goto LAB_06044e54;
    FUN_03e12118(&stack0x00000020,lVar19,
                 *(undefined8 *)Method_UnityEngine_Component_GetComponentsInChildren<Transform>__);
    in_stack_000000f0 = in_stack_00000030;
    in_stack_000000e8 = in_stack_00000028;
    in_stack_000000e0 = in_stack_00000020;
    in_stack_00000020 = 0;
    in_stack_00000028 = &stack0x000000e0;
    while( true ) {
      uVar13 = FUN_05228c88(&stack0x000000e0,*(undefined8 *)puVar7);
      uVar10 = in_stack_000000f0;
      if ((uVar13 & 1) == 0) break;
      lVar19 = *unaff_x20;
      uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar13 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *unaff_x25) {
            puVar9 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
            goto LAB_06044150;
          }
          uVar13 = uVar13 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06044150:
      auVar22 = (*(code *)*puVar9)();
      _in_stack_00000100 = auVar22;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar2);
      }
      uVar13 = FUN_046fc988(&stack0x00000100,*(undefined8 *)puVar4);
      if ((uVar13 & 1) == 0) {
        lVar19 = *unaff_x20;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *unaff_x25) {
              puVar9 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
              goto LAB_060441d4;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
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
        auVar22 = FUN_04e56f6c(in_stack_00000100,uVar10,*(undefined8 *)puVar6);
        _in_stack_000000d0 = auVar22;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar3);
        }
        uVar13 = FUN_046fc988(&stack0x000000d0,
                              *(undefined8 *)
                               Method_UnityEngine_Component_GetComponents<AvatarLODParent>__);
        if ((uVar13 & 1) != 0) goto LAB_0604423c;
        lVar19 = *unaff_x20;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *unaff_x25) {
              puVar9 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
              goto LAB_06044334;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06044334:
        auVar22 = (*(code *)*puVar9)();
        _in_stack_00000100 = auVar22;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar2);
        }
        uVar13 = FUN_046fc830(&stack0x00000100,
                              *(undefined8 *)Method_UnityEngine_Component_GetComponent<Light>__);
        if ((uVar13 & 1) == 0) {
          lVar19 = *unaff_x20;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *unaff_x25) {
                puVar9 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                goto LAB_060443c0;
              }
              uVar13 = uVar13 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar13 != 0);
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
          auVar22 = FUN_04e56f6c(in_stack_00000100,uVar10,*(undefined8 *)puVar6);
          _in_stack_000000d0 = auVar22;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar3);
          }
          uVar13 = FUN_046fc830(&stack0x000000d0,
                                *(undefined8 *)
                                 Method_UnityEngine_Component_GetComponent<LobbyPlayerSingleUI>__);
          if ((uVar13 & 1) != 0) goto LAB_06044428;
          lVar19 = *unaff_x20;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *unaff_x25) {
                puVar9 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                goto LAB_06044520;
              }
              uVar13 = uVar13 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_02dd004c();
LAB_06044520:
          auVar22 = (*(code *)*puVar9)();
          _in_stack_00000100 = auVar22;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar2);
          }
          uVar13 = FUN_046fc8ac(&stack0x00000100,
                                *(undefined8 *)
                                 Method_UnityEngine_Component_GetComponent<LayoutGroup>__);
          if ((uVar13 & 1) != 0) {
            lVar19 = *unaff_x20;
            uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar13 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *unaff_x25) {
                  puVar9 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                  goto LAB_060445ac;
                }
                uVar13 = uVar13 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar13 != 0);
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
            auVar22 = FUN_04e56f6c(in_stack_00000100,uVar10,*(undefined8 *)puVar6);
            _in_stack_000000d0 = auVar22;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)puVar3);
            }
            uVar13 = FUN_046fc8ac(&stack0x000000d0,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponents<BaseInputModule>__);
            if ((uVar13 & 1) != 0) {
              lVar19 = *unaff_x20;
              uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar13 != 0) {
                piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *unaff_x25) {
                    puVar9 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                    goto LAB_06044664;
                  }
                  uVar13 = uVar13 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar13 != 0);
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
              auVar22 = FUN_04e56f6c(in_stack_00000100,uVar10,*(undefined8 *)puVar6);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860(0,auVar22._8_8_,auVar22._0_8_);
              }
              FUN_04e56ff0(lVar17,uVar10,auVar22._0_8_,auVar22._8_8_,*(undefined8 *)puVar5);
            }
          }
        }
        else {
LAB_06044428:
          lVar19 = *unaff_x20;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *unaff_x25) {
                puVar9 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                goto LAB_060444b8;
              }
              uVar13 = uVar13 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar13 != 0);
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
          auVar22 = FUN_04e56f6c(in_stack_00000100,uVar10,*(undefined8 *)puVar6);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_04e56ff0(lVar18,uVar10,auVar22._0_8_,auVar22._8_8_,*(undefined8 *)puVar5);
        }
      }
      else {
LAB_0604423c:
        lVar19 = *unaff_x20;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *unaff_x25) {
              puVar9 = (undefined8 *)(lVar19 + (long)(*piVar21 + 7) * 0x10 + 0x138);
              goto LAB_060442cc;
            }
            uVar13 = uVar13 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar13 != 0);
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
        auVar22 = FUN_04e56f6c(in_stack_00000100,uVar10,*(undefined8 *)puVar6);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04e56ff0(lVar12,uVar10,auVar22._0_8_,auVar22._8_8_,*(undefined8 *)puVar5);
      }
    }
    FUN_05228c84(&stack0x000000e0,
                 *(undefined8 *)
                  Method_UnityEngine_Component_GetComponentsInChildren<RectTransform>__);
    puVar2 = Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifier>__;
    if (lVar17 == 0) goto LAB_06044e54;
    iVar8 = FUN_04e56ca4(lVar17,*(undefined8 *)
                                 Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifier>__
                        );
    if ((0 < iVar8) && (lVar19 = *(long *)(unaff_x23 + 0x28), lVar19 != 0)) {
      (**(code **)(lVar19 + 0x18))
                (*(undefined8 *)(lVar19 + 0x40),lVar17,*(undefined8 *)(lVar19 + 0x28));
    }
    if (lVar18 == 0) goto LAB_06044e54;
    iVar8 = FUN_04e56ca4(lVar18,*(undefined8 *)puVar2);
    if ((0 < iVar8) && (lVar17 = *(long *)(unaff_x23 + 0x30), lVar17 != 0)) {
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),lVar18,*(undefined8 *)(lVar17 + 0x28));
    }
    if (lVar12 == 0) goto LAB_06044e54;
    iVar8 = FUN_04e56ca4(lVar12,*(undefined8 *)puVar2);
    if ((0 < iVar8) && (lVar17 = *(long *)(unaff_x23 + 0x38), lVar17 != 0)) {
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),lVar12,*(undefined8 *)(lVar17 + 0x28));
    }
  }
  lVar17 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar10 != 0) {
    piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *unaff_x25) {
        puVar9 = (undefined8 *)(lVar17 + (long)(*piVar21 + 10) * 0x10 + 0x138);
        goto LAB_060447c8;
      }
      uVar10 = uVar10 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar10 != 0);
  }
  puVar9 = (undefined8 *)FUN_02dd004c();
LAB_060447c8:
  (*(code *)*puVar9)();
  if ((extraout_x1_03 & 0xff00) == 0) {
    lVar17 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar10 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x25) {
          puVar9 = (undefined8 *)(lVar17 + (long)(*piVar21 + 10) * 0x10 + 0x138);
          goto LAB_0604482c;
        }
        uVar10 = uVar10 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_02dd004c();
LAB_0604482c:
    (*(code *)*puVar9)();
    if ((extraout_x1_04 & 0xff) == 0) {
      return;
    }
  }
  puVar4 = Method_UnityEngine_Component_GetComponentsInChildren<RawImage>__;
  puVar2 = Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__;
  lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_UnityEngine_Component_GetComponentsInChildren<RawImage>__);
  FUN_04d95918(lVar17,*(undefined8 *)puVar2);
  lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_04d95918(lVar12,*(undefined8 *)puVar2);
  lVar18 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_04d95918(lVar18,*(undefined8 *)puVar2);
  lVar19 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar10 != 0) {
    piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *unaff_x25) {
        puVar9 = (undefined8 *)(lVar19 + (long)(*piVar21 + 10) * 0x10 + 0x138);
        goto LAB_060448dc;
      }
      uVar10 = uVar10 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar10 != 0);
  }
  puVar9 = (undefined8 *)FUN_02dd004c();
LAB_060448dc:
  lVar19 = (*(code *)*puVar9)();
  puVar5 = Method_UnityEngine_Component_GetComponents<Collider>__;
  puVar3 = Method_UnityEngine_Component_GetComponents<MonoBehaviour>__;
  puVar4 = Method_UnityEngine_Component_GetComponent<OvrAvatarHandJointType>__;
  puVar9 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OvrAvatarEntity>__;
  puVar2 = Method_UnityEngine_Component_GetComponent<MonoBehaviour>__;
  if (lVar19 != 0) {
    FUN_04d96af4(&stack0x00000020,lVar19,
                 *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRManager>__);
    in_stack_000000c0 = in_stack_00000040;
    in_stack_00000058 = &stack0x000000a0;
    in_stack_000000a8 = in_stack_00000028;
    in_stack_000000a0 = in_stack_00000020;
    in_stack_000000b8 = in_stack_00000038;
    in_stack_000000b0 = in_stack_00000030;
    in_stack_00000050 = 0;
    while( true ) {
      uVar13 = FUN_0520e87c(&stack0x000000a0,*puVar9);
      lVar16 = in_stack_000000b8;
      uVar10 = in_stack_000000b0;
      lVar19 = in_stack_00000050;
      if ((uVar13 & 1) == 0) break;
      if (in_stack_000000b8 == 0) {
LAB_06044c1c:
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04d966b8(lVar12,uVar10 & 0xffffffff,0,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponents<IMaterialModifier>__)
        ;
      }
      else {
        lVar19 = *(long *)(in_stack_000000b8 + 0x38);
        if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NetworkObject>__ + 0xe4) ==
            0) {
          thunk_FUN_02df485c();
        }
        if (lVar19 == 0) goto LAB_06044c1c;
        lVar19 = *(long *)(lVar16 + 0x38);
        if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<NetworkObject>__ + 0xe4) ==
            0) {
          thunk_FUN_02df485c();
        }
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04e57418(&stack0x00000020,lVar19,
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
          uVar14 = FUN_05228778(&stack0x00000070,*(undefined8 *)puVar4);
          uVar11 = in_stack_00000090;
          lVar19 = in_stack_00000088;
          uVar13 = in_stack_00000080;
          puVar9 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OvrAvatarEntity>__;
          if ((uVar14 & 1) == 0) break;
          in_stack_00000060 = in_stack_00000088;
          in_stack_00000068 = in_stack_00000090;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar14 = FUN_046fc988(&stack0x00000060,*(undefined8 *)puVar3);
          if ((uVar14 & 1) == 0) {
            in_stack_00000060 = lVar19;
            in_stack_00000068 = uVar11;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar14 = FUN_046fc830(&stack0x00000060,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponent<LobbyListSingleUI>__);
            if ((uVar14 & 1) == 0) {
              in_stack_00000060 = lVar19;
              in_stack_00000068 = uVar11;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar14 = FUN_046fc8ac(&stack0x00000060,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponents<CanvasGroup>__);
              if ((uVar14 & 1) != 0) {
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                uVar14 = FUN_04d968ac(lVar17,uVar10 & 0xffffffff,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponents<Mask>__);
                if ((uVar14 & 1) == 0) {
                  uVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                               Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                             );
                  FUN_04e56274(uVar15,*(undefined8 *)
                                       Method_UnityEngine_Component_GetComponentsInChildren<Image>__
                              );
                  FUN_04d966b8(lVar17,uVar10 & 0xffffffff,uVar15,
                               *(undefined8 *)
                                Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
                }
                lVar16 = FUN_04d96618(lVar17,uVar10 & 0xffffffff,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                     );
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                FUN_04e56ff0(lVar16,uVar13,lVar19,uVar11,*(undefined8 *)puVar5);
              }
            }
            else {
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar14 = FUN_04d968ac(lVar12,uVar10 & 0xffffffff,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponents<Mask>__);
              if ((uVar14 & 1) == 0) {
                uVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                             Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                           );
                FUN_04e56274(uVar15,*(undefined8 *)
                                     Method_UnityEngine_Component_GetComponentsInChildren<Image>__);
                FUN_04d966b8(lVar12,uVar10 & 0xffffffff,uVar15,
                             *(undefined8 *)
                              Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
              }
              lVar16 = FUN_04d96618(lVar12,uVar10 & 0xffffffff,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                   );
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_04e56ff0(lVar16,uVar13,lVar19,uVar11,*(undefined8 *)puVar5);
            }
          }
          else {
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar14 = FUN_04d968ac(lVar18,uVar10 & 0xffffffff,
                                  *(undefined8 *)Method_UnityEngine_Component_GetComponents<Mask>__)
            ;
            if ((uVar14 & 1) == 0) {
              uVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                           Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                         );
              FUN_04e56274(uVar15,*(undefined8 *)
                                   Method_UnityEngine_Component_GetComponentsInChildren<Image>__);
              FUN_04d966b8(lVar18,uVar10 & 0xffffffff,uVar15,
                           *(undefined8 *)
                            Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
            }
            lVar16 = FUN_04d96618(lVar18,uVar10 & 0xffffffff,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                 );
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_04e56ff0(lVar16,uVar13,lVar19,uVar11,*(undefined8 *)puVar5);
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
    if (lVar19 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(lVar19);
    }
    if (lVar17 != 0) {
      iVar8 = FUN_04d96350(lVar17,*(undefined8 *)
                                   Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifierVolume>__
                          );
      if ((0 < iVar8) && (lVar19 = *(long *)(unaff_x23 + 0x40), lVar19 != 0)) {
        (**(code **)(lVar19 + 0x18))
                  (*(undefined8 *)(lVar19 + 0x40),lVar17,*(undefined8 *)(lVar19 + 0x28));
      }
      if (lVar12 != 0) {
        iVar8 = FUN_04d96350(lVar12,*(undefined8 *)puVar2);
        if ((0 < iVar8) && (lVar17 = *(long *)(unaff_x23 + 0x48), lVar17 != 0)) {
          (**(code **)(lVar17 + 0x18))
                    (*(undefined8 *)(lVar17 + 0x40),lVar12,*(undefined8 *)(lVar17 + 0x28));
        }
        if (lVar18 != 0) {
          iVar8 = FUN_04d96350(lVar18,*(undefined8 *)puVar2);
          if (iVar8 < 1) {
            return;
          }
          lVar17 = *(long *)(unaff_x23 + 0x50);
          if (lVar17 == 0) {
            return;
          }
          pcVar20 = *(code **)(lVar17 + 0x18);
          uVar11 = *(undefined8 *)(lVar17 + 0x40);
LAB_06044e10:
          (*pcVar20)(uVar11,lVar18,*(undefined8 *)(lVar17 + 0x28));
          return;
        }
      }
    }
  }
LAB_06044e54:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


