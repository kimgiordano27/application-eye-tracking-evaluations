/*
FUNCTION_NAME: OVRManager$$get_nativeColorGamut
ENTRY_POINT: 05cfb32c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_nativeColorGamut
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4)

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
  undefined4 uStack0000000000000008;
  float fStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  undefined4 in_stack_00000038;
  
  uStack0000000000000010 = uStack0000000000000030;
  uStack0000000000000014 = in_stack_00000028._4_4_;
  uStack0000000000000008 = in_stack_00000038;
  fStack000000000000000c = fStack0000000000000034;
  fVar2 = (float)FUN_05cfbd68();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) {
    fVar8 = unaff_x20[3];
    fVar9 = unaff_x20[4];
    fVar10 = unaff_x20[5];
    fVar11 = unaff_x20[6];
    fVar4 = fStack0000000000000034;
    fVar5 = param_3;
    fVar3 = (float)FUN_0690449c(lVar1,0);
    fVar6 = (fVar10 * fVar3 + fVar11 * fVar4 + fVar9 * param_4) - fVar8 * fVar5;
    fVar7 = (fVar8 * fVar4 + fVar11 * fVar5 + fVar10 * param_4) - fVar9 * fVar3;
    FUN_06904520((fVar9 * fVar5 + fVar11 * fVar3 + fVar8 * param_4) - fVar10 * fVar4,fVar6,fVar7,
                 ((fVar11 * param_4 - fVar8 * fVar3) - fVar9 * fVar4) - fVar10 * fVar5,lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x28);
    if (lVar1 != 0) {
      fVar4 = (float)FUN_069042b4(lVar1,0);
      fStack0000000000000034 = fStack0000000000000034 + fVar6;
      param_3 = param_3 + fVar7;
      fVar5 = (float)FUN_05cfbd68();
      fStack0000000000000034 = fStack0000000000000034 - fVar6;
      param_3 = param_3 - fVar7;
      FUN_06904354((fVar2 + fVar4) - fVar5,fStack0000000000000034,param_3,lVar1,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        fVar2 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x28),0);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_06904354(fVar2 + *unaff_x20,fStack0000000000000034 + unaff_x20[1],
                       param_3 + unaff_x20[2],*(long *)(unaff_x19 + 0x28),0);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            FUN_05cf59f0(uStack000000000000001c,uStack0000000000000018,*(long *)(unaff_x19 + 0x20),0
                        );
            if (*(long *)(unaff_x19 + 0x20) != 0) {
              FUN_05cf598c(uStack0000000000000014,uStack0000000000000010,fStack000000000000000c,
                           uStack0000000000000008,*(long *)(unaff_x19 + 0x20),0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


