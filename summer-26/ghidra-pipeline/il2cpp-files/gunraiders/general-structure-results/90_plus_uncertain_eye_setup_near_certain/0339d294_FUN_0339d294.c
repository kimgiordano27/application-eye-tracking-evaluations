/*
FUNCTION_NAME: FUN_0339d294
ENTRY_POINT: 0339d294
PROGRAM: gunraiders-libil2cpp.so
SCORE: 112
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0339eafc) */
/* WARNING: Removing unreachable block (ram,0x0339da6c) */
/* WARNING: Removing unreachable block (ram,0x0339e384) */
/* WARNING: Removing unreachable block (ram,0x0339e388) */
/* WARNING: Removing unreachable block (ram,0x0339ee24) */
/* WARNING: Removing unreachable block (ram,0x0339e720) */
/* WARNING: Removing unreachable block (ram,0x0339e724) */
/* WARNING: Removing unreachable block (ram,0x0339e970) */
/* WARNING: Removing unreachable block (ram,0x0339eaf0) */

undefined8
FUN_0339d294(long param_1,long *param_2,long param_3,undefined8 param_4,long param_5,long param_6)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  puVar2 = MQTTnet_Formatter_V5_MqttV5PacketDecoder_TypeInfo;
  if ((DAT_045336ca & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_Rendering_DebugUI_Field<Object>_GetValue__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Add__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<GameObject>_GetEnumerator__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Contains__);
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<LabelScopeInfo>_GetEnumerator__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<MaskableGraphic>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<MaskableGraphic>_Clear__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<MaskableGraphic>_GetEnumerator__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<MaskableGraphic>_Remove__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<object>__ctor__);
    FUN_01c5d288(Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__);
    FUN_01c5d288(PTR_DAT_04236800);
    FUN_01c5d288(System_Security_Cryptography_CryptoConfig_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fce8);
    FUN_01c5d288(System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_Rendering_DebugUI_Field<Object>_set_getter__);
    FUN_01c5d288(PTR_DAT_04230960);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_MoveNext__);
    FUN_01c5d288(PTR_DAT_04237778);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<int>_RemoveWhere__);
    FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__);
    FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__);
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                );
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<object>_Add__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<object>_Contains__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<object>_Remove__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<ParameterExpression>_Add__);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<ParameterExpression>_GetEnumerator__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<PhotonView>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<PhotonView>_Add__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<PhotonView>_Clear__);
    FUN_01c5d288(Method_Photon_Voice_FrameOut<float>_get_EndOfStream__);
    FUN_01c5d288(PTR_DAT_04236ef0);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<PhotonView>_Contains__);
    FUN_01c5d288(MQTTnet_Formatter_V5_MqttV5PacketDecoder_TypeInfo);
    DAT_045336ca = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = 0;
  FUN_0336c7fc(param_5,*(undefined8 *)puVar2,0);
  if (param_3 == 0) goto LAB_0339e9a4;
  uVar10 = FUN_03392590(param_3);
  plVar20 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
  puVar2 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
  if ((uVar10 & 1) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_0339e9a4;
    uVar13 = *(uint *)(*(long *)(param_1 + 0x20) + 0x2c) >> 1 & 1;
  }
  else {
    uVar13 = 1;
  }
  plVar21 = *(long **)(param_1 + 0x28);
  uVar19 = *(undefined8 *)(param_3 + 0x60);
  if (plVar21 != (long *)0x0) {
    lVar14 = *plVar21;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_0339d5a4;
        }
        uVar10 = uVar10 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_01c72498(plVar21,*(long *)
                                    Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                           ,0);
