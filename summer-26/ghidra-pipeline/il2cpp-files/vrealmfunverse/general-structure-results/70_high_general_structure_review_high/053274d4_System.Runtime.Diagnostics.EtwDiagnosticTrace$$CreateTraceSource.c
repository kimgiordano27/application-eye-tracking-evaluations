/*
FUNCTION_NAME: System.Runtime.Diagnostics.EtwDiagnosticTrace$$CreateTraceSource
ENTRY_POINT: 053274d4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


long * System_Runtime_Diagnostics_EtwDiagnosticTrace__CreateTraceSource
                 (long param_1,long *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  if ((DAT_066d03bb & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312a10);
    FUN_02b3c81c(UnityEngine_UIElements_Foldout_var);
    FUN_02b3c81c(
                System_Runtime_CompilerServices_FormattableStringFactory_ConcreteFormattableString_TypeInfo
                );
    FUN_02b3c81c(EmeraldAI_SoundDetection_EmeraldSoundDetector_<>c__DisplayClass73_0_TypeInfo);
    FUN_02b3c81c(System_Xml_XmlElement_TypeInfo);
    FUN_02b3c81c(
                EmeraldAI_SoundDetection_EmeraldSoundDetector_<CalculateMovementInternal>d__70_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_Rendering_GraphicsSettings_<>c_TypeInfo);
    FUN_02b3c81c(Firebase_Auth_FirebaseAuth_<>c__DisplayClass18_1_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631cdf0);
    FUN_02b3c81c(Autohand_GrabbableCollisionHaptics_<HapticPlayBuffer>d__15_TypeInfo);
    FUN_02b3c81c(Firebase_Firestore_FirebaseFirestore_<>c__DisplayClass24_0_TypeInfo);
    FUN_02b3c81c(EmeraldAI_EmeraldItems_OnUnequipWeaponHandler_TypeInfo);
    FUN_02b3c81c(
                Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OpenCloseStateBuilder_TypeInfo
                );
    FUN_02b3c81c(PTR_DAT_063273d0);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanByte_TypeInfo
                );
    FUN_02b3c81c(PTR_DAT_06321ea8);
    FUN_02b3c81c(PTR_DAT_06321df8);
    FUN_02b3c81c(UnityEngine_ExpressionEvaluator_Expression_TypeInfo);
    FUN_02b3c81c(Autohand_AutoHandPlayerForceArea_<>c__DisplayClass5_0_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06317138);
    DAT_066d03bb = 1;
  }
  puVar5 = 
  Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OpenCloseStateBuilder_TypeInfo;
  puVar4 = System_Xml_XmlElement_TypeInfo;
  puVar3 = UnityEngine_UIElements_Foldout_var;
  puVar2 = PTR_DAT_063273d0;
  puVar1 = PTR_DAT_06321ea8;
  lVar13 = param_3;
  if (param_3 == 0) {
    if (param_4 == 0) goto LAB_05327af0;
    lVar13 = *(long *)(param_4 + 0x20);
    if (lVar13 != 0) goto LAB_0532763c;
    plVar10 = *(long **)(param_1 + 0x78);
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar11 = FUN_0557ee10(*(undefined8 *)
                           Autohand_AutoHandPlayerForceArea_<>c__DisplayClass5_0_TypeInfo,0);
    if (plVar10 == (long *)0x0) goto LAB_05327af0;
    (**(code **)(*plVar10 + 0x518))
              (plVar10,*(undefined8 *)puVar1,uVar11,*(undefined8 *)(*plVar10 + 0x520));
    plVar10 = *(long **)(param_1 + 0x78);
    if (plVar10 == (long *)0x0) goto LAB_05327af0;
    (**(code **)(*plVar10 + 0x558))
              (plVar10,*(undefined8 *)puVar5,*(undefined8 *)puVar4,*(undefined8 *)puVar2,
               *(undefined8 *)(*plVar10 + 0x560));
    plVar10 = *(long **)(param_1 + 0x78);
    lVar13 = FUN_05297094(param_4,0);
    if (lVar13 == 0) goto LAB_05327af0;
    uVar11 = *(undefined8 *)puVar4;
    uVar12 = *(undefined8 *)Firebase_Auth_FirebaseAuth_<>c__DisplayClass18_1_TypeInfo;
    if (*(int *)(lVar13 + 0x10) == 0) {
      uVar7 = *(undefined8 *)(param_4 + 0x90);
    }
    else {
      uVar7 = FUN_05297094(param_4,0);
      uVar7 = FUN_04c0a5c4(uVar7,*(undefined8 *)PTR_DAT_0631cdf0,*(undefined8 *)(param_4 + 0x90),0);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar7 = FUN_0557ee10(uVar7,0);
    if (plVar10 == (long *)0x0) goto LAB_05327af0;
    (**(code **)(*plVar10 + 0x558))(plVar10,uVar12,uVar11,uVar7,*(undefined8 *)(*plVar10 + 0x560));
    if (*(char *)(param_4 + 0xe8) != '\0') {
      plVar10 = *(long **)(param_1 + 0x78);
      if (plVar10 == (long *)0x0) goto LAB_05327af0;
      (**(code **)(*plVar10 + 0x558))
                (plVar10,*(undefined8 *)
                          System_Runtime_CompilerServices_FormattableStringFactory_ConcreteFormattableString_TypeInfo
                 ,*(undefined8 *)puVar4,*(undefined8 *)puVar2,*(undefined8 *)(*plVar10 + 0x560));
    }
    if (*(char *)(param_4 + 0xc0) == '\0') {
      plVar10 = *(long **)(param_4 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_06312a10 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar11 = FUN_04d0494c(0);
      if (plVar10 == (long *)0x0) goto LAB_05327af0;
      uVar8 = (**(code **)(*plVar10 + 0x138))(plVar10,uVar11,*(undefined8 *)(*plVar10 + 0x140));
      if ((uVar8 & 1) == 0) goto LAB_05327ae8;
      goto LAB_05327894;
    }
LAB_05327ae8:
    plVar10 = *(long **)(param_4 + 0xb8);
joined_r0x05327aec:
    if (plVar10 == (long *)0x0) goto LAB_05327af0;
    plVar9 = *(long **)(param_1 + 0x78);
    uVar11 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    if (plVar9 == (long *)0x0) goto LAB_05327af0;
    (**(code **)(*plVar9 + 0x558))
              (plVar9,*(undefined8 *)UnityEngine_ExpressionEvaluator_Expression_TypeInfo,
               *(undefined8 *)puVar4,uVar11,*(undefined8 *)(*plVar9 + 0x560));
  }
  else {
LAB_0532763c:
    plVar10 = *(long **)(param_1 + 0x78);
    uVar11 = *(undefined8 *)(lVar13 + 0x40);
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar11 = FUN_0557ee10(uVar11,0);
    if (plVar10 == (long *)0x0) goto LAB_05327af0;
    (**(code **)(*plVar10 + 0x518))
              (plVar10,*(undefined8 *)puVar1,uVar11,*(undefined8 *)(*plVar10 + 0x520));
    plVar10 = *(long **)(param_1 + 0x78);
    if (plVar10 == (long *)0x0) goto LAB_05327af0;
    (**(code **)(*plVar10 + 0x558))
              (plVar10,*(undefined8 *)puVar5,*(undefined8 *)puVar4,*(undefined8 *)puVar2,
               *(undefined8 *)(*plVar10 + 0x560));
    if (param_3 == 0) {
      if (param_4 == 0) goto LAB_05327af0;
      plVar10 = *(long **)(param_1 + 0x78);
      lVar6 = FUN_05297094(param_4,0);
      if (lVar6 == 0) goto LAB_05327af0;
      uVar11 = *(undefined8 *)puVar4;
      uVar12 = *(undefined8 *)Firebase_Auth_FirebaseAuth_<>c__DisplayClass18_1_TypeInfo;
      if (*(int *)(lVar6 + 0x10) == 0) {
        uVar7 = *(undefined8 *)(param_4 + 0x90);
      }
      else {
        uVar7 = FUN_05297094(param_4,0);
        uVar7 = FUN_04c0a5c4(uVar7,*(undefined8 *)PTR_DAT_0631cdf0,*(undefined8 *)(param_4 + 0x90),0
                            );
      }
      if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar7 = FUN_0557ee10(uVar7,0);
      if (plVar10 == (long *)0x0) goto LAB_05327af0;
      (**(code **)(*plVar10 + 0x558))(plVar10,uVar12,uVar11,uVar7,*(undefined8 *)(*plVar10 + 0x560))
      ;
    }
    if (*(char *)(lVar13 + 0x59) != '\0') {
      plVar10 = *(long **)(param_1 + 0x78);
      if (plVar10 == (long *)0x0) goto LAB_05327af0;
      (**(code **)(*plVar10 + 0x558))
                (plVar10,*(undefined8 *)
                          System_Runtime_CompilerServices_FormattableStringFactory_ConcreteFormattableString_TypeInfo
                 ,*(undefined8 *)puVar4,*(undefined8 *)puVar2,*(undefined8 *)(*plVar10 + 0x560));
    }
    if (*(char *)(lVar13 + 0x68) != '\0') {
LAB_053278c4:
      plVar10 = *(long **)(lVar13 + 0x60);
      goto joined_r0x05327aec;
    }
    plVar10 = *(long **)(lVar13 + 0x60);
    if (*(int *)(*(long *)PTR_DAT_06312a10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar11 = FUN_04d0494c(0);
    if (plVar10 == (long *)0x0) goto LAB_05327af0;
    uVar8 = (**(code **)(*plVar10 + 0x138))(plVar10,uVar11,*(undefined8 *)(*plVar10 + 0x140));
    if ((uVar8 & 1) == 0) goto LAB_053278c4;
LAB_05327894:
    plVar10 = *(long **)(param_1 + 0x78);
    if (plVar10 == (long *)0x0) goto LAB_05327af0;
    (**(code **)(*plVar10 + 0x558))
              (plVar10,*(undefined8 *)
                        Firebase_Firestore_FirebaseFirestore_<>c__DisplayClass24_0_TypeInfo,
               *(undefined8 *)puVar4,*(undefined8 *)puVar2,*(undefined8 *)(*plVar10 + 0x560));
  }
  puVar2 = EmeraldAI_EmeraldItems_OnUnequipWeaponHandler_TypeInfo;
  puVar1 = PTR_DAT_06321df8;
  if (param_2 != (long *)0x0) {
    plVar10 = (long *)(**(code **)(*param_2 + 0x5f8))
                                (param_2,*(undefined8 *)
                                          EmeraldAI_EmeraldItems_OnUnequipWeaponHandler_TypeInfo,
                                 *(undefined8 *)
                                  System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanByte_TypeInfo
                                 ,*(undefined8 *)PTR_DAT_06321df8,*(undefined8 *)(*param_2 + 0x600))
    ;
    puVar3 = UnityEngine_Rendering_GraphicsSettings_<>c_TypeInfo;
    plVar9 = *(long **)(param_1 + 0x78);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x2d8))(plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x2e0));
      plVar9 = (long *)(**(code **)(*param_2 + 0x5f8))
                                 (param_2,*(undefined8 *)puVar2,*(undefined8 *)puVar3,
                                  *(undefined8 *)puVar1,*(undefined8 *)(*param_2 + 0x600));
      puVar2 = Autohand_GrabbableCollisionHaptics_<HapticPlayBuffer>d__15_TypeInfo;
      puVar1 = 
      EmeraldAI_SoundDetection_EmeraldSoundDetector_<CalculateMovementInternal>d__70_TypeInfo;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x518))
                  (plVar9,*(undefined8 *)
                           EmeraldAI_SoundDetection_EmeraldSoundDetector_<>c__DisplayClass73_0_TypeInfo
                   ,*(undefined8 *)PTR_DAT_06317138,*(undefined8 *)(*plVar9 + 0x520));
        (**(code **)(*plVar9 + 0x518))
                  (plVar9,*(undefined8 *)puVar1,*(undefined8 *)puVar2,
                   *(undefined8 *)(*plVar9 + 0x520));
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x2d8))(plVar10,plVar9,*(undefined8 *)(*plVar10 + 0x2e0));
          return plVar9;
        }
      }
    }
  }
LAB_05327af0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


