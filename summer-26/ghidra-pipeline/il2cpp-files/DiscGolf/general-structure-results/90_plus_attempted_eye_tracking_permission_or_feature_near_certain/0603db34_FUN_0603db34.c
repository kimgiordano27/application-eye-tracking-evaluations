/*
FUNCTION_NAME: FUN_0603db34
ENTRY_POINT: 0603db34
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 142
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_12;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0603ef0c) */
/* WARNING: Removing unreachable block (ram,0x0603ef10) */
/* WARNING: Removing unreachable block (ram,0x0603f240) */
/* WARNING: Removing unreachable block (ram,0x0603ef9c) */
/* WARNING: Removing unreachable block (ram,0x0603f3e8) */

void FUN_0603db34(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined8 local_1a0;
  undefined8 *puStack_198;
  ulong local_190;
  long lStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  long local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 *puStack_158;
  ulong local_150;
  long lStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 *puStack_118;
  ulong uStack_110;
  long local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  ulong local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  ulong local_c0;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  
  if ((DAT_06dc4bfe & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<ERSideObjectInstance>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<ERSurfaceScript>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<EventSystem>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<FadeOutObject>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<Graphic>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<GridLayoutGroup>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<ILayoutController>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<ILineRenderable>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<IPointerEnterHandler>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<IXRCustomReticleProvider>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<IXRInteractable>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<Image>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<InputSystemUIInputModule>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<LODGallerySceneOrganizer>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<LayoutElement>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<LayoutGroup>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<Light>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<LineRenderer>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<LobbyListSingleUI>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<LobbyPlayerSingleUI>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<MaterialPropertyBlockHelper>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<MeshCollider>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<MeshFilter>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<MeshRenderer>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<MonoBehaviour>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<MtreeBezier>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<MultiplayerScoreManager>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<NetworkObject>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<NetworkTransform>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OBLineMarker>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OVRCameraRig>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OVREyeGaze>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OVRGrabbable>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OVRManager>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OVRMesh>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OVRMeshRenderer>__);
    FUN_02d965b8(PTR_DAT_069fcc28);
    FUN_02d965b8(PTR_DAT_069fcb78);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OVRProgressIndicator>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OVRRayTransformer>__);
    FUN_02d965b8(PTR_DAT_069fcc30);
    FUN_02d965b8(PTR_DAT_069fcb80);
    FUN_02d965b8(PTR_DAT_069fed00);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OVRSceneAnchor>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OVRSceneManager>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OVRSkeleton>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__);
    FUN_02d965b8(PTR_DAT_069fed10);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OvrAvatarAnimationBehavior>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OvrAvatarEntity>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OvrAvatarHandJointType>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<OvrAvatarSkinningOverride>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<PlayModePane>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<PlayerInput>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<PlayerScoreComponent>__);
    FUN_02d965b8(PTR_DAT_069fed28);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<RawImage>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<RectMask2D>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<Renderer>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<Rigidbody>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<Rigidbody2D>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<RoomMeshAnchor>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<SampleAvatarEntity>__);
    FUN_02d965b8(PTR_DAT_069fed38);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<SinglePlayerScoreManager>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<SkinnedMeshRenderer>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<SpatialAnchorSpawnerBuildingBlock>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<SpriteRenderer>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<TMP_InputField>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<TMP_SpriteAnimator>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<TMP_Text>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<Terrain>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<TerrainCollider>__);
    FUN_02d965b8(Method_UnityEngine_Component_GetComponent<Text>__);
    DAT_06dc4bfe = 1;
  }
  plVar19 = (long *)Method_UnityEngine_Component_GetComponent<RectMask2D>__;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_d0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  local_c0 = 0;
  lStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  puStack_118 = (undefined8 *)0x0;
  local_120 = 0;
  local_108 = 0;
  uStack_110 = 0;
  puStack_e8 = (undefined8 *)0x0;
  local_f0 = 0;
  lStack_d8 = 0;
  local_e0 = 0;
  lStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a0 = 0;
  local_100 = 0;
  local_130 = 0;
  uStack_128 = 0;
  puStack_158 = (undefined8 *)0x0;
  local_160 = 0;
  local_170 = 0;
  uStack_168 = 0;
  auVar21 = ZEXT816(0);
  if (param_1 != (long *)0x0) {
    lVar15 = *param_1;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponent<RectMask2D>__) {
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xc) * 0x10 + 0x138);
          goto LAB_0603df84;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_02dd004c(param_1,*(long *)Method_UnityEngine_Component_GetComponent<RectMask2D>__,
                           0xc);
