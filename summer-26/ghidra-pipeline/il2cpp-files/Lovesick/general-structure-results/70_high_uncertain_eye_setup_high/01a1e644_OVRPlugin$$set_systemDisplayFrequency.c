/*
FUNCTION_NAME: OVRPlugin$$set_systemDisplayFrequency
ENTRY_POINT: 01a1e644
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__set_systemDisplayFrequency(void)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  undefined8 *puVar4;
  uint unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  float fVar5;
  float fVar6;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  puVar4 = *(undefined8 **)(unaff_x21 + 0x278);
  FUN_01323390();
  in_stack_00000020 = in_stack_00000000;
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000010;
  while( true ) {
    uVar2 = FUN_012b894c(&stack0x00000020,*unaff_x23);
    if ((uVar2 & 1) == 0) {
      FUN_012b8948(&stack0x00000020,*puVar4);
      lVar3 = *(long *)(unaff_x19 + 0x48);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),(long)&stack0x00000038 + 4,
                   *(undefined8 *)(lVar3 + 0x28));
        bVar1 = *(byte *)(unaff_x19 + 0x59);
        if (unaff_w22 == bVar1) {
          fVar5 = *(float *)(unaff_x19 + 0x5c);
        }
        else {
          *(float *)(unaff_x19 + 0x5c) = in_stack_00000038._4_4_;
          fVar5 = in_stack_00000038._4_4_;
        }
        if (*(float *)(unaff_x19 + 0x40) <= in_stack_00000038._4_4_ - fVar5) {
          *(byte *)(unaff_x19 + 0x58) = bVar1;
        }
        else {
          bVar1 = *(byte *)(unaff_x19 + 0x58);
        }
        return bVar1 != 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar3 = FUN_00bfe124(&stack0x00000020,*unaff_x24);
    if (unaff_w22 == 0) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar6 = *(float *)(lVar3 + 0x14);
      fVar5 = *(float *)(lVar3 + 0x18) * -0.5;
    }
    else {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar6 = *(float *)(lVar3 + 0x14);
      fVar5 = *(float *)(lVar3 + 0x18) * 0.5;
    }
    uVar2 = FUN_01a1e83c();
    if (*(long *)(unaff_x19 + 0x50) == 0) break;
    FUN_01299e64(*(long *)(unaff_x19 + 0x50),lVar3);
    *(byte *)(unaff_x19 + 0x59) =
         *(byte *)(unaff_x19 + 0x59) &
         ((uVar2 & 1) != 0 && ABS(in_stack_00000018._4_4_) <= fVar6 + fVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


