/*
FUNCTION_NAME: FUN_017b5f4c
ENTRY_POINT: 017b5f4c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_017b5f4c(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((DAT_03778ff6 & 1) == 0) {
    thunk_FUN_00d48444(Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(Method_RCG_Lovesick_InteractiveObjects_GrabbableObject_OnEnable__);
    thunk_FUN_00d48444(StringLiteral_3326);
    thunk_FUN_00d48444(Method_Oculus_Interaction_BestSelectInteractorGroup_<>c_<_cctor>b__34_1__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_System_Data_ForeignKeyConstraint_set_DeleteRule__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass20_0_<DOAnchorMax>b__1__)
    ;
    thunk_FUN_00d48444(
                      Method_System_Collections_Concurrent_ConcurrentDictionary<string,_VoiceServiceRequest>_get_Keys__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ecd38);
    thunk_FUN_00d48444(PTR_DAT_033eecd8);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass1_0_<CreateLightingFeatures>b__0__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_79__);
    thunk_FUN_00d48444(StringLiteral_2699);
    thunk_FUN_00d48444(StringLiteral_8407);
    DAT_03778ff6 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar13 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar12 = thunk_FUN_00d48444(
                               DigitalOpus_MB_Core_MB3_TextureCombinerPackerMeshBakerHorizontalVertical_TypeInfo
                               );
    FUN_016ec5b8(uVar13,uVar12,0);
    uVar12 = thunk_FUN_00d48444(StringLiteral_12417);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar13,uVar12);
  }
  iVar9 = FUN_016844dc(param_2,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_79__,0);
  *(int *)(param_1 + 0x48) = iVar9;
  puVar8 = StringLiteral_2699;
  puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
  puVar6 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar5 = Method_System_Collections_Generic_List<PropertyInfo>_get_Item__;
  puVar4 = 
  Method_System_Collections_Concurrent_ConcurrentDictionary<string,_VoiceServiceRequest>_get_Keys__;
  puVar3 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
  puVar2 = PTR_DAT_033ecd38;
  if (iVar9 == 3) {
    return;
  }
  if (iVar9 == 8) {
    uVar13 = *(undefined8 *)
              Method_Oculus_Interaction_BestSelectInteractorGroup_<>c_<_cctor>b__34_1__;
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_01780344(uVar13,0);
    uVar13 = FUN_01682720(param_2,*(undefined8 *)puVar8,uVar13,0);
    uVar12 = thunk_FUN_00d6225c(uVar13,*(undefined8 *)puVar5);
    *(undefined8 *)(param_1 + 0x10) = uVar12;
    thunk_FUN_00d6225c(uVar13,*(undefined8 *)puVar5);
    uVar13 = FUN_01780344(*(undefined8 *)puVar3,0);
    uVar13 = FUN_01682720(param_2,*(undefined8 *)puVar4,uVar13,0);
    uVar12 = thunk_FUN_00d6225c(uVar13,*(undefined8 *)puVar7);
    *(undefined8 *)(param_1 + 0x18) = uVar12;
    thunk_FUN_00d6225c(uVar13,*(undefined8 *)puVar7);
LAB_017b61bc:
    puVar2 = PTR_DAT_033eecd8;
    uVar13 = FUN_01684938(param_2,*(undefined8 *)StringLiteral_8407,0);
    *(undefined8 *)(param_1 + 0x38) = uVar13;
    uVar13 = FUN_01684938(param_2,*(undefined8 *)puVar2,0);
    *(undefined8 *)(param_1 + 0x40) = uVar13;
    return;
  }
  if (iVar9 != 7) goto LAB_017b61bc;
  uVar13 = *(undefined8 *)Method_RCG_Lovesick_InteractiveObjects_GrabbableObject_OnEnable__;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar8 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass1_0_<CreateLightingFeatures>b__0__
  ;
  puVar5 = Method_System_Data_ForeignKeyConstraint_set_DeleteRule__;
  uVar13 = FUN_01780344(uVar13,0);
  plVar11 = (long *)FUN_01682720(param_2,*(undefined8 *)puVar2,uVar13,0);
  if (plVar11 == (long *)0x0) {
LAB_017b6110:
    plVar11 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)StringLiteral_3326 + 300);
    if (*(byte *)(*plVar11 + 300) < bVar1) goto LAB_017b6110;
    if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_3326)
    {
      plVar11 = (long *)0x0;
    }
  }
  *(long **)(param_1 + 0x30) = plVar11;
  puVar2 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass20_0_<DOAnchorMax>b__1__;
  uVar13 = FUN_01780344(*(undefined8 *)puVar5,0);
  plVar11 = (long *)FUN_01682720(param_2,*(undefined8 *)puVar8,uVar13,0);
  if (plVar11 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar6 + 300);
    if (bVar1 <= *(byte *)(*plVar11 + 300)) {
      if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6) {
        plVar11 = (long *)0x0;
      }
      goto LAB_017b6288;
    }
  }
  plVar11 = (long *)0x0;
LAB_017b6288:
  *(long **)(param_1 + 0x28) = plVar11;
  uVar10 = FUN_016844dc(param_2,*(undefined8 *)puVar2,0);
  *(undefined4 *)(param_1 + 0x20) = uVar10;
  uVar13 = FUN_01780344(*(undefined8 *)puVar3,0);
  uVar13 = FUN_01682720(param_2,*(undefined8 *)puVar4,uVar13,0);
  uVar12 = thunk_FUN_00d6225c(uVar13,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x18) = uVar12;
  thunk_FUN_00d6225c(uVar13,*(undefined8 *)puVar7);
  return;
}


