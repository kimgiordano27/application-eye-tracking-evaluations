/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer.CalculateRotationParams_00000D70$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0250bb6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 135
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate__Invoke
               (void)

{
  byte bVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  int *piVar18;
  long unaff_x19;
  long *plVar19;
  undefined8 unaff_x21;
  long *unaff_x22;
  int iVar20;
  long unaff_x27;
  long unaff_x28;
  long *plVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(OVRTask<List<OVRPlugin_Result>>_TypeInfo);
  thunk_FUN_00d48444(Method_System_Char_System_IConvertible_ToSingle__);
  thunk_FUN_00d48444(Method_UnityEngine_Material_SetMatrixArray__);
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__26>__
                    );
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<ObiCollisionMaterialHandle>_Add__);
  thunk_FUN_00d48444(StringLiteral_12213);
  *(undefined1 *)(unaff_x19 + 0x92c) = 1;
  plVar19 = (long *)Method_Obi_ObiNativeList<int>_Swap__;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  auVar25 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  if (unaff_x22 != (long *)0x0) {
    lVar14 = *unaff_x22;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)Method_Obi_ObiNativeList<int>_Swap__) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_0250bc28;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724();
LAB_0250bc28:
    (*(code *)*puVar10)();
    _in_stack_00000040 = FUN_0265c818();
    uVar17 = UnityEngine_XR_Interaction_Toolkit_Inputs_InputActionManager__DisableInput();
    if ((uVar17 & 1) != 0) {
      _in_stack_00000030 = FUN_0265ca84(&stack0x00000040,0);
      auVar5._8_8_ = in_stack_00000028;
      auVar5._0_8_ = in_stack_00000020;
      auVar25._8_8_ = in_stack_00000018;
      auVar25._0_8_ = in_stack_00000010;
      plVar11 = *(long **)(unaff_x27 + 0xa0);
      auVar3 = _in_stack_00000030;
      auVar4 = _in_stack_00000040;
      if (plVar11 == (long *)0x0) goto LAB_0250c17c;
      uVar12 = (**(code **)(*plVar11 + 0x288))(plVar11,*(undefined8 *)(*plVar11 + 0x290));
      if (*(int *)(*(long *)Method_UnityEngine_Material_SetMatrixArray__ + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Method_UnityEngine_Material_SetMatrixArray__);
      }
      FUN_026c52cc(&stack0x00000030,uVar12,0);
    }
    uVar12 = DAT_028aac58;
    fVar6 = DAT_028aa040;
    iVar20 = 0;
    fVar23 = 1.0;
    plVar11 = (long *)PTR_DAT_033f5368;
    plVar21 = (long *)Method_System_Xml_Serialization_XmlSerializer_Deserialize__;
    do {
      lVar14 = *unaff_x22;
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *plVar19) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0250bd30;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724();
LAB_0250bd30:
      iVar9 = (*(code *)*puVar10)();
      if (iVar9 <= iVar20) {
        auVar25 = FUN_0265ca90(in_stack_00000040,in_stack_00000048,0);
        FUN_02508b68(unaff_x27,unaff_x28,unaff_x21,auVar25._0_8_,auVar25._8_8_);
        FUN_0265ca90(in_stack_00000040,in_stack_00000048,0);
        return;
      }
      lVar14 = *unaff_x22;
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *plVar11) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0250bd90;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724();
LAB_0250bd90:
      lVar14 = (*(code *)*puVar10)();
      auVar25 = _in_stack_00000010;
      auVar3 = _in_stack_00000030;
      auVar4 = _in_stack_00000040;
      auVar5 = _in_stack_00000020;
      if (lVar14 == 0) break;
      plVar15 = *(long **)(lVar14 + 0x28);
      if (plVar15 == (long *)0x0) {
LAB_0250bdc8:
        plVar15 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*plVar21 + 300);
        if (*(byte *)(*plVar15 + 300) < bVar1) goto LAB_0250bdc8;
        if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *plVar21) {
          plVar15 = (long *)0x0;
        }
      }
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_0268b4e0(plVar15,0,0);
      if ((uVar17 & 1) == 0) {
        plVar16 = *(long **)(lVar14 + 0x28);
        if (plVar16 == (long *)0x0) {
LAB_0250be38:
          plVar16 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)StringLiteral_7859 + 300);
          if (*(byte *)(*plVar16 + 300) < bVar1) goto LAB_0250be38;
          if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)StringLiteral_7859) {
            plVar16 = (long *)0x0;
          }
        }
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_02681b9c(plVar16,0,0);
        fVar24 = fVar6;
        auVar25 = _in_stack_00000010;
        auVar3 = _in_stack_00000030;
        auVar4 = _in_stack_00000040;
        auVar5 = _in_stack_00000020;
        if ((uVar17 & 1) != 0) {
          if (plVar16 == (long *)0x0) break;
          fVar24 = *(float *)((long)plVar16 + 0x24);
        }
        if (plVar15 == (long *)0x0) break;
        auVar25 = (**(code **)(*plVar15 + 0x198))
                            (plVar15,in_stack_00000050,in_stack_00000058,unaff_x21,
                             *(undefined8 *)(*plVar15 + 0x1a0));
        _in_stack_00000020 = auVar25;
        _in_stack_00000070 = auVar25;
        uVar17 = FUN_01131cc4(&stack0x00000070,
                              *(undefined8 *)
                               Oculus_Interaction_FirstHoverInteractorGroup_<>c_TypeInfo);
        if ((uVar17 & 1) != 0) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List<ObiCollisionMaterialHandle>_Add__ +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar17 = FUN_01131118(&stack0x00000020,
                                *(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__26>__
                               );
          if ((uVar17 & 1) != 0) {
            auVar25 = FUN_0265c168(in_stack_00000020,in_stack_00000028,0);
            _in_stack_00000010 = auVar25;
            auVar25 = FUN_0265c12c(&stack0x00000010,0);
            _in_stack_00000030 = auVar25;
            if (*(int *)(*(long *)Method_UnityEngine_Material_SetMatrixArray__ + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar13 = FUN_01132c70(&stack0x00000030,
                                  *(undefined8 *)Method_System_Char_System_IConvertible_ToSingle__);
            auVar25 = _in_stack_00000010;
            auVar3 = _in_stack_00000030;
            auVar4 = _in_stack_00000040;
            auVar5 = _in_stack_00000020;
            if ((*(long *)(unaff_x27 + 0xa0) == 0) || (lVar13 == 0)) break;
            fVar22 = *(float *)(*(long *)(unaff_x27 + 0xa0) + 0x10) * *(float *)(lVar13 + 0x10);
            fVar2 = fVar22;
            if (1.0 < fVar22) {
              fVar2 = fVar23;
            }
            if (fVar22 < 0.0) {
              fVar2 = 0.0;
            }
            FUN_0265c264(fVar2,&stack0x00000010,0);
            auVar25 = _in_stack_00000010;
            auVar3 = _in_stack_00000030;
            auVar4 = _in_stack_00000040;
            auVar5 = _in_stack_00000020;
            if (*(long *)(unaff_x27 + 0xa0) == 0) break;
            fVar22 = *(float *)(*(long *)(unaff_x27 + 0xa0) + 0x14);
            fVar2 = fVar22;
            if (1.0 < fVar22) {
              fVar2 = fVar23;
            }
            if (fVar22 < -1.0) {
              fVar2 = -1.0;
            }
            FUN_0265c388(fVar2,&stack0x00000010,0);
            auVar25 = _in_stack_00000010;
            auVar3 = _in_stack_00000030;
            auVar4 = _in_stack_00000040;
            auVar5 = _in_stack_00000020;
            if (*(long *)(unaff_x27 + 0xa0) == 0) break;
            fVar22 = *(float *)(*(long *)(unaff_x27 + 0xa0) + 0x18);
            fVar2 = fVar22;
            if (1.0 < fVar22) {
              fVar2 = fVar23;
            }
            if (fVar22 < 0.0) {
              fVar2 = 0.0;
            }
            UnityEngine_UIElements_DynamicAtlas_TextureInfo__Create(fVar2,&stack0x00000010,0);
          }
          uVar8 = in_stack_00000028;
          uVar7 = in_stack_00000020;
          auVar26 = FUN_0265ca90(in_stack_00000040,in_stack_00000048,0);
          lVar13 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12213);
          auVar25 = _in_stack_00000010;
          auVar3 = _in_stack_00000030;
          auVar4 = _in_stack_00000040;
          auVar5 = _in_stack_00000020;
          if (lVar13 == 0) break;
          FUN_017b46ec(lVar13,0);
          FUN_0251190c((double)fVar24,uVar12,lVar13,lVar14,uVar7,uVar8,auVar26._0_8_,auVar26._8_8_);
          auVar25 = _in_stack_00000010;
          auVar3 = _in_stack_00000030;
          auVar4 = _in_stack_00000040;
          auVar5 = _in_stack_00000020;
          if (unaff_x28 == 0) break;
          FUN_01305fc8(unaff_x28,lVar13,
                       *(undefined8 *)
                        Method_System_Threading_Tasks_TaskExceptionHolder_AddFaultException__);
          _in_stack_00000070 = _in_stack_00000020;
          _in_stack_00000060 = _in_stack_00000040;
          FUN_01132ae0(&stack0x00000050,&stack0x00000070,0,&stack0x00000060,iVar20,
                       *(undefined8 *)OVRTask<List<OVRPlugin_Result>>_TypeInfo);
          auVar25 = _in_stack_00000020;
          FUN_024feaac(lVar14);
          _in_stack_00000070 = auVar25;
          FUN_01132650(&stack0x00000070,
                       *(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberList_TypeInfo);
          auVar25 = _in_stack_00000020;
          FUN_025003fc(lVar14);
          _in_stack_00000070 = auVar25;
          FUN_01132004(&stack0x00000070,*(undefined8 *)PTR_DAT_033f4a98);
          _in_stack_00000060 = _in_stack_00000020;
          _in_stack_00000070 = _in_stack_00000040;
          FUN_01132380(0x3f800000,&stack0x00000070,&stack0x00000060,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_SpatialAnchorCoreBuildingBlock_<WaitForInit>d__22>__
                      );
          plVar19 = (long *)Method_Obi_ObiNativeList<int>_Swap__;
          plVar11 = (long *)PTR_DAT_033f5368;
          plVar21 = (long *)Method_System_Xml_Serialization_XmlSerializer_Deserialize__;
        }
      }
      iVar20 = iVar20 + 1;
    } while( true );
  }
LAB_0250c17c:
  _in_stack_00000010 = auVar25;
  _in_stack_00000030 = auVar3;
  _in_stack_00000020 = auVar5;
  _in_stack_00000040 = auVar4;
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


