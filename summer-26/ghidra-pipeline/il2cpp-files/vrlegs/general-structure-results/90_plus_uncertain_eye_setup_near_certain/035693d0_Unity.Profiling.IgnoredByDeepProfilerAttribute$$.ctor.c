/*
FUNCTION_NAME: Unity.Profiling.IgnoredByDeepProfilerAttribute$$.ctor
ENTRY_POINT: 035693d0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Profiling_IgnoredByDeepProfilerAttribute___ctor(long param_1)

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
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar17;
  long *plVar18;
  int iVar19;
  undefined8 *unaff_x22;
  float fVar20;
  float fVar21;
  float fVar22;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x980));
  FUN_01ab69ac(PTR_DAT_03cecfe0);
  FUN_01ab69ac(_Common_Gameplay_Support_Scripts_Coins_OneTimeCoinTaskDisplay_<Start>d__6_TypeInfo);
  FUN_01ab69ac(HexabodyVR_PlayerController_ObjectCollisionDisabler_<>c__DisplayClass3_0_TypeInfo);
  FUN_01ab69ac(_Common_UserGrowth_Scripts_OpenUrlTool_<>c_TypeInfo);
  FUN_01ab69ac(_Common_UserGrowth_Scripts_OpenUrlTool_<OpenURLAsync>d__7_TypeInfo);
  FUN_01ab69ac(_Common_UserGrowth_Scripts_OpenUrlTool_<Start>d__5_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cc3128);
  FUN_01ab69ac(PTR_DAT_03cc3930);
  FUN_01ab69ac(OVR_OpenVR_OpenVR_COpenVRContext_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xfd8) = 1;
  puVar17 = (undefined8 *)(unaff_x19 + 0x30);
  *puVar17 = *unaff_x22;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar17);
  lVar12 = FUN_01ab6a94(*unaff_x20,5);
  if (lVar12 == 0) goto LAB_03569c00;
  if (*(int *)(lVar12 + 0x18) == 0) {
LAB_03569df4:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined8 *)(lVar12 + 0x20) =
       *(undefined8 *)_Common_UserGrowth_Scripts_OpenUrlTool_<>c_TypeInfo;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists((undefined8 *)(lVar12 + 0x20));
  uVar13 = FUN_036d3824();
  if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_03569df4;
  *(undefined8 *)(lVar12 + 0x28) = uVar13;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar12 + 0x28),uVar13);
  if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_03569df4;
  *(undefined8 *)(lVar12 + 0x30) =
       *(undefined8 *)_Common_UserGrowth_Scripts_OpenUrlTool_<OpenURLAsync>d__7_TypeInfo;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists((undefined8 *)(lVar12 + 0x30));
  if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_03569df4;
  *(undefined8 *)(lVar12 + 0x38) = *puVar17;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists((undefined8 *)(lVar12 + 0x38));
  puVar8 = PTR_DAT_03cbe438;
  if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_03569df4;
  *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)PTR_DAT_03cc3930;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar13 = FUN_025be564(lVar12,0);
  lVar12 = *(long *)puVar8;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar12);
  }
  FUN_0367a7f4(uVar13);
  puVar9 = PTR_DAT_03cbebc0;
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  lVar12 = unaff_x19 + 0x50;
  UnityEngine_UIElements_DefaultEventSystem__ProcessTouchEvents
            (lVar12,*(undefined8 *)(*(long *)(unaff_x19 + 0xf8) + 0x10),0);
  FUN_03776948(lVar12,**(undefined8 **)(*(long *)puVar9 + 0xb8),0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  fVar20 = *(float *)(*(long *)(unaff_x19 + 0xf8) + 0x18);
  iVar19 = -0x80000000;
  if (fVar20 != INFINITY) {
    iVar19 = (int)fVar20;
  }
  FUN_03776958(lVar12,iVar19,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776968(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x1c),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776978(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x24),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776988(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x2c),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776998(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x30),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_037769a8(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x38),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_037769b8(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x28),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_037769c8(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x34),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_037769d8(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x3c),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_037769e8(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x44),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_037769f8(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x40),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776a08(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x44),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776a18(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x48),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776a28(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x4c),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776a38(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x50),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776a40(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x54),lVar12,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03569c00;
  FUN_03776a50(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x58),lVar12,0);
  plVar18 = (long *)(unaff_x19 + 0xd8);
  lVar14 = *plVar18;
  if ((lVar14 == 0) || (*(long *)(lVar14 + 0x18) == 0)) {
    lVar14 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cecfe0,1);
    *plVar18 = lVar14;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar18,lVar14);
    lVar14 = *plVar18;
    if (lVar14 == 0) goto LAB_03569c00;
  }
  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_03569df4;
  *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(unaff_x19 + 0x100);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar14 = *(long *)(unaff_x19 + 0xf8);
  if (lVar14 == 0) goto LAB_03569c00;
  fVar20 = (float)*(undefined8 *)(lVar14 + 0x60);
  fVar21 = (float)((ulong)*(undefined8 *)(lVar14 + 0x60) >> 0x20);
  uVar16 = CONCAT44((int)fVar21,(int)fVar20);
  *(ulong *)(unaff_x19 + 0x108) =
       uVar16 ^ (uVar16 ^ 0x8000000080000000) &
                CONCAT44(-(uint)(fVar21 == INFINITY),-(uint)(fVar20 == INFINITY));
  uVar6 = *(uint *)(unaff_x19 + 400);
  iVar19 = -0x80000000;
  if (*(float *)(lVar14 + 0x5c) != INFINITY) {
    iVar19 = (int)*(float *)(lVar14 + 0x5c);
  }
  *(int *)(unaff_x19 + 0x110) = iVar19;
  if ((uVar6 < 8) && ((0xcfU >> (ulong)(uVar6 & 0x1f) & 1) != 0)) {
    *(undefined4 *)(unaff_x19 + 0x114) = *(undefined4 *)(&DAT_00e68898 + (long)(int)uVar6 * 4);
  }
  lVar14 = *(long *)(unaff_x19 + 0x1a0);
  if ((lVar14 != 0) && (*(long *)(lVar14 + 0x18) != 0)) {
    if ((uint)*(long *)(lVar14 + 0x18) < 5) goto LAB_03569df4;
    lVar15 = *(long *)(unaff_x19 + 0x198);
    if (lVar15 == 0) goto LAB_03569c00;
    if (*(uint *)(lVar15 + 0x18) < 5) goto LAB_03569df4;
    uVar13 = *(undefined8 *)(lVar14 + 0x60);
    *(undefined8 *)(lVar15 + 0x68) = *(undefined8 *)(lVar14 + 0x68);
    *(undefined8 *)(lVar15 + 0x60) = uVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar15 + 0x60),0);
    lVar14 = *(long *)(unaff_x19 + 0x1a0);
    if (lVar14 == 0) goto LAB_03569c00;
    if (*(uint *)(lVar14 + 0x18) < 8) goto LAB_03569df4;
    lVar15 = *(long *)(unaff_x19 + 0x198);
    if (lVar15 == 0) goto LAB_03569c00;
    if (*(uint *)(lVar15 + 0x18) < 8) goto LAB_03569df4;
    uVar13 = *(undefined8 *)(lVar14 + 0x90);
    *(undefined8 *)(lVar15 + 0x98) = *(undefined8 *)(lVar14 + 0x98);
    *(undefined8 *)(lVar15 + 0x90) = uVar13;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar15 + 0x90),0);
  }
  lVar14 = *(long *)(unaff_x19 + 0x130);
  if ((lVar14 != 0) && (iVar19 = *(int *)(lVar14 + 0x18), 0 < iVar19)) {
    if (*(long *)(unaff_x19 + 0x138) == 0) {
      uVar13 = thunk_FUN_01a89e68(*(undefined8 *)
                                   _Common_Gameplay_Support_Scripts_Coins_OneTimeCoinTaskDisplay_<>c_TypeInfo
                                 );
      FUN_02215594(uVar13,iVar19,
                   *(undefined8 *)RootMotion_FinalIK_OffsetModifier_<Initiate>d__8_TypeInfo);
      *(undefined8 *)(unaff_x19 + 0x138) = uVar13;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(unaff_x19 + 0x138),uVar13);
      lVar14 = *(long *)(unaff_x19 + 0x130);
      if (lVar14 == 0) goto LAB_03569c00;
    }
    puVar11 = 
    _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_0_TypeInfo
    ;
    puVar10 = PTR_DAT_03cc45a8;
    iVar19 = 0;
    do {
      if (*(int *)(lVar14 + 0x18) <= iVar19) goto LAB_03569944;
      lVar15 = *(long *)(unaff_x19 + 0x138);
      FUN_02215a88(lVar14,iVar19,&stack0x00000038,*(undefined8 *)puVar10);
      if (lVar15 == 0) break;
      FUN_01b5f01c(lVar15,in_stack_00000038,*(undefined8 *)puVar11);
      lVar14 = *(long *)(unaff_x19 + 0x130);
      iVar19 = iVar19 + 1;
    } while (lVar14 != 0);
    goto LAB_03569c00;
  }
LAB_03569944:
  lVar14 = *(long *)(unaff_x19 + 0x148);
  if (lVar14 == 0) {
    uVar16 = FUN_025bd4ac(0,**(undefined8 **)(*(long *)puVar9 + 0xb8),0);
    if ((uVar16 & 1) != 0) {
      lVar14 = *(long *)(unaff_x19 + 0x148);
      goto LAB_0356996c;
    }
    uVar13 = FUN_036d3824();
    uVar13 = FUN_025bdc88(*(undefined8 *)
                           _Common_Gameplay_Support_Scripts_Coins_OneTimeCoinTaskDisplay_<Start>d__6_TypeInfo
                          ,uVar13,*(undefined8 *)
                                   _Common_UserGrowth_Scripts_OpenUrlTool_<Start>d__5_TypeInfo,0);
    lVar14 = *(long *)puVar8;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar14);
    }
    FUN_0367b470(uVar13);
  }
  else {
LAB_0356996c:
    *(long *)(unaff_x19 + 0x38) = lVar14;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  lVar14 = *(long *)(unaff_x19 + 0xb0);
  if (lVar14 != 0) {
    lVar15 = *(long *)Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_TypeInfo;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    uVar16 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 200));
    if ((uVar16 & 1) == 0) {
      *(undefined4 *)(lVar14 + 0x18) = 0;
    }
    else {
      iVar19 = *(int *)(lVar14 + 0x18);
      *(undefined4 *)(lVar14 + 0x18) = 0;
      if (0 < iVar19) {
        FUN_02793a34(*(undefined8 *)(lVar14 + 0x10),0,iVar19,0);
      }
    }
    lVar14 = *(long *)(unaff_x19 + 0xc0);
    if (lVar14 != 0) {
      lVar15 = *(long *)Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22_TypeInfo;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      uVar16 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 200));
      in_stack_00000068 = lVar12;
      if ((uVar16 & 1) == 0) {
        *(undefined4 *)(lVar14 + 0x18) = 0;
      }
      else {
        iVar19 = *(int *)(lVar14 + 0x18);
        *(undefined4 *)(lVar14 + 0x18) = 0;
        if (0 < iVar19) {
          FUN_02793a34(*(undefined8 *)(lVar14 + 0x10),0,iVar19,0);
        }
      }
      puVar9 = Internal_Cryptography_OidLookup_<>c_TypeInfo;
      puVar8 = System_Data_Common_ObjectStorage_TempAssemblyComparer_TypeInfo;
      lVar12 = *(long *)(unaff_x19 + 0x118);
      if (lVar12 != 0) {
        bVar7 = false;
        iVar19 = 0;
        do {
          if (*(int *)(lVar12 + 0x18) <= iVar19) {
            if (!bVar7) {
              uVar13 = FUN_036d3824();
              uVar13 = FUN_025bdc88(*(undefined8 *)OVR_OpenVR_OpenVR_COpenVRContext_TypeInfo,uVar13,
                                    *(undefined8 *)PTR_DAT_03cc3128,0);
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
              }
              FUN_0367a6ec(uVar13,0);
              fVar20 = (float)FUN_03776980(in_stack_00000068,0);
              in_stack_00000038 = 0;
              in_stack_00000040 = 0;
              in_stack_00000048 = 0;
              FUN_03776cbc(0,0,0,0,fVar20 / 5.0,&stack0x00000038,0);
              if (*(int *)(*(long *)
                            System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                          + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_03776a78(0);
              uVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
              FUN_03776f7c(0x3f800000,uVar13,0);
              if (*(long *)(unaff_x19 + 0xb0) == 0) break;
              FUN_01b5f01c(*(long *)(unaff_x19 + 0xb0),uVar13,
                           *(undefined8 *)
                            _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo
                          );
              lVar12 = *(long *)(unaff_x19 + 0xc0);
              uVar13 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
              FUN_035680e4(uVar13,0x20);
              if (lVar12 == 0) break;
              FUN_01b5f01c(lVar12,uVar13,
                           *(undefined8 *)
                            _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                          );
            }
            FUN_03568878();
            return;
          }
          FUN_02215a88(lVar12,iVar19,&stack0x00000038,*(undefined8 *)puVar9);
          lVar12 = in_stack_00000038;
          lVar14 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
          FUN_03776ec8(lVar14,0);
          if (lVar14 == 0) break;
          iVar19 = iVar19 + 1;
          FUN_03776e64(lVar14,iVar19,0);
          if (lVar12 == 0) break;
          fVar20 = *(float *)(lVar12 + 0x18) + *(float *)(lVar12 + 0x20) + 0.5;
          fVar21 = *(float *)(lVar12 + 0x1c) + 0.5;
          iVar1 = -0x80000000;
          if (*(float *)(lVar12 + 0x14) != INFINITY) {
            iVar1 = (int)*(float *)(lVar12 + 0x14);
          }
          fVar22 = *(float *)(lVar12 + 0x20) + 0.5;
          iVar2 = -0x80000000;
          if (fVar20 != INFINITY) {
            iVar2 = (int)fVar20;
          }
          iVar3 = -0x80000000;
          if (fVar21 != INFINITY) {
            iVar3 = (int)fVar21;
          }
          iVar4 = -0x80000000;
          if (fVar22 != INFINITY) {
            iVar4 = (int)fVar22;
          }
          in_stack_00000050 = 0;
          in_stack_00000058 = 0;
          FUN_03776ad0(&stack0x00000050,iVar1,*(int *)(unaff_x19 + 0x10c) - iVar2,iVar3,iVar4,0);
          FUN_03776ea0(lVar14,in_stack_00000050,in_stack_00000058,0);
          in_stack_00000038 = 0;
          in_stack_00000040 = 0;
          in_stack_00000048 = 0;
          FUN_03776cbc(*(undefined4 *)(lVar12 + 0x1c),*(undefined4 *)(lVar12 + 0x20),
                       *(undefined4 *)(lVar12 + 0x24),*(undefined4 *)(lVar12 + 0x28),
                       *(undefined4 *)(lVar12 + 0x2c),&stack0x00000038,0);
          in_stack_00000028 = in_stack_00000040;
          in_stack_00000020 = in_stack_00000038;
          in_stack_00000030 = in_stack_00000048;
          FUN_03776e80(lVar14,&stack0x00000020,0);
          FUN_03776eb0(*(undefined4 *)(lVar12 + 0x30),lVar14,0);
          FUN_03776ec0(lVar14,0,0);
          if (*(long *)(unaff_x19 + 0xb0) == 0) break;
          FUN_01b5f01c(*(long *)(unaff_x19 + 0xb0),lVar14,
                       *(undefined8 *)
                        _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo
                      );
          uVar5 = *(undefined4 *)(lVar12 + 0x10);
          uVar13 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
          FUN_035680e4(uVar13,uVar5);
          if (*(long *)(unaff_x19 + 0xc0) == 0) break;
          bVar7 = (bool)(bVar7 | *(int *)(lVar12 + 0x10) == 0x20);
          FUN_01b5f01c(*(long *)(unaff_x19 + 0xc0),uVar13,
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


