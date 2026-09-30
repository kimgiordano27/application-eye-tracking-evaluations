/*
FUNCTION_NAME: FUN_017b5a38
ENTRY_POINT: 017b5a38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_017b5a38(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  if ((DAT_03778ff4 & 1) == 0) {
    thunk_FUN_00d48444(Method_RCG_Lovesick_InteractiveObjects_GrabbableObject_OnEnable__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_1__);
    thunk_FUN_00d48444(Method_Oculus_Interaction_BestSelectInteractorGroup_<>c_<_cctor>b__34_1__);
    thunk_FUN_00d48444(Method_System_Data_ForeignKeyConstraint_set_DeleteRule__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_13970);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass20_0_<DOAnchorMax>b__1__)
    ;
    thunk_FUN_00d48444(PTR_DAT_033ecd38);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass1_0_<CreateLightingFeatures>b__0__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_79__);
    thunk_FUN_00d48444(StringLiteral_2699);
    DAT_03778ff4 = 1;
  }
  if ((param_2 == (long *)0x0) ||
     (plVar8 = (long *)FUN_0178a9d8(param_2,0),
     puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__, plVar8 == (long *)0x0)) {
LAB_017b5db4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar9 = (**(code **)(*plVar8 + 0x3c8))(plVar8,*(undefined8 *)(*plVar8 + 0x3d0));
  puVar3 = StringLiteral_13970;
  if ((uVar9 & 1) != 0) {
    plVar8 = (long *)FUN_017b559c(param_1,param_2);
    lVar12 = *(long *)puVar2;
    uVar13 = *(undefined8 *)puVar3;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar12);
    }
    uVar13 = FUN_01780344(uVar13,0);
    puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_79__;
    if (param_1 != 0) {
      FUN_0166bb38(param_1,uVar13,0);
      FUN_01677d98(param_1,*(undefined8 *)puVar2,7,0);
      puVar6 = 
      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass1_0_<CreateLightingFeatures>b__0__
      ;
      puVar5 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass20_0_<DOAnchorMax>b__1__;
      puVar4 = Method_RCG_Lovesick_InteractiveObjects_GrabbableObject_OnEnable__;
      puVar3 = Method_System_Data_ForeignKeyConstraint_set_DeleteRule__;
      puVar2 = PTR_DAT_033ecd38;
      if (plVar8 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar8 + 0x498))(plVar8,*(undefined8 *)(*plVar8 + 0x4a0));
        FUN_01677d98(param_1,*(undefined8 *)puVar5,uVar7,0);
        uVar13 = (**(code **)(*plVar8 + 0x338))(plVar8,*(undefined8 *)(*plVar8 + 0x340));
        uVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
        FUN_01682ab8(param_1,*(undefined8 *)puVar2,uVar13,uVar10,0);
        uVar13 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
        uVar10 = FUN_01780344(*(undefined8 *)puVar3,0);
        FUN_01682ab8(param_1,*(undefined8 *)puVar6,uVar13,uVar10,0);
        return;
      }
    }
    goto LAB_017b5db4;
  }
  uVar9 = (**(code **)(*param_2 + 0x3f8))(param_2,*(undefined8 *)(*param_2 + 0x400));
  if ((uVar9 & 1) == 0) {
    uVar9 = (**(code **)(*param_2 + 0x298))(param_2,*(undefined8 *)(*param_2 + 0x2a0));
    if ((uVar9 & 1) != 0) {
      plVar8 = (long *)FUN_017b559c(param_1,param_2);
      puVar3 = Method_Oculus_Interaction_BestSelectInteractorGroup_<>c_<_cctor>b__34_1__;
      if (plVar8 == (long *)0x0) goto LAB_017b5db4;
      uVar13 = (**(code **)(*plVar8 + 0x488))(plVar8,*(undefined8 *)(*plVar8 + 0x490));
      lVar12 = *(long *)puVar2;
      uVar10 = *(undefined8 *)puVar3;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar12);
      }
      uVar10 = FUN_01780344(uVar10,0);
      if (param_1 == 0) goto LAB_017b5db4;
      FUN_01682ab8(param_1,*(undefined8 *)StringLiteral_2699,uVar13,uVar10,0);
      param_2 = (long *)(**(code **)(*plVar8 + 0x468))(plVar8,*(undefined8 *)(*plVar8 + 0x470));
      if (param_2 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_1__ + 300
                         );
        if ((*(byte *)(*param_2 + 300) < bVar1) ||
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_1__)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(param_2);
        }
      }
      if (param_2 == (long *)0x0) goto LAB_017b5db4;
      uVar13 = 8;
      goto LAB_017b5d6c;
    }
  }
  uVar13 = 4;
LAB_017b5d6c:
  uVar10 = (**(code **)(*param_2 + 0x308))(param_2,*(undefined8 *)(*param_2 + 0x310));
  uVar11 = FUN_017aee0c(param_2,0);
  FUN_017b5dc0(param_1,uVar13,uVar10,uVar11);
  return;
}


