/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$DeserializeVector3
ENTRY_POINT: 05cba0b0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Photon_Realtime_CustomTypesUnity__DeserializeVector3(void)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined8 in_stack_00000068;
  
  if (*(int *)(*(long *)PTR_DAT_0711b788 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar4 = unaff_s12;
  fVar8 = unaff_s10;
  uVar2 = FUN_05cba2b8(unaff_s9,(long)&stack0x00000068 + 4);
  if ((uVar2 & 1) == 0) {
    uVar9 = *unaff_x21;
    uVar5 = *(undefined4 *)(unaff_x21 + 1);
    lVar3 = FUN_069d3a80();
    if (lVar3 != 0) {
      fVar6 = (float)FUN_069e7468(lVar3,0);
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      cVar1 = DAT_07546bbf;
      *unaff_x19 = uVar9;
      *(undefined4 *)(unaff_x19 + 1) = uVar5;
joined_r0x05cba1d4:
      if (cVar1 == '\0') {
        FUN_03188a78(PTR_DAT_070c22f8);
        DAT_07546bbf = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      fVar7 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar8 * fVar8);
      if (fVar7 <= DAT_012e3cb4) {
        if (DAT_075457d6 == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          DAT_075457d6 = '\x01';
        }
        uVar9 = **(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
        fVar4 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 1);
      }
      else {
        uVar9 = CONCAT44(fVar8 / fVar7,fVar6 / fVar7);
        fVar4 = fVar4 / fVar7;
      }
      *(undefined8 *)((long)unaff_x19 + 0xc) = uVar9;
      *(float *)((long)unaff_x19 + 0x14) = fVar4;
      return;
    }
  }
  else {
    lVar3 = FUN_069d3a80();
    if (lVar3 != 0) {
      fVar4 = atan2f(unaff_s9 + unaff_s12 * in_stack_00000068._4_4_,
                     unaff_s14 + unaff_s10 + unaff_s13 * in_stack_00000068._4_4_);
      fVar10 = -1.0;
      fVar7 = unaff_s8 + unaff_s11 * in_stack_00000068._4_4_;
      uVar5 = FUN_069e515c(unaff_s14 * fVar4,lVar3,0);
      fVar4 = fVar10;
      fVar8 = fVar7;
      lVar3 = FUN_069d3a80();
      if (lVar3 != 0) {
        fVar6 = (float)FUN_069e7560(lVar3,0);
        *unaff_x19 = 0;
        unaff_x19[1] = 0;
        cVar1 = DAT_07546bbf;
        unaff_x19[2] = 0;
        *(undefined4 *)unaff_x19 = uVar5;
        *(float *)((long)unaff_x19 + 4) = fVar7;
        *(float *)(unaff_x19 + 1) = fVar10;
        goto joined_r0x05cba1d4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


