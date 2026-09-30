/*
FUNCTION_NAME: Unity.Profiling.ProfilerRecorder$$GetValid_Injected
ENTRY_POINT: 03569ba4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void Unity_Profiling_ProfilerRecorder__GetValid_Injected(undefined **param_1)

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
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  
  do {
    uVar5 = *(undefined4 *)(unaff_x28 + 0x10);
    uVar7 = thunk_FUN_01a89e68(*(undefined8 *)param_1[0x130]);
    FUN_035680e4(uVar7,uVar5);
    if (*(long *)(unaff_x19 + 0xc0) == 0) {
LAB_03569c00:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    bVar6 = *(int *)(unaff_x28 + 0x10) == 0x20;
    FUN_01b5f01c(*(long *)(unaff_x19 + 0xc0),uVar7,
                 *(undefined8 *)
                  _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                );
    lVar8 = *(long *)(unaff_x19 + 0x118);
    if (lVar8 == 0) goto LAB_03569c00;
    if (*(int *)(lVar8 + 0x18) <= unaff_w21) {
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
        if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_03569c00;
        FUN_01b5f01c(*(long *)(unaff_x19 + 0xb0),uVar7,
                     *(undefined8 *)
                      _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo);
        lVar8 = *(long *)(unaff_x19 + 0xc0);
        uVar7 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_1_92_0_TypeInfo);
        FUN_035680e4(uVar7,0x20);
        if (lVar8 == 0) goto LAB_03569c00;
        FUN_01b5f01c(lVar8,uVar7,
                     *(undefined8 *)
                      _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_1_TypeInfo
                    );
      }
      FUN_03568878();
      return;
    }
    FUN_02215a88(lVar8,unaff_w21,&stack0x00000038,*unaff_x20);
    unaff_x28 = in_stack_00000038;
    lVar8 = thunk_FUN_01a89e68(*unaff_x29);
    FUN_03776ec8(lVar8,0);
    if (lVar8 == 0) goto LAB_03569c00;
    unaff_w21 = unaff_w21 + 1;
    FUN_03776e64(lVar8,unaff_w21,0);
    if (unaff_x28 == 0) goto LAB_03569c00;
    fVar9 = *(float *)(unaff_x28 + 0x18) + *(float *)(unaff_x28 + 0x20) + unaff_s8;
    fVar10 = *(float *)(unaff_x28 + 0x1c) + unaff_s8;
    iVar1 = unaff_w27;
    if (*(float *)(unaff_x28 + 0x14) != unaff_w26) {
      iVar1 = (int)*(float *)(unaff_x28 + 0x14);
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
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    FUN_03776ad0(&stack0x00000050,iVar1,*(int *)(unaff_x19 + 0x10c) - iVar2,iVar3,iVar4,0);
    FUN_03776ea0(lVar8,in_stack_00000050,in_stack_00000058,0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    FUN_03776cbc(*(undefined4 *)(unaff_x28 + 0x1c),*(undefined4 *)(unaff_x28 + 0x20),
                 *(undefined4 *)(unaff_x28 + 0x24),*(undefined4 *)(unaff_x28 + 0x28),
                 *(undefined4 *)(unaff_x28 + 0x2c),&stack0x00000038,0);
    in_stack_00000028 = in_stack_00000040;
    in_stack_00000020 = in_stack_00000038;
    in_stack_00000030 = in_stack_00000048;
    FUN_03776e80(lVar8,&stack0x00000020,0);
    FUN_03776eb0(*(undefined4 *)(unaff_x28 + 0x30),lVar8,0);
    FUN_03776ec0(lVar8,0,0);
    if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_03569c00;
    FUN_01b5f01c(*(long *)(unaff_x19 + 0xb0),lVar8,
                 *(undefined8 *)
                  _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo);
    param_1 = &Photon_Realtime_MonoBehaviourEmpty_<>c__DisplayClass6_0_TypeInfo;
    unaff_w25 = unaff_w25 | bVar6;
  } while( true );
}


