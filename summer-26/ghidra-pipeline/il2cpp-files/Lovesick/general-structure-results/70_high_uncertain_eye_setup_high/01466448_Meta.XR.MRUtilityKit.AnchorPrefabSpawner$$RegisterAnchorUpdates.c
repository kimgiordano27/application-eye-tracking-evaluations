/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$RegisterAnchorUpdates
ENTRY_POINT: 01466448
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;weak_pose_support;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;weak_vector_component_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__RegisterAnchorUpdates(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long unaff_x20;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float __y;
  float __y_00;
  float fVar13;
  float fVar14;
  float __x;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000014;
  double in_stack_00000018;
  
  puVar1 = Method_UnityEngine_Component_GetComponentsInChildren<TeleportPoint>__;
  fStack0000000000000014 = *(float *)(unaff_x20 + 0x20);
  fVar4 = *(float *)(param_1 + 0x38);
  if (fStack0000000000000014 <= fVar4) {
    return;
  }
  __y = *(float *)(unaff_x20 + 0x24);
  if (__y <= fVar4) {
    return;
  }
  __y_00 = *(float *)(unaff_x20 + 0x28);
  if (__y_00 <= fVar4) {
    return;
  }
  lVar2 = *(long *)Method_UnityEngine_Component_GetComponentsInChildren<TeleportPoint>__;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *(long *)puVar1;
  }
  puVar3 = *(undefined4 **)(lVar2 + 0xb8);
  fVar9 = (float)puVar3[1];
  fVar12 = (float)puVar3[2];
  FUN_0269e408(*puVar3,fVar9,fVar12,puVar3[3],0);
  fVar5 = (float)FUN_02687a80();
  fVar7 = fVar12;
  fVar13 = fVar9;
  fVar6 = (float)FUN_02687a8c();
  fVar4 = fStack0000000000000014;
  fVar14 = *(float *)(unaff_x20 + 0x18);
  __x = *(float *)(unaff_x20 + 0x1c);
  fStack0000000000000004 = fVar7;
  fVar7 = fmodf(*(float *)(unaff_x20 + 0x14),fStack0000000000000014);
  fStack000000000000000c = fmodf(fVar14,__y);
  fVar14 = fmodf(__x,__y_00);
  fVar4 = (fVar5 - fVar6) / fVar4;
  dVar8 = modf((double)fVar4,&stack0x00000018);
  if (0.0 <= fVar4) {
    if (dVar8 == 0.5) {
      fVar4 = (float)in_stack_00000018 + 1.0;
      goto LAB_0146657c;
    }
    fVar5 = (float)(int)(fVar4 + 0.5);
  }
  else if (dVar8 == -0.5) {
    fVar4 = (float)in_stack_00000018 + -1.0;
LAB_0146657c:
    fVar5 = (float)in_stack_00000018;
    if (((long)in_stack_00000018 & 1U) != 0) {
      fVar5 = fVar4;
    }
  }
  else {
    fVar5 = (float)(int)(fVar4 + -0.5);
  }
  fVar4 = (fVar9 - fVar13) / __y;
  fVar12 = fVar12 - fStack0000000000000004;
  fVar5 = fStack0000000000000014 * fVar5;
  dVar8 = modf((double)fVar4,&stack0x00000018);
  if (0.0 <= fVar4) {
    if (dVar8 == 0.5) {
      fVar4 = 1.0;
      goto LAB_014665f4;
    }
    fVar13 = (float)(int)(fVar4 + 0.5);
  }
  else if (dVar8 == -0.5) {
    fVar4 = -1.0;
LAB_014665f4:
    fVar13 = (float)in_stack_00000018;
    if (((long)in_stack_00000018 & 1U) != 0) {
      fVar13 = (float)in_stack_00000018 + fVar4;
    }
  }
  else {
    fVar13 = (float)(int)(fVar4 + -0.5);
  }
  fVar12 = fVar12 / __y_00;
  fVar7 = fVar7 + fVar5;
  fVar13 = fStack000000000000000c + __y * fVar13;
  dVar8 = modf((double)fVar12,&stack0x00000018);
  fVar4 = fStack0000000000000014;
  if (0.0 <= fVar12) {
    if (dVar8 != 0.5) {
      fVar6 = (float)(int)(fVar12 + 0.5);
      goto LAB_014666b4;
    }
    fVar5 = 1.0;
  }
  else {
    if (dVar8 != -0.5) {
      fVar6 = (float)(int)(fVar12 + -0.5);
      goto LAB_014666b4;
    }
    fVar5 = -1.0;
  }
  fVar6 = (float)in_stack_00000018;
  if (((long)in_stack_00000018 & 1U) != 0) {
    fVar6 = (float)in_stack_00000018 + fVar5;
  }
