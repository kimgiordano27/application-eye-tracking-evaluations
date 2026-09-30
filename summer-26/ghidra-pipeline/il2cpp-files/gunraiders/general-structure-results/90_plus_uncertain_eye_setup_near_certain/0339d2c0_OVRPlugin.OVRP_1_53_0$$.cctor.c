/*
FUNCTION_NAME: OVRPlugin.OVRP_1_53_0$$.cctor
ENTRY_POINT: 0339d2c0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_5
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
OVRPlugin_OVRP_1_53_0___cctor
          (ulong param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
          long param_6,long param_7)

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
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  undefined8 *puVar18;
  long unaff_x21;
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  long in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
  puVar18 = *(undefined8 **)(unaff_x19 + 0xfc0);
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x21 + 0x6ca) = 1;
  }
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000058 = 0;
  FUN_0336c7fc(param_6,*puVar18,0);
  if (in_stack_00000030 == 0) goto LAB_0339e9a4;
  uVar10 = FUN_03392590(in_stack_00000030);
  plVar20 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
  puVar2 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
  if ((uVar10 & 1) == 0) {
    if (*(long *)(param_2 + 0x20) == 0) goto LAB_0339e9a4;
    uVar12 = *(uint *)(*(long *)(param_2 + 0x20) + 0x2c) >> 1 & 1;
  }
  else {
    uVar12 = 1;
  }
  plVar21 = *(long **)(param_2 + 0x28);
  uVar19 = *(undefined8 *)(in_stack_00000030 + 0x60);
  if (plVar21 != (long *)0x0) {
    lVar13 = *plVar21;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
          puVar18 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0339d5a4;
        }
        uVar10 = uVar10 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar10 != 0);
    }
    puVar18 = (undefined8 *)
              FUN_01c72498(plVar21,*(long *)
                                    Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                           ,0);
LAB_0339d5a4:
    iVar7 = (*(code *)*puVar18)(plVar21,puVar18[1]);
    if (2 < iVar7) {
      uVar11 = FUN_03392404(in_stack_00000030);
      lVar13 = *plVar20;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar13);
        lVar13 = *plVar20;
      }
      lVar23 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
      uVar22 = *(undefined8 *)PTR_DAT_04236ef0;
      if (lVar23 == 0) {
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar13);
          lVar13 = *(long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
        }
        puVar3 = Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
        uVar24 = **(undefined8 **)(lVar13 + 0xb8);
        lVar23 = thunk_FUN_01c496e0(*(undefined8 *)
                                     Method_System_Collections_Generic_HashSet<object>__ctor__);
        FUN_02b6841c(lVar23,uVar24,
                     *(undefined8 *)
                      Method_System_Collections_Generic_HashSet<ParameterExpression>_GetEnumerator__
                     ,0);
        *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar23;
      }
      uVar11 = FUN_0234eea4(uVar11,lVar23,
                            *(undefined8 *)
                             Method_System_Collections_Generic_HashSet<MaskableGraphic>__ctor__);
      uVar11 = FUN_03153bd8(uVar22,uVar11,0);
      if (param_3 == (long *)0x0) goto LAB_0339e9a4;
      plVar21 = *(long **)(param_2 + 0x28);
      uVar22 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
      }
      uVar24 = FUN_03295500(0);
      uVar11 = FUN_033704d4(*(undefined8 *)
                             Method_System_Collections_Generic_HashSet<PhotonView>_Contains__,uVar24
                            ,*(undefined8 *)(in_stack_00000030 + 0x60),uVar11,0);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                          );
      }
      uVar24 = thunk_FUN_01c495e4(param_3,*(undefined8 *)
                                           Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_MoveNext__
                                 );
      uVar11 = FUN_03358c64(uVar24,uVar22,uVar11,0);
      plVar20 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
      if (plVar21 == (long *)0x0) goto LAB_0339e9a4;
      lVar13 = *plVar21;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar18 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0339d794;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      puVar18 = (undefined8 *)FUN_01c72498(plVar21,*(long *)puVar2,1);
LAB_0339d794:
      (*(code *)*puVar18)(plVar21,3,uVar11,0,puVar18[1]);
    }
  }
  lVar13 = FUN_0339ef18(param_2,in_stack_00000030,param_5,param_3,uVar19);
  if (uVar12 != 0) {
    if (*(long *)(in_stack_00000030 + 0xd8) != 0) {
      plVar21 = (long *)FUN_027bd80c(*(long *)(in_stack_00000030 + 0xd8),
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
          piVar17 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04230960) {
              puVar18 = (undefined8 *)(lVar23 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0339d86c;
            }
            uVar10 = uVar10 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar10 != 0);
        }
        puVar18 = (undefined8 *)FUN_01c72498(plVar21,*(long *)PTR_DAT_04230960,0);
LAB_0339d86c:
        uVar10 = (*(code *)*puVar18)(plVar21,puVar18[1]);
        plVar20 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
        if ((uVar10 & 1) == 0) {
          if (plVar21 == (long *)0x0) goto LAB_0339da70;
          lVar23 = *plVar21;
          uVar10 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar10 == 0) goto LAB_0339da38;
          piVar17 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          goto LAB_0339da20;
        }
        lVar23 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
        FUN_03313b6c(lVar23,0);
        lVar14 = *plVar21;
        uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar10 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar18 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0339d8dc;
            }
            uVar10 = uVar10 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar10 != 0);
        }
        puVar18 = (undefined8 *)FUN_01c72498(plVar21,*(long *)puVar2,0);
LAB_0339d8dc:
        lVar14 = (*(code *)*puVar18)(plVar21,puVar18[1]);
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        *(long *)(lVar23 + 0x10) = lVar14;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(char *)(lVar14 + 0x80) == '\0') {
          uVar19 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
          FUN_02b67c90(uVar19,lVar23,*(undefined8 *)puVar5,0);
          uVar10 = FUN_02335b00(lVar13,uVar19,*(undefined8 *)puVar3);
          if ((uVar10 & 1) != 0) {
            if (*(long *)(lVar23 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar19 = *(undefined8 *)(*(long *)(lVar23 + 0x10) + 0x30);
            lVar14 = thunk_FUN_01c496e0(*(undefined8 *)
                                         Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Contains__
                                       );
            FUN_03313b6c(lVar14,0);
            *(undefined8 *)(lVar14 + 0x10) = uVar19;
            *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)(lVar23 + 0x10);
            in_stack_00000040 = 0;
            FUN_02f2115c(&stack0x00000040,0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__);
            *(undefined8 *)(lVar14 + 0x28) = in_stack_00000040;
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar23 = *(long *)(lVar13 + 0x10);
            lVar16 = *(long *)Method_System_Collections_Generic_HashSet<object>_Add__;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar9 = *(uint *)(lVar13 + 0x18);
            if (uVar9 < *(uint *)(lVar23 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar9 + 1;
              *(long *)(lVar23 + (long)(int)uVar9 * 8 + 0x20) = lVar14;
            }
            else {
              FUN_02d5004c(lVar13,lVar14,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
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
    uVar19 = FUN_03392404(in_stack_00000030);
    lVar14 = *plVar20;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar14);
      lVar14 = *plVar20;
    }
    lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
    if (lVar16 == 0) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar14);
        lVar14 = *plVar20;
      }
      uVar11 = **(undefined8 **)(lVar14 + 0xb8);
      lVar16 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_System_Collections_Generic_HashSet<object>__ctor__);
      FUN_02b6841c(lVar16,uVar11,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<PhotonView>__ctor__,0);
      plVar20 = (long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__;
      *(long *)(*(long *)(*(long *)Method_Photon_Voice_FrameOut<float>_get_EndOfStream__ + 0xb8) +
               0x10) = lVar16;
    }
    if (*(long *)(lVar23 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar14 = FUN_0242e528(uVar19,lVar16,*(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x60),
                          *(undefined8 *)
                           Method_System_Collections_Generic_HashSet<ParameterExpression>_Add__);
    if (lVar14 != 0) {
LAB_0339db88:
      if (*(char *)(lVar14 + 0x80) == '\0') {
        if (((uVar12 != 0) && (*(char *)(lVar23 + 0x28) != '\0')) && (*(uint *)(lVar23 + 0x2c) < 2))
        {
          if (*(long *)(lVar14 + 0x48) == 0) {
            uVar19 = FUN_03395dc8(param_2,*(undefined8 *)(lVar14 + 0x40));
            *(undefined8 *)(lVar14 + 0x48) = uVar19;
          }
          in_stack_00000058 = *(undefined8 *)(lVar14 + 0x90);
          if (*(long *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar9 = FUN_02f211a0(&stack0x00000058,*(undefined4 *)(*(long *)(param_2 + 0x20) + 0x2c),
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
          if ((uVar9 >> 1 & 1) != 0) {
            uVar19 = FUN_033931b0(lVar14);
            if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar11 = FUN_03295500(0);
            uVar19 = FUN_033985d4(uVar11,param_3,uVar19,uVar11,*(undefined8 *)(lVar14 + 0x48),
                                  *(undefined8 *)(lVar14 + 0x40));
            *(undefined8 *)(lVar23 + 0x30) = uVar19;
          }
        }
        lVar16 = FUN_03392404(in_stack_00000030);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar9 = FUN_027bd894(lVar16,lVar14,*(undefined8 *)puVar2);
        if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar14 = *(long *)(lVar23 + 0x30);
        if ((lVar14 != 0) &&
           (lVar16 = thunk_FUN_01c495e4(lVar14,*(undefined8 *)(*plVar21 + 0x40)), lVar16 == 0)) {
          uVar19 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar19,0);
        }
        if (*(uint *)(plVar21 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        plVar21[(long)(int)uVar9 + 4] = lVar14;
        *(undefined1 *)(lVar23 + 0x38) = 1;
      }
    }
  }
  goto LAB_0339dae8;
LAB_0339e690:
  plVar20 = (long *)thunk_FUN_01c495e4(plVar20,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar20 != (long *)0x0) {
    lVar14 = *plVar20;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar18 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0339e708;
        }
        uVar10 = uVar10 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar10 != 0);
    }
    puVar18 = (undefined8 *)FUN_01c72498(plVar20,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e708:
    (*(code *)*puVar18)(plVar20,puVar18[1]);
  }
  goto LAB_0339e3dc;
LAB_0339e2f4:
  plVar20 = (long *)thunk_FUN_01c495e4(plVar20,*(undefined8 *)PTR_DAT_0422fce8);
  if (plVar20 != (long *)0x0) {
    lVar14 = *plVar20;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar18 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0339e36c;
        }
        uVar10 = uVar10 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar10 != 0);
    }
    puVar18 = (undefined8 *)FUN_01c72498(plVar20,*(long *)PTR_DAT_0422fce8,0);
LAB_0339e36c:
    (*(code *)*puVar18)(plVar20,puVar18[1]);
  }
LAB_0339e3dc:
  *(undefined1 *)(lVar23 + 0x38) = 1;
  goto LAB_0339dde0;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar17 = piVar17 + 4;
    if (uVar10 == 0) break;
LAB_0339da20:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar18 = (undefined8 *)(lVar23 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0339da54;
    }
  }
LAB_0339da38:
  puVar18 = (undefined8 *)FUN_01c72498(plVar21,*(long *)PTR_DAT_0422fce8,0);
LAB_0339da54:
  (*(code *)*puVar18)(plVar21,puVar18[1]);
LAB_0339da70:
  lVar23 = FUN_03392404(in_stack_00000030);
  puVar2 = PTR_DAT_042305b8;
  if (lVar23 != 0) {
    uVar8 = FUN_027bd234(lVar23,*(undefined8 *)
                                 Method_System_Collections_Generic_HashSet<GameObject>_GetEnumerator__
                        );
    plVar21 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,uVar8);
    puVar3 = Method_System_Collections_Generic_HashSet<MaskableGraphic>_Clear__;
    puVar2 = Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Add__;
    if (lVar13 != 0) {
      FUN_02d50a3c(&stack0x00000040,lVar13,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<object>_Contains__);
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
LAB_0339dae8:
      uVar10 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3);
      lVar23 = in_stack_00000070;
      if ((uVar10 & 1) != 0) {
        if (uVar12 == 0) {
          if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
        }
        else {
          if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar14 = *(long *)(in_stack_00000070 + 0x18);
          if ((lVar14 != 0) && (*(char *)(in_stack_00000070 + 0x28) == '\0')) {
            if (*(long **)(in_stack_00000070 + 0x30) == (long *)0x0) {
              uVar8 = 1;
            }
            else if (**(long **)(in_stack_00000070 + 0x30) == *(long *)PTR_DAT_0422fc38) {
              uVar10 = OVRPlugin_OVRP_1_8_0__ovrp_GetNodeVelocity2
                                 (*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x48));
              uVar8 = 1;
              if ((uVar10 & 1) == 0) {
                uVar8 = 2;
              }
            }
            else {
              uVar8 = 2;
            }
            in_stack_00000040 = 0;
            FUN_02f2115c(&stack0x00000040,uVar8,
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<ParameterExpression>__ctor__);
            *(undefined8 *)(lVar23 + 0x28) = in_stack_00000040;
          }
        }
        lVar14 = *(long *)(lVar23 + 0x20);
        if (lVar14 == 0) goto LAB_0339dc90;
        goto LAB_0339db88;
      }
      FUN_029fd610(&stack0x00000060,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
      if (param_6 != 0) {
        uVar19 = (**(code **)(param_6 + 0x18))
                           (*(undefined8 *)(param_6 + 0x40),plVar21,*(undefined8 *)(param_6 + 0x28))
        ;
        if (param_7 != 0) {
          FUN_0339c944(param_2,param_3,param_7,uVar19);
        }
        FUN_0339cd08(param_2,param_3,in_stack_00000030,uVar19);
        FUN_02d50a3c(&stack0x00000040,lVar13,
                     *(undefined8 *)Method_System_Collections_Generic_HashSet<object>_Contains__);
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        in_stack_00000070 = in_stack_00000050;
LAB_0339dde0:
        do {
          while( true ) {
            do {
              uVar10 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3);
              lVar23 = in_stack_00000070;
              if ((uVar10 & 1) == 0) {
                FUN_029fd610(&stack0x00000060,
                             *(undefined8 *)
                              Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
                  FUN_02d50a3c(&stack0x00000040,lVar13,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<object>_Contains__);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar10 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3),
                        (uVar10 & 1) != 0) {
                    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                       ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                        ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                      lVar23 = *(long *)(in_stack_00000030 + 0xe0);
                      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      (**(code **)(lVar23 + 0x18))
                                (*(undefined8 *)(lVar23 + 0x40),uVar19,
                                 *(undefined8 *)(in_stack_00000070 + 0x10),
                                 *(undefined8 *)(in_stack_00000070 + 0x30),
                                 *(undefined8 *)(lVar23 + 0x28));
                    }
                  }
                  FUN_029fd610(&stack0x00000060,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                }
                if (uVar12 != 0) {
                  FUN_02d50a3c(&stack0x00000040,lVar13,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<object>_Contains__);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  while (uVar10 = FUN_029fd614(&stack0x00000060,*(undefined8 *)puVar3),
                        lVar13 = in_stack_00000070, (uVar10 & 1) != 0) {
                    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    if (*(long *)(in_stack_00000070 + 0x18) != 0) {
                      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      uVar8 = (**(code **)(*param_3 + 0x1b8))
                                        (param_3,*(undefined8 *)(*param_3 + 0x1c0));
                      FUN_0339f5a0(param_2,uVar19,param_3,in_stack_00000030,uVar8,
                                   *(undefined8 *)(lVar13 + 0x18),*(undefined4 *)(lVar13 + 0x2c),
                                   *(char *)(lVar13 + 0x38) == '\0');
                    }
                  }
                  FUN_029fd610(&stack0x00000060,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
                }
                FUN_0339cf34(param_2,param_3,in_stack_00000030,uVar19);
                return uVar19;
              }
              if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
            } while ((((*(char *)(in_stack_00000070 + 0x38) != '\0') ||
                      (lVar14 = *(long *)(in_stack_00000070 + 0x18), lVar14 == 0)) ||
                     (*(char *)(lVar14 + 0x80) != '\0')) ||
                    ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
                     ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
            lVar16 = *(long *)(in_stack_00000070 + 0x30);
            uVar10 = FUN_0339c840(param_2,lVar14,in_stack_00000030,lVar16);
            if ((uVar10 & 1) == 0) break;
            plVar20 = *(long **)(lVar14 + 0x68);
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar14 = *plVar20;
            uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar10 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar18 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_0339df04;
                }
                uVar10 = uVar10 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar10 != 0);
            }
            puVar18 = (undefined8 *)
                      FUN_01c72498(plVar20,*(long *)
                                            Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                   ,0);
LAB_0339df04:
            (*(code *)*puVar18)(plVar20,uVar19,lVar16,puVar18[1]);
            *(undefined1 *)(lVar23 + 0x38) = 1;
          }
        } while ((lVar16 == 0) || (*(char *)(lVar14 + 0x82) != '\0'));
        if (*(long *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        plVar20 = *(long **)(*(long *)(param_2 + 0x20) + 0x40);
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar15 = *plVar20;
        uVar11 = *(undefined8 *)(lVar14 + 0x40);
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar10 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) ==
                *(long *)
                 Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__) {
              puVar18 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0339df30;
            }
            uVar10 = uVar10 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar10 != 0);
        }
        puVar18 = (undefined8 *)
                  FUN_01c72498(plVar20,*(long *)
                                        Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<DelaunayTriangle>_Clear__
                               ,0);
LAB_0339df30:
        plVar20 = (long *)(*(code *)*puVar18)(plVar20,uVar11,puVar18[1]);
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
            plVar20 = *(long **)(lVar14 + 0x68);
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar14 = *plVar20;
            uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar10 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar18 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_0339e000;
                }
                uVar10 = uVar10 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar10 != 0);
            }
            puVar18 = (undefined8 *)
                      FUN_01c72498(plVar20,*(long *)
                                            Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                   ,1);
LAB_0339e000:
            lVar14 = (*(code *)*puVar18)(plVar20,uVar19,puVar18[1]);
            if (lVar14 != 0) {
              uVar11 = thunk_FUN_01c5d21c(lVar14,0);
              plVar20 = (long *)FUN_03395e54(param_2,uVar11);
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
                uVar11 = *(undefined8 *)PTR_DAT_04237778;
                plVar21 = (long *)thunk_FUN_01c495e4(lVar14);
                if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar14,uVar11);
                }
              }
              else {
                plVar21 = (long *)FUN_0338eda8(plVar20,lVar14);
                if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
              }
              lVar14 = *plVar21;
              uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar10 != 0) {
                piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04237778) {
                    puVar18 = (undefined8 *)(lVar14 + (long)(*piVar17 + 6) * 0x10 + 0x138);
                    goto LAB_0339e104;
                  }
                  uVar10 = uVar10 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar10 != 0);
              }
              puVar18 = (undefined8 *)FUN_01c72498(plVar21,*(long *)PTR_DAT_04237778,6);
LAB_0339e104:
              uVar10 = (*(code *)*puVar18)(plVar21,puVar18[1]);
              if ((uVar10 & 1) == 0) {
                if (*(char *)((long)plVar20 + 0xf1) == '\0') {
                  uVar11 = *(undefined8 *)PTR_DAT_04237778;
                  plVar20 = (long *)thunk_FUN_01c495e4(lVar16,uVar11);
                  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d748(lVar16,uVar11);
                  }
                }
                else {
                  plVar20 = (long *)FUN_0338eda8(plVar20,lVar16);
                  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                }
                lVar14 = *plVar20;
                uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar10 != 0) {
                  piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) ==
                        *(long *)
                         System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                       ) {
                      puVar18 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_0339e1a8;
                    }
                    uVar10 = uVar10 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar10 != 0);
                }
                puVar18 = (undefined8 *)
                          FUN_01c72498(plVar20,*(long *)
                                                System_Security_Cryptography_CryptographicUnexpectedOperationException_TypeInfo
                                       ,0);
LAB_0339e1a8:
                plVar20 = (long *)(*(code *)*puVar18)(plVar20,puVar18[1]);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                do {
                  lVar14 = *plVar20;
                  uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar10 != 0) {
                    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04230960) {
                        puVar18 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                        goto LAB_0339e210;
                      }
                      uVar10 = uVar10 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar18 = (undefined8 *)FUN_01c72498(plVar20,*(long *)PTR_DAT_04230960,0);
LAB_0339e210:
                  uVar10 = (*(code *)*puVar18)(plVar20,puVar18[1]);
                  if ((uVar10 & 1) == 0) goto LAB_0339e2f4;
                  lVar14 = *plVar20;
                  uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar10 != 0) {
                    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04230960) {
                        puVar18 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                        goto LAB_0339e278;
                      }
                      uVar10 = uVar10 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar18 = (undefined8 *)FUN_01c72498(plVar20,*(long *)PTR_DAT_04230960,1);
LAB_0339e278:
                  uVar11 = (*(code *)*puVar18)(plVar20,puVar18[1]);
                  lVar14 = *plVar21;
                  uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar10 != 0) {
                    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04237778) {
                        puVar18 = (undefined8 *)(lVar14 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                        goto LAB_0339e2e0;
                      }
                      uVar10 = uVar10 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar18 = (undefined8 *)FUN_01c72498(plVar21,*(long *)PTR_DAT_04237778,2);
LAB_0339e2e0:
                  (*(code *)*puVar18)(plVar21,uVar11,puVar18[1]);
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
            plVar21 = *(long **)(lVar14 + 0x68);
            if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar14 = *plVar21;
            uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar10 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar18 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_0339e44c;
                }
                uVar10 = uVar10 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar10 != 0);
            }
            puVar18 = (undefined8 *)
                      FUN_01c72498(plVar21,*(long *)
                                            Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                   ,1);
LAB_0339e44c:
            lVar14 = (*(code *)*puVar18)(plVar21,uVar19,puVar18[1]);
            if (lVar14 != 0) {
              if ((char)plVar20[0x20] == '\0') {
                uVar11 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                plVar21 = (long *)thunk_FUN_01c495e4(lVar14,uVar11);
                if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar14,uVar11);
                }
              }
              else {
                plVar21 = (long *)OVRPlugin_Sizei___cctor(plVar20,lVar14);
              }
              if ((char)plVar20[0x20] == '\0') {
                uVar11 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
                plVar20 = (long *)thunk_FUN_01c495e4(lVar16,uVar11);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d748(lVar16,uVar11);
                }
              }
              else {
                plVar20 = (long *)OVRPlugin_Sizei___cctor(plVar20,lVar16);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
              }
              lVar14 = *plVar20;
              uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar10 != 0) {
                piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) ==
                      *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                    puVar18 = (undefined8 *)(lVar14 + (long)(*piVar17 + 9) * 0x10 + 0x138);
                    goto LAB_0339e538;
                  }
                  uVar10 = uVar10 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar10 != 0);
              }
              puVar18 = (undefined8 *)
                        FUN_01c72498(plVar20,*(long *)
                                              System_Security_Cryptography_CryptoConfig_TypeInfo,9);
LAB_0339e538:
              plVar20 = (long *)(*(code *)*puVar18)(plVar20,puVar18[1]);
              if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              do {
                lVar14 = *plVar20;
                uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar10 != 0) {
                  piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04230960) {
                      puVar18 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_0339e5a0;
                    }
                    uVar10 = uVar10 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar10 != 0);
                }
                puVar18 = (undefined8 *)FUN_01c72498(plVar20,*(long *)PTR_DAT_04230960,0);
LAB_0339e5a0:
                uVar10 = (*(code *)*puVar18)(plVar20,puVar18[1]);
                if ((uVar10 & 1) == 0) goto LAB_0339e690;
                lVar14 = *plVar20;
                uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar10 != 0) {
                  piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04236800) {
                      puVar18 = (undefined8 *)(lVar14 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                      goto LAB_0339e608;
                    }
                    uVar10 = uVar10 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar10 != 0);
                }
                puVar18 = (undefined8 *)FUN_01c72498(plVar20,*(long *)PTR_DAT_04236800,2);
LAB_0339e608:
                auVar25 = (*(code *)*puVar18)(plVar20,puVar18[1]);
                if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                lVar14 = *plVar21;
                uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar10 != 0) {
                  piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) ==
                        *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
                      puVar18 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                      goto LAB_0339e678;
                    }
                    uVar10 = uVar10 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar10 != 0);
                }
                puVar18 = (undefined8 *)
                          FUN_01c72498(plVar21,*(long *)
                                                System_Security_Cryptography_CryptoConfig_TypeInfo,1
                                      );
LAB_0339e678:
                (*(code *)*puVar18)(plVar21,auVar25._0_8_,auVar25._8_8_,puVar18[1]);
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


