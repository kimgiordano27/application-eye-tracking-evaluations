/*
FUNCTION_NAME: FUN_058e5238
ENTRY_POINT: 058e5238
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 128
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_058e5238(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined1 local_120 [16];
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  puVar2 = OVRTelemetryConstants_OVRManager_TypeInfo;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_06b80b82 & 1) == 0) {
    FUN_02d6084c(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo);
    FUN_02d6084c(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualDouble_TypeInfo);
    FUN_02d6084c(OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_TypeInfo);
    FUN_02d6084c(OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_TypeInfo);
    FUN_02d6084c(OVRVirtualKeyboard_<>c_TypeInfo);
    FUN_02d6084c(OVRVirtualKeyboard_<InitializeGlTFModel>d__92_TypeInfo);
    FUN_02d6084c(OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo);
    FUN_02d6084c(OVRVirtualKeyboard_ControllerInputSource_TypeInfo);
    FUN_02d6084c(PTR_DAT_06768598);
    FUN_02d6084c(PTR_DAT_06768438);
    FUN_02d6084c(UnityEngine_UI_InputField_SubmitEvent_TypeInfo);
    FUN_02d6084c(OVRGLTFLoader_<>c__DisplayClass26_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e2d0);
    FUN_02d6084c(OVRVirtualKeyboard_HandInputSource_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e238);
    FUN_02d6084c(OVRVirtualKeyboard_IInputSource_TypeInfo);
    FUN_02d6084c(OVRTelemetryConstants_OVRManager_TypeInfo);
    FUN_02d6084c(OVRVirtualKeyboard_ITextHandler_TypeInfo);
    FUN_02d6084c(PTR_DAT_06778a00);
    FUN_02d6084c(OVRVirtualKeyboard_InputSource_TypeInfo);
    FUN_02d6084c(PTR_DAT_06760790);
    FUN_02d6084c(OVRVirtualKeyboard_InteractorRootTransformOverride_TypeInfo);
    FUN_02d6084c(OVR_OpenVR_IVRSystem__GetBoolTrackedDeviceProperty_TypeInfo);
    FUN_02d6084c(OVRVirtualKeyboard_KeyboardEventListener_TypeInfo);
    FUN_02d6084c(OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
    FUN_02d6084c(OVRVirtualKeyboard_TextHandlerScope_TypeInfo);
    FUN_02d6084c(Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_TypeInfo);
    FUN_02d6084c(OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e638);
    FUN_02d6084c(OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__19_TypeInfo);
    DAT_06b80b82 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  UnityEngine_Rendering_ComputeCommandBuffer__SetGlobalInt(lVar9,0);
  uVar10 = FUN_04e8cf70(param_2,0);
  puVar2 = OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo;
  uVar18 = 0;
  if ((uVar10 & 1) != 0) {
    uVar10 = FUN_04e8c024(*param_1,*(undefined8 *)
                                    OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo,0);
    uVar18 = 0;
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*(long *)OVRVirtualKeyboard_<InitializeGlTFModel>d__92_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_058e5bfc(local_120,param_1,param_3);
      uVar8 = uStack_f8;
      lVar7 = local_100;
      uVar15 = local_120._8_8_;
      uVar3 = local_120._0_4_;
      uVar4 = local_120._4_4_;
      uVar5 = local_120._8_4_;
      uVar6 = local_120._12_4_;
      uStack_78 = uStack_108;
      local_80 = local_110;
      local_120 = UnityEngine_Rendering_ComputeCommandBuffer__CopyCounterValue(0);
      uVar18 = thunk_FUN_02d9d164(*(undefined8 *)OVRVirtualKeyboard_HandInputSource_TypeInfo,
                                  local_120);
      local_e0 = 0;
      FUN_058eb330(&local_e0,uVar6,uVar15 & 0xffffffff,0);
      uVar10 = FUN_0339d858(uVar18,local_e0,
                            *(undefined8 *)
                             OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo);
      uVar18 = 0;
      if ((lVar7 != 0) && ((uVar10 & 1) != 0)) {
        if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
          uVar10 = 0;
          uVar19 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
          lVar17 = 0x20;
          do {
            if (uVar19 <= uVar10) goto LAB_058e5be4;
            memcpy(&local_d0,(void *)(lVar7 + lVar17),0x48);
            if (((uint)local_d0 & 0xfffffffe) == 0x30) {
              if (local_d0._4_4_ == 1) {
LAB_058e5570:
                uVar18 = *(undefined8 *)OVRVirtualKeyboard_<>c_TypeInfo;
                if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                lVar17 = FUN_05015c2c(uVar18,0);
                uVar16 = *(undefined8 *)puVar2;
                if ((uVar6 == 1) && ((uVar5 & 0xfffffffe) == 4)) {
                  uVar16 = *(undefined8 *)
                            Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_TypeInfo;
                  uVar18 = *(undefined8 *)UnityEngine_UI_InputField_SubmitEvent_TypeInfo;
                  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  lVar17 = FUN_05015c2c(uVar18,0);
                }
                lVar20 = *(long *)PTR_DAT_0675e638;
                uVar10 = FUN_04e8c024(uVar16,*(undefined8 *)
                                              Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_TypeInfo
                                      ,0);
                if ((uVar10 & 1) != 0) {
                  if (uVar6 == 1) {
                    local_120._0_4_ = uVar5;
                    uVar18 = thunk_FUN_02d9d164(*(undefined8 *)
                                                 OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_TypeInfo
                                                ,local_120);
                    lVar20 = System_Char__System_IConvertible_ToSByte
                                       (*(undefined8 *)PTR_DAT_06778a00,uVar18,0);
                  }
                  else {
                    local_120._0_4_ = uVar6;
                    uVar18 = thunk_FUN_02d9d164(*(undefined8 *)
                                                 OVRVirtualKeyboard_ITextHandler_TypeInfo,local_120)
                    ;
                    local_e0 = CONCAT44(local_e0._4_4_,uVar5);
                    uVar11 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x48),&local_e0);
                    lVar20 = FUN_04e8e6a4(*(undefined8 *)OVRVirtualKeyboard_InputSource_TypeInfo,
                                          uVar18,uVar11,0);
                  }
                }
                local_120._8_8_ = param_1[1];
                local_120._0_8_ = *param_1;
                uStack_108 = param_1[3];
                local_110 = param_1[2];
                local_f0 = param_1[6];
                uStack_f8 = param_1[5];
                local_100 = param_1[4];
                if (*(int *)(*(long *)PTR_DAT_06768598 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uStack_158 = local_120._8_8_;
                local_160 = local_120._0_8_;
                uStack_148 = uStack_108;
                uStack_150 = local_110;
                uStack_138 = uStack_f8;
                local_140 = local_100;
                local_130 = local_f0;
                local_88 = FUN_0583b968(&local_160,0);
                uVar10 = FUN_04e8cf70(param_1[3],0);
                if (((uVar10 & 1) == 0) && (uVar10 = FUN_04e8cf70(param_1[2],0), (uVar10 & 1) == 0))
                {
                  lVar13 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,5);
                  if (lVar13 == 0) goto LAB_058e5be8;
                  if (*(int *)(lVar13 + 0x18) == 0) goto LAB_058e5be4;
                  *(undefined8 *)(lVar13 + 0x20) =
                       *(undefined8 *)OVRVirtualKeyboard_KeyboardEventListener_TypeInfo;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x20));
                  if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_058e5be4;
                  *(undefined8 *)(lVar13 + 0x28) = param_1[2];
                  thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x28));
                  if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_058e5be4;
                  *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)PTR_DAT_06760790;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x30));
                  if (*(uint *)(lVar13 + 0x18) < 4) goto LAB_058e5be4;
                  *(undefined8 *)(lVar13 + 0x38) = param_1[3];
                  thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x38));
                  if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_058e5be4;
                  *(long *)(lVar13 + 0x40) = lVar20;
                  thunk_FUN_02dd37b4((long *)(lVar13 + 0x40),lVar20);
                  uVar18 = FUN_04e8e3a4(lVar13,0);
                  plVar21 = (long *)PTR_DAT_06768598;
                }
                else {
                  uVar10 = FUN_04e8cf70(param_1[3],0);
                  if ((uVar10 & 1) == 0) {
                    uVar18 = FUN_04e8db00(*(undefined8 *)
                                           OVRVirtualKeyboard_KeyboardEventListener_TypeInfo,
                                          param_1[3],lVar20,0);
                    plVar21 = (long *)PTR_DAT_06768598;
                  }
                  else {
                    if (uVar3 == 0) break;
                    plVar12 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,4);
                    if (plVar12 == (long *)0x0) goto LAB_058e5be8;
                    if (*(long *)puVar2 == 0) {
                      lVar13 = 0;
                    }
                    else {
                      lVar13 = thunk_FUN_02d9d438(*(long *)puVar2,*(undefined8 *)(*plVar12 + 0x40));
                      if (lVar13 == 0) goto LAB_058e5bec;
                      lVar13 = *(long *)puVar2;
                    }
                    if ((int)plVar12[3] == 0) {
LAB_058e5be4:
                    /* WARNING: Subroutine does not return */
                      FUN_02d60af0();
                    }
                    plVar12[4] = lVar13;
                    thunk_FUN_02dd37b4();
                    local_120._0_8_ = CONCAT44(local_120._4_4_,uVar3);
                    lVar13 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x48),local_120);
                    if ((lVar13 != 0) &&
                       (lVar14 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar14 == 0)) {
LAB_058e5bec:
                      uVar18 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
                      FUN_02d609b4(uVar18,0);
                    }
                    if (*(uint *)(plVar12 + 3) < 2) goto LAB_058e5be4;
                    plVar12[5] = lVar13;
                    thunk_FUN_02dd37b4(plVar12 + 5,lVar13);
                    local_e0 = CONCAT44(local_e0._4_4_,uVar4);
                    lVar13 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x48),&local_e0);
                    if ((lVar13 != 0) &&
                       (lVar14 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar14 == 0)) goto LAB_058e5bec;
                    if (*(uint *)(plVar12 + 3) < 3) goto LAB_058e5be4;
                    plVar12[6] = lVar13;
                    thunk_FUN_02dd37b4(plVar12 + 6,lVar13);
                    if ((lVar20 != 0) &&
                       (lVar13 = thunk_FUN_02d9d438(lVar20,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar13 == 0)) goto LAB_058e5bec;
                    plVar21 = (long *)PTR_DAT_06768598;
                    if (*(uint *)(plVar12 + 3) < 4) goto LAB_058e5be4;
                    plVar12[7] = lVar20;
                    thunk_FUN_02dd37b4(plVar12 + 7,lVar20);
                    uVar18 = FUN_04e8e72c(*(undefined8 *)
                                           OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__19_TypeInfo
                                          ,plVar12,0);
                    lVar20 = *plVar21;
                    if (*(int *)(lVar20 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4(lVar20);
                    }
                    puVar2 = OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo;
                    local_d8 = FUN_0345e51c(&local_88,
                                            *(undefined8 *)
                                             OVRVirtualKeyboard_InteractorRootTransformOverride_TypeInfo
                                            ,uVar4,*(undefined8 *)
                                                    OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo
                                           );
                    local_88 = FUN_0345e51c(&local_d8,
                                            *(undefined8 *)
                                             OVRVirtualKeyboard_TextHandlerScope_TypeInfo,uVar3,
                                            *(undefined8 *)puVar2);
                  }
                }
                if (*(int *)(*plVar21 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                local_d8 = FUN_0345e51c(&local_88,
                                        *(undefined8 *)
                                         OVR_OpenVR_IVRSystem__GetBoolTrackedDeviceProperty_TypeInfo
                                        ,uVar15 & 0xffffffff,
                                        *(undefined8 *)
                                         OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo);
                local_88 = FUN_0345e5d4(&local_d8,
                                        *(undefined8 *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo,
                                        uVar6,*(undefined8 *)
                                               OVRVirtualKeyboard_ControllerInputSource_TypeInfo);
                lVar20 = thunk_FUN_02d9d534(*(undefined8 *)
                                             OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_TypeInfo
                                           );
                FUN_0504920c(lVar20,0);
                if (lVar20 != 0) {
                  *(undefined8 *)(lVar20 + 0x10) = param_1[3];
                  thunk_FUN_02dd37b4();
                  *(undefined4 *)(lVar20 + 0x20) = uVar5;
                  *(undefined4 *)(lVar20 + 0x24) = uVar6;
                  *(undefined4 *)(lVar20 + 0x18) = uVar3;
                  *(undefined4 *)(lVar20 + 0x1c) = uVar4;
                  *(undefined8 *)(lVar20 + 0x30) = uStack_78;
                  *(undefined8 *)(lVar20 + 0x28) = local_80;
                  *(long *)(lVar20 + 0x38) = lVar7;
                  *(undefined8 *)(lVar20 + 0x40) = uVar8;
                  thunk_FUN_02dd37b4((long *)(lVar20 + 0x38),0);
                  *(undefined8 *)(lVar20 + 0x48) = uVar16;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar20 + 0x48),uVar16);
                  if (lVar17 == 0) {
                    uVar15 = *(undefined8 *)OVRVirtualKeyboard_<>c_TypeInfo;
                    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    lVar17 = FUN_05015c2c(uVar15,0);
                  }
                  *(long *)(lVar20 + 0x50) = lVar17;
                  thunk_FUN_02dd37b4((long *)(lVar20 + 0x50),lVar17);
                  if (lVar9 != 0) {
                    *(long *)(lVar9 + 0x10) = lVar20;
                    thunk_FUN_02dd37b4((long *)(lVar9 + 0x10),lVar20);
                    uVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                 System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualDouble_TypeInfo
                                               );
                    FUN_04d566c0(uVar15,lVar9,
                                 *(undefined8 *)OVRVirtualKeyboard_IInputSource_TypeInfo,0);
                    local_120._0_8_ = 0;
                    local_120._8_8_ = 0;
                    FUN_03dccff4(local_120,local_88,
                                 *(undefined8 *)OVRGLTFLoader_<>c__DisplayClass26_0_TypeInfo);
                    if (*(int *)(*(long *)PTR_DAT_06768438 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    FUN_05854d44(uVar15,uVar18,uVar16,local_120._0_8_,local_120._8_8_,0);
                    goto LAB_058e5bb0;
                  }
                }
LAB_058e5be8:
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
            }
            else {
              lVar20 = FUN_058e83a0(&local_d0);
              if (lVar20 != 0) goto LAB_058e5570;
              uVar19 = (ulong)*(uint *)(lVar7 + 0x18);
            }
            uVar10 = uVar10 + 1;
            lVar17 = lVar17 + 0x48;
          } while ((long)uVar10 < (long)(int)uVar19);
        }
        uVar18 = 0;
      }
    }
  }
LAB_058e5bb0:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar18;
}


