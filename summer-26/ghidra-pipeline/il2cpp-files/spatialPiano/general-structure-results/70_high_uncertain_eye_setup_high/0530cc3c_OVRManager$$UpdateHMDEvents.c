/*
FUNCTION_NAME: OVRManager$$UpdateHMDEvents
ENTRY_POINT: 0530cc3c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateHMDEvents(undefined8 param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 unaff_s8;
  float unaff_s9;
  float unaff_s10;
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
  
  fVar8 = (float)FUN_060ffbe4(param_1,0);
  FUN_05319588(unaff_s8,unaff_s9);
  *(undefined4 *)(unaff_x21 + 0x44) = 0;
  *(undefined8 *)(unaff_x21 + 0x3c) = 0;
  if (*(long *)(unaff_x19 + 200) != 0) {
    lVar7 = *unaff_x20;
    uVar4 = FUN_060ed7ac(*(long *)(unaff_x19 + 200),0);
    uVar5 = FUN_060ed7ac();
    FUN_052c2620(&stack0x00000010,uVar4,uVar5,0);
    uVar3 = uStack0000000000000018;
    uVar1 = in_stack_00000010;
    if (*(long *)(unaff_x19 + 200) != 0) {
      uVar2 = in_stack_00000010._4_4_;
      lVar6 = FUN_060ed7ac(*(long *)(unaff_x19 + 200),0);
      if (lVar6 != 0) {
        FUN_060fdda4(lVar6,0);
        fVar9 = (float)FUN_060df2e4(0);
        in_stack_00000010 = 0;
        uStack0000000000000018 = 0;
        uStack000000000000001c = 0;
        in_stack_00000028 = 0;
        uStack0000000000000020 = 0;
        uStack0000000000000024 = 0;
        FUN_060fda18(uVar1 & 0xffffffff,uVar2,uVar3,
                     (unaff_s11 * unaff_s9 + unaff_s13 * fVar8 + unaff_s14 * fVar9) -
                     unaff_s12 * unaff_s10,
                     (unaff_s13 * unaff_s10 + unaff_s12 * fVar8 + unaff_s14 * unaff_s9) -
                     unaff_s11 * fVar9,
                     (unaff_s12 * fVar9 + unaff_s11 * fVar8 + unaff_s14 * unaff_s10) -
                     unaff_s13 * unaff_s9,
                     ((unaff_s14 * fVar8 - unaff_s13 * fVar9) - unaff_s12 * unaff_s9) -
                     unaff_s11 * unaff_s10,&stack0x00000010,0);
        if (lVar7 != 0) {
          *(ulong *)(lVar7 + 0x28) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
          *(ulong *)(lVar7 + 0x20) = in_stack_00000010;
          *(ulong *)(lVar7 + 0x34) = CONCAT44(in_stack_00000028,uStack0000000000000024);
          *(ulong *)(lVar7 + 0x2c) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


