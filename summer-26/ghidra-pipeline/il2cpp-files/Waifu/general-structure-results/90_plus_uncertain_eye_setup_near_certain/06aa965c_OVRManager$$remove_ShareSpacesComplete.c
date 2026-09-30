/*
FUNCTION_NAME: OVRManager$$remove_ShareSpacesComplete
ENTRY_POINT: 06aa965c
PROGRAM: Waifu-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_ShareSpacesComplete
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,int param_6)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  undefined8 uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ulong uStack0000000000000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  uStack0000000000000020 = 0;
  _fStack0000000000000028 = 0;
  if (param_6 == 0) {
    return;
  }
  if (*(long *)(param_5 + 0x28) == 0) goto LAB_06aa9bac;
  uVar9 = param_2;
  uVar15 = param_3;
  uVar19 = param_4;
  fVar3 = (float)FUN_07a18d2c(*(long *)(param_5 + 0x28),0);
  fVar20 = (float)uVar15;
  fVar22 = (float)uVar9;
  fVar21 = (float)uVar19;
  if (param_6 == 1) {
    FUN_07a00848(param_1,param_2,param_3,param_4,&stack0x00000020,&stack0x0000002c,0);
    fVar21 = fStack000000000000002c * DAT_012edea0;
    _fStack0000000000000028 = CONCAT44(fVar21,fStack0000000000000028);
    if (DAT_086ef698 == (code *)0x0) {
      DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
    }
    fVar8 = (float)(*DAT_086ef698)();
    uVar13 = _fStack0000000000000028;
    fVar21 = fVar21 * fVar8;
    fVar24 = (float)uStack0000000000000020;
    fVar25 = (float)(uStack0000000000000020 >> 0x20);
    _fStack0000000000000028 = CONCAT44(fVar21,fStack0000000000000028);
    lVar2 = *(long *)(param_5 + 0x20);
    fVar8 = fStack0000000000000028;
    fVar21 = (float)FUN_07a008f8(fVar21,uStack0000000000000020 & 0xffffffff,
                                 uStack0000000000000020 >> 0x20,uVar13 & 0xffffffff,0);
    if ((*(long *)(param_5 + 0x20) == 0) ||
       (fVar17 = fVar8, fVar23 = fVar25, fVar4 = fVar24,
       fVar7 = (float)FUN_07a172b0(*(long *)(param_5 + 0x20),0), lVar2 == 0)) goto LAB_06aa9bac;
    fVar5 = (fVar21 * fVar4 + fVar8 * fVar23 + fVar25 * fVar17) - fVar24 * fVar7;
    fVar12 = (fVar25 * fVar7 + fVar8 * fVar4 + fVar24 * fVar17) - fVar21 * fVar23;
    FUN_07a1914c((fVar24 * fVar23 + fVar8 * fVar7 + fVar21 * fVar17) - fVar25 * fVar4,fVar12,fVar5,
                 ((fVar8 * fVar17 - fVar21 * fVar7) - fVar24 * fVar4) - fVar25 * fVar23,lVar2,0);
  }
  else {
    fVar17 = (float)param_1;
    fVar24 = (float)param_2;
    fVar8 = (float)param_4;
    fVar25 = (float)param_3;
    if (param_6 == 3) {
      lVar2 = *(long *)(param_5 + 0x20);
      if (lVar2 == 0) goto LAB_06aa9bac;
      fVar23 = fVar22;
      fVar4 = fVar20;
      fVar7 = (float)FUN_07a172b0(lVar2,0);
      fVar12 = (fVar25 * fVar7 + fVar8 * fVar23 + fVar24 * fVar21) - fVar17 * fVar4;
      fVar5 = (fVar17 * fVar23 + fVar8 * fVar4 + fVar25 * fVar21) - fVar24 * fVar7;
      FUN_07a1914c((fVar24 * fVar4 + fVar8 * fVar7 + fVar17 * fVar21) - fVar25 * fVar23,fVar12,fVar5
                   ,((fVar8 * fVar21 - fVar17 * fVar7) - fVar24 * fVar23) - fVar25 * fVar4,lVar2,0);
    }
    else {
      fVar12 = fVar22;
      fVar5 = fVar20;
      if (param_6 == 2) {
        if (*(long *)(param_5 + 0x28) == 0) goto LAB_06aa9bac;
        fVar21 = fVar20;
        fVar23 = fVar22;
        fVar4 = (float)FUN_07a194cc(*(long *)(param_5 + 0x28),0);
        if (*(long *)(param_5 + 0x20) == 0) goto LAB_06aa9bac;
        fVar7 = fVar23;
        fVar12 = fVar21;
        fVar5 = (float)FUN_07a193bc(*(long *)(param_5 + 0x20),0);
        if (DAT_086d898f == '\0') {
          FUN_0335b6c8(&DAT_083ce8d0,1);
          DataMemoryBarrier(2,3);
          DAT_086d898f = '\x01';
        }
        fVar6 = fVar12 * fVar12 + fVar5 * fVar5 + fVar7 * fVar7;
        if (**(float **)(DAT_083ce8d0 + 0xb8) <= fVar6) {
          fVar10 = fVar21 * fVar12 + fVar4 * fVar5 + fVar23 * fVar7;
          fVar4 = fVar4 - (fVar5 * fVar10) / fVar6;
          fVar23 = fVar23 - (fVar7 * fVar10) / fVar6;
          fVar21 = fVar21 - (fVar12 * fVar10) / fVar6;
        }
        if (DAT_086d7cc3 == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          DAT_086d7cc3 = '\x01';
        }
        if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar13 = (ulong)(uint)DAT_012edb5c;
        uVar16 = (ulong)(uint)(fVar21 * fVar21);
        fVar7 = SQRT(fVar21 * fVar21 + fVar4 * fVar4 + fVar23 * fVar23);
        if (fVar7 <= DAT_012edb5c) {
          if (DAT_086d7cc6 == '\0') {
            FUN_0335b6c8(&DAT_083d2c90,1);
            DataMemoryBarrier(2,3);
            DAT_086d7cc6 = '\x01';
          }
          pfVar1 = *(float **)(DAT_083d2c90 + 0xb8);
          fVar4 = *pfVar1;
          fVar23 = pfVar1[1];
          fVar21 = pfVar1[2];
        }
        else {
          fVar4 = fVar4 / fVar7;
          fVar23 = fVar23 / fVar7;
          fVar21 = fVar21 / fVar7;
        }
        if (*(long *)(param_5 + 0x20) == 0) goto LAB_06aa9bac;
        uVar9 = FUN_07a193bc(*(long *)(param_5 + 0x20),0);
        fVar4 = (float)FUN_07a009b0(fVar4,fVar23,fVar21,uVar9,uVar13,uVar16,0);
        fVar7 = (float)uVar9;
        if (*(long *)(param_5 + 0x20) == 0) goto LAB_06aa9bac;
        fVar12 = fVar7;
        fVar5 = fVar23;
        fVar6 = fVar21;
        FUN_07a172b0(*(long *)(param_5 + 0x20),0);
        fVar10 = (float)FUN_07a00400(0);
        lVar2 = *(long *)(param_5 + 0x20);
        fVar11 = (fVar4 * fVar6 + fVar23 * fVar12 + fVar7 * fVar5) - fVar21 * fVar10;
        fVar14 = (fVar23 * fVar10 + fVar21 * fVar12 + fVar7 * fVar6) - fVar4 * fVar5;
        fVar18 = ((fVar7 * fVar12 - fVar4 * fVar10) - fVar23 * fVar5) - fVar21 * fVar6;
        fVar21 = (float)FUN_07a00400((fVar21 * fVar5 + fVar4 * fVar12 + fVar7 * fVar10) -
                                     fVar23 * fVar6,fVar11,fVar14,fVar18,0);
        if (lVar2 == 0) goto LAB_06aa9bac;
        fVar5 = (fVar24 * fVar21 + fVar25 * fVar18 + fVar8 * fVar14) - fVar17 * fVar11;
        fVar12 = (fVar17 * fVar14 + fVar24 * fVar18 + fVar8 * fVar11) - fVar25 * fVar21;
        FUN_07a1914c((fVar25 * fVar11 + fVar17 * fVar18 + fVar8 * fVar21) - fVar24 * fVar14,fVar12,
                     fVar5,((fVar8 * fVar18 - fVar17 * fVar21) - fVar24 * fVar11) - fVar25 * fVar14,
                     lVar2,0);
      }
    }
  }
  lVar2 = *(long *)(param_5 + 0x20);
  if (lVar2 != 0) {
    fVar21 = (float)FUN_07a18d2c(lVar2,0);
    if (*(long *)(param_5 + 0x28) != 0) {
      fVar20 = fVar20 + fVar5;
      fVar22 = fVar22 + fVar12;
      fVar8 = (float)FUN_07a18d2c(*(long *)(param_5 + 0x28),0);
      FUN_07a18dcc((fVar3 + fVar21) - fVar8,fVar22 - fVar12,fVar20 - fVar5,lVar2,0);
      return;
    }
  }
LAB_06aa9bac:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