LAB_0603df84:
    iVar8 = (*(code *)*puVar11)(param_1,puVar11[1]);
    auVar21._8_8_ = local_70._8_8_;
    auVar21._0_8_ = local_70._0_8_;
    if (param_2 != 0) {
      if (*(int *)(param_2 + 0x70) < iVar8) {
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0603dfec;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,0);
LAB_0603dfec:
        uVar17 = (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((uVar17 & 1) != 0) {
          FUN_06077954(*(undefined8 *)Method_UnityEngine_Component_GetComponent<Text>__,0);
          return;
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_0603e07c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,1);
LAB_0603e07c:
        (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((extraout_x1 & 0xff) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_0603e0e0;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,1);
LAB_0603e0e0:
          uVar12 = (*(code *)*puVar11)(param_1,puVar11[1]);
          *(undefined8 *)(param_2 + 0x30) = uVar12;
          LeanTween__value();
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
              goto LAB_0603e14c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,2);
LAB_0603e14c:
        uVar9 = (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((uVar9 >> 8 & 0xff) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                goto LAB_0603e1b0;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,2);
LAB_0603e1b0:
          cVar7 = (*(code *)*puVar11)(param_1,puVar11[1]);
          *(bool *)(param_2 + 0x40) = cVar7 != '\0';
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 3) * 0x10 + 0x138);
              goto LAB_0603e218;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,3);
LAB_0603e218:
        uVar9 = (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((uVar9 >> 8 & 0xff) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 3) * 0x10 + 0x138);
                goto LAB_0603e27c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,3);
LAB_0603e27c:
          cVar7 = (*(code *)*puVar11)(param_1,puVar11[1]);
          *(bool *)(param_2 + 0x41) = cVar7 != '\0';
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 4) * 0x10 + 0x138);
              goto LAB_0603e2e4;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,4);
LAB_0603e2e4:
        uVar9 = (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((uVar9 >> 8 & 0xff) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 4) * 0x10 + 0x138);
                goto LAB_0603e348;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,4);
LAB_0603e348:
          cVar7 = (*(code *)*puVar11)(param_1,puVar11[1]);
          *(bool *)(param_2 + 0x42) = cVar7 != '\0';
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 5) * 0x10 + 0x138);
              goto LAB_0603e3b0;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,5);
LAB_0603e3b0:
        uVar17 = (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((uVar17 & 0xff00000000) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 5) * 0x10 + 0x138);
                goto LAB_0603e414;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,5);
LAB_0603e414:
          uVar10 = (*(code *)*puVar11)(param_1,puVar11[1]);
          *(undefined4 *)(param_2 + 0x3c) = uVar10;
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
              goto LAB_0603e474;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,6);
LAB_0603e474:
        uVar17 = (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((uVar17 & 0xff00000000) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                goto LAB_0603e4d8;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,6);
LAB_0603e4d8:
          uVar10 = (*(code *)*puVar11)(param_1,puVar11[1]);
          *(undefined4 *)(param_2 + 0x38) = uVar10;
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 7) * 0x10 + 0x138);
              goto LAB_0603e538;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,7);
LAB_0603e538:
        local_70 = (*(code *)*puVar11)(param_1,puVar11[1]);
        puVar1 = Method_UnityEngine_Component_GetComponent<MtreeBezier>__;
        if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<MtreeBezier>__ + 0xe4) == 0)
        {
          thunk_FUN_02df485c();
        }
        uVar17 = FUN_046fc830(local_70,*(undefined8 *)
                                        Method_UnityEngine_Component_GetComponent<Light>__);
        if ((uVar17 & 1) == 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                goto LAB_0603e5e8;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,7);
