/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetCameraDelegate$$Invoke
ENTRY_POINT: 076e81a0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetCameraDelegate__Invoke
               (undefined1 param_1 [16],float param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  float fVar7;
  float fVar8;
  float fVar9;
  
  FUN_04447ba8(PTR_DAT_09f2f358);
  *(undefined1 *)(unaff_x21 + 0xeb7) = 1;
  if (*(long *)(unaff_x19 + 0x88) == 0) {
LAB_076e8440:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(int *)(*(long *)(unaff_x19 + 0x88) + 0x18) < 1) {
    if (*(int *)(unaff_x19 + 0xb4) == -1) {
      return;
    }
    FUN_076ed1f0();
    *(undefined4 *)(unaff_x19 + 0xb4) = 0xffffffff;
    return;
  }
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_076e8440;
  FUN_09538d9c(*(long *)(unaff_x19 + 0x20),0);
  fVar8 = *(float *)(unaff_x19 + 0x9c);
  param_2 = param_2 + -1.0;
  fVar7 = *(float *)(unaff_x19 + 0x78) + param_2 + 2.0;
  if (fVar8 <= fVar7) {
    if (fVar8 <= param_2) {
      fVar9 = param_2 - *(float *)(unaff_x19 + 0xa4);
      param_2 = fVar8 + -1.0;
      if (fVar8 + -1.0 <= fVar9) {
        param_2 = fVar9;
      }
      fVar8 = param_2 + 2.0;
    }
    else {
      fVar8 = fVar8 + 1.0;
    }
    fVar9 = fVar7 - *(float *)(unaff_x19 + 0xa4);
    fVar7 = fVar8;
    if (fVar8 <= fVar9) {
      fVar7 = fVar9;
    }
  }
  param_2 = param_2 * *(float *)(unaff_x19 + 0x74);
  fVar7 = fVar7 * *(float *)(unaff_x19 + 0x74);
  uVar2 = 0x80000000;
  if (param_2 != INFINITY) {
    uVar2 = (int)param_2;
  }
  uVar1 = 0x80000000;
  if (fVar7 != INFINITY) {
    uVar1 = (int)fVar7;
  }
  if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_076e8440;
  iVar6 = *(int *)(unaff_x19 + 0xb4);
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  uVar4 = *(int *)(*(long *)(unaff_x19 + 0x88) + 0x18) - 1;
  if ((int)uVar1 <= (int)uVar4) {
    uVar4 = uVar1;
  }
  if (iVar6 == -1) {
    *(uint *)(unaff_x19 + 0xb4) = uVar2;
    *(uint *)(unaff_x19 + 0xb8) = uVar4;
    for (; (int)uVar2 <= (int)uVar4; uVar2 = uVar2 + 1) {
      FUN_076ed498();
    }
    goto LAB_076e83f4;
  }
  iVar5 = *(int *)(unaff_x19 + 0xb8);
  if (((int)uVar4 < iVar6) || (iVar5 < (int)uVar2)) {
    FUN_076ed1f0();
    for (uVar1 = uVar2; (int)uVar1 <= (int)uVar4; uVar1 = uVar1 + 1) {
      FUN_076ed498();
    }
  }
  else {
    if (iVar6 < (int)uVar2) {
      FUN_076ed1f0();
      iVar5 = *(int *)(unaff_x19 + 0xb8);
    }
    if ((int)uVar4 < iVar5) {
      FUN_076ed1f0();
    }
    uVar3 = *(uint *)(unaff_x19 + 0xb4);
    uVar1 = uVar2;
    if ((int)uVar2 < (int)uVar3) {
      do {
        FUN_076ed498();
        uVar1 = uVar1 + 1;
      } while (uVar3 != uVar1);
      if ((unaff_x20 & 1) == 0) {
        FUN_076ed2c0();
        iVar6 = *(int *)(unaff_x19 + 0xb8);
        if ((int)uVar4 <= iVar6) goto LAB_076e8428;
      }
      else {
        iVar6 = *(int *)(unaff_x19 + 0xb8);
        if ((int)uVar4 <= iVar6) goto LAB_076e83f0;
      }
    }
    else {
      iVar6 = *(int *)(unaff_x19 + 0xb8);
      if ((int)uVar4 <= iVar6) {
        *(uint *)(unaff_x19 + 0xb4) = uVar2;
        *(uint *)(unaff_x19 + 0xb8) = uVar4;
        if ((unaff_x20 & 1) == 0) {
          return;
        }
        goto LAB_076e83f4;
      }
    }
    iVar6 = iVar6 + 1;
    do {
      FUN_076ed498();
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)uVar4);
    if ((unaff_x20 & 1) == 0) {
      FUN_076ed2c0();
LAB_076e8428:
      *(uint *)(unaff_x19 + 0xb4) = uVar2;
      *(uint *)(unaff_x19 + 0xb8) = uVar4;
      return;
    }
  }
LAB_076e83f0:
  *(uint *)(unaff_x19 + 0xb4) = uVar2;
  *(uint *)(unaff_x19 + 0xb8) = uVar4;
LAB_076e83f4:
  FUN_076ed2c0();
  return;
}


