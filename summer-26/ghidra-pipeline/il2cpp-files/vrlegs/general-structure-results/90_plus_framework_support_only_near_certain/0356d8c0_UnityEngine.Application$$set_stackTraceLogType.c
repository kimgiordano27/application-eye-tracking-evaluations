/*
FUNCTION_NAME: UnityEngine.Application$$set_stackTraceLogType
ENTRY_POINT: 0356d8c0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 150
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_7
*/


byte UnityEngine_Application__set_stackTraceLogType(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  byte bVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  long lVar20;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  uint unaff_w28;
  long *plVar25;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  int iStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  FUN_01ab69ac();
  FUN_01ab69ac(Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass34_1_TypeInfo);
  FUN_01ab69ac(Liv_NativeGalleryBridge_PermissionCallbackAsyncAndroid_<>c__DisplayClass3_0_TypeInfo)
  ;
  FUN_01ab69ac(Photon_Voice_PhotonTransportProtocol_EventSubcode_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xfcc) = 1;
  puVar5 = Photon_Voice_PhotonTransportProtocol_EventSubcode_TypeInfo;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (((unaff_x22 == 0) || (*(long *)(unaff_x22 + 0x18) == 0)) || (*(int *)(unaff_x20 + 0x48) == 0))
  {
    iVar13 = *(int *)(unaff_x20 + 0x48);
    uVar22 = FUN_036d3824();
    puVar19 = (undefined8 *)
              Liv_NativeGalleryBridge_PermissionCallbackAsyncAndroid_<>c__DisplayClass3_0_TypeInfo;
    if (iVar13 != 0) {
      puVar19 = (undefined8 *)
                Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass34_1_TypeInfo;
    }
    uVar22 = FUN_025bdc88(*(undefined8 *)puVar5,uVar22,*puVar19,0);
    if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
    }
    FUN_0367b470(uVar22);
    *unaff_x19 = 0;
LAB_0356d9f4:
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    return 0;
  }
  uVar22 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar12 = FUN_03776950(unaff_x20 + 0x50,0);
  puVar5 = OVRVirtualKeyboard_KeyboardPosition_TypeInfo;
  if (*(int *)(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
  }
  iVar13 = FUN_0377715c(uVar22,uVar12,0);
  if (iVar13 != 0) {
    lVar15 = FUN_01f70920();
    *unaff_x19 = lVar15;
    goto LAB_0356d9f4;
  }
  if ((*(long *)(unaff_x20 + 200) == 0) || (*(long *)(unaff_x20 + 0xb8) == 0)) {
    FUN_03568878();
  }
  plVar25 = (long *)
            UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
  ;
  lVar15 = *(long *)(unaff_x20 + 0x1e8);
  if (lVar15 == 0) goto LAB_0356e280;
  lVar20 = *(long *)
            UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
  ;
  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
  uVar16 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 200));
  if ((uVar16 & 1) == 0) {
    *(undefined4 *)(lVar15 + 0x18) = 0;
  }
  else {
    iVar13 = *(int *)(lVar15 + 0x18);
    *(undefined4 *)(lVar15 + 0x18) = 0;
    if (0 < iVar13) {
      FUN_02793a34(*(undefined8 *)(lVar15 + 0x10),0,iVar13,0);
    }
  }
  puVar4 = Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_1_TypeInfo;
  if (*(long *)(unaff_x20 + 0x1f0) == 0) goto LAB_0356e280;
  FUN_021e4d64(*(long *)(unaff_x20 + 0x1f0),
               *(undefined8 *)
                Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_1_TypeInfo);
  lVar15 = *(long *)(unaff_x20 + 0x1f8);
  if (lVar15 == 0) goto LAB_0356e280;
  lVar20 = *(long *)Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22_TypeInfo;
  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
  uVar16 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 200));
  if ((uVar16 & 1) == 0) {
    *(undefined4 *)(lVar15 + 0x18) = 0;
  }
  else {
    iVar13 = *(int *)(lVar15 + 0x18);
    *(undefined4 *)(lVar15 + 0x18) = 0;
    if (0 < iVar13) {
      FUN_02793a34(*(undefined8 *)(lVar15 + 0x10),0,iVar13,0);
    }
  }
  if (*(long *)(unaff_x20 + 0x200) == 0) goto LAB_0356e280;
  FUN_021e4d64(*(long *)(unaff_x20 + 0x200),*(undefined8 *)puVar4);
  lVar15 = *(long *)(unaff_x20 + 0x208);
  if (lVar15 == 0) goto LAB_0356e280;
  lVar20 = *plVar25;
  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
  uVar16 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 200));
  if ((uVar16 & 1) == 0) {
    *(undefined4 *)(lVar15 + 0x18) = 0;
  }
  else {
    iVar13 = *(int *)(lVar15 + 0x18);
    *(undefined4 *)(lVar15 + 0x18) = 0;
    if (0 < iVar13) {
      FUN_02793a34(*(undefined8 *)(lVar15 + 0x10),0,iVar13,0);
    }
  }
  puVar4 = PTR_DAT_03cc4750;
  if (0 < (int)*(ulong *)(unaff_x22 + 0x18)) {
    uVar16 = *(ulong *)(unaff_x22 + 0x18) & 0xffffffff;
    if (uVar16 != 0) {
      bVar3 = 0;
      uVar23 = 0;
      do {
        if (*(long *)(unaff_x20 + 200) == 0) goto LAB_0356e280;
        iVar13 = *(int *)(unaff_x22 + 0x20 + uVar23 * 4);
        iStack0000000000000028 = iVar13;
        uVar17 = FUN_0219c130(*(long *)(unaff_x20 + 200),&stack0x00000028,*(undefined8 *)puVar4);
        if ((uVar17 & 1) == 0) {
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iVar14 = FUN_037775a0(iVar13,0);
          if (iVar14 == 0) {
            if ((iVar13 == 0x2011) || (iVar13 == 0xad)) {
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar22 = 0x2d;
LAB_0356dc28:
              iVar14 = FUN_037775a0(uVar22,0);
              if (iVar14 != 0) goto LAB_0356dc38;
            }
            else if (iVar13 == 0xa0) {
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar22 = 0x20;
              goto LAB_0356dc28;
            }
            if (*(long *)(unaff_x20 + 0x208) == 0) goto LAB_0356e280;
            iStack0000000000000028 = iVar13;
            FUN_01b5f01c(*(long *)(unaff_x20 + 0x208),&stack0x00000028,
                         *(undefined8 *)
                          Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                        );
            bVar3 = 1;
          }
          else {
LAB_0356dc38:
            lVar15 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
            FUN_03568160(lVar15,iVar13,iVar14,0);
            if (*(long *)(unaff_x20 + 0xb8) == 0) goto LAB_0356e280;
            iStack0000000000000028 = iVar14;
            uVar17 = FUN_0219c130(*(long *)(unaff_x20 + 0xb8),&stack0x00000028,
                                  *(undefined8 *)
                                   System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo
                                 );
            if ((uVar17 & 1) == 0) {
              if (*(long *)(unaff_x20 + 0x1f0) == 0) goto LAB_0356e280;
              iStack0000000000000028 = iVar14;
              uVar17 = FUN_021e5f08(*(long *)(unaff_x20 + 0x1f0),&stack0x00000028,
                                    *(undefined8 *)PTR_DAT_03ccd4f0);
              if ((uVar17 & 1) != 0) {
                if (*(long *)(unaff_x20 + 0x1e8) == 0) goto LAB_0356e280;
                iStack0000000000000028 = iVar14;
                FUN_01b5f01c(*(long *)(unaff_x20 + 0x1e8),&stack0x00000028,
                             *(undefined8 *)
                              Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                            );
              }
              if (*(long *)(unaff_x20 + 0x200) == 0) goto LAB_0356e280;
              iStack0000000000000028 = iVar13;
              uVar17 = FUN_021e5f08(*(long *)(unaff_x20 + 0x200),&stack0x00000028,
                                    *(undefined8 *)PTR_DAT_03ccd4f0);
              if ((uVar17 & 1) != 0) {
                if (*(long *)(unaff_x20 + 0x1f8) == 0) goto LAB_0356e280;
                FUN_01b5f01c(*(long *)(unaff_x20 + 0x1f8),lVar15,
                             *(undefined8 *)
                              _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                            );
              }
            }
            else {
              if ((*(long *)(unaff_x20 + 0xb8) == 0) ||
                 (in_stack_00000020._4_4_ = iVar14,
                 FUN_0219b634(*(long *)(unaff_x20 + 0xb8),(long)&stack0x00000020 + 4,
                              &stack0x00000028,*(undefined8 *)Mono_CSharp_Operator_OpType_TypeInfo),
                 lVar15 == 0)) goto LAB_0356e280;
              *(ulong *)(lVar15 + 0x20) = CONCAT44(uStack000000000000002c,iStack0000000000000028);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              *(long *)(lVar15 + 0x18) = unaff_x20;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_0356e280;
              FUN_01b5f01c(*(long *)(unaff_x20 + 0xc0),lVar15,
                           *(undefined8 *)
                            _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                          );
              if (*(long *)(unaff_x20 + 200) == 0) goto LAB_0356e280;
              iStack0000000000000028 = iVar13;
              FUN_0219b9a4(*(long *)(unaff_x20 + 200),&stack0x00000028,lVar15,
                           *(undefined8 *)
                            System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
            }
          }
        }
        plVar25 = (long *)
                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
        ;
        if (uVar16 - 1 == uVar23) goto LAB_0356dde8;
        uVar23 = uVar23 + 1;
      } while (uVar23 < *(uint *)(unaff_x22 + 0x18));
    }
    goto LAB_0356e284;
  }
  bVar3 = 0;
LAB_0356dde8:
  if (*(long *)(unaff_x20 + 0x1e8) == 0) goto LAB_0356e280;
  if (*(int *)(*(long *)(unaff_x20 + 0x1e8) + 0x18) == 0) {
    *unaff_x19 = unaff_x22;
    goto LAB_0356d9f4;
  }
  lVar15 = *(long *)(unaff_x20 + 0xd8);
  if (lVar15 == 0) goto LAB_0356e280;
  if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x20 + 0xe0)) goto LAB_0356e284;
  plVar18 = *(long **)(lVar15 + (long)(int)*(uint *)(unaff_x20 + 0xe0) * 8 + 0x20);
  if (plVar18 == (long *)0x0) goto LAB_0356e280;
  iVar13 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
  if (iVar13 == 0) {
LAB_0356de60:
    lVar15 = *(long *)(unaff_x20 + 0xd8);
    if (lVar15 == 0) goto LAB_0356e280;
    if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x20 + 0xe0)) goto LAB_0356e284;
    lVar15 = *(long *)(lVar15 + (long)(int)*(uint *)(unaff_x20 + 0xe0) * 8 + 0x20);
    if (lVar15 == 0) goto LAB_0356e280;
    UnityEngine_UI_RectangularVertexClipper__GetCanvasRect
              (lVar15,*(undefined4 *)(unaff_x20 + 0x108),*(undefined4 *)(unaff_x20 + 0x10c),0);
    lVar15 = *(long *)(unaff_x20 + 0xd8);
    if (lVar15 == 0) goto LAB_0356e280;
    if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x20 + 0xe0)) goto LAB_0356e284;
    uVar22 = *(undefined8 *)(lVar15 + (long)(int)*(uint *)(unaff_x20 + 0xe0) * 8 + 0x20);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03778c94(uVar22,0);
  }
  else {
    lVar15 = *(long *)(unaff_x20 + 0xd8);
    if (lVar15 == 0) goto LAB_0356e280;
    if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x20 + 0xe0)) goto LAB_0356e284;
    plVar18 = *(long **)(lVar15 + (long)(int)*(uint *)(unaff_x20 + 0xe0) * 8 + 0x20);
    if (plVar18 == (long *)0x0) goto LAB_0356e280;
    iVar13 = (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
    if (iVar13 == 0) goto LAB_0356de60;
  }
  lVar15 = *(long *)(unaff_x20 + 0xd8);
  if (lVar15 != 0) {
    if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x20 + 0xe0)) {
LAB_0356e284:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar21 = *(undefined8 *)(unaff_x20 + 0x1e8);
    uVar12 = *(undefined4 *)(unaff_x20 + 0x110);
    uVar22 = *(undefined8 *)(unaff_x20 + 0xe8);
    uVar1 = *(undefined8 *)(unaff_x20 + 0xf0);
    uVar2 = *(undefined4 *)(unaff_x20 + 0x114);
    uVar24 = *(undefined8 *)(lVar15 + (long)(int)*(uint *)(unaff_x20 + 0xe0) * 8 + 0x20);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    bVar11 = FUN_03777f70(uVar21,uVar12,0,uVar1,uVar22,uVar2,uVar24,&stack0x00000018);
    puVar6 = Photon_Voice_OpusCodec_EncoderFloat_TypeInfo;
    puVar4 = _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo;
    puVar5 = 
    Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
    ;
    if (in_stack_00000018 != 0) {
      lVar15 = 0;
      do {
        if ((int)*(uint *)(in_stack_00000018 + 0x18) <= (int)(uint)lVar15) {
LAB_0356e010:
          lVar15 = *(long *)(unaff_x20 + 0x1e8);
          if (lVar15 != 0) {
            lVar20 = *plVar25;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            uVar16 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 200))
            ;
            if ((uVar16 & 1) == 0) {
              *(undefined4 *)(lVar15 + 0x18) = 0;
            }
            else {
              iVar13 = *(int *)(lVar15 + 0x18);
              *(undefined4 *)(lVar15 + 0x18) = 0;
              if (0 < iVar13) {
                FUN_02793a34(*(undefined8 *)(lVar15 + 0x10),0,iVar13,0);
              }
            }
            puVar9 = 
            Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass34_0_TypeInfo;
            puVar8 = 
            Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_0_TypeInfo;
            puVar7 = System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo;
            puVar6 = 
            _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
            ;
            puVar4 = PTR_DAT_03cc45b0;
            lVar15 = *(long *)(unaff_x20 + 0x1f8);
            if (lVar15 != 0) {
              iVar13 = 0;
              goto LAB_0356e0a8;
            }
          }
          break;
        }
        if (*(uint *)(in_stack_00000018 + 0x18) <= (uint)lVar15) goto LAB_0356e284;
        lVar20 = *(long *)(in_stack_00000018 + lVar15 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_0356e010;
        iVar13 = FUN_03776e5c(lVar20,0);
        FUN_03776ec0(lVar20,*(undefined4 *)(unaff_x20 + 0xe0),0);
        if (*(long *)(unaff_x20 + 0xb0) == 0) break;
        FUN_01b5f01c(*(long *)(unaff_x20 + 0xb0),lVar20,*(undefined8 *)puVar4);
        if (*(long *)(unaff_x20 + 0xb8) == 0) break;
        iStack0000000000000028 = iVar13;
        FUN_0219b9a4(*(long *)(unaff_x20 + 0xb8),&stack0x00000028,lVar20,*(undefined8 *)puVar6);
        if (*(long *)(unaff_x20 + 0x1e0) == 0) break;
        iStack0000000000000028 = iVar13;
        FUN_01b5f01c(*(long *)(unaff_x20 + 0x1e0),&stack0x00000028,*(undefined8 *)puVar5);
        if (*(long *)(unaff_x20 + 0x1d8) == 0) break;
        iStack0000000000000028 = iVar13;
        FUN_01b5f01c(*(long *)(unaff_x20 + 0x1d8),&stack0x00000028,*(undefined8 *)puVar5);
        lVar15 = lVar15 + 1;
      } while (in_stack_00000018 != 0);
    }
  }
