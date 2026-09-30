/*
FUNCTION_NAME: OVRManager$$Update
ENTRY_POINT: 05bab434
PROGRAM: waitwhat-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Update(void)

{
  long unaff_x19;
  float *unaff_x20;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  uStack000000000000001c = uStack0000000000000028;
  fStack0000000000000014 = fStack0000000000000034;
  fStack0000000000000018 = fStack0000000000000030;
  uStack000000000000000c = uStack000000000000003c;
  fStack0000000000000010 = fStack0000000000000038;
  fVar2 = (float)FUN_05babe34();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) {
    fVar9 = unaff_x20[5];
    fVar8 = unaff_x20[6];
    fVar11 = unaff_x20[3];
    fVar10 = unaff_x20[4];
    fVar4 = fStack0000000000000030;
    fVar5 = fStack0000000000000034;
    fVar3 = (float)FUN_069e5200(lVar1,0);
    fVar6 = (fVar9 * fVar3 + fVar8 * fVar4 + fVar10 * fStack0000000000000038) - fVar11 * fVar5;
    fVar7 = (fVar11 * fVar4 + fVar8 * fVar5 + fVar9 * fStack0000000000000038) - fVar10 * fVar3;
    FUN_069e7254((fVar10 * fVar5 + fVar8 * fVar3 + fVar11 * fStack0000000000000038) - fVar9 * fVar4,
                 fVar6,fVar7,
                 ((fVar8 * fStack0000000000000038 - fVar11 * fVar3) - fVar10 * fVar4) -
                 fVar9 * fVar5,lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x28);
    if (lVar1 != 0) {
      fVar4 = (float)FUN_069e6fbc(lVar1,0);
      fStack0000000000000030 = fStack0000000000000030 + fVar6;
      fStack0000000000000034 = fStack0000000000000034 + fVar7;
      fVar5 = (float)FUN_05babe34();
      fStack0000000000000030 = fStack0000000000000030 - fVar6;
      fStack0000000000000034 = fStack0000000000000034 - fVar7;
      FUN_069e7098((fVar2 + fVar4) - fVar5,fStack0000000000000030,fStack0000000000000034,lVar1,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        fVar2 = (float)FUN_069e6fbc(*(long *)(unaff_x19 + 0x28),0);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_069e7098(fVar2 + *unaff_x20,fStack0000000000000030 + unaff_x20[1],
                       fStack0000000000000034 + unaff_x20[2],*(long *)(unaff_x19 + 0x28),0);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            FUN_05ba5c74(in_stack_00000020._4_4_,uStack000000000000001c,uStack000000000000002c,
                         *(long *)(unaff_x19 + 0x20),0);
            if (*(long *)(unaff_x19 + 0x20) != 0) {
              FUN_05ba5c10(fStack0000000000000018,fStack0000000000000014,fStack0000000000000010,
                           uStack000000000000000c,*(long *)(unaff_x19 + 0x20),0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


