/*
FUNCTION_NAME: FUN_03518e10
ENTRY_POINT: 03518e10
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_03518e10(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  
  if ((DAT_0412ddbc & 1) == 0) {
    FUN_01ab69ac(OVR_OpenVR_IVROverlay__SetGamepadFocusOverlay_TypeInfo);
    FUN_01ab69ac(OVR_OpenVR_IVROverlay__SetHighQualityOverlay_TypeInfo);
    FUN_01ab69ac(OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor_TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanChar_TypeInfo
                );
    FUN_01ab69ac(PTR_DAT_03d0b210);
    FUN_01ab69ac(PTR_DAT_03d0b218);
    FUN_01ab69ac(PTR_DAT_03d0b220);
    FUN_01ab69ac(OVR_OpenVR_IVROverlay__SetKeyboardPositionForOverlay_TypeInfo);
    FUN_01ab69ac(OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc1820);
    FUN_01ab69ac(PTR_DAT_03cc1790);
    FUN_01ab69ac(OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
    FUN_01ab69ac(OVR_OpenVR_IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters_TypeInfo);
    FUN_01ab69ac(OVR_OpenVR_IVROverlay__SetOverlayColor_TypeInfo);
    FUN_01ab69ac(OVR_OpenVR_IVROverlay__SetOverlayDualAnalogTransform_TypeInfo);
    FUN_01ab69ac(UniHumanoid_IBoneExtensions_<Traverse>d__0_TypeInfo);
    FUN_01ab69ac(QFSW_QC_Serializers_IDictionarySerializer_<GetObjectStream>d__0_TypeInfo);
    FUN_01ab69ac(RootMotion_FinalIK_IKSolver_UpdateDelegate_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(PTR_DAT_03cbedf0);
    FUN_01ab69ac(QFSW_QC_CommandData_<>c__DisplayClass23_0_TypeInfo);
    FUN_01ab69ac(QFSW_QC_Suggestors_CommandNameSuggestor_<>c_TypeInfo);
    FUN_01ab69ac(System_Net_CommandStream_PipelineEntry_TypeInfo);
    FUN_01ab69ac(QFSW_QC_Suggestors_CommandSuggestion_<>c_TypeInfo);
    FUN_01ab69ac(
                Unity_Entities_CompanionGameObjectUpdateTransformSystem___codegen__OnUpdate_0000001B_BurstDirectCall_TypeInfo
                );
    FUN_01ab69ac(OVR_OpenVR_IVROverlay__SetOverlayFlag_TypeInfo);
    FUN_01ab69ac(QFSW_QC_Suggestors_CommandSuggestor_<>c__DisplayClass5_0_TypeInfo);
    DAT_0412ddbc = 1;
  }
  puVar4 = OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor_TypeInfo;
  local_60 = 0;
  local_58 = 0;
  if (*param_1 == 0) {
    local_58 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    lVar11 = *(long *)(param_1 + 10);
    lVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d0b220);
    FUN_0219a4f0(lVar5,*(undefined8 *)PTR_DAT_03d0b218);
    uVar14 = *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo;
    if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar14 = FUN_0277b678(uVar14,0);
    puVar2 = PTR_DAT_03d0b210;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0219b9a4(lVar5,*(undefined8 *)
                        QFSW_QC_Suggestors_CommandSuggestor_<>c__DisplayClass5_0_TypeInfo,uVar14,
                 *(undefined8 *)PTR_DAT_03d0b210);
    uVar14 = FUN_0277b678(*(undefined8 *)
                           OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo,0);
    FUN_0219b9a4(lVar5,*(undefined8 *)QFSW_QC_CommandData_<>c__DisplayClass23_0_TypeInfo,uVar14,
                 *(undefined8 *)puVar2);
    puVar3 = System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanChar_TypeInfo;
    uVar14 = FUN_0277b678(*(undefined8 *)
                           System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanChar_TypeInfo
                          ,0);
    FUN_0219b9a4(lVar5,*(undefined8 *)QFSW_QC_Suggestors_CommandNameSuggestor_<>c_TypeInfo,uVar14,
                 *(undefined8 *)puVar2);
    uVar14 = FUN_0277b678(*(undefined8 *)puVar3,0);
    FUN_0219b9a4(lVar5,*(undefined8 *)
                        Unity_Entities_CompanionGameObjectUpdateTransformSystem___codegen__OnUpdate_0000001B_BurstDirectCall_TypeInfo
                 ,uVar14,*(undefined8 *)puVar2);
    uVar14 = FUN_0277b678(*(undefined8 *)puVar3,0);
    FUN_0219b9a4(lVar5,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayFlag_TypeInfo,uVar14,
                 *(undefined8 *)puVar2);
    uVar14 = FUN_0277b678(*(undefined8 *)puVar3,0);
    FUN_0219b9a4(lVar5,*(undefined8 *)QFSW_QC_Suggestors_CommandSuggestion_<>c_TypeInfo,uVar14,
                 *(undefined8 *)puVar2);
    uVar14 = FUN_0277b678(*(undefined8 *)puVar3,0);
    FUN_0219b9a4(lVar5,*(undefined8 *)System_Net_CommandStream_PipelineEntry_TypeInfo,uVar14,
                 *(undefined8 *)puVar2);
    *(long *)(param_1 + 0xe) = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0xe,lVar5);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar12 = *(undefined8 *)(param_1 + 8);
    uVar14 = FUN_03518bbc(lVar11);
    lVar5 = FUN_034feaf4(uVar12,uVar14,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar13 = *(long **)(lVar11 + 0x10);
    uVar14 = FUN_025b1328(*(undefined8 *)(lVar5 + 0x10),
                          *(undefined8 *)(*(long *)(param_1 + 0xc) + 0x40),0);
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar12 = FUN_03511bac(uVar14,*(undefined8 *)(*(long *)(param_1 + 0xc) + 0x20));
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar6 = FUN_035121d8(*(long *)(param_1 + 0xc),*(undefined8 *)(lVar11 + 0x18),lVar5);
    local_60 = *(undefined8 *)(lVar5 + 0x18);
    lVar5 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01a46ff8();
    }
    pcVar7 = (char *)thunk_FUN_01a59484(&local_60,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80));
    uVar15 = *(undefined8 *)PTR_DAT_03cbedf0;
    if (*pcVar7 == '\0') {
      uVar1 = 10;
    }
    else {
      FUN_01ba9478(&local_60,&local_48,*(undefined8 *)PTR_DAT_03cc1820);
      uVar1 = local_48;
    }
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar5 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)OVR_OpenVR_IVROverlay__SetKeyboardPositionForOverlay_TypeInfo) {
          puVar8 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03519280;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01a472ec(plVar13,*(long *)
                                   OVR_OpenVR_IVROverlay__SetKeyboardPositionForOverlay_TypeInfo,0);
LAB_03519280:
    lVar5 = (*(code *)*puVar8)(plVar13,uVar15,uVar14,uVar12,uVar6,uVar1,puVar8[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_58 = FUN_020a2c44(lVar5,*(undefined8 *)RootMotion_FinalIK_IKSolver_UpdateDelegate_TypeInfo
                           );
    uVar9 = FUN_0209f888(&local_58,
                         *(undefined8 *)
                          QFSW_QC_Serializers_IDictionarySerializer_<GetObjectStream>d__0_TypeInfo);
    if ((uVar9 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = local_58;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x10,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f07574(param_1 + 2,&local_58,param_1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetGamepadFocusOverlay_TypeInfo);
      return;
    }
  }
  FUN_0209f8cc(&local_58,&local_48,
               *(undefined8 *)UniHumanoid_IBoneExtensions_<Traverse>d__0_TypeInfo);
  uVar14 = FUN_01fe1034(CONCAT44(uStack_44,local_48),*(undefined8 *)(param_1 + 0xe),
                        *(undefined8 *)
                         OVR_OpenVR_IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters_TypeInfo);
  uVar12 = thunk_FUN_01a89e68(*(undefined8 *)
                               OVR_OpenVR_IVROverlay__SetOverlayDualAnalogTransform_TypeInfo);
  FUN_02075ab8(uVar12,CONCAT44(uStack_44,local_48),uVar14,
               *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayColor_TypeInfo);
  puVar2 = OVR_OpenVR_IVROverlay__SetHighQualityOverlay_TypeInfo;
  *param_1 = -2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0xe,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02145584(param_1 + 2,uVar12,*(undefined8 *)puVar2);
  return;
}


