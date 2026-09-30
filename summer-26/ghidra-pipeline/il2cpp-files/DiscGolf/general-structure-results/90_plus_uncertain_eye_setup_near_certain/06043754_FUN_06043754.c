/*
FUNCTION_NAME: FUN_06043754
ENTRY_POINT: 06043754
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 128
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06044c70) */
/* WARNING: Removing unreachable block (ram,0x06044c74) */
/* WARNING: Removing unreachable block (ram,0x06044e4c) */
/* WARNING: Removing unreachable block (ram,0x06044d6c) */

void FUN_06043754(long param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
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
  ulong uVar20;
  code *pcVar21;
  int *piVar22;
  undefined1 auVar23 [16];
  undefined8 local_150;
  undefined8 *puStack_148;
  ulong local_140;
  long lStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  long local_120;
  undefined8 *local_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 *puStack_f8;
  ulong local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  ulong local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 *puStack_88;
  ulong local_80;
  undefined1 local_70 [16];
  
  if ((DAT_06dc4c21 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_Component_GetComponents<BaseRaycaster>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponents<Collider>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponents<Component>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<ERSurfaceScript>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<Graphic>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<GridLayoutGroup>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<ILineRenderable>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<IXRInteractable>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<LODGallerySceneOrganizer>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponents<IInteractionCaster>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponents<MonoBehaviour>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponents<AvatarLODParent>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponents<BaseInputModule>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponents<CanvasGroup>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<LayoutGroup>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<Light>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<LobbyListSingleUI>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<LobbyPlayerSingleUI>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<MeshCollider>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<MeshRenderer>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<MonoBehaviour>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<MtreeBezier>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<MultiplayerScoreManager>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<NetworkObject>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponents<Collider>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponents<Component>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponents<Mask>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OVRGrabbable>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OVRManager>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponents<Renderer>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponentsInChildren<Image>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifier>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifierVolume>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponentsInChildren<NetworkObject>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponentsInChildren<OVRHand>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponentsInChildren<OvrAvatarEntity>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponentsInChildren<RawImage>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponentsInChildren<RectTransform>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OVRSkeleton>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponentsInChildren<Renderer>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OvrAvatarEntity>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OvrAvatarHandJointType>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<PlayModePane>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<PlayerInput>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponentsInChildren<TextMeshProUGUI>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<RectMask2D>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponentsInChildren<Transform>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponentsInChildren<Collider>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<Renderer>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<Rigidbody>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<RoomMeshAnchor>__);
    DAT_06dc4c21 = 1;
  }
  lVar17 = *(long *)(param_1 + 0x10);
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_b0 = 0;
  lStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  puStack_f8 = (undefined8 *)0x0;
  local_100 = 0;
  local_110 = 0;
  uStack_108 = 0;
  if (lVar17 != 0) {
    (**(code **)(lVar17 + 0x18))
              (*(undefined8 *)(lVar17 + 0x40),param_2,*(undefined8 *)(lVar17 + 0x28));
  }
  puVar2 = Method_UnityEngine_Component_GetComponent<RectMask2D>__;
  if (param_2 == (long *)0x0) goto LAB_06044e54;
  lVar17 = *param_2;
  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) ==
          *(long *)Method_UnityEngine_Component_GetComponent<RectMask2D>__) {
        puVar10 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_06043ac8;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_02dd004c(param_2,*(long *)Method_UnityEngine_Component_GetComponent<RectMask2D>__,0)
  ;
LAB_06043ac8:
  uVar20 = (*(code *)*puVar10)(param_2,puVar10[1]);
  if (((uVar20 & 1) != 0) && (lVar17 = *(long *)(param_1 + 0x58), lVar17 != 0)) {
    (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
  }
  lVar17 = *param_2;
  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
        puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 9) * 0x10 + 0x138);
        goto LAB_06043b40;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,9);
LAB_06043b40:
  (*(code *)*puVar10)(param_2,puVar10[1]);
  if ((extraout_x1 & 0xff) == 0) {
    lVar17 = *param_2;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 9) * 0x10 + 0x138);
          goto LAB_06043ba4;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,9);
