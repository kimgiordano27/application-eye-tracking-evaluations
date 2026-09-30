/*
FUNCTION_NAME: DG.Tweening.DOTweenModuleUI$$DOAnchorPos3DZ
ENTRY_POINT: 00e4f834
PROGRAM: Lovesick-libil2cpp.so
SCORE: 111
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void DG_Tweening_DOTweenModuleUI__DOAnchorPos3DZ(void)

{
  undefined4 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool in_ZR;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x19;
  double dVar12;
  undefined1 auVar13 [16];
  double unaff_d8;
  float fVar14;
  float unaff_s10;
  float fVar15;
  float unaff_s12;
  double unaff_d13;
  double in_stack_00000008;
  
  if (in_ZR) {
    fVar14 = (float)in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      fVar14 = (float)in_stack_00000008 + unaff_s12;
    }
  }
  else {
    fVar14 = 255.0;
  }
  dVar12 = modf(unaff_d8,&stack0x00000008);
  puVar4 = 
  Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_string>,_ICustomMarshaler>_set_Item__
  ;
  if (dVar12 == unaff_d13) {
    fVar15 = (float)in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      fVar15 = (float)in_stack_00000008 + unaff_s12;
    }
  }
  else {
    fVar15 = 255.0;
  }
  dVar12 = modf(unaff_d8,&stack0x00000008);
  if (dVar12 == unaff_d13) {
    fVar2 = (float)in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      fVar2 = (float)in_stack_00000008 + unaff_s12;
    }
  }
  else {
    fVar2 = 255.0;
  }
  auVar13 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(unaff_x19 + 0xa4) = 0x40000000;
  uVar8 = DAT_028aa050;
  *(long *)(unaff_x19 + 0x94) = auVar13._8_8_;
  *(long *)(unaff_x19 + 0x8c) = auVar13._0_8_;
  *(undefined1 *)(unaff_x19 + 0x9d) = 1;
  *(undefined1 *)(unaff_x19 + 0xa8) = 1;
  *(uint *)(unaff_x19 + 0x88) =
       (int)unaff_s10 & 0xffU | ((int)fVar14 & 0xffU) << 8 | ((int)fVar15 & 0xffU) << 0x10 |
       (int)fVar2 << 0x18;
  uVar11 = DAT_028aa058;
  uVar10 = *(undefined8 *)puVar4;
  *(undefined1 *)(unaff_x19 + 0xd8) = 1;
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar8;
  *(undefined4 *)(unaff_x19 + 0xe8) = 0x3f99999a;
  *(undefined4 *)(unaff_x19 + 0xf0) = 0x3f800000;
  *(undefined4 *)(unaff_x19 + 0x104) = 0x3f800000;
  *(undefined4 *)(unaff_x19 + 0x10c) = 0x3f800000;
  *(undefined8 *)(unaff_x19 + 0x110) = uVar11;
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar10;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0x13d4ccccd;
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar10;
  puVar6 = 
  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__;
  puVar5 = Method_TinyJSON_Variant_ToDateTime__;
  puVar4 = OVRPlugin_OVRP_1_79_0_TypeInfo;
                    /* catch() { ... } // from try @ 00e4f9d4 with catch @ 00e4f98c */
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar7 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  uVar8 = DAT_028aa060;
  uVar11 = **(undefined8 **)
             (*(long *)
               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
             0xb8);
  uVar1 = *(undefined4 *)
           (*(undefined8 **)
             (*(long *)
               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
             0xb8) + 1);
  *(undefined2 *)(unaff_x19 + 0x140) = 0x101;
  *(undefined4 *)(unaff_x19 + 0x130) = 0x3f800000;
  *(undefined1 *)(unaff_x19 + 300) = 1;
  *(undefined8 *)(unaff_x19 + 0x138) = uVar8;
  *(undefined1 *)(unaff_x19 + 0x143) = 1;
  *(undefined8 *)(unaff_x19 + 0x120) = uVar11;
  *(undefined4 *)(unaff_x19 + 0x128) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x150) = 2;
  uVar8 = FUN_00da4fb8(*(undefined8 *)puVar6,0);
  *(undefined8 *)(unaff_x19 + 0x2f0) = uVar8;
  uVar8 = FUN_00da4fb8(*(undefined8 *)puVar4,0);
  *(undefined8 *)(unaff_x19 + 0x2f8) = uVar8;
  uVar8 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
  *(undefined8 *)(unaff_x19 + 0x300) = uVar8;
  uVar8 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
  *(undefined8 *)(unaff_x19 + 0x308) = uVar8;
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
  puVar3 = PTR_DAT_033f43d0;
  if (lVar9 != 0) {
    FUN_01320e50(lVar9,*(undefined8 *)PTR_DAT_033f43d0);
    *(long *)(unaff_x19 + 0x310) = lVar9;
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
    puVar5 = StringLiteral_7027;
    if (lVar9 != 0) {
      FUN_01320e50(lVar9,*(undefined8 *)puVar3);
      *(long *)(unaff_x19 + 0x318) = lVar9;
      uVar8 = FUN_00da4fb8(*(undefined8 *)puVar6,0);
      *(undefined8 *)(unaff_x19 + 800) = uVar8;
      uVar8 = FUN_00da4fb8(*(undefined8 *)puVar4,0);
      *(undefined8 *)(unaff_x19 + 0x328) = uVar8;
      uVar8 = FUN_00da4fb8(*(undefined8 *)puVar6,0);
      *(undefined8 *)(unaff_x19 + 0x330) = uVar8;
      uVar8 = FUN_00da4fb8(*(undefined8 *)puVar4,0);
      *(undefined8 *)(unaff_x19 + 0x338) = uVar8;
      *(undefined2 *)(unaff_x19 + 0x344) = 0x101;
      *(undefined1 *)(unaff_x19 + 0x34d) = 1;
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
      puVar4 = Method_System_Reflection_Emit_PropertyBuilder_get_CanWrite__;
      if (lVar9 != 0) {
        FUN_01320e50(lVar9,*(undefined8 *)StringLiteral_4923);
        *(long *)(unaff_x19 + 0x360) = lVar9;
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        puVar5 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
        puVar4 = 
        DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
        ;
        if (lVar9 != 0) {
          FUN_01320e50(lVar9,*(undefined8 *)
                              Method_System_Collections_ArrayList_ReadOnlyArrayList_set_Item__);
          *(long *)(unaff_x19 + 0x368) = lVar9;
          *(undefined4 *)(unaff_x19 + 0x374) = 0x3f800000;
          *(undefined2 *)(unaff_x19 + 0x37c) = 0x101;
          *(undefined1 *)(unaff_x19 + 0x37e) = 1;
          *(undefined4 *)(unaff_x19 + 0x38c) = 0xffffffff;
          *(undefined8 *)(unaff_x19 + 0x3a8) = *(undefined8 *)puVar5;
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
          if (lVar9 != 0) {
            FUN_00e5ef6c(lVar9,0);
            *(long *)(unaff_x19 + 0x3b0) = lVar9;
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774d76 = '\x01';
            }
            lVar9 = *(long *)puVar7;
            uVar1 = *(undefined4 *)(*(undefined8 **)(lVar9 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x440) = **(undefined8 **)(lVar9 + 0xb8);
            *(undefined4 *)(unaff_x19 + 0x448) = uVar1;
            uVar1 = *(undefined4 *)(*(undefined8 **)(lVar9 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x508) = **(undefined8 **)(lVar9 + 0xb8);
            *(undefined4 *)(unaff_x19 + 0x510) = uVar1;
            uVar1 = *(undefined4 *)(*(undefined8 **)(lVar9 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x514) = **(undefined8 **)(lVar9 + 0xb8);
            *(undefined4 *)(unaff_x19 + 0x51c) = uVar1;
            uVar1 = *(undefined4 *)(*(undefined8 **)(lVar9 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x538) = **(undefined8 **)(lVar9 + 0xb8);
            *(undefined4 *)(unaff_x19 + 0x540) = uVar1;
            uVar1 = *(undefined4 *)(*(undefined8 **)(lVar9 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x550) = **(undefined8 **)(lVar9 + 0xb8);
            *(undefined4 *)(unaff_x19 + 0x558) = uVar1;
            uVar8 = *(undefined8 *)(*(undefined4 **)(lVar9 + 0xb8) + 1);
            *(undefined4 *)(unaff_x19 + 0x55c) = **(undefined4 **)(lVar9 + 0xb8);
            *(undefined8 *)(unaff_x19 + 0x560) = uVar8;
            uVar8 = FUN_00da4fb8(*(undefined8 *)puVar4,0);
            *(undefined8 *)(unaff_x19 + 0x578) = uVar8;
            *(undefined8 *)(unaff_x19 + 0x580) = 0xffffffffffffffff;
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774d76 = '\x01';
            }
            lVar9 = *(long *)puVar7;
            uVar1 = *(undefined4 *)(*(undefined8 **)(lVar9 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x598) = **(undefined8 **)(lVar9 + 0xb8);
            *(undefined4 *)(unaff_x19 + 0x5a0) = uVar1;
            uVar1 = *(undefined4 *)(*(undefined8 **)(lVar9 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x5a8) = **(undefined8 **)(lVar9 + 0xb8);
            *(undefined4 *)(unaff_x19 + 0x5b0) = uVar1;
            uVar1 = *(undefined4 *)(*(undefined8 **)(lVar9 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x5b4) = **(undefined8 **)(lVar9 + 0xb8);
            *(undefined4 *)(unaff_x19 + 0x5bc) = uVar1;
            uVar1 = *(undefined4 *)(*(undefined8 **)(lVar9 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x5c0) = **(undefined8 **)(lVar9 + 0xb8);
            *(undefined4 *)(unaff_x19 + 0x5c8) = uVar1;
            uVar1 = *(undefined4 *)(*(undefined8 **)(lVar9 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x5cc) = **(undefined8 **)(lVar9 + 0xb8);
            *(undefined4 *)(unaff_x19 + 0x5d4) = uVar1;
            uVar8 = *(undefined8 *)(*(undefined4 **)(lVar9 + 0xb8) + 1);
            *(undefined4 *)(unaff_x19 + 0x5e8) = **(undefined4 **)(lVar9 + 0xb8);
            *(undefined8 *)(unaff_x19 + 0x5ec) = uVar8;
            uVar1 = *(undefined4 *)(*(undefined8 **)(lVar9 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x5f4) = **(undefined8 **)(lVar9 + 0xb8);
            *(undefined4 *)(unaff_x19 + 0x5fc) = uVar1;
            uVar1 = *(undefined4 *)(*(undefined8 **)(lVar9 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x600) = **(undefined8 **)(lVar9 + 0xb8);
            *(undefined4 *)(unaff_x19 + 0x608) = uVar1;
            uVar1 = *(undefined4 *)(*(undefined8 **)(lVar9 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x60c) = **(undefined8 **)(lVar9 + 0xb8);
            *(undefined4 *)(unaff_x19 + 0x614) = uVar1;
            uVar1 = *(undefined4 *)(*(undefined8 **)(lVar9 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x618) = **(undefined8 **)(lVar9 + 0xb8);
            *(undefined4 *)(unaff_x19 + 0x620) = uVar1;
            uVar1 = *(undefined4 *)(*(undefined8 **)(lVar9 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x624) = **(undefined8 **)(lVar9 + 0xb8);
            *(undefined4 *)(unaff_x19 + 0x62c) = uVar1;
            uVar1 = *(undefined4 *)(*(undefined8 **)(lVar9 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x630) = **(undefined8 **)(lVar9 + 0xb8);
            *(undefined4 *)(unaff_x19 + 0x638) = uVar1;
            puVar4 = 
            Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__ctor__
            ;
            uVar8 = FUN_00da4fb8(*(undefined8 *)puVar6,0);
            *(undefined8 *)(unaff_x19 + 0x658) = uVar8;
            uVar8 = FUN_00da4fb8(*(undefined8 *)puVar6,0);
            *(undefined8 *)(unaff_x19 + 0x660) = uVar8;
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774d76 = '\x01';
            }
            uVar1 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x6e4) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
            *(undefined4 *)(unaff_x19 + 0x6ec) = uVar1;
            lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            puVar4 = PTR_DAT_033f55b0;
            if (lVar9 != 0) {
              FUN_01320e50(lVar9,*(undefined8 *)Method_UnityEngine_Component_GetComponents<Mask>__);
              *(long *)(unaff_x19 + 0x6f8) = lVar9;
              uVar8 = FUN_00da4fb8(*(undefined8 *)puVar4,1);
              *(undefined8 *)(unaff_x19 + 0x700) = uVar8;
              thunk_FUN_0268a01c();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


