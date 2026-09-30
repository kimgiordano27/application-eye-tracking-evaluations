/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$OnDisable
ENTRY_POINT: 0142b810
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_16;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper__OnDisable
               (undefined8 param_1,undefined8 *param_2,uint param_3,ulong param_4,int param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
               undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
               undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
               undefined8 param_22,undefined8 param_23,undefined8 param_24,undefined8 param_25,
               undefined8 param_26,undefined8 param_27,undefined8 param_28,undefined8 param_29,
               undefined8 param_30,undefined8 param_31,undefined8 param_32,undefined8 param_33,
               undefined8 param_34,undefined8 param_35)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  long unaff_x23;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  
  uStack0000000000000100 = in_stack_000001b0;
  uStack0000000000000108 = in_stack_000001b8;
  uStack00000000000000f0 = in_stack_000001c0;
  uStack00000000000000f8 = in_stack_000001c8;
  uStack00000000000000d8 = param_1;
  uStack0000000000000110 = param_8;
  uStack0000000000000118 = param_9;
  uStack0000000000000120 = param_6;
  uStack0000000000000128 = param_7;
  if ((*(byte *)(unaff_x23 + 0x9b2) & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRNativeList<OVRAnchor_FilterUnion>_Dispose__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f5018);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtd_n_u64_f64__);
    thunk_FUN_00d48444(Method_OVRTaskBuilder<bool>_Create__);
    *(undefined1 *)(unaff_x23 + 0x9b2) = 1;
  }
  puVar2 = PTR_DAT_033f5018;
  param_33 = 0;
  param_32 = 0;
  param_35 = 0;
  param_34 = 0;
  param_29 = 0;
  param_28 = 0;
  param_31 = 0;
  param_30 = 0;
  param_25 = 0;
  param_24 = 0;
  param_27 = 0;
  param_26 = 0;
  param_21 = 0;
  param_20 = 0;
  param_23 = 0;
  param_22 = 0;
  FUN_02692f88(&param_12,0);
  param_29 = CONCAT44(param_13._4_4_,(float)param_13);
  param_28 = CONCAT44(param_12._4_4_,(float)param_12);
  if (((param_3 & 1) != 0) || ((param_4 & 1) != 0)) {
    param_33 = param_2[5];
    param_32 = param_2[4];
    param_35 = param_2[7];
    param_34 = param_2[6];
    param_29 = param_2[1];
    param_28 = *param_2;
    param_31 = param_2[3];
    param_30 = param_2[2];
    FUN_026924d8(0,&param_28,0xe,0);
    FUN_026924d8(0,&param_28,0xd,0);
    FUN_026924d8(0,&param_28,0xc,0);
    FUN_02693a94(&param_12,&param_28,0);
    param_21 = CONCAT44(param_13._4_4_,(float)param_13);
    param_20 = CONCAT44(param_12._4_4_,(float)param_12);
    param_23 = param_15;
    param_22 = param_14;
    param_25 = param_17;
    param_24 = param_16;
    param_27 = param_19;
    param_26 = param_18;
    FUN_02693bcc(&param_12,&param_20,0);
    param_29 = CONCAT44(param_13._4_4_,(float)param_13);
    param_28 = CONCAT44(param_12._4_4_,(float)param_12);
  }
  param_30 = param_14;
  param_31 = param_15;
  param_32 = param_16;
  param_33 = param_17;
  param_34 = param_18;
  param_35 = param_19;
  iVar6 = FUN_01344a5c(&stack0x00000120,*(undefined8 *)puVar2);
  puVar5 = Method_OVRTaskBuilder<bool>_Create__;
  puVar3 = Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
  ;
  fVar1 = DAT_028aa038;
  if (0 < iVar6) {
    iVar6 = 0;
    param_11._4_4_ = param_3;
    do {
      iVar7 = param_5 + iVar6;
      DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                (&stack0x00000120,iVar6,&param_12,*(undefined8 *)puVar3);
      param_12._0_4_ = (float)FUN_02692df0((float)param_12,param_2,0);
      FUN_013444d4(&stack0x000000f0,iVar7,&param_12,*(undefined8 *)puVar5);
      if ((param_3 & 1) != 0) {
        DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                  (&stack0x00000110,iVar6,&param_12,*(undefined8 *)puVar3);
        fVar10 = param_12._4_4_;
        fVar11 = (float)param_13;
        fVar9 = (float)FUN_02692df0((float)param_12,&param_28,0);
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_0377518c = '\x01';
        }
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar12 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10);
        if (fVar12 <= fVar1) {
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          pfVar8 = *(float **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8);
          param_12._0_4_ = *pfVar8;
          param_12._4_4_ = pfVar8[1];
          param_13._0_4_ = pfVar8[2];
        }
        else {
          param_12._0_4_ = fVar9 / fVar12;
          param_12._4_4_ = fVar10 / fVar12;
          param_13._0_4_ = fVar11 / fVar12;
        }
        FUN_013444d4(&stack0x000000e0,iVar7,&param_12,*(undefined8 *)puVar5);
      }
      puVar4 = Method_OVRNativeList<OVRAnchor_FilterUnion>_Dispose__;
      if ((param_4 & 1) != 0) {
        DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                  (&stack0x00000100,iVar6,&param_12,
                   *(undefined8 *)Method_OVRNativeList<OVRAnchor_FilterUnion>_Dispose__);
        DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                  (&stack0x00000100,iVar6,&param_12,*(undefined8 *)puVar4);
        fVar10 = param_12._4_4_;
        fVar11 = (float)param_13;
        fVar9 = (float)FUN_02692df0((float)param_12,&param_28,0);
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_0377518c = '\x01';
        }
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar12 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10);
        if (fVar12 <= fVar1) {
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          pfVar8 = *(float **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8);
          param_12._0_4_ = *pfVar8;
          param_12._4_4_ = pfVar8[1];
          param_13._0_4_ = pfVar8[2];
        }
        else {
          param_12._0_4_ = fVar9 / fVar12;
          param_12._4_4_ = fVar10 / fVar12;
          param_13._0_4_ = fVar11 / fVar12;
        }
        FUN_013444d4(&stack0x000000d0,iVar7,&param_12,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtd_n_u64_f64__);
        param_3 = param_11._4_4_;
      }
      iVar6 = iVar6 + 1;
      iVar7 = FUN_01344a5c(&stack0x00000120,*(undefined8 *)puVar2);
    } while (iVar6 < iVar7);
  }
  return;
}


