/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnAppSpaceChange
ENTRY_POINT: 05be7b5c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__OnAppSpaceChange(long param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float in_stack_00000008;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar5 + 6) * 0x10 + 0x138);
        goto LAB_05be7ba4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_031c0d08();
LAB_05be7ba4:
  (*(code *)*puVar2)(&stack0x00000004);
  fVar1 = in_stack_00000008;
  lVar3 = *(long *)(unaff_x19 + 0x48);
  if (lVar3 != 0) {
    fVar8 = *(float *)(unaff_x19 + 0x40);
    fVar9 = *(float *)(unaff_x19 + 0x80);
    fVar6 = (float)(**(code **)(lVar3 + 0x18))
                             (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    fVar8 = fVar8 * fVar6;
    fVar6 = 1.0;
    if (fVar8 <= 1.0) {
      fVar6 = fVar8;
    }
    fVar7 = 0.0;
    if (0.0 <= fVar8) {
      fVar7 = fVar6;
    }
    *(float *)(unaff_x19 + 0x80) = fVar9 + (fVar1 - fVar9) * fVar7;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      Unity_Properties_TypeConversion_PrimitiveConverters_<>c__<RegisterUInt32Converters>b__7_7
                (*(long *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x5c),0);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_06976dd0(*(undefined4 *)(unaff_x19 + 0x68),*(long *)(unaff_x19 + 0x30),
                     *(undefined4 *)(unaff_x19 + 0x54),0);
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          Unity_Properties_TypeConversion_PrimitiveConverters_<>c__<RegisterUInt32Converters>b__7_7
                    (*(undefined4 *)(unaff_x19 + 0x6c),*(long *)(unaff_x19 + 0x30),
                     *(undefined4 *)(unaff_x19 + 0x60),0);
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            FUN_06976dd0(*(undefined4 *)(unaff_x19 + 0x70),*(long *)(unaff_x19 + 0x30),
                         *(undefined4 *)(unaff_x19 + 0x50),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