LAB_0339d5a4:
    iVar7 = (*(code *)*puVar11)(plVar21,puVar11[1]);
    if (2 < iVar7) {
      uVar12 = FUN_03392404(param_3);
      lVar14 = *plVar20;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar14);
        lVar14 = *plVar20;
      }
      lVar23 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
      uVar22 = *(undefined8 *)PTR_DAT_04236ef0;
      if (lVar23 == 0) {
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar14);
          lVar14 = *(long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
        }
        puVar3 = Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
        uVar24 = **(undefined8 **)(lVar14 + 0xb8);
        lVar23 = thunk_FUN_01c496e0(*(undefined8 *)
                                     Method_System_Collections_Generic_HashSet<object>__ctor__);
        FUN_02b6841c(lVar23,uVar24,
                     *(undefined8 *)
                      Method_System_Collections_Generic_HashSet<ParameterExpression>_GetEnumerator__
                     ,0);
        *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar23;
      }
      uVar12 = FUN_0234eea4(uVar12,lVar23,
                            *(undefined8 *)
                             Method_System_Collections_Generic_HashSet<MaskableGraphic>__ctor__);
      uVar12 = FUN_03153bd8(uVar22,uVar12,0);
      if (param_2 == (long *)0x0) goto LAB_0339e9a4;
      plVar21 = *(long **)(param_1 + 0x28);
      uVar22 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
      }
      uVar24 = FUN_03295500(0);
      uVar12 = FUN_033704d4(*(undefined8 *)
                             Method_System_Collections_Generic_HashSet<PhotonView>_Contains__,uVar24
                            ,*(undefined8 *)(param_3 + 0x60),uVar12,0);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                          );
      }
      uVar24 = thunk_FUN_01c495e4(param_2,*(undefined8 *)
                                           Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_MoveNext__
                                 );
      uVar12 = FUN_03358c64(uVar24,uVar22,uVar12,0);
      plVar20 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
      if (plVar21 == (long *)0x0) goto LAB_0339e9a4;
      lVar14 = *plVar21;
      uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar10 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_0339d794;
          }
          uVar10 = uVar10 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_01c72498(plVar21,*(long *)puVar2,1);
