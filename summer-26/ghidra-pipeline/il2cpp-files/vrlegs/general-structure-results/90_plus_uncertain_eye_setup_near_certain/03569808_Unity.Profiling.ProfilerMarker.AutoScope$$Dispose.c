/*
FUNCTION_NAME: Unity.Profiling.ProfilerMarker.AutoScope$$Dispose
ENTRY_POINT: 03569808
PROGRAM: vrlegs-libil2cpp.so
SCORE: 113
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Profiling_ProfilerMarker_AutoScope__Dispose(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x19;
  int iVar13;
  long *unaff_x24;
  long *unaff_x26;
  undefined8 unaff_x27;
  float fVar14;
  float fVar15;
  float fVar16;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  *(undefined4 *)(unaff_x19 + 0x114) = *(undefined4 *)(&DAT_00e68898 + param_1 * 4);
  lVar12 = *(long *)(unaff_x19 + 0x1a0);
  if ((lVar12 != 0) && (*(long *)(lVar12 + 0x18) != 0)) {
    if ((uint)*(long *)(lVar12 + 0x18) < 5) {
LAB_03569df4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar9 = *(long *)(unaff_x19 + 0x198);
    if (lVar9 == 0) goto LAB_03569c00;
    if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_03569df4;
    uVar10 = *(undefined8 *)(lVar12 + 0x60);
    *(undefined8 *)(lVar9 + 0x68) = *(undefined8 *)(lVar12 + 0x68);
    *(undefined8 *)(lVar9 + 0x60) = uVar10;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar9 + 0x60),0);
    lVar12 = *(long *)(unaff_x19 + 0x1a0);
    if (lVar12 == 0) goto LAB_03569c00;
    if (*(uint *)(lVar12 + 0x18) < 8) goto LAB_03569df4;
    lVar9 = *(long *)(unaff_x19 + 0x198);
    if (lVar9 == 0) goto LAB_03569c00;
    if (*(uint *)(lVar9 + 0x18) < 8) goto LAB_03569df4;
    uVar10 = *(undefined8 *)(lVar12 + 0x90);
    *(undefined8 *)(lVar9 + 0x98) = *(undefined8 *)(lVar12 + 0x98);
    *(undefined8 *)(lVar9 + 0x90) = uVar10;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar9 + 0x90),0);
  }
  lVar12 = *(long *)(unaff_x19 + 0x130);
  if ((lVar12 != 0) && (iVar13 = *(int *)(lVar12 + 0x18), 0 < iVar13)) {
    if (*(long *)(unaff_x19 + 0x138) == 0) {
      uVar10 = thunk_FUN_01a89e68(*(undefined8 *)
                                   _Common_Gameplay_Support_Scripts_Coins_OneTimeCoinTaskDisplay_<>c_TypeInfo
                                 );
      FUN_02215594(uVar10,iVar13,
                   *(undefined8 *)RootMotion_FinalIK_OffsetModifier_<Initiate>d__8_TypeInfo);
      *(undefined8 *)(unaff_x19 + 0x138) = uVar10;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(unaff_x19 + 0x138),uVar10);
      lVar12 = *(long *)(unaff_x19 + 0x130);
      if (lVar12 == 0) goto LAB_03569c00;
    }
    puVar8 = 
    _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_0_TypeInfo
    ;
    puVar7 = PTR_DAT_03cc45a8;
    iVar13 = 0;
    do {
      if (*(int *)(lVar12 + 0x18) <= iVar13) goto LAB_03569944;
      lVar9 = *(long *)(unaff_x19 + 0x138);
      FUN_02215a88(lVar12,iVar13,&stack0x00000038,*(undefined8 *)puVar7);
      if (lVar9 == 0) break;
      FUN_01b5f01c(lVar9,in_stack_00000038,*(undefined8 *)puVar8);
      lVar12 = *(long *)(unaff_x19 + 0x130);
      iVar13 = iVar13 + 1;
    } while (lVar12 != 0);
    goto LAB_03569c00;
  }
LAB_03569944:
  lVar12 = *(long *)(unaff_x19 + 0x148);
  if (lVar12 == 0) {
    uVar11 = FUN_025bd4ac(0,**(undefined8 **)(*unaff_x24 + 0xb8),0);
    if ((uVar11 & 1) != 0) {
      lVar12 = *(long *)(unaff_x19 + 0x148);
      goto LAB_0356996c;
    }
    uVar10 = FUN_036d3824();
    uVar10 = FUN_025bdc88(*(undefined8 *)
                           _Common_Gameplay_Support_Scripts_Coins_OneTimeCoinTaskDisplay_<Start>d__6_TypeInfo
                          ,uVar10,*(undefined8 *)
                                   _Common_UserGrowth_Scripts_OpenUrlTool_<Start>d__5_TypeInfo,0);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*unaff_x26);
    }
    FUN_0367b470(uVar10);
  }
  else {
LAB_0356996c:
    *(long *)(unaff_x19 + 0x38) = lVar12;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  lVar12 = *(long *)(unaff_x19 + 0xb0);
  if (lVar12 != 0) {
    lVar9 = *(long *)Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_TypeInfo;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    uVar11 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
    if ((uVar11 & 1) == 0) {
      *(undefined4 *)(lVar12 + 0x18) = 0;
    }
    else {
      iVar13 = *(int *)(lVar12 + 0x18);
      *(undefined4 *)(lVar12 + 0x18) = 0;
      if (0 < iVar13) {
        FUN_02793a34(*(undefined8 *)(lVar12 + 0x10),0,iVar13,0);
      }
    }
    lVar12 = *(long *)(unaff_x19 + 0xc0);
    if (lVar12 != 0) {
      lVar9 = *(long *)Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22_TypeInfo;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      uVar11 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
      if ((uVar11 & 1) == 0) {
        *(undefined4 *)(lVar12 + 0x18) = 0;
      }
      else {
        iVar13 = *(int *)(lVar12 + 0x18);
        *(undefined4 *)(lVar12 + 0x18) = 0;
        if (0 < iVar13) {
          FUN_02793a34(*(undefined8 *)(lVar12 + 0x10),0,iVar13,0);
        }
      }
      puVar8 = Internal_Cryptography_OidLookup_<>c_TypeInfo;
      puVar7 = System_Data_Common_ObjectStorage_TempAssemblyComparer_TypeInfo;
      lVar12 = *(long *)(unaff_x19 + 0x118);
      if (lVar12 != 0) {
        bVar6 = false;
        iVar13 = 0;
        do {
          if (*(int *)(lVar12 + 0x18) <= iVar13) {
            if (!bVar6) {
              uVar10 = FUN_036d3824();
              uVar10 = FUN_025bdc88(*(undefined8 *)OVR_OpenVR_OpenVR_COpenVRContext_TypeInfo,uVar10,
                                    *(undefined8 *)PTR_DAT_03cc3128,0);
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
              }
              FUN_0367a6ec(uVar10,0);
              fVar14 = (float)FUN_03776980(unaff_x27,0);
              in_stack_00000038 = 0;
              in_stack_00000040 = 0;
              in_stack_00000048 = 0;
              FUN_03776cbc(0,0,0,0,fVar14 / 5.0,&stack0x00000038,0);
              if (*(int *)(*(long *)
                            System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                          + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_03776a78(0);
              uVar10 = thunk_FUN_01a89e68(*(undefined8 *)puVar7);
              FUN_03776f7c(0x3f800000,uVar10,0);
              if (*(long *)(unaff_x19 + 0xb0) == 0) break;
              FUN_01b5f01c(*(long *)(unaff_x19 + 0xb0),uVar10,
                           *(undefined8 *)
                            _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo
                          );
              lVar12 = *(long *)(unaff_x19 + 0xc0);
              uVar10 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
              FUN_035680e4(uVar10,0x20);
              if (lVar12 == 0) break;
              FUN_01b5f01c(lVar12,uVar10,
                           *(undefined8 *)
                            _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                          );
            }
            FUN_03568878();
            return;
          }
          FUN_02215a88(lVar12,iVar13,&stack0x00000038,*(undefined8 *)puVar8);
          lVar12 = in_stack_00000038;
          lVar9 = thunk_FUN_01a89e68(*(undefined8 *)puVar7);
          FUN_03776ec8(lVar9,0);
          if (lVar9 == 0) break;
          iVar13 = iVar13 + 1;
          FUN_03776e64(lVar9,iVar13,0);
          if (lVar12 == 0) break;
          fVar14 = *(float *)(lVar12 + 0x18) + *(float *)(lVar12 + 0x20) + 0.5;
          fVar15 = *(float *)(lVar12 + 0x1c) + 0.5;
          iVar1 = -0x80000000;
          if (*(float *)(lVar12 + 0x14) != INFINITY) {
            iVar1 = (int)*(float *)(lVar12 + 0x14);
          }
          fVar16 = *(float *)(lVar12 + 0x20) + 0.5;
          iVar2 = -0x80000000;
          if (fVar14 != INFINITY) {
            iVar2 = (int)fVar14;
          }
          iVar3 = -0x80000000;
          if (fVar15 != INFINITY) {
            iVar3 = (int)fVar15;
          }
          iVar4 = -0x80000000;
          if (fVar16 != INFINITY) {
            iVar4 = (int)fVar16;
          }
          in_stack_00000050 = 0;
          in_stack_00000058 = 0;
          FUN_03776ad0(&stack0x00000050,iVar1,*(int *)(unaff_x19 + 0x10c) - iVar2,iVar3,iVar4,0);
          FUN_03776ea0(lVar9,in_stack_00000050,in_stack_00000058,0);
          in_stack_00000038 = 0;
          in_stack_00000040 = 0;
          in_stack_00000048 = 0;
          FUN_03776cbc(*(undefined4 *)(lVar12 + 0x1c),*(undefined4 *)(lVar12 + 0x20),
                       *(undefined4 *)(lVar12 + 0x24),*(undefined4 *)(lVar12 + 0x28),
                       *(undefined4 *)(lVar12 + 0x2c),&stack0x00000038,0);
          in_stack_00000028 = in_stack_00000040;
          in_stack_00000020 = in_stack_00000038;
          in_stack_00000030 = in_stack_00000048;
          FUN_03776e80(lVar9,&stack0x00000020,0);
          FUN_03776eb0(*(undefined4 *)(lVar12 + 0x30),lVar9,0);
          FUN_03776ec0(lVar9,0,0);
          if (*(long *)(unaff_x19 + 0xb0) == 0) break;
          FUN_01b5f01c(*(long *)(unaff_x19 + 0xb0),lVar9,
                       *(undefined8 *)
                        _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo
                      );
          uVar5 = *(undefined4 *)(lVar12 + 0x10);
          uVar10 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
          FUN_035680e4(uVar10,uVar5);
          if (*(long *)(unaff_x19 + 0xc0) == 0) break;
          bVar6 = (bool)(bVar6 | *(int *)(lVar12 + 0x10) == 0x20);
          FUN_01b5f01c(*(long *)(unaff_x19 + 0xc0),uVar10,
                       *(undefined8 *)
                        _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                      );
          lVar12 = *(long *)(unaff_x19 + 0x118);
        } while (lVar12 != 0);
      }
    }
  }
LAB_03569c00:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


