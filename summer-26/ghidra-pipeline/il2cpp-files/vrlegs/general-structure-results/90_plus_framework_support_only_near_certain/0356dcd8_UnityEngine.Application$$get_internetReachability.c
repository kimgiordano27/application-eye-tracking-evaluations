/*
FUNCTION_NAME: UnityEngine.Application$$get_internetReachability
ENTRY_POINT: 0356dcd8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 126
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_5
*/


uint UnityEngine_Application__get_internetReachability(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 uVar18;
  int unaff_w23;
  long unaff_x24;
  long lVar19;
  long *unaff_x26;
  ulong unaff_x27;
  undefined8 uVar20;
  long unaff_x28;
  ulong unaff_x29;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  int iStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  uVar10 = in_stack_00000008;
  while( true ) {
    FUN_01b5f01c(param_2,unaff_x24,*param_1);
    if (*(long *)(unaff_x20 + 200) == 0) break;
    iStack0000000000000028 = unaff_w23;
    FUN_0219b9a4(*(long *)(unaff_x20 + 200),&stack0x00000028,unaff_x24,
                 *(undefined8 *)System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo);
LAB_0356ddbc:
    do {
      puVar4 = 
      UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
      ;
      if (unaff_x29 == unaff_x27) {
        if (*(long *)(unaff_x20 + 0x1e8) == 0) goto LAB_0356e280;
        if (*(int *)(*(long *)(unaff_x20 + 0x1e8) + 0x18) == 0) {
          *unaff_x19 = unaff_x22;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          uVar13 = 0;
          goto LAB_0356d9fc;
        }
        lVar17 = *(long *)(unaff_x20 + 0xd8);
        if (lVar17 == 0) goto LAB_0356e280;
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x20 + 0xe0)) goto LAB_0356e284;
        plVar16 = *(long **)(lVar17 + (long)(int)*(uint *)(unaff_x20 + 0xe0) * 8 + 0x20);
        if (plVar16 == (long *)0x0) goto LAB_0356e280;
        iVar12 = (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
        if (iVar12 == 0) {
LAB_0356de60:
          lVar17 = *(long *)(unaff_x20 + 0xd8);
          if (lVar17 == 0) goto LAB_0356e280;
          if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x20 + 0xe0)) goto LAB_0356e284;
          lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(unaff_x20 + 0xe0) * 8 + 0x20);
          if (lVar17 == 0) goto LAB_0356e280;
          UnityEngine_UI_RectangularVertexClipper__GetCanvasRect
                    (lVar17,*(undefined4 *)(unaff_x20 + 0x108),*(undefined4 *)(unaff_x20 + 0x10c),0)
          ;
          lVar17 = *(long *)(unaff_x20 + 0xd8);
          if (lVar17 == 0) goto LAB_0356e280;
          if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x20 + 0xe0)) goto LAB_0356e284;
          uVar15 = *(undefined8 *)(lVar17 + (long)(int)*(uint *)(unaff_x20 + 0xe0) * 8 + 0x20);
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_03778c94(uVar15,0);
        }
        else {
          lVar17 = *(long *)(unaff_x20 + 0xd8);
          if (lVar17 == 0) goto LAB_0356e280;
          if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x20 + 0xe0)) goto LAB_0356e284;
          plVar16 = *(long **)(lVar17 + (long)(int)*(uint *)(unaff_x20 + 0xe0) * 8 + 0x20);
          if (plVar16 == (long *)0x0) goto LAB_0356e280;
          iVar12 = (**(code **)(*plVar16 + 0x1a8))(plVar16,*(undefined8 *)(*plVar16 + 0x1b0));
          if (iVar12 == 0) goto LAB_0356de60;
        }
        lVar17 = *(long *)(unaff_x20 + 0xd8);
        if (lVar17 == 0) goto LAB_0356e280;
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x20 + 0xe0)) goto LAB_0356e284;
        uVar18 = *(undefined8 *)(unaff_x20 + 0x1e8);
        uVar2 = *(undefined4 *)(unaff_x20 + 0x110);
        uVar15 = *(undefined8 *)(unaff_x20 + 0xe8);
        uVar1 = *(undefined8 *)(unaff_x20 + 0xf0);
        uVar3 = *(undefined4 *)(unaff_x20 + 0x114);
        uVar20 = *(undefined8 *)(lVar17 + (long)(int)*(uint *)(unaff_x20 + 0xe0) * 8 + 0x20);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_03777f70(uVar18,uVar2,0,uVar1,uVar15,uVar3,uVar20,&stack0x00000018);
        puVar7 = Photon_Voice_OpusCodec_EncoderFloat_TypeInfo;
        puVar6 = _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo;
        puVar5 = 
        Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
        ;
        if (in_stack_00000018 == 0) goto LAB_0356e280;
        lVar17 = 0;
        goto LAB_0356df60;
      }
      unaff_x27 = unaff_x27 + 1;
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_x27) goto LAB_0356e284;
      if (*(long *)(unaff_x20 + 200) == 0) goto LAB_0356e280;
      unaff_w23 = *(int *)(unaff_x28 + unaff_x27 * 4);
      iStack0000000000000028 = unaff_w23;
      uVar14 = FUN_0219c130(*(long *)(unaff_x20 + 200),&stack0x00000028,*unaff_x21);
    } while ((uVar14 & 1) != 0);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar12 = FUN_037775a0(unaff_w23,0);
    if (iVar12 == 0) {
      if ((unaff_w23 == 0x2011) || (unaff_w23 == 0xad)) {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = 0x2d;
LAB_0356dc28:
        iVar12 = FUN_037775a0(uVar15,0);
        if (iVar12 != 0) goto LAB_0356dc38;
      }
      else if (unaff_w23 == 0xa0) {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = 0x20;
        goto LAB_0356dc28;
      }
      if (*(long *)(unaff_x20 + 0x208) == 0) break;
      iStack0000000000000028 = unaff_w23;
      FUN_01b5f01c(*(long *)(unaff_x20 + 0x208),&stack0x00000028,
                   *(undefined8 *)
                    Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                  );
      in_stack_00000008._4_4_ = 1;
      goto LAB_0356ddbc;
    }