LAB_0339d794:
      (*(code *)*puVar11)(plVar21,3,uVar12,0,puVar11[1]);
    }
  }
  lVar14 = FUN_0339ef18(param_1,param_3,param_4,param_2,uVar19);
  if (uVar13 != 0) {
    if (*(long *)(param_3 + 0xd8) != 0) {
      plVar21 = (long *)FUN_027bd80c(*(long *)(param_3 + 0xd8),
                                     *(undefined8 *)
                                      Method_UnityEngine_Rendering_DebugUI_Field<Object>_GetValue__)
      ;
      puVar6 = Method_System_Collections_Generic_HashSet<PhotonView>_Clear__;
      puVar5 = Method_System_Collections_Generic_HashSet<PhotonView>_Add__;
      puVar4 = Method_System_Collections_Generic_HashSet<MaskableGraphic>_Remove__;
      puVar3 = Method_System_Collections_Generic_HashSet<LabelScopeInfo>_GetEnumerator__;
      puVar2 = Method_UnityEngine_Rendering_DebugUI_Field<Object>_set_getter__;
      if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      do {
        lVar23 = *plVar21;
        uVar10 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04230960) {
              puVar11 = (undefined8 *)(lVar23 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0339d86c;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_01c72498(plVar21,*(long *)PTR_DAT_04230960,0);
LAB_0339d86c:
        uVar10 = (*(code *)*puVar11)(plVar21,puVar11[1]);
        plVar20 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
        if ((uVar10 & 1) == 0) {
          if (plVar21 == (long *)0x0) goto LAB_0339da70;
          lVar23 = *plVar21;
          uVar10 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar10 == 0) goto LAB_0339da38;
          piVar18 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          goto LAB_0339da20;
        }
        lVar23 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
        FUN_03313b6c(lVar23,0);
        lVar15 = *plVar21;
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0339d8dc;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_01c72498(plVar21,*(long *)puVar2,0);
LAB_0339d8dc:
        lVar15 = (*(code *)*puVar11)(plVar21,puVar11[1]);
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        *(long *)(lVar23 + 0x10) = lVar15;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(char *)(lVar15 + 0x80) == '\0') {
          uVar19 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
          FUN_02b67c90(uVar19,lVar23,*(undefined8 *)puVar5,0);
          uVar10 = FUN_02335b00(lVar14,uVar19,*(undefined8 *)puVar3);
          if ((uVar10 & 1) != 0) {
            if (*(long *)(lVar23 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar19 = *(undefined8 *)(*(long *)(lVar23 + 0x10) + 0x30);
            lVar15 = thunk_FUN_01c496e0(*(undefined8 *)
                                         Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Contains__
                                       );
            FUN_03313b6c(lVar15,0);
            *(undefined8 *)(lVar15 + 0x10) = uVar19;
            *(undefined8 *)(lVar15 + 0x18) = *(undefined8 *)(lVar23 + 0x10);
            local_a0 = 0;
            FUN_02f2115c(&local_a0,0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__);
            *(undefined8 *)(lVar15 + 0x28) = local_a0;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar23 = *(long *)(lVar14 + 0x10);
            lVar17 = *(long *)Method_System_Collections_Generic_HashSet<object>_Add__;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar9 = *(uint *)(lVar14 + 0x18);
            if (uVar9 < *(uint *)(lVar23 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar9 + 1;
              *(long *)(lVar23 + (long)(int)uVar9 * 8 + 0x20) = lVar15;
            }
            else {
              FUN_02d5004c(lVar14,lVar15,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      } while( true );
    }
    goto LAB_0339e9a4;
  }
  goto LAB_0339da70;
LAB_0339dc90:
  if (*(long *)(lVar23 + 0x18) != 0) {
    uVar19 = FUN_03392404(param_3);
    lVar15 = *plVar20;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar15);
      lVar15 = *plVar20;
    }
    lVar17 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
    if (lVar17 == 0) {
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar15);
        lVar15 = *plVar20;
      }
      uVar12 = **(undefined8 **)(lVar15 + 0xb8);
      lVar17 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_System_Collections_Generic_HashSet<object>__ctor__);
      FUN_02b6841c(lVar17,uVar12,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<PhotonView>__ctor__,0);
      plVar20 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
      *(long *)(*(long *)(*(long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__ + 0xb8) +
               0x10) = lVar17;
    }
    if (*(long *)(lVar23 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar15 = FUN_0242e528(uVar19,lVar17,*(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x60),
                          *(undefined8 *)
                           Method_System_Collections_Generic_HashSet<ParameterExpression>_Add__);
    if (lVar15 != 0) {
LAB_0339db88:
      if (*(char *)(lVar15 + 0x80) == '\0') {
        if (((uVar13 != 0) && (*(char *)(lVar23 + 0x28) != '\0')) && (*(uint *)(lVar23 + 0x2c) < 2))
        {
          if (*(long *)(lVar15 + 0x48) == 0) {
            uVar19 = FUN_03395dc8(param_1,*(undefined8 *)(lVar15 + 0x40));
            *(undefined8 *)(lVar15 + 0x48) = uVar19;
          }
          local_88 = *(undefined8 *)(lVar15 + 0x90);
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar9 = FUN_02f211a0(&local_88,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
          if ((uVar9 >> 1 & 1) != 0) {
            uVar19 = FUN_033931b0(lVar15);
            if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar12 = FUN_03295500(0);
            uVar19 = FUN_033985d4(uVar12,param_2,uVar19,uVar12,*(undefined8 *)(lVar15 + 0x48),
                                  *(undefined8 *)(lVar15 + 0x40));
            *(undefined8 *)(lVar23 + 0x30) = uVar19;
          }
        }
        lVar17 = FUN_03392404(param_3);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar9 = FUN_027bd894(lVar17,lVar15,*(undefined8 *)puVar2);
        if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar15 = *(long *)(lVar23 + 0x30);
        if ((lVar15 != 0) &&
           (lVar17 = thunk_FUN_01c495e4(lVar15,*(undefined8 *)(*plVar21 + 0x40)), lVar17 == 0)) {
          uVar19 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar19,0);
        }
        if (*(uint *)(plVar21 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        plVar21[(long)(int)uVar9 + 4] = lVar15;
        *(undefined1 *)(lVar23 + 0x38) = 1;
      }
    }
  }
  goto LAB_0339dae8;
LAB_0339e690:
  plVar20 = (long *)thunk_FUN_01c495e4(plVar20,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar20 != (long *)0x0) {
    lVar15 = *plVar20;
    uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_0339e708;
        }
        uVar10 = uVar10 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_01c72498(plVar20,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e708:
    (*(code *)*puVar11)(plVar20,puVar11[1]);
  }
  goto LAB_0339e3dc;
LAB_0339e2f4:
  plVar20 = (long *)thunk_FUN_01c495e4(plVar20,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar20 != (long *)0x0) {
    lVar15 = *plVar20;
    uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_0339e36c;
        }
        uVar10 = uVar10 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_01c72498(plVar20,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e36c:
    (*(code *)*puVar11)(plVar20,puVar11[1]);
  }
LAB_0339e3dc:
  *(undefined1 *)(lVar23 + 0x38) = 1;
  goto LAB_0339dde0;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar18 = piVar18 + 4;
    if (uVar10 == 0) break;
LAB_0339da20:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar11 = (undefined8 *)(lVar23 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_0339da54;
    }
  }
LAB_0339da38:
  puVar11 = (undefined8 *)FUN_01c72498(plVar21,*(long *)PTR_DAT_0422fce8,0);
LAB_0339da54:
  (*(code *)*puVar11)(plVar21,puVar11[1]);
LAB_0339da70:
  lVar23 = FUN_03392404(param_3);
  puVar2 = PTR_DAT_042305b8;
  if (lVar23 != 0) {
    uVar8 = FUN_027bd234(lVar23,*(undefined8 *)
                                 Method_System_Collections_Generic_HashSet<GameObject>_GetEnumerator__
                        );
    plVar21 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,uVar8);
    puVar3 = Method_System_Collections_Generic_HashSet<MaskableGraphic>_Clear__;
    puVar2 = Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Add__;
    if (lVar14 != 0) {
      FUN_02d50a3c(&local_a0,lVar14,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<object>_Contains__);
      uStack_78 = uStack_98;
      local_80 = local_a0;
      local_70 = local_90;
LAB_0339dae8:
      uVar10 = FUN_029fd614(&local_80,*(undefined8 *)puVar3);
      lVar23 = local_70;
      if ((uVar10 & 1) != 0) {
        if (uVar13 == 0) {
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
        }
        else {
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar15 = *(long *)(local_70 + 0x18);
          if ((lVar15 != 0) && (*(char *)(local_70 + 0x28) == '\0')) {
            if (*(long **)(local_70 + 0x30) == (long *)0x0) {
              uVar8 = 1;
            }
            else if (**(long **)(local_70 + 0x30) == *(long *)PTR_DAT_0422fc38) {
              uVar10 = OVRPlugin_OVRP_1_8_0__ovrp_GetNodeVelocity2
                                 (*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(lVar15 + 0x48));
              uVar8 = 1;
              if ((uVar10 & 1) == 0) {
                uVar8 = 2;
              }
            }
            else {
              uVar8 = 2;
            }
            local_a0 = 0;
            FUN_02f2115c(&local_a0,uVar8,
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__);
            *(undefined8 *)(lVar23 + 0x28) = local_a0;
          }
        }
        lVar15 = *(long *)(lVar23 + 0x20);
        if (lVar15 == 0) goto LAB_0339dc90;
        goto LAB_0339db88;
      }
      FUN_029fd610(&local_80,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
      if (param_5 != 0) {
        uVar19 = (**(code **)(param_5 + 0x18))
                           (*(undefined8 *)(param_5 + 0x40),plVar21,*(undefined8 *)(param_5 + 0x28))
        ;
        if (param_6 != 0) {
          FUN_0339c944(param_1,param_2,param_6,uVar19);
        }
        FUN_0339cd08(param_1,param_2,param_3,uVar19);
        FUN_02d50a3c(&local_a0,lVar14,
                     *(undefined8 *)Method_System_Collections_Generic_HashSet<object>_Contains__);
        uStack_78 = uStack_98;
        local_80 = local_a0;
        local_70 = local_90;
LAB_0339dde0:
        do {
          while( true ) {
            do {
              uVar10 = FUN_029fd614(&local_80,*(undefined8 *)puVar3);
              lVar23 = local_70;
              if ((uVar10 & 1) == 0) {
                FUN_029fd610(&local_80,
                             *(undefined8 *)
                              Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                if (*(long *)(param_3 + 0xe0) != 0) {
                  FUN_02d50a3c(&local_a0,lVar14,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<object>_Contains__);
                  uStack_78 = uStack_98;
                  local_80 = local_a0;
                  local_70 = local_90;
                  while (uVar10 = FUN_029fd614(&local_80,*(undefined8 *)puVar3), (uVar10 & 1) != 0)
                  {
                    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    if ((*(char *)(local_70 + 0x38) == '\0') &&
                       ((*(ulong *)(local_70 + 0x28) >> 0x20 != 0 ||
                        ((*(ulong *)(local_70 + 0x28) & 0xff) == 0)))) {
                      lVar23 = *(long *)(param_3 + 0xe0);
                      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      (**(code **)(lVar23 + 0x18))
                                (*(undefined8 *)(lVar23 + 0x40),uVar19,
                                 *(undefined8 *)(local_70 + 0x10),*(undefined8 *)(local_70 + 0x30),
                                 *(undefined8 *)(lVar23 + 0x28));
                    }
                  }
                  FUN_029fd610(&local_80,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                }
                if (uVar13 != 0) {
                  FUN_02d50a3c(&local_a0,lVar14,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<object>_Contains__);
                  uStack_78 = uStack_98;
                  local_80 = local_a0;
                  local_70 = local_90;
                  while (uVar10 = FUN_029fd614(&local_80,*(undefined8 *)puVar3), lVar14 = local_70,
                        (uVar10 & 1) != 0) {
                    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    if (*(long *)(local_70 + 0x18) != 0) {
                      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      uVar8 = (**(code **)(*param_2 + 0x1b8))
                                        (param_2,*(undefined8 *)(*param_2 + 0x1c0));
                      FUN_0339f5a0(param_1,uVar19,param_2,param_3,uVar8,
                                   *(undefined8 *)(lVar14 + 0x18),*(undefined4 *)(lVar14 + 0x2c),
                                   *(char *)(lVar14 + 0x38) == '\0');
                    }
                  }
                  FUN_029fd610(&local_80,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                }
                FUN_0339cf34(param_1,param_2,param_3,uVar19);
                return uVar19;
              }
              if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
            } while ((((*(char *)(local_70 + 0x38) != '\0') ||
                      (lVar15 = *(long *)(local_70 + 0x18), lVar15 == 0)) ||
                     (*(char *)(lVar15 + 0x80) != '\0')) ||
                    ((*(ulong *)(local_70 + 0x28) >> 0x20 == 0 &&
                     ((*(ulong *)(local_70 + 0x28) & 0xff) != 0))));
            lVar17 = *(long *)(local_70 + 0x30);
            uVar10 = FUN_0339c840(param_1,lVar15,param_3,lVar17);
            if ((uVar10 & 1) == 0) break;
            plVar20 = *(long **)(lVar15 + 0x68);
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar15 = *plVar20;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_0339df04;
                }
                uVar10 = uVar10 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar10 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_01c72498(plVar20,*(long *)
                                            Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                   ,0);
LAB_0339df04:
            (*(code *)*puVar11)(plVar20,uVar19,lVar17,puVar11[1]);
            *(undefined1 *)(lVar23 + 0x38) = 1;
          }
        } while ((lVar17 == 0) || (*(char *)(lVar15 + 0x82) != '\0'));
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        plVar20 = *(long **)(*(long *)(param_1 + 0x20) + 0x40);
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar16 = *plVar20;
        uVar12 = *(undefined8 *)(lVar15 + 0x40);
        uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar10 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) ==
                *(long *)
                 Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0339df30;
            }
            uVar10 = uVar10 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_01c72498(plVar20,*(long *)
                                        Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__
                               ,0);
LAB_0339df30:
        plVar20 = (long *)(*(code *)*puVar11)(plVar20,uVar12,puVar11[1]);
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(int *)((long)plVar20 + 0x24) == 2) {
          bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__
                           + 0x130);
          if ((*(byte *)(*plVar20 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar20);
          }
          if ((*(char *)((long)plVar20 + 0xf2) != '\0') && ((char)plVar20[5] == '\0')) {
            plVar20 = *(long **)(lVar15 + 0x68);
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar15 = *plVar20;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_0339e000;
                }
                uVar10 = uVar10 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar10 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_01c72498(plVar20,*(long *)
                                            Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                   ,1);
LAB_0339e000:
            lVar15 = (*(code *)*puVar11)(plVar20,uVar19,puVar11[1]);
            if (lVar15 != 0) {
              uVar12 = thunk_FUN_01c5d21c(lVar15,0);
              plVar20 = (long *)FUN_03395e54(param_1,uVar12);
              if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              bVar1 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__ +
                               0x130);
              if ((*(byte *)(*plVar20 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748(plVar20);
              }
              if (*(char *)((long)plVar20 + 0xf1) == '\0') {
                uVar12 = *(undefined8 *)PTR_DAT_04237778;
                plVar21 = (long *)thunk_FUN_01c495e4(lVar15);
                if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar15,uVar12);
                }
              }
              else {
                plVar21 = (long *)FUN_0338eda8(plVar20,lVar15);
                if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
              }
              lVar15 = *plVar21;
              uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar10 != 0) {
                piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04237778) {
                    puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 6) * 0x10 + 0x138);
                    goto LAB_0339e104;
                  }
                  uVar10 = uVar10 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar10 != 0);
              }
              puVar11 = (undefined8 *)FUN_01c72498(plVar21,*(long *)PTR_DAT_04237778,6);
LAB_0339e104:
              uVar10 = (*(code *)*puVar11)(plVar21,puVar11[1]);
              if ((uVar10 & 1) == 0) {
                if (*(char *)((long)plVar20 + 0xf1) == '\0') {
                  uVar12 = *(undefined8 *)PTR_DAT_04237778;
                  plVar20 = (long *)thunk_FUN_01c495e4(lVar17,uVar12);
                  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d748(lVar17,uVar12);
                  }
                }
                else {
                  plVar20 = (long *)FUN_0338eda8(plVar20,lVar17);
                  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                }
                lVar15 = *plVar20;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) ==
                        *(long *)
                         System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                       ) {
                      puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_0339e1a8;
                    }
                    uVar10 = uVar10 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar10 != 0);
                }
                puVar11 = (undefined8 *)
                          FUN_01c72498(plVar20,*(long *)
                                                System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                                       ,0);
