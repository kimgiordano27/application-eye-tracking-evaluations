/*
FUNCTION_NAME: OVRManager$$remove_SpaceListSaveComplete
ENTRY_POINT: 06aa9944
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceListSaveComplete(void)

{
  float *pfVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float unaff_s8;
  float fVar15;
  float unaff_s9;
  float unaff_s10;
  float fVar16;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined8 in_stack_00000008;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  FUN_0335b6c8(&DAT_083ce8b0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0xcc3) = 1;
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar9 = (ulong)(uint)DAT_012edb5c;
  uVar12 = (ulong)(uint)(unaff_s9 * unaff_s9);
  fVar3 = SQRT(unaff_s9 * unaff_s9 + unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10);
  if (fVar3 <= DAT_012edb5c) {
    if (DAT_086d7cc6 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc6 = '\x01';
    }
    pfVar1 = *(float **)(DAT_083d2c90 + 0xb8);
    fVar15 = *pfVar1;
    fVar16 = pfVar1[1];
    fVar3 = pfVar1[2];
  }
  else {
    fVar15 = unaff_s8 / fVar3;
    fVar16 = unaff_s10 / fVar3;
    fVar3 = unaff_s9 / fVar3;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar6 = FUN_07a193bc(*(long *)(unaff_x19 + 0x20),0);
    fVar15 = (float)FUN_07a009b0(fVar15,fVar16,fVar3,uVar6,uVar9,uVar12,0);
    fVar5 = (float)uVar6;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar13 = fVar5;
      fVar7 = fVar16;
      fVar10 = fVar3;
      FUN_07a172b0(*(long *)(unaff_x19 + 0x20),0);
      fVar4 = (float)FUN_07a00400(0);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      fVar8 = (fVar15 * fVar10 + fVar16 * fVar13 + fVar5 * fVar7) - fVar3 * fVar4;
      fVar11 = (fVar16 * fVar4 + fVar3 * fVar13 + fVar5 * fVar10) - fVar15 * fVar7;
      fVar14 = ((fVar5 * fVar13 - fVar15 * fVar4) - fVar16 * fVar7) - fVar3 * fVar10;
      fVar3 = (float)FUN_07a00400((fVar3 * fVar7 + fVar15 * fVar13 + fVar5 * fVar4) -
                                  fVar16 * fVar10,fVar8,fVar11,fVar14,0);
      if (lVar2 != 0) {
        fVar15 = (unaff_s12 * fVar3 + unaff_s13 * fVar14 + unaff_s11 * fVar11) - unaff_s14 * fVar8;
        fVar16 = (unaff_s14 * fVar11 + unaff_s12 * fVar14 + unaff_s11 * fVar8) - unaff_s13 * fVar3;
        FUN_07a1914c((unaff_s13 * fVar8 + unaff_s14 * fVar14 + unaff_s11 * fVar3) -
                     unaff_s12 * fVar11,fVar16,fVar15,
                     ((unaff_s11 * fVar14 - unaff_s14 * fVar3) - unaff_s12 * fVar8) -
                     unaff_s13 * fVar11,lVar2,0);
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if (lVar2 != 0) {
          fVar3 = (float)FUN_07a18d2c(lVar2,0);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            fStack0000000000000018 = fStack0000000000000018 + fVar15;
            fStack000000000000001c = fStack000000000000001c + fVar16;
            fVar5 = (float)FUN_07a18d2c(*(long *)(unaff_x19 + 0x28),0);
            FUN_07a18dcc((in_stack_00000008._4_4_ + fVar3) - fVar5,fStack000000000000001c - fVar16,
                         fStack0000000000000018 - fVar15,lVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


