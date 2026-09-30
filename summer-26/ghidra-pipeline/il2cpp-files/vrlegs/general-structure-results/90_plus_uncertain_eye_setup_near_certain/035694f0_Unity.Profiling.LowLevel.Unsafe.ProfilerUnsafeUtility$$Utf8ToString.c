/*
FUNCTION_NAME: Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$Utf8ToString
ENTRY_POINT: 035694f0
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


void Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__Utf8ToString(void)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint in_w8;
  long lVar16;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  
  if (in_w8 < 4) {
LAB_03569df4:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined8 *)(unaff_x20 + 0x38) = *unaff_x21;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x20 + 0x38));
  puVar8 = PTR_DAT_03cbe438;
  if (*(uint *)(unaff_x20 + 0x18) < 5) goto LAB_03569df4;
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)PTR_DAT_03cc3930;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar12 = FUN_025be564();
  lVar16 = *(long *)puVar8;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar16);
  }
  FUN_0367a7f4(uVar12);
  puVar9 = PTR_DAT_03cbebc0;
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  lVar16 = unaff_x19 + 0x50;
  UnityEngine_UIElements_DefaultEventSystem__ProcessTouchEvents
            (lVar16,*(undefined8 *)(*(long *)(unaff_x19 + 0xf8) + 0x10),0);
  FUN_03776948(lVar16,**(undefined8 **)(*(long *)puVar9 + 0xb8),0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  fVar19 = *(float *)(*(long *)(unaff_x19 + 0xf8) + 0x18);
  iVar18 = -0x80000000;
  if (fVar19 != INFINITY) {
    iVar18 = (int)fVar19;
  }
  FUN_03776958(lVar16,iVar18,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776968(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x1c),lVar16,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776978(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x24),lVar16,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776988(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x2c),lVar16,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776998(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x30),lVar16,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_037769a8(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x38),lVar16,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_037769b8(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x28),lVar16,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_037769c8(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x34),lVar16,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_037769d8(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x3c),lVar16,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_037769e8(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x44),lVar16,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_037769f8(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x40),lVar16,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776a08(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x44),lVar16,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776a18(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x48),lVar16,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776a28(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x4c),lVar16,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776a38(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x50),lVar16,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776a40(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x54),lVar16,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776a50(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x58),lVar16,0);
  plVar17 = (long *)(unaff_x19 + 0xd8);
  lVar13 = *plVar17;
  if ((lVar13 == 0) || (*(long *)(lVar13 + 0x18) == 0)) {
    lVar13 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cecfe0,1);
    *plVar17 = lVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17,lVar13);
    lVar13 = *plVar17;
    if (lVar13 == 0) goto LAB_03569c00;
  }
  if (*(int *)(lVar13 + 0x18) == 0) goto LAB_03569df4;
  *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(unaff_x19 + 0x100);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar13 = *(long *)(unaff_x19 + 0xf8);
  if (lVar13 == 0) goto LAB_03569c00;
  fVar19 = (float)*(undefined8 *)(lVar13 + 0x60);
  fVar20 = (float)((ulong)*(undefined8 *)(lVar13 + 0x60) >> 0x20);
  uVar15 = CONCAT44((int)fVar20,(int)fVar19);
  *(ulong *)(unaff_x19 + 0x108) =
       uVar15 ^ (uVar15 ^ 0x8000000080000000) &
                CONCAT44(-(uint)(fVar20 == INFINITY),-(uint)(fVar19 == INFINITY));
  uVar6 = *(uint *)(unaff_x19 + 400);
  iVar18 = -0x80000000;
  if (*(float *)(lVar13 + 0x5c) != INFINITY) {
    iVar18 = (int)*(float *)(lVar13 + 0x5c);
  }
  *(int *)(unaff_x19 + 0x110) = iVar18;
  if ((uVar6 < 8) && ((0xcfU >> (ulong)(uVar6 & 0x1f) & 1) != 0)) {
    *(undefined4 *)(unaff_x19 + 0x114) = *(undefined4 *)(&DAT_00e68898 + (long)(int)uVar6 * 4);
  }
  lVar13 = *(long *)(unaff_x19 + 0x1a0);
  if ((lVar13 != 0) && (*(long *)(lVar13 + 0x18) != 0)) {
    if ((uint)*(long *)(lVar13 + 0x18) < 5) goto LAB_03569df4;
    lVar14 = *(long *)(unaff_x19 + 0x198);
    if (lVar14 == 0) goto LAB_03569c00;
    if (*(uint *)(lVar14 + 0x18) < 5) goto LAB_03569df4;
    uVar12 = *(undefined8 *)(lVar13 + 0x60);
    *(undefined8 *)(lVar14 + 0x68) = *(undefined8 *)(lVar13 + 0x68);
    *(undefined8 *)(lVar14 + 0x60) = uVar12;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar14 + 0x60),0);
    lVar13 = *(long *)(unaff_x19 + 0x1a0);
    if (lVar13 == 0) goto LAB_03569c00;
    if (*(uint *)(lVar13 + 0x18) < 8) goto LAB_03569df4;
    lVar14 = *(long *)(unaff_x19 + 0x198);
    if (lVar14 == 0) goto LAB_03569c00;
    if (*(uint *)(lVar14 + 0x18) < 8) goto LAB_03569df4;
    uVar12 = *(undefined8 *)(lVar13 + 0x90);
    *(undefined8 *)(lVar14 + 0x98) = *(undefined8 *)(lVar13 + 0x98);
    *(undefined8 *)(lVar14 + 0x90) = uVar12;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar14 + 0x90),0);
  }
  lVar13 = *(long *)(unaff_x19 + 0x130);
  if ((lVar13 != 0) && (iVar18 = *(int *)(lVar13 + 0x18), 0 < iVar18)) {
    if (*(long *)(unaff_x19 + 0x138) == 0) {
      uVar12 = thunk_FUN_01a89e68(*(undefined8 *)
                                   _Common_Gameplay_Support_Scripts_Coins_OneTimeCoinTaskDisplay_<>c_TypeInfo
                                 );
      FUN_02215594(uVar12,iVar18,
                   *(undefined8 *)RootMotion_FinalIK_OffsetModifier_<Initiate>d__8_TypeInfo);
      *(undefined8 *)(unaff_x19 + 0x138) = uVar12;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(unaff_x19 + 0x138),uVar12);
      lVar13 = *(long *)(unaff_x19 + 0x130);
      if (lVar13 == 0) goto LAB_03569c00;
    }
    puVar11 = 
    _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_0_TypeInfo
    ;
    puVar10 = PTR_DAT_03cc45a8;
    iVar18 = 0;
    do {
      if (*(int *)(lVar13 + 0x18) <= iVar18) goto LAB_03569944;
      lVar14 = *(long *)(unaff_x19 + 0x138);
      FUN_02215a88(lVar13,iVar18,&stack0x00000038,*(undefined8 *)puVar10);
      if (lVar14 == 0) break;
      FUN_01b5f01c(lVar14,in_stack_00000038,*(undefined8 *)puVar11);
      lVar13 = *(long *)(unaff_x19 + 0x130);
      iVar18 = iVar18 + 1;
    } while (lVar13 != 0);
    goto LAB_03569c00;
  }
LAB_03569944:
  lVar13 = *(long *)(unaff_x19 + 0x148);
  if (lVar13 == 0) {
    uVar15 = FUN_025bd4ac(0,**(undefined8 **)(*(long *)puVar9 + 0xb8),0);
    if ((uVar15 & 1) != 0) {
      lVar13 = *(long *)(unaff_x19 + 0x148);
      goto LAB_0356996c;
    }
    uVar12 = FUN_036d3824();
    uVar12 = FUN_025bdc88(*(undefined8 *)
                           _Common_Gameplay_Support_Scripts_Coins_OneTimeCoinTaskDisplay_<Start>d__6_TypeInfo
                          ,uVar12,*(undefined8 *)
                                   _Common_UserGrowth_Scripts_OpenUrlTool_<Start>d__5_TypeInfo,0);
    lVar13 = *(long *)puVar8;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar13);
    }
    FUN_0367b470(uVar12);
  }
  else {
LAB_0356996c:
    *(long *)(unaff_x19 + 0x38) = lVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  lVar13 = *(long *)(unaff_x19 + 0xb0);
  if (lVar13 != 0) {
    lVar14 = *(long *)Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_TypeInfo;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    uVar15 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 200));
    if ((uVar15 & 1) == 0) {
      *(undefined4 *)(lVar13 + 0x18) = 0;
    }
    else {
      iVar18 = *(int *)(lVar13 + 0x18);
      *(undefined4 *)(lVar13 + 0x18) = 0;
      if (0 < iVar18) {
        FUN_02793a34(*(undefined8 *)(lVar13 + 0x10),0,iVar18,0);
      }
    }
    lVar13 = *(long *)(unaff_x19 + 0xc0);
    if (lVar13 != 0) {
      lVar14 = *(long *)Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22_TypeInfo;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      uVar15 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 200));
      in_stack_00000068 = lVar16;
      if ((uVar15 & 1) == 0) {
        *(undefined4 *)(lVar13 + 0x18) = 0;
      }
      else {
        iVar18 = *(int *)(lVar13 + 0x18);
        *(undefined4 *)(lVar13 + 0x18) = 0;
        if (0 < iVar18) {
          FUN_02793a34(*(undefined8 *)(lVar13 + 0x10),0,iVar18,0);
        }
      }
      puVar9 = Internal_Cryptography_OidLookup_<>c_TypeInfo;
      puVar8 = System_Data_Common_ObjectStorage_TempAssemblyComparer_TypeInfo;
      lVar16 = *(long *)(unaff_x19 + 0x118);
      if (lVar16 != 0) {
        bVar7 = false;
        iVar18 = 0;
        do {
          if (*(int *)(lVar16 + 0x18) <= iVar18) {
            if (!bVar7) {
              uVar12 = FUN_036d3824();
              uVar12 = FUN_025bdc88(*(undefined8 *)OVR_OpenVR_OpenVR_COpenVRContext_TypeInfo,uVar12,
                                    *(undefined8 *)PTR_DAT_03cc3128,0);
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
              }
              FUN_0367a6ec(uVar12,0);
              fVar19 = (float)FUN_03776980(in_stack_00000068,0);
              in_stack_00000038 = 0;
              in_stack_00000040 = 0;
              in_stack_00000048 = 0;
              FUN_03776cbc(0,0,0,0,fVar19 / 5.0,&stack0x00000038,0);
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
              lVar16 = *(long *)(unaff_x19 + 0xc0);
              uVar12 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
              FUN_035680e4(uVar12,0x20);
              if (lVar16 == 0) break;
              FUN_01b5f01c(lVar16,uVar12,
                           *(undefined8 *)
                            _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                          );
            }
            FUN_03568878();
            return;
          }
          FUN_02215a88(lVar16,iVar18,&stack0x00000038,*(undefined8 *)puVar9);
          lVar16 = in_stack_00000038;
          lVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
          FUN_03776ec8(lVar13,0);
          if (lVar13 == 0) break;
          iVar18 = iVar18 + 1;
          FUN_03776e64(lVar13,iVar18,0);
          if (lVar16 == 0) break;
          fVar19 = *(float *)(lVar16 + 0x18) + *(float *)(lVar16 + 0x20) + 0.5;
          fVar20 = *(float *)(lVar16 + 0x1c) + 0.5;
          iVar1 = -0x80000000;
          if (*(float *)(lVar16 + 0x14) != INFINITY) {
            iVar1 = (int)*(float *)(lVar16 + 0x14);
          }
          fVar21 = *(float *)(lVar16 + 0x20) + 0.5;
          iVar2 = -0x80000000;
          if (fVar19 != INFINITY) {
            iVar2 = (int)fVar19;
          }
          iVar3 = -0x80000000;
          if (fVar20 != INFINITY) {
            iVar3 = (int)fVar20;
          }
          iVar4 = -0x80000000;
          if (fVar21 != INFINITY) {
            iVar4 = (int)fVar21;
          }
          in_stack_00000050 = 0;
          in_stack_00000058 = 0;
          FUN_03776ad0(&stack0x00000050,iVar1,*(int *)(unaff_x19 + 0x10c) - iVar2,iVar3,iVar4,0);
          FUN_03776ea0(lVar13,in_stack_00000050,in_stack_00000058,0);
          in_stack_00000038 = 0;
          in_stack_00000040 = 0;
          in_stack_00000048 = 0;
          FUN_03776cbc(*(undefined4 *)(lVar16 + 0x1c),*(undefined4 *)(lVar16 + 0x20),
                       *(undefined4 *)(lVar16 + 0x24),*(undefined4 *)(lVar16 + 0x28),
                       *(undefined4 *)(lVar16 + 0x2c),&stack0x00000038,0);
          in_stack_00000028 = in_stack_00000040;
          in_stack_00000020 = in_stack_00000038;
          in_stack_00000030 = in_stack_00000048;
          FUN_03776e80(lVar13,&stack0x00000020,0);
          FUN_03776eb0(*(undefined4 *)(lVar16 + 0x30),lVar13,0);
          FUN_03776ec0(lVar13,0,0);
          if (*(long *)(unaff_x19 + 0xb0) == 0) break;
          FUN_01b5f01c(*(long *)(unaff_x19 + 0xb0),lVar13,
                       *(undefined8 *)
                        _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo
                      );
          uVar5 = *(undefined4 *)(lVar16 + 0x10);
          uVar12 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
          FUN_035680e4(uVar12,uVar5);
          if (*(long *)(unaff_x19 + 0xc0) == 0) break;
          bVar7 = (bool)(bVar7 | *(int *)(lVar16 + 0x10) == 0x20);
          FUN_01b5f01c(*(long *)(unaff_x19 + 0xc0),uVar12,
                       *(undefined8 *)
                        _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                      );
          lVar16 = *(long *)(unaff_x19 + 0x118);
        } while (lVar16 != 0);
      }
    }
  }
LAB_03569c00:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