LAB_0603e5e8:
          auVar21 = (*(code *)*puVar11)(param_1,puVar11[1]);
          local_70 = auVar21;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar17 = FUN_046fc8ac(local_70,*(undefined8 *)
                                          Method_UnityEngine_Component_GetComponent<LayoutGroup>__);
          if ((uVar17 & 1) != 0) {
            plVar13 = (long *)(param_2 + 0x50);
            if (*plVar13 == 0) {
              lVar15 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fcc30);
              FUN_04e92874(lVar15,*(undefined8 *)PTR_DAT_069fcc28);
              *plVar13 = lVar15;
              LeanTween__value(plVar13,lVar15);
            }
            lVar15 = *param_1;
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *plVar19) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                  goto LAB_0603e6b4;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,7);
LAB_0603e6b4:
            auVar21 = (*(code *)*puVar11)(param_1,puVar11[1]);
            lVar15 = *(long *)puVar1;
            local_70 = auVar21;
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_02df485c(lVar15);
            }
            auVar21 = local_70;
            if (local_70._0_8_ == 0) goto LAB_0603f230;
            FUN_04e57418(&local_1a0,local_70._0_8_,
                         *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVREyeGaze>__);
            puVar5 = Method_UnityEngine_Component_GetComponent<OvrAvatarAnimationBehavior>__;
            puVar4 = Method_UnityEngine_Component_GetComponent<OVRRayTransformer>__;
            puVar3 = Method_UnityEngine_Component_GetComponent<OVRMesh>__;
            puVar2 = Method_UnityEngine_Component_GetComponent<MultiplayerScoreManager>__;
            puVar1 = Method_UnityEngine_Component_GetComponent<LobbyPlayerSingleUI>__;
            puStack_98 = puStack_198;
            local_a0 = local_1a0;
            lStack_88 = lStack_188;
            local_90 = local_190;
            puStack_198 = &local_a0;
            uStack_78 = uStack_178;
            local_80 = local_180;
            local_1a0 = 0;
            while (uVar14 = FUN_05228778(&local_a0,*(undefined8 *)puVar5), uVar12 = local_80,
                  lVar15 = lStack_88, uVar17 = local_90, (uVar14 & 1) != 0) {
              local_b0 = lStack_88;
              uStack_a8 = local_80;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar14 = FUN_046fc830(&local_b0,*(undefined8 *)puVar1);
              lVar16 = *plVar13;
              if ((uVar14 & 1) == 0) {
                local_b0 = lVar15;
                uStack_a8 = uVar12;
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                FUN_04e935dc(lVar16,uVar17,local_b0,*(undefined8 *)puVar4);
              }
              else {
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                FUN_04e94b0c(lVar16,uVar17,*(undefined8 *)puVar3);
              }
            }
            FUN_052288b4(&local_a0,
                         *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRSceneAnchor>__)
            ;
            plVar19 = (long *)Method_UnityEngine_Component_GetComponent<RectMask2D>__;
          }
        }
        else if (*(long *)(param_2 + 0x50) != 0) {
          FUN_04e93778(*(long *)(param_2 + 0x50),
                       *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRCameraRig>__);
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 8) * 0x10 + 0x138);
              goto LAB_0603e838;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,8);
LAB_0603e838:
        (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((extraout_x1_00 & 0xff) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 8) * 0x10 + 0x138);
                goto LAB_0603e89c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,8);