LAB_0356e280:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
LAB_0356e0a8:
  if (iVar13 < *(int *)(lVar15 + 0x18)) {
    FUN_02215a88(lVar15,iVar13,&stack0x00000028,*(undefined8 *)puVar4);
    lVar15 = CONCAT44(uStack000000000000002c,iStack0000000000000028);
    if ((lVar15 == 0) || (*(long *)(unaff_x20 + 0xb8) == 0)) goto LAB_0356e280;
    iStack0000000000000028 = *(int *)(lVar15 + 0x28);
    uVar16 = FUN_0219f8b8(*(long *)(unaff_x20 + 0xb8),&stack0x00000028,&stack0x00000010,
                          *(undefined8 *)puVar8);
    if ((uVar16 & 1) == 0) {
      if (*(long *)(unaff_x20 + 0x1e8) == 0) goto LAB_0356e280;
      iStack0000000000000028 = *(int *)(lVar15 + 0x28);
      FUN_01b5f01c(*(long *)(unaff_x20 + 0x1e8),&stack0x00000028,*(undefined8 *)puVar5);
    }
    else {
      *(undefined8 *)(lVar15 + 0x20) = in_stack_00000010;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      *(long *)(lVar15 + 0x18) = unaff_x20;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_0356e280;
      FUN_01b5f01c(*(long *)(unaff_x20 + 0xc0),lVar15,*(undefined8 *)puVar6);
      if (*(long *)(unaff_x20 + 200) == 0) goto LAB_0356e280;
      iStack0000000000000028 = *(int *)(lVar15 + 0x14);
      FUN_0219b9a4(*(long *)(unaff_x20 + 200),&stack0x00000028,lVar15,*(undefined8 *)puVar7);
      if (*(long *)(unaff_x20 + 0x1f8) == 0) goto LAB_0356e280;
      FUN_022190f4(*(long *)(unaff_x20 + 0x1f8),iVar13,*(undefined8 *)puVar9);
      iVar13 = iVar13 + -1;
    }
    lVar15 = *(long *)(unaff_x20 + 0x1f8);
    iVar13 = iVar13 + 1;
    if (lVar15 == 0) goto LAB_0356e280;
    goto LAB_0356e0a8;
  }
  bVar10 = *(char *)(unaff_x20 + 0xe4) != '\0';
  if ((bVar11 & 1) == 0 && bVar10) {
    do {
      uVar16 = FUN_0356e288();
    } while ((uVar16 & 1) == 0);
    bVar11 = 1;
  }
  else {
    bVar11 = bVar11 | bVar10;
  }
  if ((unaff_w28 & 1) != 0) {
    FUN_0356d1ac();
  }
  lVar15 = *(long *)(unaff_x20 + 0x1f8);
  if (lVar15 == 0) goto LAB_0356e280;
  iVar13 = 0;
  while (iVar13 < *(int *)(lVar15 + 0x18)) {
    FUN_02215a88(lVar15,iVar13,&stack0x00000028,*(undefined8 *)puVar4);
    if ((CONCAT44(uStack000000000000002c,iStack0000000000000028) == 0) ||
       (*(long *)(unaff_x20 + 0x208) == 0)) goto LAB_0356e280;
    iStack0000000000000028 =
         *(int *)(CONCAT44(uStack000000000000002c,iStack0000000000000028) + 0x14);
    FUN_01b5f01c(*(long *)(unaff_x20 + 0x208),&stack0x00000028,*(undefined8 *)puVar5);
    lVar15 = *(long *)(unaff_x20 + 0x1f8);
    iVar13 = iVar13 + 1;
    if (lVar15 == 0) goto LAB_0356e280;
  }
  *unaff_x19 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar15 = *(long *)(unaff_x20 + 0x208);
  if (lVar15 != 0) {
    if (0 < *(int *)(lVar15 + 0x18)) {
      lVar15 = FUN_022195a8(lVar15,*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ElevateQuadraticToCubicBezier_00000A5D_PostfixBurstDelegate_var
                           );
      *unaff_x19 = lVar15;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    return bVar11 & (bVar3 ^ 1);
  }
  goto LAB_0356e280;
}


