/*
FUNCTION_NAME: UnityEngine.AndroidJNI$$CallShortMethod
ENTRY_POINT: 03542d1c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_1
*/


void UnityEngine_AndroidJNI__CallShortMethod(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  if ((*(byte *)(unaff_x20 + 0xef3) & 1) == 0) {
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSingle_TypeInfo);
    FUN_01ab69ac(
                System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSingleLiftedToNull_TypeInfo
                );
    FUN_01ab69ac(
                System_Linq_Expressions_Interpreter_NegateCheckedInstruction_NegateCheckedInt16_TypeInfo
                );
    FUN_01ab69ac(DigitalOpus_MB_Core_MB3_TextureCombinerPipeline_<>c__DisplayClass7_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03d0b210);
    FUN_01ab69ac(PTR_DAT_03d0b218);
    FUN_01ab69ac(PTR_DAT_03d0b220);
    FUN_01ab69ac(VRM_MaterialValueBindingMerger_<>c__DisplayClass6_2_TypeInfo);
    FUN_01ab69ac(Fusion_NetworkBehaviourUtils_<GetAllInterestGroupOnObject>d__12_TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt16_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc1820);
    FUN_01ab69ac(PTR_DAT_03cc1790);
    FUN_01ab69ac(
                System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt16LiftedToNull_TypeInfo
                );
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt32_TypeInfo);
    FUN_01ab69ac(
                System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt32LiftedToNull_TypeInfo
                );
    FUN_01ab69ac(
                FluffyUnderware_Curvy_Generator_Modules_ModifierPathRelativeTranslation_<>c__DisplayClass16_0_TypeInfo
                );
    FUN_01ab69ac(Mono_CSharp_ModuleContainer_<>c__DisplayClass98_0_TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloSingle_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(QFSW_QC_CommandData_<>c__DisplayClass23_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc41b0);
    FUN_01ab69ac(QFSW_QC_CommandData_<>c__DisplayClass23_1_TypeInfo);
    FUN_01ab69ac(QFSW_QC_Suggestors_CommandNameSuggestor_<>c_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cf1a48);
    FUN_01ab69ac(System_Net_CommandStream_PipelineEntry_TypeInfo);
    FUN_01ab69ac(QFSW_QC_Suggestors_CommandSuggestion_<>c_TypeInfo);
    FUN_01ab69ac(
                Unity_Entities_CompanionGameObjectUpdateTransformSystem___codegen__OnUpdate_0000001B_BurstDirectCall_TypeInfo
                );
    FUN_01ab69ac(QFSW_QC_Suggestors_CommandSuggestor_<>c__DisplayClass5_0_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0xef3) = 1;
  }
  puVar4 = System_Linq_Expressions_Interpreter_NegateCheckedInstruction_NegateCheckedInt16_TypeInfo;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  if (*param_1 == 0) {
    in_stack_00000010 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    lVar10 = *(long *)(param_1 + 10);
    lVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d0b220);
    FUN_0219a4f0(lVar5,*(undefined8 *)PTR_DAT_03d0b218);
    uVar13 = *(undefined8 *)
              System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt16_TypeInfo;
    if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_0277b678(uVar13,0);
    puVar2 = PTR_DAT_03d0b210;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0219b9a4(lVar5,*(undefined8 *)
                        QFSW_QC_Suggestors_CommandSuggestor_<>c__DisplayClass5_0_TypeInfo,uVar13,
                 *(undefined8 *)PTR_DAT_03d0b210);
    uVar13 = FUN_0277b678(*(undefined8 *)
                           VRM_MaterialValueBindingMerger_<>c__DisplayClass6_2_TypeInfo,0);
    FUN_0219b9a4(lVar5,*(undefined8 *)QFSW_QC_CommandData_<>c__DisplayClass23_0_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
    puVar3 = DigitalOpus_MB_Core_MB3_TextureCombinerPipeline_<>c__DisplayClass7_0_TypeInfo;
    uVar13 = FUN_0277b678(*(undefined8 *)
                           DigitalOpus_MB_Core_MB3_TextureCombinerPipeline_<>c__DisplayClass7_0_TypeInfo
                          ,0);
    FUN_0219b9a4(lVar5,*(undefined8 *)QFSW_QC_CommandData_<>c__DisplayClass23_1_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
    uVar13 = FUN_0277b678(*(undefined8 *)puVar3,0);
    FUN_0219b9a4(lVar5,*(undefined8 *)QFSW_QC_Suggestors_CommandNameSuggestor_<>c_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
    uVar13 = FUN_0277b678(*(undefined8 *)puVar3,0);
    FUN_0219b9a4(lVar5,*(undefined8 *)
                        Unity_Entities_CompanionGameObjectUpdateTransformSystem___codegen__OnUpdate_0000001B_BurstDirectCall_TypeInfo
                 ,uVar13,*(undefined8 *)puVar2);
    uVar13 = FUN_0277b678(*(undefined8 *)puVar3,0);
    FUN_0219b9a4(lVar5,*(undefined8 *)QFSW_QC_Suggestors_CommandSuggestion_<>c_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
    uVar13 = FUN_0277b678(*(undefined8 *)puVar3,0);
    FUN_0219b9a4(lVar5,*(undefined8 *)PTR_DAT_03cf1a48,uVar13,*(undefined8 *)puVar2);
    uVar13 = FUN_0277b678(*(undefined8 *)puVar3,0);
    FUN_0219b9a4(lVar5,*(undefined8 *)System_Net_CommandStream_PipelineEntry_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
    *(long *)(param_1 + 0xe) = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0xe,lVar5);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar11 = *(undefined8 *)(param_1 + 8);
    uVar13 = FUN_0353d0ec(lVar10);
    lVar5 = FUN_0351eba4(uVar11,uVar13,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar12 = *(long **)(lVar10 + 0x10);
    uVar13 = FUN_025b1328(*(undefined8 *)(lVar5 + 0x10),
                          *(undefined8 *)(*(long *)(param_1 + 0xc) + 0x48),0);
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar11 = Unity_XR_Oculus_Input_OculusHMD__get_leftEyeAcceleration
                       (*(long *)(param_1 + 0xc),*(undefined8 *)(lVar10 + 0x18),lVar5);
    in_stack_00000008 = *(undefined8 *)(lVar5 + 0x18);
    lVar5 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01a46ff8();
    }
    pcVar6 = (char *)thunk_FUN_01a59484(&stack0x00000008,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80));
    uVar14 = *(undefined8 *)PTR_DAT_03cc41b0;
    if (*pcVar6 == '\0') {
      uVar1 = 10;
    }
    else {
      FUN_01ba9478(&stack0x00000008,&stack0x00000018,*(undefined8 *)PTR_DAT_03cc1820);
      uVar1 = uStack0000000000000018;
    }
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar5 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Fusion_NetworkBehaviourUtils_<GetAllInterestGroupOnObject>d__12_TypeInfo) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03543190;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01a472ec(plVar12,*(long *)
                                   Fusion_NetworkBehaviourUtils_<GetAllInterestGroupOnObject>d__12_TypeInfo
                          ,0);
LAB_03543190:
    lVar5 = (*(code *)*puVar7)(plVar12,uVar14,uVar13,0,uVar11,uVar1,puVar7[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_stack_00000010 =
         FUN_020a2c44(lVar5,*(undefined8 *)
                             System_Linq_Expressions_Interpreter_ModuloInstruction_ModuloSingle_TypeInfo
                     );
    uVar8 = FUN_0209f888(&stack0x00000010,
                         *(undefined8 *)Mono_CSharp_ModuleContainer_<>c__DisplayClass98_0_TypeInfo);
    if ((uVar8 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = in_stack_00000010;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x10,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f07574(param_1 + 2,&stack0x00000010,param_1,
                   *(undefined8 *)
                    System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSingle_TypeInfo)
      ;
      return;
    }
  }
  FUN_0209f8cc(&stack0x00000010,&stack0x00000018,
               *(undefined8 *)
                FluffyUnderware_Curvy_Generator_Modules_ModifierPathRelativeTranslation_<>c__DisplayClass16_0_TypeInfo
              );
  uVar13 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
  uVar11 = FUN_01fe16e8(uVar13,*(undefined8 *)(param_1 + 0xe),
                        *(undefined8 *)
                         System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt16LiftedToNull_TypeInfo
                       );
  uVar14 = thunk_FUN_01a89e68(*(undefined8 *)
                               System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt32LiftedToNull_TypeInfo
                             );
  FUN_02075c20(uVar14,uVar13,uVar11,
               *(undefined8 *)
                System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt32_TypeInfo);
  puVar2 = 
  System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSingleLiftedToNull_TypeInfo;
  *param_1 = -2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0xe,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02145584(param_1 + 2,uVar14,*(undefined8 *)puVar2);
  return;
}