LAB_0339e1a8:
                plVar20 = (long *)(*(code *)*puVar11)(plVar20,puVar11[1]);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                do {
                  lVar15 = *plVar20;
                  uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar10 != 0) {
                    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04230960) {
                        puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                        goto LAB_0339e210;
                      }
                      uVar10 = uVar10 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_01c72498(plVar20,*(long *)PTR_DAT_04230960,0);
LAB_0339e210:
                  uVar10 = (*(code *)*puVar11)(plVar20,puVar11[1]);
                  if ((uVar10 & 1) == 0) goto LAB_0339e2f4;
                  lVar15 = *plVar20;
                  uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar10 != 0) {
                    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04230960) {
                        puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                        goto LAB_0339e278;
                      }
                      uVar10 = uVar10 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_01c72498(plVar20,*(long *)PTR_DAT_04230960,1);
LAB_0339e278:
                  uVar12 = (*(code *)*puVar11)(plVar20,puVar11[1]);
                  lVar15 = *plVar21;
                  uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar10 != 0) {
                    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04237778) {
                        puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                        goto LAB_0339e2e0;
                      }
                      uVar10 = uVar10 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_01c72498(plVar21,*(long *)PTR_DAT_04237778,2);
LAB_0339e2e0:
                  (*(code *)*puVar11)(plVar21,uVar12,puVar11[1]);
                } while( true );
              }
            }
          }
        }
        else if (*(int *)((long)plVar20 + 0x24) == 5) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__
                           + 0x130);
          if ((*(byte *)(*plVar20 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748();
          }
          if ((char)plVar20[5] == '\0') {
            plVar21 = *(long **)(lVar15 + 0x68);
            if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar15 = *plVar21;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_0339e44c;
                }
                uVar10 = uVar10 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar10 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_01c72498(plVar21,*(long *)
                                            Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                   ,1);
LAB_0339e44c:
            lVar15 = (*(code *)*puVar11)(plVar21,uVar19,puVar11[1]);
            if (lVar15 != 0) {
              if ((char)plVar20[0x20] == '\0') {
                uVar12 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                plVar21 = (long *)thunk_FUN_01c495e4(lVar15,uVar12);
                if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar15,uVar12);
                }
              }
              else {
                plVar21 = (long *)OVRPlugin_Sizei___cctor(plVar20,lVar15);
              }
              if ((char)plVar20[0x20] == '\0') {
                uVar12 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                plVar20 = (long *)thunk_FUN_01c495e4(lVar17,uVar12);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar17,uVar12);
                }
              }
              else {
                plVar20 = (long *)OVRPlugin_Sizei___cctor(plVar20,lVar17);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
              }
              lVar15 = *plVar20;
              uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar10 != 0) {
                piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) ==
                      *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                    puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 9) * 0x10 + 0x138);
                    goto LAB_0339e538;
                  }
                  uVar10 = uVar10 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar10 != 0);
              }
              puVar11 = (undefined8 *)
                        FUN_01c72498(plVar20,*(long *)
                                              System_Security_Cryptography_CryptoConfig_TypeInfo,9);
