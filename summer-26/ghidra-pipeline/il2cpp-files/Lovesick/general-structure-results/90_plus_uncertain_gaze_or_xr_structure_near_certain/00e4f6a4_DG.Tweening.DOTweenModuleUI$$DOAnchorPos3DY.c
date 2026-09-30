/*
FUNCTION_NAME: DG.Tweening.DOTweenModuleUI$$DOAnchorPos3DY
ENTRY_POINT: 00e4f6a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 130
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;functionality_data_collection_or_telemetry_hits_4
*/


void DG_Tweening_DOTweenModuleUI__DOAnchorPos3DY(void)

{
  undefined4 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  double in_stack_00000008;
  
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__ctor__
                    );
  thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlXml_CreateSqlXmlReader__);
  thunk_FUN_00d48444(StringLiteral_7027);
  thunk_FUN_00d48444(Method_TinyJSON_Variant_ToDateTime__);
  thunk_FUN_00d48444(PTR_DAT_033f55b0);
  thunk_FUN_00d48444(
                    DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                    );
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__);
  thunk_FUN_00d48444(
                    Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                    );
  thunk_FUN_00d48444(
                    Method_UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_string>,_ICustomMarshaler>_set_Item__
                    );
  thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xd73) = 1;
  *(undefined4 *)(unaff_x19 + 0x18) = 0x1010101;
  lVar8 = thunk_FUN_00d62348(*unaff_x20);
  puVar4 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
  if (lVar8 != 0) {
    FUN_01320e50(lVar8,*(undefined8 *)StringLiteral_6905);
    *(long *)(unaff_x19 + 0x48) = lVar8;
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    puVar4 = StringLiteral_5473;
    if (lVar8 != 0) {
      FUN_01320e50(lVar8,*(undefined8 *)PTR_DAT_033f6e48);
      *(long *)(unaff_x19 + 0x50) = lVar8;
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      puVar5 = Method_Sirenix_Serialization_Serializer<bool>__ctor__;
      if (lVar8 != 0) {
        FUN_01320e50(lVar8,*(undefined8 *)Method_Sirenix_Serialization_Serializer<bool>__ctor__);
        *(long *)(unaff_x19 + 0x58) = lVar8;
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        puVar4 = 
        Method_UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_System_Collections_IEnumerator_Reset__
        ;
        if (lVar8 != 0) {
          FUN_01320e50(lVar8,*(undefined8 *)puVar5);
          uVar9 = *(undefined8 *)puVar4;
          *(long *)(unaff_x19 + 0x60) = lVar8;
          *(undefined8 *)(unaff_x19 + 0x68) = uVar9;
          dVar13 = DAT_028aa048;
          dVar12 = modf(DAT_028aa048,&stack0x00000008);
          if (dVar12 == 0.5) {
            fVar16 = (float)in_stack_00000008;
            if (((long)in_stack_00000008 & 1U) != 0) {
              fVar16 = (float)in_stack_00000008 + 1.0;
            }
          }
          else {
            fVar16 = 255.0;
          }
          dVar12 = modf(dVar13,&stack0x00000008);
          if (dVar12 == 0.5) {
            fVar15 = (float)in_stack_00000008;
            if (((long)in_stack_00000008 & 1U) != 0) {
              fVar15 = (float)in_stack_00000008 + 1.0;
            }
          }
          else {
            fVar15 = 255.0;
          }
          dVar12 = modf(dVar13,&stack0x00000008);
          puVar4 = 
          Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_string>,_ICustomMarshaler>_set_Item__
          ;
          if (dVar12 == 0.5) {
            fVar17 = (float)in_stack_00000008;
            if (((long)in_stack_00000008 & 1U) != 0) {
              fVar17 = (float)in_stack_00000008 + 1.0;
            }
          }
          else {
            fVar17 = 255.0;
          }
          dVar13 = modf(dVar13,&stack0x00000008);
          if (dVar13 == 0.5) {
            fVar2 = (float)in_stack_00000008;
            if (((long)in_stack_00000008 & 1U) != 0) {
              fVar2 = (float)in_stack_00000008 + 1.0;
            }
          }
          else {
            fVar2 = 255.0;
          }
          auVar14 = NEON_fmov(0x3f800000,4);
          *(undefined4 *)(unaff_x19 + 0xa4) = 0x40000000;
          uVar9 = DAT_028aa050;
          *(long *)(unaff_x19 + 0x94) = auVar14._8_8_;
          *(long *)(unaff_x19 + 0x8c) = auVar14._0_8_;
          *(undefined1 *)(unaff_x19 + 0x9d) = 1;
          *(undefined1 *)(unaff_x19 + 0xa8) = 1;
          *(uint *)(unaff_x19 + 0x88) =
               (int)fVar16 & 0xffU | ((int)fVar15 & 0xffU) << 8 | ((int)fVar17 & 0xffU) << 0x10 |
               (int)fVar2 << 0x18;
          uVar11 = DAT_028aa058;
          uVar10 = *(undefined8 *)puVar4;
          *(undefined1 *)(unaff_x19 + 0xd8) = 1;
          *(undefined8 *)(unaff_x19 + 0xe0) = uVar9;
          *(undefined4 *)(unaff_x19 + 0xe8) = 0x3f99999a;
          *(undefined4 *)(unaff_x19 + 0xf0) = 0x3f800000;
          *(undefined4 *)(unaff_x19 + 0x104) = 0x3f800000;
          *(undefined4 *)(unaff_x19 + 0x10c) = 0x3f800000;
          *(undefined8 *)(unaff_x19 + 0x110) = uVar11;
          *(undefined8 *)(unaff_x19 + 0xb0) = uVar10;
          *(undefined8 *)(unaff_x19 + 0xb8) = 0x13d4ccccd;
          *(undefined8 *)(unaff_x19 + 0xc0) = uVar10;
          puVar6 = 
          Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
          ;
          puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__;
          puVar5 = Method_TinyJSON_Variant_ToDateTime__;
          puVar4 = OVRPlugin_OVRP_1_79_0_TypeInfo;
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          puVar7 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
          uVar9 = DAT_028aa060;
          uVar11 = **(undefined8 **)
                     (*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8);
          uVar1 = *(undefined4 *)
                   (*(undefined8 **)
                     (*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8) + 1);
          *(undefined2 *)(unaff_x19 + 0x140) = 0x101;
          *(undefined4 *)(unaff_x19 + 0x130) = 0x3f800000;
          *(undefined1 *)(unaff_x19 + 300) = 1;
          *(undefined8 *)(unaff_x19 + 0x138) = uVar9;
          *(undefined1 *)(unaff_x19 + 0x143) = 1;
          *(undefined8 *)(unaff_x19 + 0x120) = uVar11;
          *(undefined4 *)(unaff_x19 + 0x128) = uVar1;
          *(undefined4 *)(unaff_x19 + 0x150) = 2;
          uVar9 = FUN_00da4fb8(*(undefined8 *)puVar6,0);
          *(undefined8 *)(unaff_x19 + 0x2f0) = uVar9;
          uVar9 = FUN_00da4fb8(*(undefined8 *)puVar4,0);
          *(undefined8 *)(unaff_x19 + 0x2f8) = uVar9;
          uVar9 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
          *(undefined8 *)(unaff_x19 + 0x300) = uVar9;
          uVar9 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
          *(undefined8 *)(unaff_x19 + 0x308) = uVar9;
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
          puVar3 = PTR_DAT_033f43d0;
          if (lVar8 != 0) {
            FUN_01320e50(lVar8,*(undefined8 *)PTR_DAT_033f43d0);
            *(long *)(unaff_x19 + 0x310) = lVar8;
            lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
            puVar5 = StringLiteral_7027;
            if (lVar8 != 0) {
              FUN_01320e50(lVar8,*(undefined8 *)puVar3);
              *(long *)(unaff_x19 + 0x318) = lVar8;
              uVar9 = FUN_00da4fb8(*(undefined8 *)puVar6,0);
              *(undefined8 *)(unaff_x19 + 800) = uVar9;
              uVar9 = FUN_00da4fb8(*(undefined8 *)puVar4,0);
              *(undefined8 *)(unaff_x19 + 0x328) = uVar9;
              uVar9 = FUN_00da4fb8(*(undefined8 *)puVar6,0);
              *(undefined8 *)(unaff_x19 + 0x330) = uVar9;
              uVar9 = FUN_00da4fb8(*(undefined8 *)puVar4,0);
              *(undefined8 *)(unaff_x19 + 0x338) = uVar9;
              *(undefined2 *)(unaff_x19 + 0x344) = 0x101;
              *(undefined1 *)(unaff_x19 + 0x34d) = 1;
              lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
              puVar4 = Method_System_Reflection_Emit_PropertyBuilder_get_CanWrite__;
              if (lVar8 != 0) {
                FUN_01320e50(lVar8,*(undefined8 *)StringLiteral_4923);
                *(long *)(unaff_x19 + 0x360) = lVar8;
                lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                puVar5 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
                puVar4 = 
                DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                ;
                if (lVar8 != 0) {
                  FUN_01320e50(lVar8,*(undefined8 *)
                                      Method_System_Collections_ArrayList_ReadOnlyArrayList_set_Item__
                              );
                  *(long *)(unaff_x19 + 0x368) = lVar8;
                  *(undefined4 *)(unaff_x19 + 0x374) = 0x3f800000;
                  *(undefined2 *)(unaff_x19 + 0x37c) = 0x101;
                  *(undefined1 *)(unaff_x19 + 0x37e) = 1;
                  *(undefined4 *)(unaff_x19 + 0x38c) = 0xffffffff;
                  *(undefined8 *)(unaff_x19 + 0x3a8) = *(undefined8 *)puVar5;
                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
                  if (lVar8 != 0) {
                    FUN_00e5ef6c(lVar8,0);
                    *(long *)(unaff_x19 + 0x3b0) = lVar8;
                    if (DAT_03774d76 == '\0') {
                      thunk_FUN_00d48444(
                                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                        );
                      DAT_03774d76 = '\x01';
                    }
                    lVar8 = *(long *)puVar7;
                    uVar1 = *(undefined4 *)(*(undefined8 **)(lVar8 + 0xb8) + 1);
                    *(undefined8 *)(unaff_x19 + 0x440) = **(undefined8 **)(lVar8 + 0xb8);
                    *(undefined4 *)(unaff_x19 + 0x448) = uVar1;
                    uVar1 = *(undefined4 *)(*(undefined8 **)(lVar8 + 0xb8) + 1);
                    *(undefined8 *)(unaff_x19 + 0x508) = **(undefined8 **)(lVar8 + 0xb8);
                    *(undefined4 *)(unaff_x19 + 0x510) = uVar1;
                    uVar1 = *(undefined4 *)(*(undefined8 **)(lVar8 + 0xb8) + 1);
                    *(undefined8 *)(unaff_x19 + 0x514) = **(undefined8 **)(lVar8 + 0xb8);
                    *(undefined4 *)(unaff_x19 + 0x51c) = uVar1;
                    uVar1 = *(undefined4 *)(*(undefined8 **)(lVar8 + 0xb8) + 1);
                    *(undefined8 *)(unaff_x19 + 0x538) = **(undefined8 **)(lVar8 + 0xb8);
                    *(undefined4 *)(unaff_x19 + 0x540) = uVar1;
                    uVar1 = *(undefined4 *)(*(undefined8 **)(lVar8 + 0xb8) + 1);
                    *(undefined8 *)(unaff_x19 + 0x550) = **(undefined8 **)(lVar8 + 0xb8);
                    *(undefined4 *)(unaff_x19 + 0x558) = uVar1;
                    uVar9 = *(undefined8 *)(*(undefined4 **)(lVar8 + 0xb8) + 1);
                    *(undefined4 *)(unaff_x19 + 0x55c) = **(undefined4 **)(lVar8 + 0xb8);
                    *(undefined8 *)(unaff_x19 + 0x560) = uVar9;
                    uVar9 = FUN_00da4fb8(*(undefined8 *)puVar4,0);
                    *(undefined8 *)(unaff_x19 + 0x578) = uVar9;
                    *(undefined8 *)(unaff_x19 + 0x580) = 0xffffffffffffffff;
                    if (DAT_03774d76 == '\0') {
                      thunk_FUN_00d48444(
                                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                        );
                      DAT_03774d76 = '\x01';
                    }
                    lVar8 = *(long *)puVar7;
                    uVar1 = *(undefined4 *)(*(undefined8 **)(lVar8 + 0xb8) + 1);
                    *(undefined8 *)(unaff_x19 + 0x598) = **(undefined8 **)(lVar8 + 0xb8);
                    *(undefined4 *)(unaff_x19 + 0x5a0) = uVar1;
                    uVar1 = *(undefined4 *)(*(undefined8 **)(lVar8 + 0xb8) + 1);
                    *(undefined8 *)(unaff_x19 + 0x5a8) = **(undefined8 **)(lVar8 + 0xb8);
                    *(undefined4 *)(unaff_x19 + 0x5b0) = uVar1;
                    uVar1 = *(undefined4 *)(*(undefined8 **)(lVar8 + 0xb8) + 1);
                    *(undefined8 *)(unaff_x19 + 0x5b4) = **(undefined8 **)(lVar8 + 0xb8);
                    *(undefined4 *)(unaff_x19 + 0x5bc) = uVar1;
                    uVar1 = *(undefined4 *)(*(undefined8 **)(lVar8 + 0xb8) + 1);
                    *(undefined8 *)(unaff_x19 + 0x5c0) = **(undefined8 **)(lVar8 + 0xb8);
                    *(undefined4 *)(unaff_x19 + 0x5c8) = uVar1;
                    uVar1 = *(undefined4 *)(*(undefined8 **)(lVar8 + 0xb8) + 1);
                    *(undefined8 *)(unaff_x19 + 0x5cc) = **(undefined8 **)(lVar8 + 0xb8);
                    *(undefined4 *)(unaff_x19 + 0x5d4) = uVar1;
                    uVar9 = *(undefined8 *)(*(undefined4 **)(lVar8 + 0xb8) + 1);
                    *(undefined4 *)(unaff_x19 + 0x5e8) = **(undefined4 **)(lVar8 + 0xb8);
                    *(undefined8 *)(unaff_x19 + 0x5ec) = uVar9;
                    uVar1 = *(undefined4 *)(*(undefined8 **)(lVar8 + 0xb8) + 1);
                    *(undefined8 *)(unaff_x19 + 0x5f4) = **(undefined8 **)(lVar8 + 0xb8);
                    *(undefined4 *)(unaff_x19 + 0x5fc) = uVar1;
                    uVar1 = *(undefined4 *)(*(undefined8 **)(lVar8 + 0xb8) + 1);
                    *(undefined8 *)(unaff_x19 + 0x600) = **(undefined8 **)(lVar8 + 0xb8);
                    *(undefined4 *)(unaff_x19 + 0x608) = uVar1;
                    uVar1 = *(undefined4 *)(*(undefined8 **)(lVar8 + 0xb8) + 1);
                    *(undefined8 *)(unaff_x19 + 0x60c) = **(undefined8 **)(lVar8 + 0xb8);
                    *(undefined4 *)(unaff_x19 + 0x614) = uVar1;
                    uVar1 = *(undefined4 *)(*(undefined8 **)(lVar8 + 0xb8) + 1);
                    *(undefined8 *)(unaff_x19 + 0x618) = **(undefined8 **)(lVar8 + 0xb8);
                    *(undefined4 *)(unaff_x19 + 0x620) = uVar1;
                    uVar1 = *(undefined4 *)(*(undefined8 **)(lVar8 + 0xb8) + 1);
                    *(undefined8 *)(unaff_x19 + 0x624) = **(undefined8 **)(lVar8 + 0xb8);
                    *(undefined4 *)(unaff_x19 + 0x62c) = uVar1;
                    uVar1 = *(undefined4 *)(*(undefined8 **)(lVar8 + 0xb8) + 1);
                    *(undefined8 *)(unaff_x19 + 0x630) = **(undefined8 **)(lVar8 + 0xb8);
                    *(undefined4 *)(unaff_x19 + 0x638) = uVar1;
                    puVar4 = 
                    Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__ctor__
                    ;
                    uVar9 = FUN_00da4fb8(*(undefined8 *)puVar6,0);
                    *(undefined8 *)(unaff_x19 + 0x658) = uVar9;
                    uVar9 = FUN_00da4fb8(*(undefined8 *)puVar6,0);
                    *(undefined8 *)(unaff_x19 + 0x660) = uVar9;
                    if (DAT_03774d76 == '\0') {
                      thunk_FUN_00d48444(
                                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                        );
                      DAT_03774d76 = '\x01';
                    }
                    uVar1 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
                    *(undefined8 *)(unaff_x19 + 0x6e4) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
                    *(undefined4 *)(unaff_x19 + 0x6ec) = uVar1;
                    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                    puVar4 = PTR_DAT_033f55b0;
                    if (lVar8 != 0) {
                      FUN_01320e50(lVar8,*(undefined8 *)
                                          Method_UnityEngine_Component_GetComponents<Mask>__);
                      *(long *)(unaff_x19 + 0x6f8) = lVar8;
                      uVar9 = FUN_00da4fb8(*(undefined8 *)puVar4,1);
                      *(undefined8 *)(unaff_x19 + 0x700) = uVar9;
                      thunk_FUN_0268a01c();
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


