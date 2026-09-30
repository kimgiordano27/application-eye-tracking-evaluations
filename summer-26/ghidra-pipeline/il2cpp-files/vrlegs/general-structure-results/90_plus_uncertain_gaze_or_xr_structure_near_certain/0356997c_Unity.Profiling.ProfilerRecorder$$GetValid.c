/*
FUNCTION_NAME: Unity.Profiling.ProfilerRecorder$$GetValid
ENTRY_POINT: 0356997c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void Unity_Profiling_ProfilerRecorder__GetValid(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  int iVar13;
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
  
  if (unaff_x20 != 0) {
    lVar11 = *(long *)Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_TypeInfo;
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    uVar9 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
    if ((uVar9 & 1) == 0) {
      *(undefined4 *)(unaff_x20 + 0x18) = 0;
    }
    else {
      iVar13 = *(int *)(unaff_x20 + 0x18);
      *(undefined4 *)(unaff_x20 + 0x18) = 0;
      if (0 < iVar13) {
        FUN_02793a34(*(undefined8 *)(unaff_x20 + 0x10),0,iVar13,0);
      }
    }
    lVar11 = *(long *)(unaff_x19 + 0xc0);
    if (lVar11 != 0) {
      lVar12 = *(long *)Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22_TypeInfo;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      uVar9 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 200));
      if ((uVar9 & 1) == 0) {
        *(undefined4 *)(lVar11 + 0x18) = 0;
      }
      else {
        iVar13 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        if (0 < iVar13) {
          FUN_02793a34(*(undefined8 *)(lVar11 + 0x10),0,iVar13,0);
        }
      }
      puVar8 = Internal_Cryptography_OidLookup_<>c_TypeInfo;
      puVar7 = System_Data_Common_ObjectStorage_TempAssemblyComparer_TypeInfo;
      lVar11 = *(long *)(unaff_x19 + 0x118);
      if (lVar11 != 0) {
        bVar6 = false;
        iVar13 = 0;
        do {
          if (*(int *)(lVar11 + 0x18) <= iVar13) {
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
              lVar11 = *(long *)(unaff_x19 + 0xc0);
              uVar10 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
              FUN_035680e4(uVar10,0x20);
              if (lVar11 == 0) break;
              FUN_01b5f01c(lVar11,uVar10,
                           *(undefined8 *)
                            _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                          );
            }
            FUN_03568878();
            return;
          }
          FUN_02215a88(lVar11,iVar13,&stack0x00000038,*(undefined8 *)puVar8);
          lVar11 = in_stack_00000038;
          lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar7);
          FUN_03776ec8(lVar12,0);
          if (lVar12 == 0) break;
          iVar13 = iVar13 + 1;
          FUN_03776e64(lVar12,iVar13,0);
          if (lVar11 == 0) break;
          fVar14 = *(float *)(lVar11 + 0x18) + *(float *)(lVar11 + 0x20) + 0.5;
          fVar15 = *(float *)(lVar11 + 0x1c) + 0.5;
          iVar1 = -0x80000000;
          if (*(float *)(lVar11 + 0x14) != INFINITY) {
            iVar1 = (int)*(float *)(lVar11 + 0x14);
          }
          fVar16 = *(float *)(lVar11 + 0x20) + 0.5;
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
          FUN_03776ea0(lVar12,in_stack_00000050,in_stack_00000058,0);
          in_stack_00000038 = 0;
          in_stack_00000040 = 0;
          in_stack_00000048 = 0;
          FUN_03776cbc(*(undefined4 *)(lVar11 + 0x1c),*(undefined4 *)(lVar11 + 0x20),
                       *(undefined4 *)(lVar11 + 0x24),*(undefined4 *)(lVar11 + 0x28),
                       *(undefined4 *)(lVar11 + 0x2c),&stack0x00000038,0);
          in_stack_00000028 = in_stack_00000040;
          in_stack_00000020 = in_stack_00000038;
          in_stack_00000030 = in_stack_00000048;
          FUN_03776e80(lVar12,&stack0x00000020,0);
          FUN_03776eb0(*(undefined4 *)(lVar11 + 0x30),lVar12,0);
          FUN_03776ec0(lVar12,0,0);
          if (*(long *)(unaff_x19 + 0xb0) == 0) break;
          FUN_01b5f01c(*(long *)(unaff_x19 + 0xb0),lVar12,
                       *(undefined8 *)
                        _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo
                      );
          uVar5 = *(undefined4 *)(lVar11 + 0x10);
          uVar10 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
          FUN_035680e4(uVar10,uVar5);
          if (*(long *)(unaff_x19 + 0xc0) == 0) break;
          bVar6 = (bool)(bVar6 | *(int *)(lVar11 + 0x10) == 0x20);
          FUN_01b5f01c(*(long *)(unaff_x19 + 0xc0),uVar10,
                       *(undefined8 *)
                        _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                      );
          lVar11 = *(long *)(unaff_x19 + 0x118);
        } while (lVar11 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