LAB_0603e89c:
          lVar15 = (*(code *)*puVar11)(param_1,puVar11[1]);
          puVar1 = Method_UnityEngine_Component_GetComponent<TerrainCollider>__;
          lVar16 = *(long *)Method_UnityEngine_Component_GetComponent<TerrainCollider>__;
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_02df485c(lVar16);
            lVar16 = *(long *)puVar1;
          }
          puVar11 = *(undefined8 **)(lVar16 + 0xb8);
          lVar20 = puVar11[1];
          if (lVar20 == 0) {
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_02df485c(lVar16);
              puVar11 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar12 = *puVar11;
            lVar20 = thunk_FUN_02dd3144(*(undefined8 *)
                                         Method_UnityEngine_Component_GetComponent<NetworkTransform>__
                                       );
            FUN_04b5f170(lVar20,uVar12,
                         *(undefined8 *)Method_UnityEngine_Component_GetComponent<Terrain>__,0);
            plVar13 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            *plVar13 = lVar20;
            LeanTween__value(plVar13,lVar20);
          }
          auVar21 = local_70;
          if (lVar15 == 0) goto LAB_0603f230;
          FUN_03fb56fc(lVar15,lVar20,
                       *(undefined8 *)
                        Method_UnityEngine_Component_GetComponent<SpatialAnchorSpawnerBuildingBlock>__
                      );
          FUN_03fb4898(&local_1a0,lVar15,*(undefined8 *)PTR_DAT_069fed38);
          puVar2 = Method_UnityEngine_Component_GetComponent<SkinnedMeshRenderer>__;
          puVar1 = PTR_DAT_069fed10;
          puStack_c8 = puStack_198;
          local_d0 = local_1a0;
          local_c0 = local_190;
          local_1a0 = 0;
          puStack_198 = &local_d0;
          while (uVar17 = FUN_051434b8(&local_d0,*(undefined8 *)puVar1), (uVar17 & 1) != 0) {
            if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0603f208 with catch @ 0603f218
                        */
              FUN_02d96860();
            }
            FUN_0401187c(*(long *)(param_2 + 0x48),local_c0 & 0xffffffff,*(undefined8 *)puVar2);
          }
          FUN_051434b4(&local_d0,*(undefined8 *)PTR_DAT_069fed00);
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 9) * 0x10 + 0x138);
              goto LAB_0603ea1c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,9);
LAB_0603ea1c:
        (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((extraout_x1_01 & 0xff) != 0) {
          plVar13 = (long *)(param_2 + 0x48);
          if (*plVar13 == 0) {
            lVar15 = *param_1;
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *plVar19) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 9) * 0x10 + 0x138);
                  goto LAB_0603ea8c;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,9);
LAB_0603ea8c:
            lVar15 = (*(code *)*puVar11)(param_1,puVar11[1]);
            auVar21 = local_70;
            if (lVar15 == 0) goto LAB_0603f230;
            uVar10 = *(undefined4 *)(lVar15 + 0x18);
            lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                         Method_UnityEngine_Component_GetComponent<TMP_Text>__);
            FUN_0400f9fc(lVar15,uVar10,
                         *(undefined8 *)Method_UnityEngine_Component_GetComponent<SpriteRenderer>__)
            ;
            *plVar13 = lVar15;
            LeanTween__value(plVar13,lVar15);
          }
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 9) * 0x10 + 0x138);
                goto LAB_0603eb28;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,9);
LAB_0603eb28:
          lVar15 = (*(code *)*puVar11)(param_1,puVar11[1]);
          auVar21 = local_70;
          if (lVar15 == 0) goto LAB_0603f230;
          FUN_03fd005c(&local_1a0,lVar15,
                       *(undefined8 *)
                        Method_UnityEngine_Component_GetComponent<SampleAvatarEntity>__);
          puVar2 = Method_UnityEngine_Component_GetComponent<SinglePlayerScoreManager>__;
          puVar1 = Method_UnityEngine_Component_GetComponent<OvrAvatarSkinningOverride>__;
          puStack_e8 = puStack_198;
          local_f0 = local_1a0;
          lStack_d8 = lStack_188;
          local_e0 = local_190;
          local_1a0 = 0;
          puStack_198 = &local_f0;
          while (uVar17 = FUN_0514cacc(&local_f0,*(undefined8 *)puVar1), (uVar17 & 1) != 0) {
            if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0603f204 with catch @ 0603f21c
                        */
              FUN_02d96860();
            }
            FUN_04010e80(*plVar13,local_e0 & 0xffffffff,lStack_d8,*(undefined8 *)puVar2);
          }
          FUN_0514cac8(&local_f0,
                       *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRSceneManager>__);
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 10) * 0x10 + 0x138);
              goto LAB_0603ec00;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,10);