LAB_0356dc38:
    unaff_x24 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
    FUN_03568160(unaff_x24,unaff_w23,iVar12,0);
    if (*(long *)(unaff_x20 + 0xb8) == 0) break;
    iStack0000000000000028 = iVar12;
    uVar14 = FUN_0219c130(*(long *)(unaff_x20 + 0xb8),&stack0x00000028,
                          *(undefined8 *)
                           System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo);
    if ((uVar14 & 1) == 0) {
      if (*(long *)(unaff_x20 + 0x1f0) == 0) break;
      iStack0000000000000028 = iVar12;
      uVar14 = FUN_021e5f08(*(long *)(unaff_x20 + 0x1f0),&stack0x00000028,
                            *(undefined8 *)PTR_DAT_03ccd4f0);
      if ((uVar14 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x1e8) == 0) break;
        iStack0000000000000028 = iVar12;
        FUN_01b5f01c(*(long *)(unaff_x20 + 0x1e8),&stack0x00000028,
                     *(undefined8 *)
                      Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                    );
      }
      if (*(long *)(unaff_x20 + 0x200) == 0) break;
      iStack0000000000000028 = unaff_w23;
      uVar14 = FUN_021e5f08(*(long *)(unaff_x20 + 0x200),&stack0x00000028,
                            *(undefined8 *)PTR_DAT_03ccd4f0);
      if ((uVar14 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x1f8) == 0) break;
        FUN_01b5f01c(*(long *)(unaff_x20 + 0x1f8),unaff_x24,
                     *(undefined8 *)
                      _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                    );
      }
      goto LAB_0356ddbc;
    }
    if ((*(long *)(unaff_x20 + 0xb8) == 0) ||
       (in_stack_00000020._4_4_ = iVar12,
       FUN_0219b634(*(long *)(unaff_x20 + 0xb8),(long)&stack0x00000020 + 4,&stack0x00000028,
                    *(undefined8 *)Mono_CSharp_Operator_OpType_TypeInfo), unaff_x24 == 0)) break;
    *(ulong *)(unaff_x24 + 0x20) = CONCAT44(uStack000000000000002c,iStack0000000000000028);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    *(long *)(unaff_x24 + 0x18) = unaff_x20;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    param_2 = *(long *)(unaff_x20 + 0xc0);
    param_1 = (undefined8 *)
              _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
    ;
    if (param_2 == 0) break;
  }
  goto LAB_0356e280;
