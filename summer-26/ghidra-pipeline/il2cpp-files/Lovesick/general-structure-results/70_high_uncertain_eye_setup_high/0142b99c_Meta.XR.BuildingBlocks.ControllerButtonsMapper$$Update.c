/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$Update
ENTRY_POINT: 0142b99c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper__Update(void)

{
  undefined *puVar1;
  int iVar2;
  float *pfVar3;
  int unaff_w19;
  ulong unaff_x20;
  uint unaff_w21;
  undefined8 unaff_x22;
  int iVar4;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s11;
  uint uStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  
  iVar4 = 0;
  uStack000000000000000c = unaff_w21;
  do {
    iVar2 = unaff_w19 + iVar4;
    DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
              (&stack0x00000120,iVar4,&stack0x00000010,*unaff_x28);
    fStack0000000000000010 = (float)FUN_02692df0(fStack0000000000000010,unaff_x22,0);
    FUN_013444d4(&stack0x000000f0,iVar2,&stack0x00000010,*unaff_x27);
    if ((unaff_w21 & 1) != 0) {
      DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                (&stack0x00000110,iVar4,&stack0x00000010,*unaff_x28);
      fVar6 = fStack0000000000000014;
      fVar7 = in_stack_00000018;
      fVar5 = (float)FUN_02692df0(fStack0000000000000010,&stack0x00000090,0);
      if (DAT_0377518c == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_0377518c = '\x01';
      }
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar8 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
      if (fVar8 <= unaff_s11) {
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        pfVar3 = *(float **)
                  (*(long *)
                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                  + 0xb8);
        fStack0000000000000010 = *pfVar3;
        fStack0000000000000014 = pfVar3[1];
        in_stack_00000018 = pfVar3[2];
      }
      else {
        fStack0000000000000010 = fVar5 / fVar8;
        fStack0000000000000014 = fVar6 / fVar8;
        in_stack_00000018 = fVar7 / fVar8;
      }
      FUN_013444d4(&stack0x000000e0,iVar2,&stack0x00000010,*unaff_x27);
    }
    puVar1 = Method_OVRNativeList<OVRAnchor_FilterUnion>_Dispose__;
    if ((unaff_x20 & 1) != 0) {
      unaff_x20 = unaff_x20 & 0xffffffff;
      DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                (&stack0x00000100,iVar4,&stack0x00000010,
                 *(undefined8 *)Method_OVRNativeList<OVRAnchor_FilterUnion>_Dispose__);
      DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                (&stack0x00000100,iVar4,&stack0x00000010,*(undefined8 *)puVar1);
      fVar6 = fStack0000000000000014;
      fVar7 = in_stack_00000018;
      fVar5 = (float)FUN_02692df0(fStack0000000000000010,&stack0x00000090,0);
      if (DAT_0377518c == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_0377518c = '\x01';
      }
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar8 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
      if (fVar8 <= unaff_s11) {
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        pfVar3 = *(float **)
                  (*(long *)
                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                  + 0xb8);
        fStack0000000000000010 = *pfVar3;
        fStack0000000000000014 = pfVar3[1];
        in_stack_00000018 = pfVar3[2];
      }
      else {
        fStack0000000000000010 = fVar5 / fVar8;
        fStack0000000000000014 = fVar6 / fVar8;
        in_stack_00000018 = fVar7 / fVar8;
      }
      FUN_013444d4(&stack0x000000d0,iVar2,&stack0x00000010,
                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtd_n_u64_f64__);
      unaff_w21 = uStack000000000000000c;
    }
    iVar4 = iVar4 + 1;
    iVar2 = FUN_01344a5c(&stack0x00000120,*unaff_x25);
  } while (iVar4 < iVar2);
  return;
}


