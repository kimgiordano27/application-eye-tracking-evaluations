/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer.CalculateRotationParams_00000D70$BurstDirectCall$$.cctor
ENTRY_POINT: 0250bf48
PROGRAM: Lovesick-libil2cpp.so
SCORE: 118
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_BurstDirectCall___cctor
               (undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long unaff_x24;
  long unaff_x27;
  long unaff_x28;
  float fVar15;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined1 auVar16 [16];
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
  
  while( true ) {
    lVar10 = FUN_01132c70(param_1,param_2);
    if ((*(long *)(unaff_x27 + 0xa0) == 0) || (lVar10 == 0)) break;
    fVar15 = *(float *)(*(long *)(unaff_x27 + 0xa0) + 0x10) * *(float *)(lVar10 + 0x10);
    fVar2 = fVar15;
    if (unaff_s9 < fVar15) {
      fVar2 = unaff_s9;
    }
    if (fVar15 < 0.0) {
      fVar2 = unaff_s12;
    }
    FUN_0265c264(fVar2,&stack0x00000010,0);
    if (*(long *)(unaff_x27 + 0xa0) == 0) break;
    fVar15 = *(float *)(*(long *)(unaff_x27 + 0xa0) + 0x14);
    fVar2 = fVar15;
    if (unaff_s9 < fVar15) {
      fVar2 = unaff_s9;
    }
    if (fVar15 < unaff_s13) {
      fVar2 = unaff_s13;
    }
    FUN_0265c388(fVar2,&stack0x00000010,0);
    if (*(long *)(unaff_x27 + 0xa0) == 0) break;
    fVar15 = *(float *)(*(long *)(unaff_x27 + 0xa0) + 0x18);
    fVar2 = fVar15;
    if (unaff_s9 < fVar15) {
      fVar2 = unaff_s9;
    }
    if (fVar15 < 0.0) {
      fVar2 = unaff_s12;
    }
    UnityEngine_UIElements_DynamicAtlas_TextureInfo__Create(fVar2,&stack0x00000010,0);
    do {
      uVar7 = in_stack_00000028;
      uVar6 = in_stack_00000020;
      auVar16 = FUN_0265ca90(in_stack_00000040,in_stack_00000048,0);
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12213);
      if (lVar10 == 0) goto LAB_0250c17c;
      FUN_017b46ec(lVar10,0);
      FUN_0251190c((double)unaff_s10,lVar10,unaff_x24,uVar6,uVar7,auVar16._0_8_,auVar16._8_8_);
      if (unaff_x28 == 0) goto LAB_0250c17c;
      FUN_01305fc8(unaff_x28,lVar10,
                   *(undefined8 *)
                    Method_System_Threading_Tasks_TaskExceptionHolder_AddFaultException__);
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000068 = in_stack_00000048;
      _in_stack_00000070 = _in_stack_00000020;
      FUN_01132ae0(&stack0x00000050,&stack0x00000070,0,&stack0x00000060,unaff_w23,
                   *(undefined8 *)OVRTask<List<OVRPlugin_Result>>_TypeInfo);
      auVar16 = _in_stack_00000020;
      FUN_024feaac(unaff_x24);
      _in_stack_00000070 = auVar16;
      FUN_01132650(&stack0x00000070,
                   *(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberList_TypeInfo);
      auVar16 = _in_stack_00000020;
      FUN_025003fc(unaff_x24);
      _in_stack_00000070 = auVar16;
      FUN_01132004(&stack0x00000070,*(undefined8 *)PTR_DAT_033f4a98);
      in_stack_00000070 = in_stack_00000040;
      in_stack_00000078 = in_stack_00000048;
      _in_stack_00000060 = _in_stack_00000020;
      FUN_01132380(&stack0x00000070,&stack0x00000060,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_SpatialAnchorCoreBuildingBlock_<WaitForInit>d__22>__
                  );
      puVar5 = Method_System_Xml_Serialization_XmlSerializer_Deserialize__;
      puVar4 = Method_Obi_ObiNativeList<int>_Swap__;
      puVar3 = PTR_DAT_033f5368;
      do {
        do {
          unaff_w23 = unaff_w23 + 1;
          lVar10 = *unaff_x22;
          uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                puVar9 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0250bd30;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_00d59724();
LAB_0250bd30:
          iVar8 = (*(code *)*puVar9)();
          if (iVar8 <= unaff_w23) {
            auVar16 = FUN_0265ca90(in_stack_00000040,in_stack_00000048,0);
            FUN_02508b68(unaff_x27,unaff_x28,unaff_x21,auVar16._0_8_,auVar16._8_8_);
            FUN_0265ca90(in_stack_00000040,in_stack_00000048,0);
            return;
          }
          lVar10 = *unaff_x22;
          uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0250bd90;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_00d59724();
LAB_0250bd90:
          unaff_x24 = (*(code *)*puVar9)();
          if (unaff_x24 == 0) goto LAB_0250c17c;
          plVar11 = *(long **)(unaff_x24 + 0x28);
          if (plVar11 == (long *)0x0) {
LAB_0250bdc8:
            plVar11 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)puVar5 + 300);
            if (*(byte *)(*plVar11 + 300) < bVar1) goto LAB_0250bdc8;
            if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5) {
              plVar11 = (long *)0x0;
            }
          }
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar13 = FUN_0268b4e0(plVar11,0,0);
        } while ((uVar13 & 1) != 0);
        plVar12 = *(long **)(unaff_x24 + 0x28);
        if (plVar12 == (long *)0x0) {
LAB_0250be38:
          plVar12 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)StringLiteral_7859 + 300);
          if (*(byte *)(*plVar12 + 300) < bVar1) goto LAB_0250be38;
          if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)StringLiteral_7859) {
            plVar12 = (long *)0x0;
          }
        }
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar13 = FUN_02681b9c(plVar12,0,0);
        unaff_s10 = unaff_s11;
        if ((uVar13 & 1) != 0) {
          if (plVar12 == (long *)0x0) goto LAB_0250c17c;
          unaff_s10 = *(float *)((long)plVar12 + 0x24);
        }
        if (plVar11 == (long *)0x0) goto LAB_0250c17c;
        auVar16 = (**(code **)(*plVar11 + 0x198))
                            (plVar11,in_stack_00000050,in_stack_00000058,unaff_x21,
                             *(undefined8 *)(*plVar11 + 0x1a0));
        _in_stack_00000020 = auVar16;
        _in_stack_00000070 = auVar16;
        uVar13 = FUN_01131cc4(&stack0x00000070,
                              *(undefined8 *)
                               Oculus_Interaction_FirstHoverInteractorGroup_<>c_TypeInfo);
      } while ((uVar13 & 1) == 0);
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<ObiCollisionMaterialHandle>_Add__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_01131118(&stack0x00000020,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__26>__
                           );
    } while ((uVar13 & 1) == 0);
    auVar16 = FUN_0265c168(in_stack_00000020,in_stack_00000028,0);
    _in_stack_00000010 = auVar16;
    auVar16 = FUN_0265c12c(&stack0x00000010,0);
    _in_stack_00000030 = auVar16;
    if (*(int *)(*(long *)Method_UnityEngine_Material_SetMatrixArray__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    param_1 = &stack0x00000030;
    param_2 = *(undefined8 *)Method_System_Char_System_IConvertible_ToSingle__;
  }
LAB_0250c17c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


