/*
FUNCTION_NAME: OVRManager$$add_AudioInChanged
ENTRY_POINT: 05cf8d38
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


void OVRManager__add_AudioInChanged
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

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
  float unaff_s8;
  float unaff_s9;
  float fVar8;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar9;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  fVar3 = param_3;
  fVar2 = (float)FUN_0690449c();
  fVar5 = (unaff_s13 * fVar2 + unaff_s14 * param_2 + unaff_s12 * param_4) - unaff_s11 * fVar3;
  fVar6 = (unaff_s11 * param_2 + unaff_s14 * fVar3 + unaff_s13 * param_4) - unaff_s12 * fVar2;
  FUN_06904520((unaff_s12 * fVar3 + unaff_s14 * fVar2 + unaff_s11 * param_4) - unaff_s13 * param_2,
               fVar5,fVar6,
               ((unaff_s14 * param_4 - unaff_s11 * fVar2) - unaff_s12 * param_2) - unaff_s13 * fVar3
              );
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) {
    fVar3 = (float)FUN_069042b4(lVar1,0);
    fVar8 = unaff_s9 + fVar5;
    param_3 = param_3 + fVar6;
    fVar2 = (float)FUN_05cf9270();
    FUN_06904354((unaff_s8 + fVar3) - fVar2,fVar8 - fVar5,param_3 - fVar6,lVar1,0);
    fVar3 = *unaff_x20;
    fVar5 = unaff_x20[1];
    fVar2 = unaff_x20[2];
    if (DAT_0738e662 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      DAT_0738e662 = '\x01';
    }
    lVar1 = *(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
    fVar8 = *(float *)(lVar1 + 0x18);
    fVar9 = *(float *)(lVar1 + 0x1c);
    fVar6 = *(float *)(lVar1 + 0x20);
    if (DAT_0738eca3 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6e7c0);
      DAT_0738eca3 = '\x01';
    }
    fVar4 = fVar6 * fVar6 + fVar8 * fVar8 + fVar9 * fVar9;
    fVar7 = **(float **)(*(long *)PTR_DAT_06f6e7c0 + 0xb8);
    if (fVar7 <= fVar4) {
      fVar5 = fVar2 * fVar6 + fVar3 * fVar8 + fVar5 * fVar9;
      fVar7 = (fVar8 * fVar5) / fVar4;
      fVar3 = fVar3 - fVar7;
      fVar2 = fVar2 - (fVar6 * fVar5) / fVar4;
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      fVar5 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x28),0);
      if (*(char *)(unaff_x19 + 0xd5) == '\0') {
        fVar6 = 0.0;
      }
      else {
        fVar6 = *(float *)(unaff_x19 + 0x4c);
      }
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_06904354(fVar3 + fVar5,fVar6 + unaff_s15 + *(float *)(unaff_x19 + 0x48),fVar2 + fVar7,
                     *(long *)(unaff_x19 + 0x28),0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_05cf59f0(uStack000000000000001c,uStack0000000000000018,uStack0000000000000014,
                       *(long *)(unaff_x19 + 0x20),0);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            FUN_05cf598c(uStack0000000000000010,uStack000000000000000c,uStack0000000000000008,
                         in_stack_00000000._4_4_,*(long *)(unaff_x19 + 0x20),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


