/*
FUNCTION_NAME: UnityEngine.Application$$RequestUserAuthorization
ENTRY_POINT: 0356da58
PROGRAM: vrlegs-libil2cpp.so
SCORE: 126
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_7
*/


byte UnityEngine_Application__RequestUserAuthorization(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long *plVar18;
  long in_x9;
  long lVar19;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar20;
  long lVar21;
  long *unaff_x26;
  ulong uVar22;
  undefined8 uVar23;
  uint unaff_w28;
  long *unaff_x29;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  int iStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  uVar15 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 200));
  if ((uVar15 & 1) == 0) {
    *(undefined4 *)(unaff_x21 + 0x18) = 0;
  }
  else {
    iVar14 = *(int *)(unaff_x21 + 0x18);
    *(undefined4 *)(unaff_x21 + 0x18) = 0;
    if (0 < iVar14) {
      FUN_02793a34(*(undefined8 *)(unaff_x21 + 0x10),0,iVar14,0);
    }
  }
  puVar6 = Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_1_TypeInfo;
  if (*(long *)(unaff_x20 + 0x1f0) == 0) goto LAB_0356e280;
  FUN_021e4d64(*(long *)(unaff_x20 + 0x1f0),
               *(undefined8 *)
                Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_1_TypeInfo);
  lVar21 = *(long *)(unaff_x20 + 0x1f8);
  if (lVar21 == 0) goto LAB_0356e280;
  lVar19 = *(long *)Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22_TypeInfo;
  *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
  uVar15 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 200));
  if ((uVar15 & 1) == 0) {
    *(undefined4 *)(lVar21 + 0x18) = 0;
  }
  else {
    iVar14 = *(int *)(lVar21 + 0x18);
    *(undefined4 *)(lVar21 + 0x18) = 0;
    if (0 < iVar14) {
      FUN_02793a34(*(undefined8 *)(lVar21 + 0x10),0,iVar14,0);
    }
  }
  if (*(long *)(unaff_x20 + 0x200) == 0) goto LAB_0356e280;
  FUN_021e4d64(*(long *)(unaff_x20 + 0x200),*(undefined8 *)puVar6);
  lVar21 = *(long *)(unaff_x20 + 0x208);
  if (lVar21 == 0) goto LAB_0356e280;
  lVar19 = *unaff_x29;
  *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
  uVar15 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 200));
  if ((uVar15 & 1) == 0) {
    *(undefined4 *)(lVar21 + 0x18) = 0;
  }
  else {
    iVar14 = *(int *)(lVar21 + 0x18);
    *(undefined4 *)(lVar21 + 0x18) = 0;
    if (0 < iVar14) {
      FUN_02793a34(*(undefined8 *)(lVar21 + 0x10),0,iVar14,0);
    }
  }
  puVar6 = PTR_DAT_03cc4750;
  if (0 < (int)*(ulong *)(unaff_x22 + 0x18)) {
    uVar15 = *(ulong *)(unaff_x22 + 0x18) & 0xffffffff;
    if (uVar15 != 0) {
      bVar4 = 0;
      uVar22 = 0;
      do {
        if (*(long *)(unaff_x20 + 200) == 0) goto LAB_0356e280;
        iVar14 = *(int *)(unaff_x22 + 0x20 + uVar22 * 4);
        iStack0000000000000028 = iVar14;
        uVar16 = FUN_0219c130(*(long *)(unaff_x20 + 200),&stack0x00000028,*(undefined8 *)puVar6);
        if ((uVar16 & 1) == 0) {
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iVar13 = FUN_037775a0(iVar14,0);
          if (iVar13 == 0) {
            if ((iVar14 == 0x2011) || (iVar14 == 0xad)) {
              if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar17 = 0x2d;
LAB_0356dc28:
              iVar13 = FUN_037775a0(uVar17,0);
              if (iVar13 != 0) goto LAB_0356dc38;
            }
            else if (iVar14 == 0xa0) {
              if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar17 = 0x20;
              goto LAB_0356dc28;
            }
            if (*(long *)(unaff_x20 + 0x208) == 0) goto LAB_0356e280;
            iStack0000000000000028 = iVar14;
            FUN_01b5f01c(*(long *)(unaff_x20 + 0x208),&stack0x00000028,
                         *(undefined8 *)
                          Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                        );
            bVar4 = 1;
          }
          else {
LAB_0356dc38:
            lVar21 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
            FUN_03568160(lVar21,iVar14,iVar13,0);
            if (*(long *)(unaff_x20 + 0xb8) == 0) goto LAB_0356e280;
            iStack0000000000000028 = iVar13;
            uVar16 = FUN_0219c130(*(long *)(unaff_x20 + 0xb8),&stack0x00000028,
                                  *(undefined8 *)
                                   System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo
                                 );
            if ((uVar16 & 1) == 0) {
              if (*(long *)(unaff_x20 + 0x1f0) == 0) goto LAB_0356e280;
              iStack0000000000000028 = iVar13;
              uVar16 = FUN_021e5f08(*(long *)(unaff_x20 + 0x1f0),&stack0x00000028,
                                    *(undefined8 *)PTR_DAT_03ccd4f0);
              if ((uVar16 & 1) != 0) {
                if (*(long *)(unaff_x20 + 0x1e8) == 0) goto LAB_0356e280;
                iStack0000000000000028 = iVar13;
                FUN_01b5f01c(*(long *)(unaff_x20 + 0x1e8),&stack0x00000028,
                             *(undefined8 *)
                              Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                            );
              }
              if (*(long *)(unaff_x20 + 0x200) == 0) goto LAB_0356e280;
              iStack0000000000000028 = iVar14;
              uVar16 = FUN_021e5f08(*(long *)(unaff_x20 + 0x200),&stack0x00000028,
                                    *(undefined8 *)PTR_DAT_03ccd4f0);
              if ((uVar16 & 1) != 0) {
                if (*(long *)(unaff_x20 + 0x1f8) == 0) goto LAB_0356e280;
                FUN_01b5f01c(*(long *)(unaff_x20 + 0x1f8),lVar21,
                             *(undefined8 *)
                              _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                            );
              }
            }
            else {
              if ((*(long *)(unaff_x20 + 0xb8) == 0) ||
                 (in_stack_00000020._4_4_ = iVar13,
                 FUN_0219b634(*(long *)(unaff_x20 + 0xb8),(long)&stack0x00000020 + 4,
                              &stack0x00000028,*(undefined8 *)Mono_CSharp_Operator_OpType_TypeInfo),
                 lVar21 == 0)) goto LAB_0356e280;
              *(ulong *)(lVar21 + 0x20) = CONCAT44(uStack000000000000002c,iStack0000000000000028);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              *(long *)(lVar21 + 0x18) = unaff_x20;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_0356e280;
              FUN_01b5f01c(*(long *)(unaff_x20 + 0xc0),lVar21,
                           *(undefined8 *)
                            _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                          );
              if (*(long *)(unaff_x20 + 200) == 0) goto LAB_0356e280;
              iStack0000000000000028 = iVar14;
              FUN_0219b9a4(*(long *)(unaff_x20 + 200),&stack0x00000028,lVar21,
                           *(undefined8 *)
                            System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
            }
          }
        }
        unaff_x29 = (long *)
                    UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
        ;
        if (uVar15 - 1 == uVar22) goto LAB_0356dde8;
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(uint *)(unaff_x22 + 0x18));
    }
    goto LAB_0356e284;
  }
  bVar4 = 0;
LAB_0356dde8:
  if (*(long *)(unaff_x20 + 0x1e8) == 0) goto LAB_0356e280;
  if (*(int *)(*(long *)(unaff_x20 + 0x1e8) + 0x18) == 0) {
    *unaff_x19 = unaff_x22;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    return 0;
  }
  lVar21 = *(long *)(unaff_x20 + 0xd8);
  if (lVar21 == 0) goto LAB_0356e280;
  if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x20 + 0xe0)) goto LAB_0356e284;
  plVar18 = *(long **)(lVar21 + (long)(int)*(uint *)(unaff_x20 + 0xe0) * 8 + 0x20);
  if (plVar18 == (long *)0x0) goto LAB_0356e280;
  iVar14 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
  if (iVar14 == 0) {
LAB_0356de60:
    lVar21 = *(long *)(unaff_x20 + 0xd8);
    if (lVar21 == 0) goto LAB_0356e280;
    if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x20 + 0xe0)) goto LAB_0356e284;
    lVar21 = *(long *)(lVar21 + (long)(int)*(uint *)(unaff_x20 + 0xe0) * 8 + 0x20);
    if (lVar21 == 0) goto LAB_0356e280;
    UnityEngine_UI_RectangularVertexClipper__GetCanvasRect
              (lVar21,*(undefined4 *)(unaff_x20 + 0x108),*(undefined4 *)(unaff_x20 + 0x10c),0);
    lVar21 = *(long *)(unaff_x20 + 0xd8);
    if (lVar21 == 0) goto LAB_0356e280;
    if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x20 + 0xe0)) goto LAB_0356e284;
    uVar17 = *(undefined8 *)(lVar21 + (long)(int)*(uint *)(unaff_x20 + 0xe0) * 8 + 0x20);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03778c94(uVar17,0);
  }
  else {
    lVar21 = *(long *)(unaff_x20 + 0xd8);
    if (lVar21 == 0) goto LAB_0356e280;
    if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x20 + 0xe0)) goto LAB_0356e284;
    plVar18 = *(long **)(lVar21 + (long)(int)*(uint *)(unaff_x20 + 0xe0) * 8 + 0x20);
    if (plVar18 == (long *)0x0) goto LAB_0356e280;
    iVar14 = (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
    if (iVar14 == 0) goto LAB_0356de60;
  }
  lVar21 = *(long *)(unaff_x20 + 0xd8);
  if (lVar21 != 0) {
    if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x20 + 0xe0)) {
LAB_0356e284:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar20 = *(undefined8 *)(unaff_x20 + 0x1e8);
    uVar2 = *(undefined4 *)(unaff_x20 + 0x110);
    uVar17 = *(undefined8 *)(unaff_x20 + 0xe8);
    uVar1 = *(undefined8 *)(unaff_x20 + 0xf0);
    uVar3 = *(undefined4 *)(unaff_x20 + 0x114);
    uVar23 = *(undefined8 *)(lVar21 + (long)(int)*(uint *)(unaff_x20 + 0xe0) * 8 + 0x20);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    bVar12 = FUN_03777f70(uVar20,uVar2,0,uVar1,uVar17,uVar3,uVar23,&stack0x00000018);
    puVar7 = Photon_Voice_OpusCodec_EncoderFloat_TypeInfo;
    puVar5 = _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo;
    puVar6 = 
    Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
    ;
    if (in_stack_00000018 != 0) {
      lVar21 = 0;
      do {
        if ((int)*(uint *)(in_stack_00000018 + 0x18) <= (int)(uint)lVar21) {
LAB_0356e010:
          lVar21 = *(long *)(unaff_x20 + 0x1e8);
          if (lVar21 != 0) {
            lVar19 = *unaff_x29;
            *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
            uVar15 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 200))
            ;
            if ((uVar15 & 1) == 0) {
              *(undefined4 *)(lVar21 + 0x18) = 0;
            }
            else {
              iVar14 = *(int *)(lVar21 + 0x18);
              *(undefined4 *)(lVar21 + 0x18) = 0;
              if (0 < iVar14) {
                FUN_02793a34(*(undefined8 *)(lVar21 + 0x10),0,iVar14,0);
              }
            }
            puVar10 = 
            Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass34_0_TypeInfo;
            puVar9 = 
            Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_0_TypeInfo;
            puVar8 = System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo;
            puVar7 = 
            _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
            ;
            puVar5 = PTR_DAT_03cc45b0;
            lVar21 = *(long *)(unaff_x20 + 0x1f8);
            if (lVar21 != 0) {
              iVar14 = 0;
              goto LAB_0356e0a8;
            }
          }
          break;
        }
        if (*(uint *)(in_stack_00000018 + 0x18) <= (uint)lVar21) goto LAB_0356e284;
        lVar19 = *(long *)(in_stack_00000018 + lVar21 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_0356e010;
        iVar14 = FUN_03776e5c(lVar19,0);
        FUN_03776ec0(lVar19,*(undefined4 *)(unaff_x20 + 0xe0),0);
        if (*(long *)(unaff_x20 + 0xb0) == 0) break;
        FUN_01b5f01c(*(long *)(unaff_x20 + 0xb0),lVar19,*(undefined8 *)puVar5);
        if (*(long *)(unaff_x20 + 0xb8) == 0) break;
        iStack0000000000000028 = iVar14;
        FUN_0219b9a4(*(long *)(unaff_x20 + 0xb8),&stack0x00000028,lVar19,*(undefined8 *)puVar7);
        if (*(long *)(unaff_x20 + 0x1e0) == 0) break;
        iStack0000000000000028 = iVar14;
        FUN_01b5f01c(*(long *)(unaff_x20 + 0x1e0),&stack0x00000028,*(undefined8 *)puVar6);
        if (*(long *)(unaff_x20 + 0x1d8) == 0) break;
        iStack0000000000000028 = iVar14;
        FUN_01b5f01c(*(long *)(unaff_x20 + 0x1d8),&stack0x00000028,*(undefined8 *)puVar6);
        lVar21 = lVar21 + 1;
      } while (in_stack_00000018 != 0);
    }
  }
