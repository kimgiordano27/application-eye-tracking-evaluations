/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$IsEyeTrackingPermissionGranted
ENTRY_POINT: 02538a68
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


void Unity_XR_Oculus_Utils__IsEyeTrackingPermissionGranted(float param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint in_w8;
  long lVar3;
  long lVar4;
  uint in_w9;
  long unaff_x19;
  ulong uVar5;
  int iVar6;
  ulong unaff_x21;
  ulong unaff_x22;
  long lVar7;
  long unaff_x24;
  long unaff_x25;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  double in_stack_00000030;
  double in_stack_00000038;
  double in_stack_00000040;
  double in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  
  while( true ) {
    FUN_026ead7c(unaff_x25 + unaff_x24,
                 in_w9 & 0xff | (in_w8 & 0xff) << 8 | ((int)unaff_s12 & 0xffU) << 0x10 |
                 (int)param_1 << 0x18,0);
    lVar3 = *(long *)(unaff_x19 + 0x28);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x22) goto LAB_02538c18;
    FUN_026ead18(in_stack_00000050._4_4_,lVar3 + unaff_x24,0);
    lVar3 = *(long *)(unaff_x19 + 0x28);
    if (lVar3 == 0) break;
    FUN_0132138c();
    if (*(uint *)(lVar3 + 0x18) <= unaff_x22) goto LAB_02538c18;
    UnityEngine_UIElements_RadioButtonGroup__RadioButtonValueChangedCallback
              (uStack0000000000000058,uStack000000000000005c,in_stack_00000060,lVar3 + unaff_x24,0);
    lVar3 = *(long *)(unaff_x19 + 0x28);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x22) goto LAB_02538c18;
    FUN_026eb814(lVar3 + unaff_x24,0);
    unaff_x22 = unaff_x22 + 1;
    unaff_x24 = unaff_x24 + 0x84;
    if (unaff_x21 == unaff_x22) {
      uVar5 = (ulong)*(uint *)(unaff_x19 + 0x30);
      iVar6 = (int)unaff_x21;
      if ((int)*(uint *)(unaff_x19 + 0x30) <= iVar6) goto LAB_02538b9c;
      lVar3 = (long)iVar6;
      lVar7 = lVar3 * 0x84 + 0x20;
      goto LAB_02538b64;
    }
    unaff_x25 = *(long *)(unaff_x19 + 0x28);
    if (unaff_x25 == 0) break;
    dVar9 = modf(in_stack_00000048,(double *)&stack0x00000058);
    if (0.0 <= unaff_s14) {
      fVar8 = fStack000000000000002c;
      if (dVar9 == 0.5) {
        fVar8 = (float)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058);
        fVar10 = fVar8 + unaff_s13;
        goto LAB_02538918;
      }
    }
    else {
      fVar8 = fStack0000000000000028;
      if (dVar9 == -0.5) {
        fVar8 = (float)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058);
        fVar10 = fVar8 + -1.0;
LAB_02538918:
        if (((long)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058) & 1U) != 0) {
          fVar8 = fVar10;
        }
      }
    }
    dVar9 = modf(in_stack_00000040,(double *)&stack0x00000058);
    if (0.0 <= unaff_s8) {
      fVar10 = fStack0000000000000024;
      if (dVar9 == 0.5) {
        fVar10 = (float)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058);
        fVar11 = fVar10 + unaff_s13;
        goto LAB_0253897c;
      }
    }
    else {
      fVar10 = fStack0000000000000020;
      if (dVar9 == -0.5) {
        fVar10 = (float)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058);
        fVar11 = fVar10 + -1.0;
LAB_0253897c:
        if (((long)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058) & 1U) != 0) {
          fVar10 = fVar11;
        }
      }
    }
    dVar9 = modf(in_stack_00000038,(double *)&stack0x00000058);
    if (0.0 <= unaff_s15) {
      unaff_s12 = fStack000000000000001c;
      if (dVar9 == 0.5) {
        unaff_s12 = (float)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058);
        fVar11 = unaff_s12 + unaff_s13;
        goto LAB_025389e0;
      }
    }
    else {
      unaff_s12 = fStack0000000000000018;
      if (dVar9 == -0.5) {
        unaff_s12 = (float)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058);
        fVar11 = unaff_s12 + -1.0;
LAB_025389e0:
        if (((long)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058) & 1U) != 0) {
          unaff_s12 = fVar11;
        }
      }
    }
    dVar9 = modf(in_stack_00000030,(double *)&stack0x00000058);
    if (0.0 <= unaff_s9) {
      param_1 = fStack0000000000000014;
      if (dVar9 == 0.5) {
        param_1 = (float)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058);
        fVar11 = param_1 + unaff_s13;
        goto LAB_02538a44;
      }
    }
    else {
      param_1 = fStack0000000000000010;
      if (dVar9 == -0.5) {
        param_1 = (float)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058);
        fVar11 = param_1 + -1.0;
LAB_02538a44:
        if (((long)(double)CONCAT44(uStack000000000000005c,uStack0000000000000058) & 1U) != 0) {
          param_1 = fVar11;
        }
      }
    }
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_x22) goto LAB_02538c18;
    in_w8 = (uint)fVar10;
    in_w9 = (uint)fVar8;
  }
  goto LAB_02538c14;
LAB_02538b64:
  do {
    lVar4 = *(long *)(unaff_x19 + 0x28);
    if (lVar4 == 0) goto LAB_02538c14;
    if (*(uint *)(lVar4 + 0x18) <= (uint)lVar3) {
LAB_02538c18:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    FUN_026eb814(0xbf800000,lVar4 + lVar7,0);
    uVar5 = (ulong)*(int *)(unaff_x19 + 0x30);
    lVar3 = lVar3 + 1;
    lVar7 = lVar7 + 0x84;
  } while (lVar3 < (long)uVar5);
LAB_02538b9c:
  lVar3 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x28);
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar2 = FUN_017724a8(unaff_x21 & 0xffffffff,uVar5 & 0xffffffff,0);
  if (lVar3 != 0) {
    FUN_026ea628(lVar3,uVar1,uVar2,0);
    *(int *)(unaff_x19 + 0x30) = iVar6;
    return;
  }
LAB_02538c14:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