LAB_06043ba4:
    (*(code *)*puVar10)(param_2,puVar10[1]);
    if ((extraout_x1_00 & 0xff00) != 0) goto LAB_06043bb8;
  }
  else {
LAB_06043bb8:
    lVar17 = *(long *)(param_1 + 0x18);
    if (lVar17 != 0) {
      lVar18 = *param_2;
      uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar20 != 0) {
        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar18 + (long)(*piVar22 + 9) * 0x10 + 0x138);
            goto LAB_06043c10;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,9);
LAB_06043c10:
      uVar11 = (*(code *)*puVar10)(param_2,puVar10[1]);
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),uVar11,*(undefined8 *)(lVar17 + 0x28));
    }
  }
  lVar17 = *param_2;
  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
        puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 8) * 0x10 + 0x138);
        goto LAB_06043c84;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,8);
LAB_06043c84:
  (*(code *)*puVar10)(param_2,puVar10[1]);
  if ((extraout_x1_01 & 0xff) == 0) {
    lVar17 = *param_2;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 8) * 0x10 + 0x138);
          goto LAB_06043ce8;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,8);
LAB_06043ce8:
    (*(code *)*puVar10)(param_2,puVar10[1]);
    if ((extraout_x1_02 & 0xff00) != 0) goto LAB_06043cfc;
  }
  else {
LAB_06043cfc:
    lVar17 = *(long *)(param_1 + 0x20);
    if (lVar17 != 0) {
      lVar18 = *param_2;
      uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar20 != 0) {
        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar18 + (long)(*piVar22 + 8) * 0x10 + 0x138);
            goto LAB_06043d54;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,8);
LAB_06043d54:
      uVar11 = (*(code *)*puVar10)(param_2,puVar10[1]);
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),uVar11,*(undefined8 *)(lVar17 + 0x28));
    }
  }
  puVar3 = Method_UnityEngine_Component_GetComponent<MtreeBezier>__;
  lVar17 = *param_2;
  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
        puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 7) * 0x10 + 0x138);
        goto LAB_06043dd0;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,7);
LAB_06043dd0:
  puVar5 = Method_UnityEngine_Component_GetComponents<IInteractionCaster>__;
  local_70 = (*(code *)*puVar10)(param_2,puVar10[1]);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar20 = FUN_046fc988(local_70,*(undefined8 *)puVar5);
  if ((uVar20 & 1) == 0) {
    lVar17 = *param_2;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 7) * 0x10 + 0x138);
          goto LAB_06043e60;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,7);
LAB_06043e60:
    auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
    local_70 = auVar23;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar20 = FUN_046fc8ac(local_70,*(undefined8 *)
                                    Method_UnityEngine_Component_GetComponent<LayoutGroup>__);
    if ((uVar20 & 1) != 0) goto LAB_06043f28;
    lVar17 = *param_2;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 7) * 0x10 + 0x138);
          goto LAB_06043eec;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,7);
LAB_06043eec:
    auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
    local_70 = auVar23;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar20 = FUN_046fc830(local_70,*(undefined8 *)Method_UnityEngine_Component_GetComponent<Light>__
                         );
    if ((uVar20 & 1) != 0) goto LAB_06043f28;
  }
  else {
LAB_06043f28:
    puVar6 = Method_UnityEngine_Component_GetComponentsInChildren<OvrAvatarEntity>__;
    puVar4 = Method_UnityEngine_Component_GetComponents<Renderer>__;
    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_Component_GetComponentsInChildren<OvrAvatarEntity>__
                               );
    FUN_04e56274(lVar17,*(undefined8 *)puVar4);
    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
    FUN_04e56274(lVar18,*(undefined8 *)puVar4);
    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
    FUN_04e56274(lVar12,*(undefined8 *)puVar4);
    lVar19 = *param_2;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
          goto LAB_06043fc4;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,7);
