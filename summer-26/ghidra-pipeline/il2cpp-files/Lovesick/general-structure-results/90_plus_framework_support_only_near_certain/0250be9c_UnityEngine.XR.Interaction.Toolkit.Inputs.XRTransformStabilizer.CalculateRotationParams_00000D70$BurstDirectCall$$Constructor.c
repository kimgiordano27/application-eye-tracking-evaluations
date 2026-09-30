/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer.CalculateRotationParams_00000D70$BurstDirectCall$$Constructor
ENTRY_POINT: 0250be9c
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


void UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_BurstDirectCall__Constructor
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long unaff_x24;
  long unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  float fVar11;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined1 auVar12 [16];
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
    auVar12 = (**(code **)(param_1 + 0x198))
                        (param_2,param_3,param_4,unaff_x21,*(undefined8 *)(param_1 + 0x1a0));
    _in_stack_00000020 = auVar12;
    _in_stack_00000070 = auVar12;
    uVar7 = FUN_01131cc4(&stack0x00000070,
                         *(undefined8 *)Oculus_Interaction_FirstHoverInteractorGroup_<>c_TypeInfo);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<ObiCollisionMaterialHandle>_Add__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar7 = FUN_01131118(&stack0x00000020,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__26>__
                          );
      if ((uVar7 & 1) != 0) {
        auVar12 = FUN_0265c168(in_stack_00000020,in_stack_00000028,0);
        _in_stack_00000010 = auVar12;
        auVar12 = FUN_0265c12c(&stack0x00000010,0);
        _in_stack_00000030 = auVar12;
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
        fVar11 = *(float *)(*(long *)(unaff_x27 + 0xa0) + 0x10) * *(float *)(lVar8 + 0x10);
        fVar2 = fVar11;
        if (unaff_s9 < fVar11) {
          fVar2 = unaff_s9;
        }
        if (fVar11 < 0.0) {
          fVar2 = unaff_s12;
        }
        FUN_0265c264(fVar2,&stack0x00000010,0);
        if (*(long *)(unaff_x27 + 0xa0) == 0) goto LAB_0250c17c;
        fVar11 = *(float *)(*(long *)(unaff_x27 + 0xa0) + 0x14);
        fVar2 = fVar11;
        if (unaff_s9 < fVar11) {
          fVar2 = unaff_s9;
        }
        if (fVar11 < unaff_s13) {
          fVar2 = unaff_s13;
        }
        FUN_0265c388(fVar2,&stack0x00000010,0);
        if (*(long *)(unaff_x27 + 0xa0) == 0) goto LAB_0250c17c;
        fVar11 = *(float *)(*(long *)(unaff_x27 + 0xa0) + 0x18);
        fVar2 = fVar11;
        if (unaff_s9 < fVar11) {
          fVar2 = unaff_s9;
        }
        if (fVar11 < 0.0) {
          fVar2 = unaff_s12;
        }
        UnityEngine_UIElements_DynamicAtlas_TextureInfo__Create(fVar2,&stack0x00000010,0);
      }
      uVar4 = in_stack_00000028;
      uVar3 = in_stack_00000020;
      auVar12 = FUN_0265ca90(in_stack_00000040,in_stack_00000048,0);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12213);
      if (lVar8 == 0) goto LAB_0250c17c;
      FUN_017b46ec(lVar8,0);
      FUN_0251190c((double)unaff_s10,lVar8,unaff_x24,uVar3,uVar4,auVar12._0_8_,auVar12._8_8_);
      if (unaff_x28 == 0) goto LAB_0250c17c;
      FUN_01305fc8(unaff_x28,lVar8,
                   *(undefined8 *)
                    Method_System_Threading_Tasks_TaskExceptionHolder_AddFaultException__);
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000068 = in_stack_00000048;
      _in_stack_00000070 = _in_stack_00000020;
      FUN_01132ae0(&stack0x00000050,&stack0x00000070,0,&stack0x00000060,unaff_w23,
                   *(undefined8 *)OVRTask<List<OVRPlugin_Result>>_TypeInfo);
      auVar12 = _in_stack_00000020;
      FUN_024feaac(unaff_x24);
      _in_stack_00000070 = auVar12;
      FUN_01132650(&stack0x00000070,
                   *(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberList_TypeInfo);
      auVar12 = _in_stack_00000020;
      FUN_025003fc(unaff_x24);
      _in_stack_00000070 = auVar12;
      FUN_01132004(&stack0x00000070,*(undefined8 *)PTR_DAT_033f4a98);
      in_stack_00000070 = in_stack_00000040;
      in_stack_00000078 = in_stack_00000048;
      _in_stack_00000060 = _in_stack_00000020;
      FUN_01132380(&stack0x00000070,&stack0x00000060,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_SpatialAnchorCoreBuildingBlock_<WaitForInit>d__22>__
                  );
      unaff_x19 = (long *)Method_Obi_ObiNativeList<int>_Swap__;
      unaff_x20 = (long *)PTR_DAT_033f5368;
      unaff_x29 = (long *)Method_System_Xml_Serialization_XmlSerializer_Deserialize__;
    }
    do {
      unaff_w23 = unaff_w23 + 1;
      lVar8 = *unaff_x22;
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x19) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0250bd30;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724();
LAB_0250bd30:
      iVar5 = (*(code *)*puVar6)();
      if (iVar5 <= unaff_w23) {
        auVar12 = FUN_0265ca90(in_stack_00000040,in_stack_00000048,0);
        FUN_02508b68(unaff_x27,unaff_x28,unaff_x21,auVar12._0_8_,auVar12._8_8_);
        FUN_0265ca90(in_stack_00000040,in_stack_00000048,0);
        return;
      }
      lVar8 = *unaff_x22;
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x20) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0250bd90;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724();
LAB_0250bd90:
      unaff_x24 = (*(code *)*puVar6)();
      if (unaff_x24 == 0) goto LAB_0250c17c;
      param_2 = *(long **)(unaff_x24 + 0x28);
      if (param_2 == (long *)0x0) {
LAB_0250bdc8:
        param_2 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*unaff_x29 + 300);
        if (*(byte *)(*param_2 + 300) < bVar1) goto LAB_0250bdc8;
        if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29) {
          param_2 = (long *)0x0;
        }
      }
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar7 = FUN_0268b4e0(param_2,0,0);
    } while ((uVar7 & 1) != 0);
    plVar9 = *(long **)(unaff_x24 + 0x28);
    if (plVar9 == (long *)0x0) {
LAB_0250be38:
      plVar9 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)StringLiteral_7859 + 300);
      if (*(byte *)(*plVar9 + 300) < bVar1) goto LAB_0250be38;
      if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_7859
         ) {
        plVar9 = (long *)0x0;
      }
    }
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_02681b9c(plVar9,0,0);
    unaff_s10 = unaff_s11;
    if ((uVar7 & 1) != 0) {
      if (plVar9 == (long *)0x0) goto LAB_0250c17c;
      unaff_s10 = *(float *)((long)plVar9 + 0x24);
    }
    if (param_2 == (long *)0x0) goto LAB_0250c17c;
    param_1 = *param_2;
    param_3 = in_stack_00000050;
    param_4 = in_stack_00000058;
  } while( true );
}


