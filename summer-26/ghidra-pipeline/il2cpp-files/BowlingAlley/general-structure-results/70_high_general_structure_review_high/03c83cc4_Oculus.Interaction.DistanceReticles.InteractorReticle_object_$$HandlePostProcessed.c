/*
FUNCTION_NAME: Oculus.Interaction.DistanceReticles.InteractorReticle<object>$$HandlePostProcessed
ENTRY_POINT: 03c83cc4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Oculus_Interaction_DistanceReticles_InteractorReticle<object>__HandlePostProcessed
               (undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint in_w9;
  long unaff_x19;
  undefined8 *puVar4;
  long unaff_x21;
  long unaff_x22;
  int unaff_w24;
  uint unaff_w25;
  undefined8 uVar5;
  uint unaff_w27;
  undefined8 uVar6;
  int unaff_w28;
  int unaff_w29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    *(undefined8 *)(unaff_x19 + (long)(int)in_w9 * 8 + 0x20) = param_1;
    if (unaff_w29 < (int)unaff_w25) {
LAB_03c83ce0:
      if (unaff_w27 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + (long)(int)unaff_w27 * 8 + 0x20) = in_stack_00000008;
        return;
      }
LAB_03c83d18:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    uVar1 = unaff_w25 * 2;
    if ((int)uVar1 < unaff_w24) {
      uVar2 = uVar1 + in_stack_00000000._4_4_;
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar2 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar2))
      goto LAB_03c83d18;
      if (unaff_x22 == 0) goto LAB_03c83d1c;
      uVar5 = *(undefined8 *)(unaff_x19 + (long)(int)(uVar2 - 1) * 8 + 0x20);
      uVar6 = *(undefined8 *)(unaff_x19 + (long)(int)uVar2 * 8 + 0x20);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_032934b8();
      }
      uVar2 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),uVar5,uVar6,
                         *(undefined8 *)(unaff_x22 + 0x28));
      uVar1 = uVar1 | uVar2 >> 0x1f;
    }
    unaff_w27 = unaff_w28 + uVar1;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27) goto LAB_03c83d18;
    puVar4 = (undefined8 *)(unaff_x19 + (long)(int)unaff_w27 * 8 + 0x20);
    uVar5 = *puVar4;
    if (unaff_x22 == 0) {
LAB_03c83d1c:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_032934b8();
    }
    iVar3 = (**(code **)(unaff_x22 + 0x18))
                      (*(undefined8 *)(unaff_x22 + 0x40),in_stack_00000008,uVar5,
                       *(undefined8 *)(unaff_x22 + 0x28));
    if (-1 < iVar3) {
      unaff_w27 = unaff_w28 + unaff_w25;
      goto LAB_03c83ce0;
    }
    if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w27) ||
       (in_w9 = unaff_w28 + unaff_w25, *(uint *)(unaff_x19 + 0x18) <= in_w9)) goto LAB_03c83d18;
    param_1 = *puVar4;
    unaff_w25 = uVar1;
  } while( true );
}