LAB_06043fc4:
    auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      local_70 = auVar23;
      thunk_FUN_02df485c(*(long *)puVar3);
      auVar23 = local_70;
    }
    if (auVar23._0_8_ == 0) {
      lVar17 = *(long *)(param_1 + 0x30);
      if (lVar17 == 0) {
        return;
      }
      pcVar21 = *(code **)(lVar17 + 0x18);
      uVar11 = *(undefined8 *)(lVar17 + 0x40);
      lVar18 = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar23._8_8_;
      local_70 = auVar1 << 0x40;
      goto LAB_06044e10;
    }
    lVar19 = *param_2;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
          goto LAB_0604405c;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    local_70 = auVar23;
    puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,7);
    auVar23 = local_70;
LAB_0604405c:
    local_70 = auVar23;
    auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
    local_70 = auVar23;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar3);
    }
    if (local_70._0_8_ == 0) goto LAB_06044e54;
    lVar19 = FUN_04e56cb4(local_70._0_8_,
                          *(undefined8 *)
                           Method_UnityEngine_Component_GetComponentsInChildren<OVRHand>__);
    puVar8 = Method_UnityEngine_Component_GetComponentsInChildren<Renderer>__;
    puVar7 = Method_UnityEngine_Component_GetComponentsInChildren<NetworkObject>__;
    puVar6 = Method_UnityEngine_Component_GetComponents<Component>__;
    puVar4 = Method_UnityEngine_Component_GetComponent<MultiplayerScoreManager>__;
    if (lVar19 == 0) goto LAB_06044e54;
    FUN_03e12118(&local_150,lVar19,
                 *(undefined8 *)Method_UnityEngine_Component_GetComponentsInChildren<Transform>__);
    local_80 = local_140;
    puStack_88 = puStack_148;
    local_90 = local_150;
    local_150 = 0;
    puStack_148 = &local_90;
    while( true ) {
      uVar13 = FUN_05228c88(&local_90,*(undefined8 *)puVar8);
      uVar20 = local_80;
      if ((uVar13 & 1) == 0) break;
      lVar19 = *param_2;
      uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar13 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
            goto LAB_06044150;
          }
          uVar13 = uVar13 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,7);
LAB_06044150:
      auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
      local_70 = auVar23;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar3);
      }
      uVar13 = FUN_046fc988(local_70,*(undefined8 *)puVar5);
      if ((uVar13 & 1) == 0) {
        lVar19 = *param_2;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
              goto LAB_060441d4;
            }
            uVar13 = uVar13 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,7);
LAB_060441d4:
        auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
        local_70 = auVar23;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar3);
        }
        if (local_70._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        auVar23 = FUN_04e56f6c(local_70._0_8_,uVar20,*(undefined8 *)puVar7);
        local_a0 = auVar23;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar4);
        }
        uVar13 = FUN_046fc988(local_a0,*(undefined8 *)
                                        Method_UnityEngine_Component_GetComponents<AvatarLODParent>__
                             );
        if ((uVar13 & 1) != 0) goto LAB_0604423c;
        lVar19 = *param_2;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
              goto LAB_06044334;
            }
            uVar13 = uVar13 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,7);
LAB_06044334:
        auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
        local_70 = auVar23;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar3);
        }
        uVar13 = FUN_046fc830(local_70,*(undefined8 *)
                                        Method_UnityEngine_Component_GetComponent<Light>__);
        if ((uVar13 & 1) == 0) {
          lVar19 = *param_2;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
                goto LAB_060443c0;
              }
              uVar13 = uVar13 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,7);
LAB_060443c0:
          auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
          local_70 = auVar23;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar3);
          }
          if (local_70._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          auVar23 = FUN_04e56f6c(local_70._0_8_,uVar20,*(undefined8 *)puVar7);
          local_a0 = auVar23;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar4);
          }
          uVar13 = FUN_046fc830(local_a0,*(undefined8 *)
                                          Method_UnityEngine_Component_GetComponent<LobbyPlayerSingleUI>__
                               );
          if ((uVar13 & 1) != 0) goto LAB_06044428;
          lVar19 = *param_2;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
                goto LAB_06044520;
              }
              uVar13 = uVar13 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,7);
