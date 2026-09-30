/*
FUNCTION_NAME: OVRPlugin$$get_useIPDInPositionTracking
ENTRY_POINT: 09098d7c
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_useIPDInPositionTracking
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,undefined8 param_5
               )

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x21;
  float fVar6;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  
  uVar4 = FUN_0a17834c();
  FUN_0904d3a8(&stack0x00000010,param_5,uVar4,0);
  uVar3 = uStack0000000000000018;
  uVar1 = in_stack_00000010;
  if (*(long *)(unaff_x19 + 200) != 0) {
    uVar2 = in_stack_00000010._4_4_;
    lVar5 = FUN_0a17834c(*(long *)(unaff_x19 + 200),0);
    if (lVar5 != 0) {
      FUN_0a1884ac(lVar5,0);
      fVar6 = (float)FUN_0a16a578(0);
      in_stack_00000010 = 0;
      uStack0000000000000018 = 0;
      uStack000000000000001c = 0;
      in_stack_00000028 = 0;
      uStack0000000000000020 = 0;
      uStack0000000000000024 = 0;
      FUN_0a188128(uVar1 & 0xffffffff,uVar2,uVar3,
                   (unaff_s11 * param_2 + unaff_s13 * param_4 + unaff_s14 * fVar6) -
                   unaff_s12 * param_3,
                   (unaff_s13 * param_3 + unaff_s12 * param_4 + unaff_s14 * param_2) -
                   unaff_s11 * fVar6,
                   (unaff_s12 * fVar6 + unaff_s11 * param_4 + unaff_s14 * param_3) -
                   unaff_s13 * param_2,
                   ((unaff_s14 * param_4 - unaff_s13 * fVar6) - unaff_s12 * param_2) -
                   unaff_s11 * param_3,&stack0x00000010,0);
      if (unaff_x21 != 0) {
        *(ulong *)(unaff_x21 + 0x28) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
        *(ulong *)(unaff_x21 + 0x20) = in_stack_00000010;
        *(ulong *)(unaff_x21 + 0x34) = CONCAT44(in_stack_00000028,uStack0000000000000024);
        *(ulong *)(unaff_x21 + 0x2c) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


