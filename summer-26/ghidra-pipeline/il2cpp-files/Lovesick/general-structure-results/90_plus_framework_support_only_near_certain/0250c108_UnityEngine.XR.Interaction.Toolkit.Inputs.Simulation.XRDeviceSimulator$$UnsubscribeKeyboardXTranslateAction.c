/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator$$UnsubscribeKeyboardXTranslateAction
ENTRY_POINT: 0250c108
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


void UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__UnsubscribeKeyboardXTranslateAction
               (void)

{
  byte bVar1;
  float fVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  int *piVar13;
  undefined **unaff_x19;
  long *plVar14;
  undefined **unaff_x20;
  long *plVar15;
  undefined8 unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long unaff_x27;
  long unaff_x28;
  float fVar16;
  float unaff_s9;
  float fVar17;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined1 auVar18 [16];
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
  
  do {
    puVar3 = Method_System_Xml_Serialization_XmlSerializer_Deserialize__;
    plVar14 = (long *)unaff_x19[0x1f7];
    plVar15 = (long *)unaff_x20[0x6d];
    do {
      do {
        unaff_w23 = unaff_w23 + 1;
        lVar9 = *unaff_x22;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar14) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0250bd30;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724();
LAB_0250bd30:
        iVar6 = (*(code *)*puVar7)();
        if (iVar6 <= unaff_w23) {
          auVar18 = FUN_0265ca90(in_stack_00000040,in_stack_00000048,0);
          FUN_02508b68(unaff_x27,unaff_x28,unaff_x21,auVar18._0_8_,auVar18._8_8_);
          FUN_0265ca90(in_stack_00000040,in_stack_00000048,0);
          return;
        }
        lVar9 = *unaff_x22;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar15) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0250bd90;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724();
LAB_0250bd90:
        lVar9 = (*(code *)*puVar7)();
        if (lVar9 == 0) goto LAB_0250c17c;
        plVar10 = *(long **)(lVar9 + 0x28);
        if (plVar10 == (long *)0x0) {
LAB_0250bdc8:
          plVar10 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)puVar3 + 300);
          if (*(byte *)(*plVar10 + 300) < bVar1) goto LAB_0250bdc8;
          if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3) {
            plVar10 = (long *)0x0;
          }
        }
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_0268b4e0(plVar10,0,0);
      } while ((uVar12 & 1) != 0);
      plVar11 = *(long **)(lVar9 + 0x28);
      if (plVar11 == (long *)0x0) {
LAB_0250be38:
        plVar11 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*(long *)StringLiteral_7859 + 300);
        if (*(byte *)(*plVar11 + 300) < bVar1) goto LAB_0250be38;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)StringLiteral_7859) {
          plVar11 = (long *)0x0;
        }
      }
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_02681b9c(plVar11,0,0);
      fVar17 = unaff_s11;
      if ((uVar12 & 1) != 0) {
        if (plVar11 == (long *)0x0) goto LAB_0250c17c;
        fVar17 = *(float *)((long)plVar11 + 0x24);
      }
      if (plVar10 == (long *)0x0) goto LAB_0250c17c;
      auVar18 = (**(code **)(*plVar10 + 0x198))
                          (plVar10,in_stack_00000050,in_stack_00000058,unaff_x21,
                           *(undefined8 *)(*plVar10 + 0x1a0));
      _in_stack_00000020 = auVar18;
      _in_stack_00000070 = auVar18;
      uVar12 = FUN_01131cc4(&stack0x00000070,
                            *(undefined8 *)Oculus_Interaction_FirstHoverInteractorGroup_<>c_TypeInfo
                           );
    } while ((uVar12 & 1) == 0);
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<ObiCollisionMaterialHandle>_Add__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_01131118(&stack0x00000020,
                          *(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__26>__
                         );
    if ((uVar12 & 1) != 0) {
      auVar18 = FUN_0265c168(in_stack_00000020,in_stack_00000028,0);
      _in_stack_00000010 = auVar18;
      auVar18 = FUN_0265c12c(&stack0x00000010,0);
      _in_stack_00000030 = auVar18;
      if (*(int *)(*(long *)Method_UnityEngine_Material_SetMatrixArray__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar8 = FUN_01132c70(&stack0x00000030,
                           *(undefined8 *)Method_System_Char_System_IConvertible_ToSingle__);
      if ((*(long *)(unaff_x27 + 0xa0) == 0) || (lVar8 == 0)) {
LAB_0250c17c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar16 = *(float *)(*(long *)(unaff_x27 + 0xa0) + 0x10) * *(float *)(lVar8 + 0x10);
      fVar2 = fVar16;
      if (unaff_s9 < fVar16) {
        fVar2 = unaff_s9;
      }
      if (fVar16 < 0.0) {
        fVar2 = unaff_s12;
      }
      FUN_0265c264(fVar2,&stack0x00000010,0);
      if (*(long *)(unaff_x27 + 0xa0) == 0) goto LAB_0250c17c;
      fVar16 = *(float *)(*(long *)(unaff_x27 + 0xa0) + 0x14);
      fVar2 = fVar16;
      if (unaff_s9 < fVar16) {
        fVar2 = unaff_s9;
      }
      if (fVar16 < unaff_s13) {
        fVar2 = unaff_s13;
      }
      FUN_0265c388(fVar2,&stack0x00000010,0);
      if (*(long *)(unaff_x27 + 0xa0) == 0) goto LAB_0250c17c;
      fVar16 = *(float *)(*(long *)(unaff_x27 + 0xa0) + 0x18);
      fVar2 = fVar16;
      if (unaff_s9 < fVar16) {
        fVar2 = unaff_s9;
      }
      if (fVar16 < 0.0) {
        fVar2 = unaff_s12;
      }
      UnityEngine_UIElements_DynamicAtlas_TextureInfo__Create(fVar2,&stack0x00000010,0);
    }
    uVar5 = in_stack_00000028;
    uVar4 = in_stack_00000020;
    auVar18 = FUN_0265ca90(in_stack_00000040,in_stack_00000048,0);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12213);
    if (lVar8 == 0) goto LAB_0250c17c;
    FUN_017b46ec(lVar8,0);
    FUN_0251190c((double)fVar17,lVar8,lVar9,uVar4,uVar5,auVar18._0_8_,auVar18._8_8_);
    if (unaff_x28 == 0) goto LAB_0250c17c;
    FUN_01305fc8(unaff_x28,lVar8,
                 *(undefined8 *)
                  Method_System_Threading_Tasks_TaskExceptionHolder_AddFaultException__);
    in_stack_00000060 = in_stack_00000040;
    in_stack_00000068 = in_stack_00000048;
    _in_stack_00000070 = _in_stack_00000020;
    FUN_01132ae0(&stack0x00000050,&stack0x00000070,0,&stack0x00000060,unaff_w23,
                 *(undefined8 *)OVRTask<List<OVRPlugin_Result>>_TypeInfo);
    auVar18 = _in_stack_00000020;
    FUN_024feaac(lVar9);
    _in_stack_00000070 = auVar18;
    FUN_01132650(&stack0x00000070,
                 *(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberList_TypeInfo);
    auVar18 = _in_stack_00000020;
    FUN_025003fc(lVar9);
    _in_stack_00000070 = auVar18;
    FUN_01132004(&stack0x00000070,*(undefined8 *)PTR_DAT_033f4a98);
    in_stack_00000070 = in_stack_00000040;
    in_stack_00000078 = in_stack_00000048;
    _in_stack_00000060 = _in_stack_00000020;
    FUN_01132380(&stack0x00000070,&stack0x00000060,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_SpatialAnchorCoreBuildingBlock_<WaitForInit>d__22>__
                );
    unaff_x19 = &Method_System_Nullable<TypeNameHandling>_GetValueOrDefault__;
    unaff_x20 = &PTR_DAT_033f5000;
  } while( true );
}