LAB_06044520:
          auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
          local_70 = auVar23;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar3);
          }
          uVar13 = FUN_046fc8ac(local_70,*(undefined8 *)
                                          Method_UnityEngine_Component_GetComponent<LayoutGroup>__);
          if ((uVar13 & 1) != 0) {
            lVar19 = *param_2;
            uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar13 != 0) {
              piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
                  goto LAB_060445ac;
                }
                uVar13 = uVar13 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,7);
LAB_060445ac:
            auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
            local_70 = auVar23;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)puVar3);
            }
            if (local_70._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            auVar23 = FUN_04e56f6c(local_70._0_8_,uVar20,*(undefined8 *)puVar7);
            local_a0 = auVar23;
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_02df485c(*(long *)puVar4);
            }
            uVar13 = FUN_046fc8ac(local_a0,*(undefined8 *)
                                            Method_UnityEngine_Component_GetComponents<BaseInputModule>__
                                 );
            if ((uVar13 & 1) != 0) {
              lVar19 = *param_2;
              uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar13 != 0) {
                piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
                    puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
                    goto LAB_06044664;
                  }
                  uVar13 = uVar13 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar13 != 0);
              }
              puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,7);
LAB_06044664:
              auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
              local_70 = auVar23;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02df485c(*(long *)puVar3);
              }
              if (local_70._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              auVar23 = FUN_04e56f6c(local_70._0_8_,uVar20,*(undefined8 *)puVar7);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860(0,auVar23._8_8_,auVar23._0_8_);
              }
              FUN_04e56ff0(lVar17,uVar20,auVar23._0_8_,auVar23._8_8_,*(undefined8 *)puVar6);
            }
          }
        }
        else {
LAB_06044428:
          lVar19 = *param_2;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
                goto LAB_060444b8;
              }
              uVar13 = uVar13 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,7);
LAB_060444b8:
          auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
          local_70 = auVar23;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar3);
          }
          if (local_70._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          auVar23 = FUN_04e56f6c(local_70._0_8_,uVar20,*(undefined8 *)puVar7);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_04e56ff0(lVar18,uVar20,auVar23._0_8_,auVar23._8_8_,*(undefined8 *)puVar6);
        }
      }
      else {
LAB_0604423c:
        lVar19 = *param_2;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 7) * 0x10 + 0x138);
              goto LAB_060442cc;
            }
            uVar13 = uVar13 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,7);
LAB_060442cc:
        auVar23 = (*(code *)*puVar10)(param_2,puVar10[1]);
        local_70 = auVar23;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar3);
        }
        if (local_70._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        auVar23 = FUN_04e56f6c(local_70._0_8_,uVar20,*(undefined8 *)puVar7);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04e56ff0(lVar12,uVar20,auVar23._0_8_,auVar23._8_8_,*(undefined8 *)puVar6);
      }
    }
    FUN_05228c84(&local_90,
                 *(undefined8 *)
                  Method_UnityEngine_Component_GetComponentsInChildren<RectTransform>__);
    puVar3 = Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifier>__;
    if (lVar17 == 0) goto LAB_06044e54;
    iVar9 = FUN_04e56ca4(lVar17,*(undefined8 *)
                                 Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifier>__
                        );
    if ((0 < iVar9) && (lVar19 = *(long *)(param_1 + 0x28), lVar19 != 0)) {
      (**(code **)(lVar19 + 0x18))
                (*(undefined8 *)(lVar19 + 0x40),lVar17,*(undefined8 *)(lVar19 + 0x28));
    }
    if (lVar18 == 0) goto LAB_06044e54;
    iVar9 = FUN_04e56ca4(lVar18,*(undefined8 *)puVar3);
    if ((0 < iVar9) && (lVar17 = *(long *)(param_1 + 0x30), lVar17 != 0)) {
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),lVar18,*(undefined8 *)(lVar17 + 0x28));
    }
    if (lVar12 == 0) goto LAB_06044e54;
    iVar9 = FUN_04e56ca4(lVar12,*(undefined8 *)puVar3);
    if ((0 < iVar9) && (lVar17 = *(long *)(param_1 + 0x38), lVar17 != 0)) {
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),lVar12,*(undefined8 *)(lVar17 + 0x28));
    }
  }
  lVar17 = *param_2;
  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
        puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 10) * 0x10 + 0x138);
        goto LAB_060447c8;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,10);