LAB_0356df60:
  do {
    if ((int)*(uint *)(in_stack_00000018 + 0x18) <= (int)(uint)lVar17) {
LAB_0356e010:
      lVar17 = *(long *)(unaff_x20 + 0x1e8);
      if (lVar17 != 0) {
        lVar19 = *(long *)puVar4;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        uVar14 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 200));
        if ((uVar14 & 1) == 0) {
          *(undefined4 *)(lVar17 + 0x18) = 0;
        }
        else {
          iVar12 = *(int *)(lVar17 + 0x18);
          *(undefined4 *)(lVar17 + 0x18) = 0;
          if (0 < iVar12) {
            FUN_02793a34(*(undefined8 *)(lVar17 + 0x10),0,iVar12,0);
          }
        }
        puVar9 = Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass34_0_TypeInfo;
        puVar8 = Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_0_TypeInfo;
        puVar7 = System_Linq_Expressions_Interpreter_OrInstruction_OrSByte_TypeInfo;
        puVar6 = 
        _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
        ;
        puVar4 = PTR_DAT_03cc45b0;
        lVar17 = *(long *)(unaff_x20 + 0x1f8);
        if (lVar17 != 0) {
          iVar12 = 0;
          goto LAB_0356e0a8;
        }
      }
      break;
    }
    if (*(uint *)(in_stack_00000018 + 0x18) <= (uint)lVar17) {
LAB_0356e284:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar19 = *(long *)(in_stack_00000018 + lVar17 * 8 + 0x20);
    if (lVar19 == 0) goto LAB_0356e010;
    iVar12 = FUN_03776e5c(lVar19,0);
    FUN_03776ec0(lVar19,*(undefined4 *)(unaff_x20 + 0xe0),0);
    if (*(long *)(unaff_x20 + 0xb0) == 0) break;
    FUN_01b5f01c(*(long *)(unaff_x20 + 0xb0),lVar19,*(undefined8 *)puVar6);
    if (*(long *)(unaff_x20 + 0xb8) == 0) break;
    iStack0000000000000028 = iVar12;
    FUN_0219b9a4(*(long *)(unaff_x20 + 0xb8),&stack0x00000028,lVar19,*(undefined8 *)puVar7);
    if (*(long *)(unaff_x20 + 0x1e0) == 0) break;
    iStack0000000000000028 = iVar12;
    FUN_01b5f01c(*(long *)(unaff_x20 + 0x1e0),&stack0x00000028,*(undefined8 *)puVar5);
    if (*(long *)(unaff_x20 + 0x1d8) == 0) break;
    iStack0000000000000028 = iVar12;
    FUN_01b5f01c(*(long *)(unaff_x20 + 0x1d8),&stack0x00000028,*(undefined8 *)puVar5);
    lVar17 = lVar17 + 1;
  } while (in_stack_00000018 != 0);
  goto LAB_0356e280;
