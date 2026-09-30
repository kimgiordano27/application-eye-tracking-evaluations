/*
FUNCTION_NAME: FUN_0250baa8
ENTRY_POINT: 0250baa8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 155
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0250baa8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5,long param_6)

{
  byte bVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  int *piVar19;
  long *plVar20;
  int iVar21;
  long *plVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  
  local_c0 = param_2;
  uStack_b8 = param_3;
  if ((DAT_0378292c & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_7859);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<int>_Swap__);
    thunk_FUN_00d48444(PTR_DAT_033f5368);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_TaskExceptionHolder_AddFaultException__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_Serialization_XmlSerializer_Deserialize__);
    thunk_FUN_00d48444(Oculus_Interaction_FirstHoverInteractorGroup_<>c_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f4a98);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_SpatialAnchorCoreBuildingBlock_<WaitForInit>d__22>__
                      );
    thunk_FUN_00d48444(System_Xml_Serialization_XmlTypeMapMemberList_TypeInfo);
    thunk_FUN_00d48444(OVRTask<List<OVRPlugin_Result>>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Char_System_IConvertible_ToSingle__);
    thunk_FUN_00d48444(Method_UnityEngine_Material_SetMatrixArray__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__26>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ObiCollisionMaterialHandle>_Add__);
    thunk_FUN_00d48444(StringLiteral_12213);
    DAT_0378292c = 1;
  }
  plVar20 = (long *)Method_Obi_ObiNativeList<int>_Swap__;
  local_d0._0_8_ = 0;
  local_d0._8_8_ = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  local_f0._0_8_ = 0;
  local_f0._8_8_ = 0;
  local_100._0_8_ = 0;
  local_100._8_8_ = 0;
  auVar26 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  if (param_5 != (long *)0x0) {
    lVar15 = *param_5;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)Method_Obi_ObiNativeList<int>_Swap__) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0250bc28;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(param_5,*(long *)Method_Obi_ObiNativeList<int>_Swap__,0);
LAB_0250bc28:
    uVar9 = (*(code *)*puVar11)(param_5,puVar11[1]);
    local_d0 = FUN_0265c818(param_2,param_3,uVar9,0,0);
    uVar18 = UnityEngine_XR_Interaction_Toolkit_Inputs_InputActionManager__DisableInput(param_1);
    if ((uVar18 & 1) != 0) {
      local_e0 = FUN_0265ca84(local_d0,0);
      auVar5._8_8_ = local_f0._8_8_;
      auVar5._0_8_ = local_f0._0_8_;
      auVar26._8_8_ = local_100._8_8_;
      auVar26._0_8_ = local_100._0_8_;
      plVar12 = *(long **)(param_1 + 0xa0);
      auVar3 = local_e0;
      auVar4 = local_d0;
      if (plVar12 == (long *)0x0) goto LAB_0250c17c;
      uVar13 = (**(code **)(*plVar12 + 0x288))(plVar12,*(undefined8 *)(*plVar12 + 0x290));
      if (*(int *)(*(long *)Method_UnityEngine_Material_SetMatrixArray__ + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)Method_UnityEngine_Material_SetMatrixArray__);
      }
      FUN_026c52cc(local_e0,uVar13,0);
    }
    uVar13 = DAT_028aac58;
    fVar6 = DAT_028aa040;
    iVar21 = 0;
    fVar24 = 1.0;
    plVar12 = (long *)PTR_DAT_033f5368;
    plVar22 = (long *)Method_System_Xml_Serialization_XmlSerializer_Deserialize__;
    do {
      lVar15 = *param_5;
      uVar18 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *plVar20) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_0250bd30;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(param_5,*plVar20,0);
LAB_0250bd30:
      iVar10 = (*(code *)*puVar11)(param_5,puVar11[1]);
      if (iVar10 <= iVar21) {
        auVar26 = FUN_0265ca90(local_d0._0_8_,local_d0._8_8_,0);
        FUN_02508b68(param_1,param_6,param_4,auVar26._0_8_,auVar26._8_8_);
        FUN_0265ca90(local_d0._0_8_,local_d0._8_8_,0);
        return;
      }
      lVar15 = *param_5;
      uVar18 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *plVar12) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_0250bd90;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(param_5,*plVar12,0);
LAB_0250bd90:
      lVar15 = (*(code *)*puVar11)(param_5,iVar21,puVar11[1]);
      auVar26 = local_100;
      auVar3 = local_e0;
      auVar4 = local_d0;
      auVar5 = local_f0;
      if (lVar15 == 0) break;
      plVar16 = *(long **)(lVar15 + 0x28);
      if (plVar16 == (long *)0x0) {
LAB_0250bdc8:
        plVar16 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*plVar22 + 300);
        if (*(byte *)(*plVar16 + 300) < bVar1) goto LAB_0250bdc8;
        if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *plVar22) {
          plVar16 = (long *)0x0;
        }
      }
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar18 = FUN_0268b4e0(plVar16,0,0);
      if ((uVar18 & 1) == 0) {
        plVar17 = *(long **)(lVar15 + 0x28);
        if (plVar17 == (long *)0x0) {
LAB_0250be38:
          plVar17 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)StringLiteral_7859 + 300);
          if (*(byte *)(*plVar17 + 300) < bVar1) goto LAB_0250be38;
          if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)StringLiteral_7859) {
            plVar17 = (long *)0x0;
          }
        }
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar18 = FUN_02681b9c(plVar17,0,0);
        fVar25 = fVar6;
        auVar26 = local_100;
        auVar3 = local_e0;
        auVar4 = local_d0;
        auVar5 = local_f0;
        if ((uVar18 & 1) != 0) {
          if (plVar17 == (long *)0x0) break;
          fVar25 = *(float *)((long)plVar17 + 0x24);
        }
        if (plVar16 == (long *)0x0) break;
        auVar26 = (**(code **)(*plVar16 + 0x198))
                            (plVar16,local_c0,uStack_b8,param_4,*(undefined8 *)(*plVar16 + 0x1a0));
        local_f0 = auVar26;
        local_a0 = auVar26;
        uVar18 = FUN_01131cc4(local_a0,*(undefined8 *)
                                        Oculus_Interaction_FirstHoverInteractorGroup_<>c_TypeInfo);
        if ((uVar18 & 1) != 0) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List<ObiCollisionMaterialHandle>_Add__ +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar18 = FUN_01131118(local_f0,*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__26>__
                               );
          if ((uVar18 & 1) != 0) {
            auVar26 = FUN_0265c168(local_f0._0_8_,local_f0._8_8_,0);
            local_100 = auVar26;
            auVar26 = FUN_0265c12c(local_100,0);
            local_e0 = auVar26;
            if (*(int *)(*(long *)Method_UnityEngine_Material_SetMatrixArray__ + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar14 = FUN_01132c70(local_e0,*(undefined8 *)
                                            Method_System_Char_System_IConvertible_ToSingle__);
            auVar26 = local_100;
            auVar3 = local_e0;
            auVar4 = local_d0;
            auVar5 = local_f0;
            if ((*(long *)(param_1 + 0xa0) == 0) || (lVar14 == 0)) break;
            fVar23 = *(float *)(*(long *)(param_1 + 0xa0) + 0x10) * *(float *)(lVar14 + 0x10);
            fVar2 = fVar23;
            if (1.0 < fVar23) {
              fVar2 = fVar24;
            }
            if (fVar23 < 0.0) {
              fVar2 = 0.0;
            }
            FUN_0265c264(fVar2,local_100,0);
            auVar26 = local_100;
            auVar3 = local_e0;
            auVar4 = local_d0;
            auVar5 = local_f0;
            if (*(long *)(param_1 + 0xa0) == 0) break;
            fVar23 = *(float *)(*(long *)(param_1 + 0xa0) + 0x14);
            fVar2 = fVar23;
            if (1.0 < fVar23) {
              fVar2 = fVar24;
            }
            if (fVar23 < -1.0) {
              fVar2 = -1.0;
            }
            FUN_0265c388(fVar2,local_100,0);
            auVar26 = local_100;
            auVar3 = local_e0;
            auVar4 = local_d0;
            auVar5 = local_f0;
            if (*(long *)(param_1 + 0xa0) == 0) break;
            fVar23 = *(float *)(*(long *)(param_1 + 0xa0) + 0x18);
            fVar2 = fVar23;
            if (1.0 < fVar23) {
              fVar2 = fVar24;
            }
            if (fVar23 < 0.0) {
              fVar2 = 0.0;
            }
            UnityEngine_UIElements_DynamicAtlas_TextureInfo__Create(fVar2,local_100,0);
          }
          uVar8 = local_f0._8_8_;
          uVar7 = local_f0._0_8_;
          auVar27 = FUN_0265ca90(local_d0._0_8_,local_d0._8_8_,0);
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12213);
          auVar26 = local_100;
          auVar3 = local_e0;
          auVar4 = local_d0;
          auVar5 = local_f0;
          if (lVar14 == 0) break;
          FUN_017b46ec(lVar14,0);
          FUN_0251190c((double)fVar25,uVar13,lVar14,lVar15,uVar7,uVar8,auVar27._0_8_,auVar27._8_8_);
          auVar26 = local_100;
          auVar3 = local_e0;
          auVar4 = local_d0;
          auVar5 = local_f0;
          if (param_6 == 0) break;
          FUN_01305fc8(param_6,lVar14,
                       *(undefined8 *)
                        Method_System_Threading_Tasks_TaskExceptionHolder_AddFaultException__);
          local_a0 = local_f0;
          local_b0 = local_d0;
          FUN_01132ae0(&local_c0,local_a0,0,local_b0,iVar21,
                       *(undefined8 *)OVRTask<List<OVRPlugin_Result>>_TypeInfo);
          auVar26 = local_f0;
          FUN_024feaac(lVar15);
          local_a0 = auVar26;
          FUN_01132650(local_a0,*(undefined8 *)
                                 System_Xml_Serialization_XmlTypeMapMemberList_TypeInfo);
          auVar26 = local_f0;
          FUN_025003fc(lVar15);
          local_a0 = auVar26;
          FUN_01132004(local_a0,*(undefined8 *)PTR_DAT_033f4a98);
          local_b0 = local_f0;
          local_a0 = local_d0;
          FUN_01132380(0x3f800000,local_a0,local_b0,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_SpatialAnchorCoreBuildingBlock_<WaitForInit>d__22>__
                      );
          plVar20 = (long *)Method_Obi_ObiNativeList<int>_Swap__;
          plVar12 = (long *)PTR_DAT_033f5368;
          plVar22 = (long *)Method_System_Xml_Serialization_XmlSerializer_Deserialize__;
        }
      }
      iVar21 = iVar21 + 1;
    } while( true );
  }
LAB_0250c17c:
  local_100 = auVar26;
  local_e0 = auVar3;
  local_f0 = auVar5;
  local_d0 = auVar4;
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