LAB_060447c8:
  (*(code *)*puVar10)(param_2,puVar10[1]);
  if ((extraout_x1_03 & 0xff00) == 0) {
    lVar17 = *param_2;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar22 + 10) * 0x10 + 0x138);
          goto LAB_0604482c;
        }
        uVar20 = uVar20 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar20 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,10);
LAB_0604482c:
    (*(code *)*puVar10)(param_2,puVar10[1]);
    if ((extraout_x1_04 & 0xff) == 0) {
      return;
    }
  }
  puVar5 = Method_UnityEngine_Component_GetComponentsInChildren<RawImage>__;
  puVar3 = Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__;
  lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_UnityEngine_Component_GetComponentsInChildren<RawImage>__);
  FUN_04d95918(lVar17,*(undefined8 *)puVar3);
  lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_04d95918(lVar12,*(undefined8 *)puVar3);
  lVar18 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_04d95918(lVar18,*(undefined8 *)puVar3);
  lVar19 = *param_2;
  uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar20 != 0) {
    piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
        puVar10 = (undefined8 *)(lVar19 + (long)(*piVar22 + 10) * 0x10 + 0x138);
        goto LAB_060448dc;
      }
      uVar20 = uVar20 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar20 != 0);
  }
  puVar10 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar2,10);