LAB_0603ec00:
        (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((extraout_x1_02 & 0xff) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 10) * 0x10 + 0x138);
                goto LAB_0603ec64;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,10);
LAB_0603ec64:
          lVar15 = (*(code *)*puVar11)(param_1,puVar11[1]);
          auVar21 = local_70;
          if (lVar15 == 0) goto LAB_0603f230;
          FUN_04d96af4(&local_1a0,lVar15,
                       *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRManager>__);
          puVar6 = Method_UnityEngine_Component_GetComponent<OvrAvatarHandJointType>__;
          puVar5 = Method_UnityEngine_Component_GetComponent<OVRProgressIndicator>__;
          puVar4 = Method_UnityEngine_Component_GetComponent<OVRMeshRenderer>__;
          puVar3 = Method_UnityEngine_Component_GetComponent<NetworkObject>__;
          puVar2 = Method_UnityEngine_Component_GetComponent<MonoBehaviour>__;
          puVar1 = Method_UnityEngine_Component_GetComponent<LobbyListSingleUI>__;
          puStack_118 = puStack_198;
          local_120 = local_1a0;
          local_108 = lStack_188;
          uStack_110 = local_190;
          local_100 = local_180;
          while (uVar17 = FUN_0520e87c(&local_120,
                                       *(undefined8 *)
                                        Method_UnityEngine_Component_GetComponent<OvrAvatarEntity>__
                                      ), lVar15 = local_108, (uVar17 & 1) != 0) {
            if (local_108 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0603f200 with catch @ 0603f220
                        */
              FUN_02d96860();
            }
            if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0603f0e4 with catch @ 0603f224
                        */
              FUN_02d96860();
            }
            lVar16 = FUN_0400ff1c(*(long *)(param_2 + 0x48),*(undefined4 *)(local_108 + 0x10),
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponent<TMP_SpriteAnimator>__);
            if (*(char *)(lVar15 + 0x20) != '\0') {
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar15 + 0x18);
              LeanTween__value();
            }
            if (*(char *)(lVar15 + 0x30) != '\0') {
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0603f148 with catch @ 0603f228
                        */
                FUN_02d96860();
              }
              *(undefined8 *)(lVar16 + 0x40) = *(undefined8 *)(lVar15 + 0x28);
            }
            uStack_128 = *(undefined8 *)(lVar15 + 0x40);
            local_130 = *(long *)(lVar15 + 0x38);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar17 = FUN_046fc830(&local_130,
                                  *(undefined8 *)
                                   Method_UnityEngine_Component_GetComponent<LineRenderer>__);
            if ((uVar17 & 1) == 0) {
              uStack_128 = *(undefined8 *)(lVar15 + 0x40);
              local_130 = *(long *)(lVar15 + 0x38);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar17 = FUN_046fc8ac(&local_130,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponent<LayoutElement>__);
              if ((uVar17 & 1) != 0) {
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                plVar19 = (long *)(lVar16 + 0x28);
                if (*plVar19 == 0) {
                  lVar16 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fcb80);
                  FUN_04e92874(lVar16,*(undefined8 *)PTR_DAT_069fcb78);
                  *plVar19 = lVar16;
                  LeanTween__value(plVar19,lVar16);
                }
                uStack_128 = *(undefined8 *)(lVar15 + 0x40);
                local_130 = *(long *)(lVar15 + 0x38);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02df485c(*(long *)puVar3);
                }
                if (local_130 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                FUN_04e57418(&local_1a0,local_130,
                             *(undefined8 *)
                              Method_UnityEngine_Component_GetComponent<OVRGrabbable>__);
                local_160 = local_1a0;
                local_1a0 = 0;
                puStack_158 = puStack_198;
                lStack_148 = lStack_188;
                local_150 = local_190;
                uStack_138 = uStack_178;
                local_140 = local_180;
                puStack_198 = &local_160;
                while (uVar14 = FUN_05228778(&local_160,*(undefined8 *)puVar6), uVar12 = local_140,
                      lVar15 = lStack_148, uVar17 = local_150, (uVar14 & 1) != 0) {
                  local_170 = lStack_148;
                  uStack_168 = local_140;
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  uVar14 = FUN_046fc830(&local_170,*(undefined8 *)puVar1);
                  lVar16 = *plVar19;
                  if ((uVar14 & 1) == 0) {
                    local_170 = lVar15;
                    uStack_168 = uVar12;
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    FUN_04e935dc(lVar16,uVar17,local_170,*(undefined8 *)puVar5);
                  }
                  else {
                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    FUN_04e94b0c(lVar16,uVar17,*(undefined8 *)puVar4);
                  }
                }
                FUN_052288b4(&local_160,
                             *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRSkeleton>__
                            );
              }
            }
            else {
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(long *)(lVar16 + 0x28) != 0) {
                FUN_04e93778(*(long *)(lVar16 + 0x28),
                             *(undefined8 *)
                              Method_UnityEngine_Component_GetComponent<OBLineMarker>__);
              }
            }
          }
          FUN_0520e9a0(&local_120,
                       *(undefined8 *)
                        Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                      );
          plVar19 = (long *)Method_UnityEngine_Component_GetComponent<RectMask2D>__;
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xc) * 0x10 + 0x138);
              goto LAB_0603eff0;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,0xc);
