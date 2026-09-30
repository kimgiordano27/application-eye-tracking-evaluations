/*
FUNCTION_NAME: Unity.Profiling.ProfilerRecorder$$CheckInitializedAndThrow
ENTRY_POINT: 03569a10
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Profiling_ProfilerRecorder__CheckInitializedAndThrow
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  long lVar10;
  undefined8 uVar11;
  long unaff_x19;
  long unaff_x20;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  
  *(undefined4 *)(unaff_x20 + 0x18) = 0;
  if (0 < (int)param_3) {
    FUN_02793a34(*(undefined8 *)(unaff_x20 + 0x10),0,param_3,0);
  }
  puVar8 = Internal_Cryptography_OidLookup_<>c_TypeInfo;
  puVar7 = System_Data_Common_ObjectStorage_TempAssemblyComparer_TypeInfo;
  lVar9 = *(long *)(unaff_x19 + 0x118);
  if (lVar9 != 0) {
    bVar6 = false;
    iVar12 = 0;
    do {
      if (*(int *)(lVar9 + 0x18) <= iVar12) {
        if (!bVar6) {
          uVar11 = FUN_036d3824();
          uVar11 = FUN_025bdc88(*(undefined8 *)OVR_OpenVR_OpenVR_COpenVRContext_TypeInfo,uVar11,
                                *(undefined8 *)PTR_DAT_03cc3128,0);
          if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
          }
          FUN_0367a6ec(uVar11,0);
          fVar13 = (float)FUN_03776980(in_stack_00000068,0);
          in_stack_00000038 = 0;
          in_stack_00000040 = 0;
          in_stack_00000048 = 0;
          FUN_03776cbc(0,0,0,0,fVar13 / 5.0,&stack0x00000038,0);
          if (*(int *)(*(long *)
                        System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_03776a78(0);
          uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar7);
          FUN_03776f7c(0x3f800000,uVar11,0);
          if (*(long *)(unaff_x19 + 0xb0) == 0) break;
          FUN_01b5f01c(*(long *)(unaff_x19 + 0xb0),uVar11,
                       *(undefined8 *)
                        _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo
                      );
          lVar9 = *(long *)(unaff_x19 + 0xc0);
          uVar11 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
          FUN_035680e4(uVar11,0x20);
          if (lVar9 == 0) break;
          FUN_01b5f01c(lVar9,uVar11,
                       *(undefined8 *)
                        _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                      );
        }
        FUN_03568878();
        return;
      }
      FUN_02215a88(lVar9,iVar12,&stack0x00000038,*(undefined8 *)puVar8);
      lVar9 = in_stack_00000038;
      lVar10 = thunk_FUN_01a89e68(*(undefined8 *)puVar7);
      FUN_03776ec8(lVar10,0);
      if (lVar10 == 0) break;
      iVar12 = iVar12 + 1;
      FUN_03776e64(lVar10,iVar12,0);
      if (lVar9 == 0) break;
      fVar13 = *(float *)(lVar9 + 0x18) + *(float *)(lVar9 + 0x20) + 0.5;
      fVar14 = *(float *)(lVar9 + 0x1c) + 0.5;
      iVar1 = -0x80000000;
      if (*(float *)(lVar9 + 0x14) != INFINITY) {
        iVar1 = (int)*(float *)(lVar9 + 0x14);
      }
      fVar15 = *(float *)(lVar9 + 0x20) + 0.5;
      iVar2 = -0x80000000;
      if (fVar13 != INFINITY) {
        iVar2 = (int)fVar13;
      }
      iVar3 = -0x80000000;
      if (fVar14 != INFINITY) {
        iVar3 = (int)fVar14;
      }
      iVar4 = -0x80000000;
      if (fVar15 != INFINITY) {
        iVar4 = (int)fVar15;
      }
      in_stack_00000050 = 0;
      in_stack_00000058 = 0;
      FUN_03776ad0(&stack0x00000050,iVar1,*(int *)(unaff_x19 + 0x10c) - iVar2,iVar3,iVar4,0);
      FUN_03776ea0(lVar10,in_stack_00000050,in_stack_00000058,0);
      in_stack_00000038 = 0;
      in_stack_00000040 = 0;
      in_stack_00000048 = 0;
      FUN_03776cbc(*(undefined4 *)(lVar9 + 0x1c),*(undefined4 *)(lVar9 + 0x20),
                   *(undefined4 *)(lVar9 + 0x24),*(undefined4 *)(lVar9 + 0x28),
                   *(undefined4 *)(lVar9 + 0x2c),&stack0x00000038,0);
      in_stack_00000028 = in_stack_00000040;
      in_stack_00000020 = in_stack_00000038;
      in_stack_00000030 = in_stack_00000048;
      FUN_03776e80(lVar10,&stack0x00000020,0);
      FUN_03776eb0(*(undefined4 *)(lVar9 + 0x30),lVar10,0);
      FUN_03776ec0(lVar10,0,0);
      if (*(long *)(unaff_x19 + 0xb0) == 0) break;
      FUN_01b5f01c(*(long *)(unaff_x19 + 0xb0),lVar10,
                   *(undefined8 *)
                    _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo);
      uVar5 = *(undefined4 *)(lVar9 + 0x10);
      uVar11 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
      FUN_035680e4(uVar11,uVar5);
      if (*(long *)(unaff_x19 + 0xc0) == 0) break;
      bVar6 = (bool)(bVar6 | *(int *)(lVar9 + 0x10) == 0x20);
      FUN_01b5f01c(*(long *)(unaff_x19 + 0xc0),uVar11,
                   *(undefined8 *)
                    _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                  );
      lVar9 = *(long *)(unaff_x19 + 0x118);
    } while (lVar9 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