LAB_060448dc:
  lVar19 = (*(code *)*puVar10)(param_2,puVar10[1]);
  puVar4 = Method_UnityEngine_Component_GetComponents<Collider>__;
  puVar5 = Method_UnityEngine_Component_GetComponents<MonoBehaviour>__;
  puVar3 = Method_UnityEngine_Component_GetComponent<OvrAvatarHandJointType>__;
  puVar10 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OvrAvatarEntity>__;
  puVar2 = Method_UnityEngine_Component_GetComponent<MonoBehaviour>__;
  if (lVar19 != 0) {
    FUN_04d96af4(&local_150,lVar19,
                 *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRManager>__);
    local_b0 = local_130;
    local_118 = &local_d0;
    puStack_c8 = puStack_148;
    local_d0 = local_150;
    local_b8 = lStack_138;
    local_c0 = local_140;
    local_120 = 0;
    while( true ) {
      uVar13 = FUN_0520e87c(&local_d0,*puVar10);
      lVar16 = local_b8;
      uVar20 = local_c0;
      lVar19 = local_120;
      if ((uVar13 & 1) == 0) break;
      if (local_b8 == 0) {
LAB_06044c1c:
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_04d966b8(lVar12,uVar20 & 0xffffffff,0,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponents<IMaterialModifier>__)
        ;
      }
      else {
        lVar19 = *(long *)(local_b8 + 0x38);
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
        FUN_04e57418(&local_150,lVar19,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRGrabbable>__);
        local_100 = local_150;
        local_150 = 0;
        puStack_f8 = puStack_148;
        lStack_e8 = lStack_138;
        local_f0 = local_140;
        uStack_d8 = uStack_128;
        local_e0 = local_130;
        puStack_148 = &local_100;
        while( true ) {
          uVar14 = FUN_05228778(&local_100,*(undefined8 *)puVar3);
          uVar11 = local_e0;
          lVar19 = lStack_e8;
          uVar13 = local_f0;
          puVar10 = (undefined8 *)Method_UnityEngine_Component_GetComponent<OvrAvatarEntity>__;
          if ((uVar14 & 1) == 0) break;
          local_110 = lStack_e8;
          uStack_108 = local_e0;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar14 = FUN_046fc988(&local_110,*(undefined8 *)puVar5);
          if ((uVar14 & 1) == 0) {
            local_110 = lVar19;
            uStack_108 = uVar11;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar14 = FUN_046fc830(&local_110,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponent<LobbyListSingleUI>__);
            if ((uVar14 & 1) == 0) {
              local_110 = lVar19;
              uStack_108 = uVar11;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar14 = FUN_046fc8ac(&local_110,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponents<CanvasGroup>__);
              if ((uVar14 & 1) != 0) {
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                uVar14 = FUN_04d968ac(lVar17,uVar20 & 0xffffffff,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponents<Mask>__);
                if ((uVar14 & 1) == 0) {
                  uVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                               Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                             );
                  FUN_04e56274(uVar15,*(undefined8 *)
                                       Method_UnityEngine_Component_GetComponentsInChildren<Image>__
                              );
                  FUN_04d966b8(lVar17,uVar20 & 0xffffffff,uVar15,
                               *(undefined8 *)
                                Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
                }
                lVar16 = FUN_04d96618(lVar17,uVar20 & 0xffffffff,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                     );
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                FUN_04e56ff0(lVar16,uVar13,lVar19,uVar11,*(undefined8 *)puVar4);
              }
            }
            else {
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar14 = FUN_04d968ac(lVar12,uVar20 & 0xffffffff,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponents<Mask>__);
              if ((uVar14 & 1) == 0) {
                uVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                             Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                           );
                FUN_04e56274(uVar15,*(undefined8 *)
                                     Method_UnityEngine_Component_GetComponentsInChildren<Image>__);
                FUN_04d966b8(lVar12,uVar20 & 0xffffffff,uVar15,
                             *(undefined8 *)
                              Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
              }
              lVar16 = FUN_04d96618(lVar12,uVar20 & 0xffffffff,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                   );
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_04e56ff0(lVar16,uVar13,lVar19,uVar11,*(undefined8 *)puVar4);
            }
          }
          else {
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar14 = FUN_04d968ac(lVar18,uVar20 & 0xffffffff,
                                  *(undefined8 *)Method_UnityEngine_Component_GetComponents<Mask>__)
            ;
            if ((uVar14 & 1) == 0) {
              uVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                           Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                         );
              FUN_04e56274(uVar15,*(undefined8 *)
                                   Method_UnityEngine_Component_GetComponentsInChildren<Image>__);
              FUN_04d966b8(lVar18,uVar20 & 0xffffffff,uVar15,
                           *(undefined8 *)
                            Method_UnityEngine_Component_GetComponents<IMaterialModifier>__);
            }
            lVar16 = FUN_04d96618(lVar18,uVar20 & 0xffffffff,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponentsInChildren<OVRControllerHelper>__
                                 );
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_04e56ff0(lVar16,uVar13,lVar19,uVar11,*(undefined8 *)puVar4);
          }
        }
        FUN_052288b4(&local_100,
                     *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRSkeleton>__);
      }
    }
    FUN_0520e9a0(local_118,
                 *(undefined8 *)
                  Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__)
    ;
    puVar2 = Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifierVolume>__;
    if (lVar19 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(lVar19);
    }
    if (lVar17 != 0) {
      iVar9 = FUN_04d96350(lVar17,*(undefined8 *)
                                   Method_UnityEngine_Component_GetComponentsInChildren<NavMeshModifierVolume>__
                          );
      if ((0 < iVar9) && (lVar19 = *(long *)(param_1 + 0x40), lVar19 != 0)) {
        (**(code **)(lVar19 + 0x18))
                  (*(undefined8 *)(lVar19 + 0x40),lVar17,*(undefined8 *)(lVar19 + 0x28));
      }
      if (lVar12 != 0) {
        iVar9 = FUN_04d96350(lVar12,*(undefined8 *)puVar2);
        if ((0 < iVar9) && (lVar17 = *(long *)(param_1 + 0x48), lVar17 != 0)) {
          (**(code **)(lVar17 + 0x18))
                    (*(undefined8 *)(lVar17 + 0x40),lVar12,*(undefined8 *)(lVar17 + 0x28));
        }
        if (lVar18 != 0) {
          iVar9 = FUN_04d96350(lVar18,*(undefined8 *)puVar2);
          if (iVar9 < 1) {
            return;
          }
          lVar17 = *(long *)(param_1 + 0x50);
          if (lVar17 == 0) {
            return;
          }
          pcVar21 = *(code **)(lVar17 + 0x18);
          uVar11 = *(undefined8 *)(lVar17 + 0x40);
LAB_06044e10:
          (*pcVar21)(uVar11,lVar18,*(undefined8 *)(lVar17 + 0x28));
          return;
        }
      }
    }
  }
LAB_06044e54:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