LAB_0339e538:
              plVar20 = (long *)(*(code *)*puVar11)(plVar20,puVar11[1]);
              if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              do {
                lVar15 = *plVar20;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04230960) {
                      puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_0339e5a0;
                    }
                    uVar10 = uVar10 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar10 != 0);
                }
                puVar11 = (undefined8 *)FUN_01c72498(plVar20,*(long *)PTR_DAT_04230960,0);
LAB_0339e5a0:
                uVar10 = (*(code *)*puVar11)(plVar20,puVar11[1]);
                if ((uVar10 & 1) == 0) goto LAB_0339e690;
                lVar15 = *plVar20;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04236800) {
                      puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                      goto LAB_0339e608;
                    }
                    uVar10 = uVar10 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar10 != 0);
                }
                puVar11 = (undefined8 *)FUN_01c72498(plVar20,*(long *)PTR_DAT_04236800,2);
LAB_0339e608:
                auVar25 = (*(code *)*puVar11)(plVar20,puVar11[1]);
                if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                lVar15 = *plVar21;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) ==
                        *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                      puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                      goto LAB_0339e678;
                    }
                    uVar10 = uVar10 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar10 != 0);
                }
                puVar11 = (undefined8 *)
                          FUN_01c72498(plVar21,*(long *)
                                                System_Security_Cryptography_CryptoConfig_TypeInfo,1
                                      );
LAB_0339e678:
                (*(code *)*puVar11)(plVar21,auVar25._0_8_,auVar25._8_8_,puVar11[1]);
              } while( true );
            }
          }
        }
        goto LAB_0339e3dc;
      }
    }
  }
LAB_0339e9a4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