LAB_0356e0a8:
  if (iVar12 < *(int *)(lVar17 + 0x18)) {
    FUN_02215a88(lVar17,iVar12,&stack0x00000028,*(undefined8 *)puVar4);
    lVar17 = CONCAT44(uStack000000000000002c,iStack0000000000000028);
    if ((lVar17 == 0) || (*(long *)(unaff_x20 + 0xb8) == 0)) goto LAB_0356e280;
    iStack0000000000000028 = *(int *)(lVar17 + 0x28);
    uVar14 = FUN_0219f8b8(*(long *)(unaff_x20 + 0xb8),&stack0x00000028,&stack0x00000010,
                          *(undefined8 *)puVar8);
    if ((uVar14 & 1) == 0) {
      if (*(long *)(unaff_x20 + 0x1e8) == 0) goto LAB_0356e280;
      iStack0000000000000028 = *(int *)(lVar17 + 0x28);
      FUN_01b5f01c(*(long *)(unaff_x20 + 0x1e8),&stack0x00000028,*(undefined8 *)puVar5);
    }
    else {
      *(undefined8 *)(lVar17 + 0x20) = in_stack_00000010;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      *(long *)(lVar17 + 0x18) = unaff_x20;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_0356e280;
      FUN_01b5f01c(*(long *)(unaff_x20 + 0xc0),lVar17,*(undefined8 *)puVar6);
      if (*(long *)(unaff_x20 + 200) == 0) goto LAB_0356e280;
      iStack0000000000000028 = *(int *)(lVar17 + 0x14);
      FUN_0219b9a4(*(long *)(unaff_x20 + 200),&stack0x00000028,lVar17,*(undefined8 *)puVar7);
      if (*(long *)(unaff_x20 + 0x1f8) == 0) goto LAB_0356e280;
      FUN_022190f4(*(long *)(unaff_x20 + 0x1f8),iVar12,*(undefined8 *)puVar9);
      iVar12 = iVar12 + -1;
    }
    lVar17 = *(long *)(unaff_x20 + 0x1f8);
    iVar12 = iVar12 + 1;
    if (lVar17 == 0) goto LAB_0356e280;
    goto LAB_0356e0a8;
  }
  bVar11 = *(char *)(unaff_x20 + 0xe4) != '\0';
  if ((uVar13 & 1) == 0 && bVar11) {
    do {
      uVar14 = FUN_0356e288();
    } while ((uVar14 & 1) == 0);
    uVar13 = 1;
  }
  else {
    uVar13 = uVar13 | bVar11;
  }
  if ((uVar10 & 1) != 0) {
    FUN_0356d1ac();
  }
  lVar17 = *(long *)(unaff_x20 + 0x1f8);
  if (lVar17 == 0) goto LAB_0356e280;
  iVar12 = 0;
  while (iVar12 < *(int *)(lVar17 + 0x18)) {
    FUN_02215a88(lVar17,iVar12,&stack0x00000028,*(undefined8 *)puVar4);
    if ((CONCAT44(uStack000000000000002c,iStack0000000000000028) == 0) ||
       (*(long *)(unaff_x20 + 0x208) == 0)) goto LAB_0356e280;
    iStack0000000000000028 =
         *(int *)(CONCAT44(uStack000000000000002c,iStack0000000000000028) + 0x14);
    FUN_01b5f01c(*(long *)(unaff_x20 + 0x208),&stack0x00000028,*(undefined8 *)puVar5);
    lVar17 = *(long *)(unaff_x20 + 0x1f8);
    iVar12 = iVar12 + 1;
    if (lVar17 == 0) goto LAB_0356e280;
  }
  *unaff_x19 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar17 = *(long *)(unaff_x20 + 0x208);
  if (lVar17 != 0) {
    if (0 < *(int *)(lVar17 + 0x18)) {
      lVar17 = FUN_022195a8(lVar17,*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ElevateQuadraticToCubicBezier_00000A5D_PostfixBurstDelegate_var
                           );
      *unaff_x19 = lVar17;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    uVar13 = uVar13 & (in_stack_00000008._4_4_ ^ 1);
LAB_0356d9fc:
    return uVar13 & 1;
  }
LAB_0356e280:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