LAB_0356e280:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
LAB_0356e0a8:
  if (iVar14 < *(int *)(lVar21 + 0x18)) {
    FUN_02215a88(lVar21,iVar14,&stack0x00000028,*(undefined8 *)puVar5);
    lVar21 = CONCAT44(uStack000000000000002c,iStack0000000000000028);
    if ((lVar21 == 0) || (*(long *)(unaff_x20 + 0xb8) == 0)) goto LAB_0356e280;
    iStack0000000000000028 = *(int *)(lVar21 + 0x28);
    uVar15 = FUN_0219f8b8(*(long *)(unaff_x20 + 0xb8),&stack0x00000028,&stack0x00000010,
                          *(undefined8 *)puVar9);
    if ((uVar15 & 1) == 0) {
      if (*(long *)(unaff_x20 + 0x1e8) == 0) goto LAB_0356e280;
      iStack0000000000000028 = *(int *)(lVar21 + 0x28);
      FUN_01b5f01c(*(long *)(unaff_x20 + 0x1e8),&stack0x00000028,*(undefined8 *)puVar6);
    }
    else {
      *(undefined8 *)(lVar21 + 0x20) = in_stack_00000010;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      *(long *)(lVar21 + 0x18) = unaff_x20;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_0356e280;
      FUN_01b5f01c(*(long *)(unaff_x20 + 0xc0),lVar21,*(undefined8 *)puVar7);
      if (*(long *)(unaff_x20 + 200) == 0) goto LAB_0356e280;
      iStack0000000000000028 = *(int *)(lVar21 + 0x14);
      FUN_0219b9a4(*(long *)(unaff_x20 + 200),&stack0x00000028,lVar21,*(undefined8 *)puVar8);
      if (*(long *)(unaff_x20 + 0x1f8) == 0) goto LAB_0356e280;
      FUN_022190f4(*(long *)(unaff_x20 + 0x1f8),iVar14,*(undefined8 *)puVar10);
      iVar14 = iVar14 + -1;
    }
    lVar21 = *(long *)(unaff_x20 + 0x1f8);
    iVar14 = iVar14 + 1;
    if (lVar21 == 0) goto LAB_0356e280;
    goto LAB_0356e0a8;
  }
  bVar11 = *(char *)(unaff_x20 + 0xe4) != '\0';
  if ((bVar12 & 1) == 0 && bVar11) {
    do {
      uVar15 = FUN_0356e288();
    } while ((uVar15 & 1) == 0);
    bVar12 = 1;
  }
  else {
    bVar12 = bVar12 | bVar11;
  }
  if ((unaff_w28 & 1) != 0) {
    FUN_0356d1ac();
  }
  lVar21 = *(long *)(unaff_x20 + 0x1f8);
  if (lVar21 == 0) goto LAB_0356e280;
  iVar14 = 0;
  while (iVar14 < *(int *)(lVar21 + 0x18)) {
    FUN_02215a88(lVar21,iVar14,&stack0x00000028,*(undefined8 *)puVar5);
    if ((CONCAT44(uStack000000000000002c,iStack0000000000000028) == 0) ||
       (*(long *)(unaff_x20 + 0x208) == 0)) goto LAB_0356e280;
    iStack0000000000000028 =
         *(int *)(CONCAT44(uStack000000000000002c,iStack0000000000000028) + 0x14);
    FUN_01b5f01c(*(long *)(unaff_x20 + 0x208),&stack0x00000028,*(undefined8 *)puVar6);
    lVar21 = *(long *)(unaff_x20 + 0x1f8);
    iVar14 = iVar14 + 1;
    if (lVar21 == 0) goto LAB_0356e280;
  }
  *unaff_x19 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar21 = *(long *)(unaff_x20 + 0x208);
  if (lVar21 != 0) {
    if (0 < *(int *)(lVar21 + 0x18)) {
      lVar21 = FUN_022195a8(lVar21,*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ElevateQuadraticToCubicBezier_00000A5D_PostfixBurstDelegate_var
                           );
      *unaff_x19 = lVar21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    return bVar12 & (bVar4 ^ 1);
  }
  goto LAB_0356e280;
}