LAB_0603eff0:
        uVar17 = (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((uVar17 & 0xff00000000) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xc) * 0x10 + 0x138);
                goto LAB_0603f054;
              }
                    /* try { // try from 0603f028 to 0613f0e3 has its CatchHandler @ 0603f028
                       catch() { ... } // from try @ 0603f028 with catch @ 0603f028
                       catch() { ... } // from try @ 0603f17c with catch @ 0603f028
                       catch() { ... } // from try @ 0603f20c with catch @ 0603f028
                       catch() { ... } // from try @ 0603f25c with catch @ 0603f028 */
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,0xc);
LAB_0603f054:
          uVar10 = (*(code *)*puVar11)(param_1,puVar11[1]);
          *(undefined4 *)(param_2 + 0x70) = uVar10;
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xb) * 0x10 + 0x138);
              goto LAB_0603f0b4;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,0xb);
LAB_0603f0b4:
        (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((extraout_x1_03 & 0xff) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
                    /* try { // try from 0603f0e4 to 0613f10b has its CatchHandler @ 0603f224 */
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xb) * 0x10 + 0x138);
                goto LAB_0603f118;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,0xb);
LAB_0603f118:
          uVar12 = (*(code *)*puVar11)(param_1,puVar11[1]);
          *(undefined8 *)(param_2 + 0x58) = uVar12;
          LeanTween__value();
        }
        lVar15 = *param_1;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
                    /* try { // try from 0603f148 to 0613f17b has its CatchHandler @ 0603f228 */
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *plVar19) {
                    /* try { // try from 0603f17c to 0613f1ff has its CatchHandler @ 0603f028 */
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xd) * 0x10 + 0x138);
              goto LAB_0603f184;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,0xd);
LAB_0603f184:
        (*(code *)*puVar11)(param_1,puVar11[1]);
        if ((extraout_x1_04 & 0xff) != 0) {
          lVar15 = *param_1;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *plVar19) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0xd) * 0x10 + 0x138);
                goto LAB_0603f1e8;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_02dd004c(param_1,*plVar19,0xd);
LAB_0603f1e8:
          uVar12 = (*(code *)*puVar11)(param_1,puVar11[1]);
          *(undefined8 *)(param_2 + 0x68) = uVar12;
        }
      }
                    /* try { // try from 0603f200 to 0613f203 has its CatchHandler @ 0603f220 */
                    /* try { // try from 0603f204 to 0613f207 has its CatchHandler @ 0603f21c */
                    /* try { // try from 0603f208 to 0613f20b has its CatchHandler @ 0603f218 */
                    /* try { // try from 0603f20c to 0613f243 has its CatchHandler @ 0603f028 */
      return;
    }
  }
LAB_0603f230:
  local_70 = auVar21;
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