LAB_014666b4:
  fVar12 = fVar14 + __y_00 * fVar6;
  fVar5 = (float)FUN_02687a80();
  fVar6 = (float)FUN_02687a8c();
  fVar9 = fVar7 - fVar4;
  fStack0000000000000008 = fVar9;
  if (fVar7 <= fVar5 - fVar6) {
    fStack0000000000000008 = fVar7;
  }
  FUN_02687a80();
  fVar7 = fVar9;
  FUN_02687a8c();
  fStack0000000000000004 = fVar13 - __y;
  if (fVar13 <= fVar9 - fVar7) {
    fStack0000000000000004 = fVar13;
  }
  FUN_02687a80();
  fVar13 = fVar14;
  FUN_02687a8c();
  fVar5 = fVar12 - __y_00;
  fVar7 = fVar5;
  if (fVar12 <= fVar14 - fVar13) {
    fVar7 = fVar12;
  }
  fVar6 = (float)FUN_02687be0();
  FUN_02687be0();
  FUN_02687be0();
  fVar14 = fVar13 / __y_00;
  if (DAT_03775e60 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775e60 = '\x01';
  }
  fVar14 = fVar6 / fVar4 + fVar5 / __y + fVar14;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (((float)(int)fVar14 != INFINITY) && (200 < (int)fVar14)) {
    FUN_0269e21c(fVar4 * 0.5 + *(float *)(unaff_x20 + 0x14),__y * 0.5 + *(float *)(unaff_x20 + 0x18)
                 ,__y_00 * 0.5 + *(float *)(unaff_x20 + 0x1c),fVar4,__y,__y_00,0);
    return;
  }
  fVar5 = (float)FUN_02687a80();
  fVar6 = (float)FUN_02687a8c();
  if (fStack0000000000000008 < fVar5 + fVar6) {
    fVar5 = fVar4 * 0.5;
    fStack000000000000000c = __y * 0.5;
    uVar10 = (ulong)(uint)fStack000000000000000c;
    do {
      fVar14 = (float)uVar10;
      FUN_02687a80();
      fVar6 = fVar14;
      FUN_02687a8c();
      uVar10 = (ulong)(uint)fStack0000000000000004;
      if (fStack0000000000000004 < fVar14 + fVar6) {
        fVar6 = fVar13;
        fVar14 = fStack0000000000000004;
        do {
          FUN_02687a80();
          fVar13 = fVar6;
          FUN_02687a8c();
          uVar11 = (ulong)(uint)fVar7;
          if (fVar7 < fVar6 + fVar13) {
            fVar9 = fStack000000000000000c + fVar14;
            fVar6 = fVar7;
            do {
              fVar12 = __y_00 * 0.5 + fVar6;
              uVar11 = (ulong)(uint)fVar9;
              FUN_0269e21c(fVar5 + fStack0000000000000008,(ulong)(uint)fVar9,fVar12,fVar4,__y,__y_00
                           ,0);
              fVar6 = __y_00 + fVar6;
              FUN_02687a80();
              fVar13 = fVar12;
              FUN_02687a8c();
              fVar4 = fStack0000000000000014;
            } while (fVar6 < fVar12 + fVar13);
          }
          fVar14 = __y + fVar14;
          FUN_02687a80();
          uVar10 = uVar11;
          FUN_02687a8c();
          fVar6 = fVar13;
        } while (fVar14 < (float)uVar11 + (float)uVar10);
      }
      fStack0000000000000008 = fVar4 + fStack0000000000000008;
      fVar6 = (float)FUN_02687a80();
      fVar14 = (float)FUN_02687a8c();
    } while (fStack0000000000000008 < fVar6 + fVar14);
  }
  return;
}


