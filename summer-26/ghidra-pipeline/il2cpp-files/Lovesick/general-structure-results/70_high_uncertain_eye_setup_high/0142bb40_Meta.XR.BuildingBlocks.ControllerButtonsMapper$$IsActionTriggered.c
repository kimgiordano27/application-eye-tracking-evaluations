/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$IsActionTriggered
ENTRY_POINT: 0142bb40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_10;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper__IsActionTriggered
               (float param_1,float param_2,float param_3,undefined1 *param_4,undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  float *pfVar3;
  undefined8 *unaff_x19;
  int unaff_w20;
  ulong unaff_x21;
  int unaff_w23;
  long unaff_x24;
  int unaff_w26;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s11;
  ulong in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  
  do {
    fVar5 = (float)FUN_02692df0(param_1,param_4,param_5);
    if (*(char *)(unaff_x24 + 0x18c) == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      *(undefined1 *)(unaff_x24 + 0x18c) = 1;
    }
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar7 = SQRT(param_3 * param_3 + fVar5 * fVar5 + param_2 * param_2);
    if (fVar7 <= unaff_s11) {
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      pfVar3 = *(float **)
                (*(long *)
                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                0xb8);
      fStack0000000000000010 = *pfVar3;
      fStack0000000000000014 = pfVar3[1];
      in_stack_00000018 = pfVar3[2];
    }
    else {
      fStack0000000000000010 = fVar5 / fVar7;
      fStack0000000000000014 = param_2 / fVar7;
      in_stack_00000018 = param_3 / fVar7;
    }
    FUN_013444d4(&stack0x000000d0,unaff_w26,&stack0x00000010,
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtd_n_u64_f64__);
    do {
      unaff_w23 = unaff_w23 + 1;
      iVar2 = FUN_01344a5c(&stack0x00000120,*unaff_x19);
      if (iVar2 <= unaff_w23) {
        return;
      }
      unaff_w26 = unaff_w20 + unaff_w23;
      DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                (&stack0x00000120,unaff_w23,&stack0x00000010,*unaff_x29);
      fStack0000000000000010 = (float)FUN_02692df0(fStack0000000000000010,unaff_x28,0);
      FUN_013444d4(&stack0x000000f0,unaff_w26,&stack0x00000010,*unaff_x27);
      if ((in_stack_00000008 & 0x100000000) != 0) {
        DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                  (&stack0x00000110,unaff_w23,&stack0x00000010,*unaff_x29);
        fVar5 = fStack0000000000000014;
        fVar7 = in_stack_00000018;
        fVar4 = (float)FUN_02692df0(fStack0000000000000010,&stack0x00000090,0);
        if (*(char *)(unaff_x24 + 0x18c) == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          *(undefined1 *)(unaff_x24 + 0x18c) = 1;
        }
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar6 = SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar5 * fVar5);
        if (fVar6 <= unaff_s11) {
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
          fStack0000000000000010 = fVar4 / fVar6;
          fStack0000000000000014 = fVar5 / fVar6;
          in_stack_00000018 = fVar7 / fVar6;
        }
        FUN_013444d4(&stack0x000000e0,unaff_w26,&stack0x00000010,*unaff_x27);
      }
      puVar1 = Method_OVRNativeList<OVRAnchor_FilterUnion>_Dispose__;
    } while ((unaff_x21 & 1) == 0);
    unaff_x21 = unaff_x21 & 0xffffffff;
    DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
              (&stack0x00000100,unaff_w23,&stack0x00000010,
               *(undefined8 *)Method_OVRNativeList<OVRAnchor_FilterUnion>_Dispose__);
    DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
              (&stack0x00000100,unaff_w23,&stack0x00000010,*(undefined8 *)puVar1);
    param_4 = &stack0x00000090;
    param_5 = 0;
    param_1 = fStack0000000000000010;
    param_2 = fStack0000000000000014;
    param_3 = in_stack_00000018;
  } while( true );
}


