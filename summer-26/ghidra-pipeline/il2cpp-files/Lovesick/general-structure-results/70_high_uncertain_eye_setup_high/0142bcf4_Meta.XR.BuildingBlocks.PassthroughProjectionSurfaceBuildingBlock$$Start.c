/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.PassthroughProjectionSurfaceBuildingBlock$$Start
ENTRY_POINT: 0142bcf4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_PassthroughProjectionSurfaceBuildingBlock__Start(void)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int unaff_w19;
  ulong unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s12;
  float unaff_s13;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float in_stack_00000020;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float in_stack_00000098;
  float in_stack_00000140;
  float in_stack_00000148;
  
  thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
  thunk_FUN_00d48444(Method_OVRNativeList<OVRAnchor_FilterUnion>_Dispose__);
  thunk_FUN_00d48444(
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
                    );
  thunk_FUN_00d48444(PTR_DAT_033f5018);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtd_n_u64_f64__);
  thunk_FUN_00d48444(Method_OVRTaskBuilder<bool>_Create__);
  *(undefined1 *)(unaff_x22 + 0x9b4) = 1;
  if (DAT_03774e1c == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774e1c = '\x01';
  }
  puVar2 = PTR_DAT_033f5018;
  fStack000000000000002c = in_stack_00000140;
  fStack0000000000000024 = in_stack_00000148;
  if (((unaff_x21 & 1) == 0) && ((unaff_x20 & 1) == 0)) {
    fStack0000000000000014 =
         *(float *)(*(long *)(*(long *)
                               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                             + 0xb8) + 0xc);
    fStack000000000000000c =
         *(float *)(*(long *)(*(long *)
                               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                             + 0xb8) + 0x14);
  }
  else {
    fStack0000000000000014 = 0.0;
    if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= in_stack_00000140) {
      fStack0000000000000014 = 1.0 / in_stack_00000140;
    }
    fStack000000000000000c = 0.0;
    if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= in_stack_00000148) {
      fStack000000000000000c = 1.0 / in_stack_00000148;
    }
  }
  iVar7 = FUN_01344a5c(&stack0x00000080,*(undefined8 *)PTR_DAT_033f5018);
  puVar6 = Method_OVRTaskBuilder<bool>_Create__;
  puVar4 = Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
  ;
  puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
  fVar1 = DAT_028aa038;
  if (0 < iVar7) {
    iVar7 = 0;
    do {
      iVar8 = unaff_w19 + iVar7;
      DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                (&stack0x00000080,iVar7,&stack0x00000090,*(undefined8 *)puVar4);
      fVar11 = unaff_s13;
      fVar12 = unaff_s12;
      fStack0000000000000090 = (float)FUN_02699088(0);
      fStack0000000000000090 = fStack0000000000000018 + fStack0000000000000090;
      fStack0000000000000094 = fStack000000000000001c + fVar11;
      in_stack_00000098 = in_stack_00000020 + fVar12;
      FUN_013444d4(&stack0x00000050,iVar8,&stack0x00000090,*(undefined8 *)puVar6);
      if ((unaff_x21 & 1) != 0) {
        DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                  (&stack0x00000070,iVar7,&stack0x00000090,*(undefined8 *)puVar4);
        fVar11 = unaff_s13;
        fVar12 = unaff_s12;
        fVar10 = (float)FUN_02699088(0);
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(puVar3);
          DAT_0377518c = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar13 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
        if (fVar13 <= fVar1) {
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          pfVar9 = *(float **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8);
          fStack0000000000000090 = *pfVar9;
          fStack0000000000000094 = pfVar9[1];
          in_stack_00000098 = pfVar9[2];
        }
        else {
          fStack0000000000000090 = fVar10 / fVar13;
          fStack0000000000000094 = fVar11 / fVar13;
          in_stack_00000098 = fVar12 / fVar13;
        }
        FUN_013444d4(&stack0x00000040,iVar8,&stack0x00000090,*(undefined8 *)puVar6);
      }
      puVar5 = Method_OVRNativeList<OVRAnchor_FilterUnion>_Dispose__;
      if ((unaff_x20 & 1) != 0) {
        DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                  (&stack0x00000060,iVar7,&stack0x00000090,
                   *(undefined8 *)Method_OVRNativeList<OVRAnchor_FilterUnion>_Dispose__);
        DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                  (&stack0x00000060,iVar7,&stack0x00000090,*(undefined8 *)puVar5);
        fVar11 = unaff_s13;
        fVar12 = unaff_s12;
        fVar10 = (float)FUN_02699088(0);
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(puVar3);
          DAT_0377518c = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar13 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
        if (fVar13 <= fVar1) {
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          pfVar9 = *(float **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8);
          fStack0000000000000090 = *pfVar9;
          fStack0000000000000094 = pfVar9[1];
          in_stack_00000098 = pfVar9[2];
        }
        else {
          fStack0000000000000090 = fVar10 / fVar13;
          fStack0000000000000094 = fVar11 / fVar13;
          in_stack_00000098 = fVar12 / fVar13;
        }
        FUN_013444d4(&stack0x00000030,iVar8,&stack0x00000090,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtd_n_u64_f64__);
      }
      iVar7 = iVar7 + 1;
      iVar8 = FUN_01344a5c(&stack0x00000080,*(undefined8 *)puVar2);
    } while (iVar7 < iVar8);
  }
  return;
}


