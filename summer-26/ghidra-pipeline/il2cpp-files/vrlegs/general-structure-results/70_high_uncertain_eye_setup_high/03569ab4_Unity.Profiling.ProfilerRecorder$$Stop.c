/*
FUNCTION_NAME: Unity.Profiling.ProfilerRecorder$$Stop
ENTRY_POINT: 03569ab4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Profiling_ProfilerRecorder__Stop(float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  byte unaff_w25;
  float unaff_w26;
  int unaff_w27;
  long unaff_x28;
  undefined8 *unaff_x29;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 in_stack_00000068;
  
  while( true ) {
    fVar9 = param_2 + *(float *)(unaff_x28 + 0x20) + unaff_s8;
    fVar10 = *(float *)(unaff_x28 + 0x1c) + unaff_s8;
    iVar1 = unaff_w27;
    if (param_1 != unaff_w26) {
      iVar1 = (int)param_1;
    }
    fVar11 = *(float *)(unaff_x28 + 0x20) + unaff_s8;
    iVar2 = unaff_w27;
    if (fVar9 != unaff_w26) {
      iVar2 = (int)fVar9;
    }
    iVar3 = unaff_w27;
    if (fVar10 != unaff_w26) {
      iVar3 = (int)fVar10;
    }
    iVar4 = unaff_w27;
    if (fVar11 != unaff_w26) {
      iVar4 = (int)fVar11;
    }
    uStack0000000000000050 = 0;
    uStack0000000000000058 = 0;
    FUN_03776ad0(&stack0x00000050,iVar1,*(int *)(unaff_x19 + 0x10c) - iVar2,iVar3,iVar4,0);
    FUN_03776ea0(unaff_x22,uStack0000000000000050,uStack0000000000000058,0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    FUN_03776cbc(*(undefined4 *)(unaff_x28 + 0x1c),*(undefined4 *)(unaff_x28 + 0x20),
                 *(undefined4 *)(unaff_x28 + 0x24),*(undefined4 *)(unaff_x28 + 0x28),
                 *(undefined4 *)(unaff_x28 + 0x2c),&stack0x00000038,0);
    in_stack_00000028 = in_stack_00000040;
    in_stack_00000020 = in_stack_00000038;
    in_stack_00000030 = in_stack_00000048;
    FUN_03776e80(unaff_x22,&stack0x00000020,0);
    FUN_03776eb0(*(undefined4 *)(unaff_x28 + 0x30),unaff_x22,0);
    FUN_03776ec0(unaff_x22,0,0);
    if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_03569c00;
    FUN_01b5f01c(*(long *)(unaff_x19 + 0xb0),unaff_x22,
                 *(undefined8 *)
                  _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo);
    uVar5 = *(undefined4 *)(unaff_x28 + 0x10);
    uVar7 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
    FUN_035680e4(uVar7,uVar5);
    if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_03569c00;
    bVar6 = *(int *)(unaff_x28 + 0x10) == 0x20;
    FUN_01b5f01c(*(long *)(unaff_x19 + 0xc0),uVar7,
                 *(undefined8 *)
                  _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                );
    lVar8 = *(long *)(unaff_x19 + 0x118);
    if (lVar8 == 0) goto LAB_03569c00;
    if (*(int *)(lVar8 + 0x18) <= unaff_w21) break;
    FUN_02215a88(lVar8,unaff_w21,&stack0x00000038,*unaff_x20);
    unaff_x28 = in_stack_00000038;
    unaff_x22 = thunk_FUN_01a89e68(*unaff_x29);
    FUN_03776ec8(unaff_x22,0);
    if (unaff_x22 == 0) goto LAB_03569c00;
    unaff_w21 = unaff_w21 + 1;
    FUN_03776e64(unaff_x22,unaff_w21,0);
    if (unaff_x28 == 0) goto LAB_03569c00;
    param_1 = *(float *)(unaff_x28 + 0x14);
    param_2 = *(float *)(unaff_x28 + 0x18);
    unaff_w25 = unaff_w25 | bVar6;
  }
  if ((unaff_w25 & 1) == 0 && !bVar6) {
    uVar7 = FUN_036d3824();
    uVar7 = FUN_025bdc88(*(undefined8 *)OVR_OpenVR_OpenVR_COpenVRContext_TypeInfo,uVar7,
                         *(undefined8 *)PTR_DAT_03cc3128,0);
    if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
    }
    FUN_0367a6ec(uVar7,0);
    fVar9 = (float)FUN_03776980(in_stack_00000068,0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    FUN_03776cbc(0,0,0,0,fVar9 / 5.0,&stack0x00000038,0);
    if (*(int *)(*(long *)
                  System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03776a78(0);
    uVar7 = thunk_FUN_01a89e68(*unaff_x29);
    FUN_03776f7c(0x3f800000,uVar7,0);
    if (*(long *)(unaff_x19 + 0xb0) != 0) {
      FUN_01b5f01c(*(long *)(unaff_x19 + 0xb0),uVar7,
                   *(undefined8 *)
                    _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo);
      lVar8 = *(long *)(unaff_x19 + 0xc0);
      uVar7 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
      FUN_035680e4(uVar7,0x20);
      if (lVar8 != 0) {
        FUN_01b5f01c(lVar8,uVar7,
                     *(undefined8 *)
                      _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                    );
        goto LAB_03569d68;
      }
    }
LAB_03569c00:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
LAB_03569d68:
  FUN_03568878();
  return;
}


