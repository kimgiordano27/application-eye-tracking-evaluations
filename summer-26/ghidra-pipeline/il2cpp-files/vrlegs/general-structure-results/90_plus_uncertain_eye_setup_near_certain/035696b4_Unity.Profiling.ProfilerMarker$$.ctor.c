/*
FUNCTION_NAME: Unity.Profiling.ProfilerMarker$$.ctor
ENTRY_POINT: 035696b4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Profiling_ProfilerMarker___ctor(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long unaff_x19;
  long *plVar14;
  int iVar15;
  long *unaff_x24;
  long *unaff_x26;
  undefined8 unaff_x27;
  float fVar16;
  float fVar17;
  float fVar18;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if (param_1 == 0) goto LAB_03569c00;
  FUN_037769f8(*(undefined4 *)(param_1 + 0x40));
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776a08(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x44));
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776a18(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x48));
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776a28(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x4c));
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776a38(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x50));
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776a40(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x54));
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776a50(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x58));
  plVar14 = (long *)(unaff_x19 + 0xd8);
  lVar10 = *plVar14;
  if ((lVar10 == 0) || (*(long *)(lVar10 + 0x18) == 0)) {
    lVar10 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cecfe0,1);
    *plVar14 = lVar10;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14,lVar10);
    lVar10 = *plVar14;
    if (lVar10 == 0) goto LAB_03569c00;
  }
  if (*(int *)(lVar10 + 0x18) == 0) goto LAB_03569df4;
  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(unaff_x19 + 0x100);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar10 = *(long *)(unaff_x19 + 0xf8);
  if (lVar10 == 0) goto LAB_03569c00;
  fVar16 = (float)*(undefined8 *)(lVar10 + 0x60);
  fVar17 = (float)((ulong)*(undefined8 *)(lVar10 + 0x60) >> 0x20);
  uVar13 = CONCAT44((int)fVar17,(int)fVar16);
  *(ulong *)(unaff_x19 + 0x108) =
       uVar13 ^ (uVar13 ^ 0x8000000080000000) &
                CONCAT44(-(uint)(fVar17 == INFINITY),-(uint)(fVar16 == INFINITY));
  uVar6 = *(uint *)(unaff_x19 + 400);
  iVar15 = -0x80000000;
  if (*(float *)(lVar10 + 0x5c) != INFINITY) {
    iVar15 = (int)*(float *)(lVar10 + 0x5c);
  }
  *(int *)(unaff_x19 + 0x110) = iVar15;
  if ((uVar6 < 8) && ((0xcfU >> (ulong)(uVar6 & 0x1f) & 1) != 0)) {
    *(undefined4 *)(unaff_x19 + 0x114) = *(undefined4 *)(&DAT_00e68898 + (long)(int)uVar6 * 4);
  }
  lVar10 = *(long *)(unaff_x19 + 0x1a0);
  if ((lVar10 != 0) && (*(long *)(lVar10 + 0x18) != 0)) {
    if ((uint)*(long *)(lVar10 + 0x18) < 5) {
LAB_03569df4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar11 = *(long *)(unaff_x19 + 0x198);
    if (lVar11 == 0) goto LAB_03569c00;
    if (*(uint *)(lVar11 + 0x18) < 5) goto LAB_03569df4;
    uVar12 = *(undefined8 *)(lVar10 + 0x60);
    *(undefined8 *)(lVar11 + 0x68) = *(undefined8 *)(lVar10 + 0x68);
    *(undefined8 *)(lVar11 + 0x60) = uVar12;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar11 + 0x60),0);
    lVar10 = *(long *)(unaff_x19 + 0x1a0);
    if (lVar10 == 0) goto LAB_03569c00;
    if (*(uint *)(lVar10 + 0x18) < 8) goto LAB_03569df4;
    lVar11 = *(long *)(unaff_x19 + 0x198);
    if (lVar11 == 0) goto LAB_03569c00;
    if (*(uint *)(lVar11 + 0x18) < 8) goto LAB_03569df4;
    uVar12 = *(undefined8 *)(lVar10 + 0x90);
    *(undefined8 *)(lVar11 + 0x98) = *(undefined8 *)(lVar10 + 0x98);
    *(undefined8 *)(lVar11 + 0x90) = uVar12;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar11 + 0x90),0);
  }
  lVar10 = *(long *)(unaff_x19 + 0x130);
  if ((lVar10 != 0) && (iVar15 = *(int *)(lVar10 + 0x18), 0 < iVar15)) {
    if (*(long *)(unaff_x19 + 0x138) == 0) {
      uVar12 = thunk_FUN_01a89e68(*(undefined8 *)
                                   _Common_Gameplay_Support_Scripts_Coins_OneTimeCoinTaskDisplay_<>c_TypeInfo
                                 );
      FUN_02215594(uVar12,iVar15,
                   *(undefined8 *)RootMotion_FinalIK_OffsetModifier_<Initiate>d__8_TypeInfo);
      *(undefined8 *)(unaff_x19 + 0x138) = uVar12;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(unaff_x19 + 0x138),uVar12);
      lVar10 = *(long *)(unaff_x19 + 0x130);
      if (lVar10 == 0) goto LAB_03569c00;
    }
    puVar9 = 
    _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_0_TypeInfo
    ;
    puVar8 = PTR_DAT_03cc45a8;
    iVar15 = 0;
    do {
      if (*(int *)(lVar10 + 0x18) <= iVar15) goto LAB_03569944;
      lVar11 = *(long *)(unaff_x19 + 0x138);
      FUN_02215a88(lVar10,iVar15,&stack0x00000038,*(undefined8 *)puVar8);
      if (lVar11 == 0) break;
      FUN_01b5f01c(lVar11,in_stack_00000038,*(undefined8 *)puVar9);
      lVar10 = *(long *)(unaff_x19 + 0x130);
      iVar15 = iVar15 + 1;
    } while (lVar10 != 0);
    goto LAB_03569c00;
  }
LAB_03569944:
  lVar10 = *(long *)(unaff_x19 + 0x148);
  if (lVar10 == 0) {
    uVar13 = FUN_025bd4ac(0,**(undefined8 **)(*unaff_x24 + 0xb8),0);
    if ((uVar13 & 1) != 0) {
      lVar10 = *(long *)(unaff_x19 + 0x148);
      goto LAB_0356996c;
    }
    uVar12 = FUN_036d3824();
    uVar12 = FUN_025bdc88(*(undefined8 *)
                           _Common_Gameplay_Support_Scripts_Coins_OneTimeCoinTaskDisplay_<Start>d__6_TypeInfo
                          ,uVar12,*(undefined8 *)
                                   _Common_UserGrowth_Scripts_OpenUrlTool_<Start>d__5_TypeInfo,0);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*unaff_x26);
    }
    FUN_0367b470(uVar12);
  }
  else {
LAB_0356996c:
    *(long *)(unaff_x19 + 0x38) = lVar10;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  lVar10 = *(long *)(unaff_x19 + 0xb0);
  if (lVar10 != 0) {
    lVar11 = *(long *)Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_TypeInfo;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    uVar13 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
    if ((uVar13 & 1) == 0) {
      *(undefined4 *)(lVar10 + 0x18) = 0;
    }
    else {
      iVar15 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      if (0 < iVar15) {
        FUN_02793a34(*(undefined8 *)(lVar10 + 0x10),0,iVar15,0);
      }
    }
    lVar10 = *(long *)(unaff_x19 + 0xc0);
    if (lVar10 != 0) {
      lVar11 = *(long *)Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22_TypeInfo;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      uVar13 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
      if ((uVar13 & 1) == 0) {
        *(undefined4 *)(lVar10 + 0x18) = 0;
      }
      else {
        iVar15 = *(int *)(lVar10 + 0x18);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        if (0 < iVar15) {
          FUN_02793a34(*(undefined8 *)(lVar10 + 0x10),0,iVar15,0);
        }
      }
      puVar9 = Internal_Cryptography_OidLookup_<>c_TypeInfo;
      puVar8 = System_Data_Common_ObjectStorage_TempAssemblyComparer_TypeInfo;
      lVar10 = *(long *)(unaff_x19 + 0x118);
      if (lVar10 != 0) {
        bVar7 = false;
        iVar15 = 0;
        do {
          if (*(int *)(lVar10 + 0x18) <= iVar15) {
            if (!bVar7) {
              uVar12 = FUN_036d3824();
              uVar12 = FUN_025bdc88(*(undefined8 *)OVR_OpenVR_OpenVR_COpenVRContext_TypeInfo,uVar12,
                                    *(undefined8 *)PTR_DAT_03cc3128,0);
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
              }
              FUN_0367a6ec(uVar12,0);
              fVar16 = (float)FUN_03776980(unaff_x27,0);
              in_stack_00000038 = 0;
              in_stack_00000040 = 0;
              in_stack_00000048 = 0;
              FUN_03776cbc(0,0,0,0,fVar16 / 5.0,&stack0x00000038,0);
              if (*(int *)(*(long *)
                            System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                          + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_03776a78(0);
              uVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
              FUN_03776f7c(0x3f800000,uVar12,0);
              if (*(long *)(unaff_x19 + 0xb0) == 0) break;
              FUN_01b5f01c(*(long *)(unaff_x19 + 0xb0),uVar12,
                           *(undefined8 *)
                            _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo
                          );
              lVar10 = *(long *)(unaff_x19 + 0xc0);
              uVar12 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
              FUN_035680e4(uVar12,0x20);
              if (lVar10 == 0) break;
              FUN_01b5f01c(lVar10,uVar12,
                           *(undefined8 *)
                            _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                          );
            }
            FUN_03568878();
            return;
          }
          FUN_02215a88(lVar10,iVar15,&stack0x00000038,*(undefined8 *)puVar9);
          lVar10 = in_stack_00000038;
          lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
          FUN_03776ec8(lVar11,0);
          if (lVar11 == 0) break;
          iVar15 = iVar15 + 1;
          FUN_03776e64(lVar11,iVar15,0);
          if (lVar10 == 0) break;
          fVar16 = *(float *)(lVar10 + 0x18) + *(float *)(lVar10 + 0x20) + 0.5;
          fVar17 = *(float *)(lVar10 + 0x1c) + 0.5;
          iVar1 = -0x80000000;
          if (*(float *)(lVar10 + 0x14) != INFINITY) {
            iVar1 = (int)*(float *)(lVar10 + 0x14);
          }
          fVar18 = *(float *)(lVar10 + 0x20) + 0.5;
          iVar2 = -0x80000000;
          if (fVar16 != INFINITY) {
            iVar2 = (int)fVar16;
          }
          iVar3 = -0x80000000;
          if (fVar17 != INFINITY) {
            iVar3 = (int)fVar17;
          }
          iVar4 = -0x80000000;
          if (fVar18 != INFINITY) {
            iVar4 = (int)fVar18;
          }
          in_stack_00000050 = 0;
          in_stack_00000058 = 0;
          FUN_03776ad0(&stack0x00000050,iVar1,*(int *)(unaff_x19 + 0x10c) - iVar2,iVar3,iVar4,0);
          FUN_03776ea0(lVar11,in_stack_00000050,in_stack_00000058,0);
          in_stack_00000038 = 0;
          in_stack_00000040 = 0;
          in_stack_00000048 = 0;
          FUN_03776cbc(*(undefined4 *)(lVar10 + 0x1c),*(undefined4 *)(lVar10 + 0x20),
                       *(undefined4 *)(lVar10 + 0x24),*(undefined4 *)(lVar10 + 0x28),
                       *(undefined4 *)(lVar10 + 0x2c),&stack0x00000038,0);
          in_stack_00000028 = in_stack_00000040;
          in_stack_00000020 = in_stack_00000038;
          in_stack_00000030 = in_stack_00000048;
          FUN_03776e80(lVar11,&stack0x00000020,0);
          FUN_03776eb0(*(undefined4 *)(lVar10 + 0x30),lVar11,0);
          FUN_03776ec0(lVar11,0,0);
          if (*(long *)(unaff_x19 + 0xb0) == 0) break;
          FUN_01b5f01c(*(long *)(unaff_x19 + 0xb0),lVar11,
                       *(undefined8 *)
                        _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo
                      );
          uVar5 = *(undefined4 *)(lVar10 + 0x10);
          uVar12 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
          FUN_035680e4(uVar12,uVar5);
          if (*(long *)(unaff_x19 + 0xc0) == 0) break;
          bVar7 = (bool)(bVar7 | *(int *)(lVar10 + 0x10) == 0x20);
          FUN_01b5f01c(*(long *)(unaff_x19 + 0xc0),uVar12,
                       *(undefined8 *)
                        _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                      );
          lVar10 = *(long *)(unaff_x19 + 0x118);
        } while (lVar10 != 0);
      }
    }
  }
LAB_03569c00:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


