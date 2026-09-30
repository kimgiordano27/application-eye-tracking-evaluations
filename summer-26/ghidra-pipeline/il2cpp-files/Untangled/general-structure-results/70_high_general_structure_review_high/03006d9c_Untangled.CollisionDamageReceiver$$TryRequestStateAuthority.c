/*
FUNCTION_NAME: Untangled.CollisionDamageReceiver$$TryRequestStateAuthority
ENTRY_POINT: 03006d9c
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Untangled_CollisionDamageReceiver__TryRequestStateAuthority(long param_1)

{
  long lVar1;
  float *pfVar2;
  long unaff_x19;
  long lVar3;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float unaff_s9;
  float fVar9;
  float unaff_s10;
  undefined4 uVar10;
  float fVar11;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar12;
  float fVar13;
  float fStack000000000000000c;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  fVar4 = *(float *)(param_1 + 0x28);
  fVar5 = fVar4;
  if (90.0 < fVar4) {
    fVar5 = 90.0;
  }
                    /* try { // try from 03006db0 to 03106dcb has its CatchHandler @ 03006db0
                       catch() { ... } // from try @ 03006db0 with catch @ 03006db0
                       catch() { ... } // from try @ 03006e20 with catch @ 03006db0 */
  fVar5 = fVar5 / 90.0;
  if (fVar4 < 0.0) {
    fVar5 = 0.0;
  }
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    fStack000000000000000c = unaff_s10;
                    /* try { // try from 03006dcc to 03106dd7 has its CatchHandler @ 03006e50 */
    fVar4 = (float)FUN_0668cbb8(fVar5,*(long *)(unaff_x19 + 0xa0),0);
    if (*(long *)(unaff_x19 + 0xa8) != 0) {
      FUN_0668cbb8(fVar5,*(long *)(unaff_x19 + 0xa8),0);
      FUN_03007140();
      uVar10 = *(undefined4 *)(unaff_x19 + 0x8c);
      fVar5 = *(float *)(unaff_x19 + 0x90);
      fVar4 = unaff_s9 * fVar4;
      uVar7 = *(undefined4 *)(unaff_x19 + 0x2f4);
                    /* try { // try from 03006e00 to 03106e1f has its CatchHandler @ 03006e3c */
      fVar13 = *(float *)(unaff_x19 + 0x2f8);
      fVar9 = *(float *)(unaff_x19 + 0x2fc);
                    /* try { // try from 03006e20 to 03106e6b has its CatchHandler @ 03006db0 */
      FUN_066bfb3c(0);
                    /* catch() { ... } // from try @ 03006e00 with catch @ 03006e3c */
                    /* catch() { ... } // from try @ 03006dcc with catch @ 03006e50 */
      fVar5 = (float)FUN_066bc078(uVar7,fVar13,fVar9,unaff_s13 * fVar4,unaff_s12 * fVar4,
                                  unaff_s11 * fVar4,uVar10,unaff_s14 * fVar5,unaff_x19 + 0x300,0);
      *(float *)(unaff_x19 + 0x2f4) = fVar5;
      *(float *)(unaff_x19 + 0x2f8) = fVar13;
      *(float *)(unaff_x19 + 0x2fc) = fVar9;
      if (DAT_071bab7b == '\0') {
        FUN_02f07e70(PTR_DAT_06d02c10);
        DAT_071bab7b = '\x01';
        fVar5 = *(float *)(unaff_x19 + 0x2f4);
        fVar13 = *(float *)(unaff_x19 + 0x2f8);
        fVar9 = *(float *)(unaff_x19 + 0x2fc);
      }
      lVar1 = *(long *)(*unaff_x23 + 0xb8);
      fVar4 = *(float *)(lVar1 + 0x18);
      fVar11 = *(float *)(lVar1 + 0x1c);
      fVar12 = *(float *)(lVar1 + 0x20);
      if (*(char *)(unaff_x25 + 0xbf2) == '\0') {
        FUN_02f07e70(PTR_DAT_06d03010);
        *(undefined1 *)(unaff_x25 + 0xbf2) = 1;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      fVar8 = *(float *)(unaff_x26 + 0xc1c);
      fVar6 = SQRT(fVar9 * fVar9 + fVar5 * fVar5 + fVar13 * fVar13);
      if (fVar6 <= fVar8) {
        if (*(char *)(unaff_x24 + 0xbf5) == '\0') {
          FUN_02f07e70(PTR_DAT_06d02c10);
          *(undefined1 *)(unaff_x24 + 0xbf5) = 1;
        }
        pfVar2 = *(float **)(*unaff_x23 + 0xb8);
        fVar5 = *pfVar2;
        fVar13 = pfVar2[1];
        fVar9 = pfVar2[2];
      }
      else {
        fVar5 = fVar5 / fVar6;
        fVar13 = fVar13 / fVar6;
        fVar9 = fVar9 / fVar6;
      }
      if (*(char *)(unaff_x25 + 0xbf2) == '\0') {
        FUN_02f07e70(PTR_DAT_06d03010);
        *(undefined1 *)(unaff_x25 + 0xbf2) = 1;
      }
      fVar6 = fVar11 * fVar9 - fVar12 * fVar13;
      fVar9 = fVar12 * fVar5 - fVar4 * fVar9;
      fVar5 = fVar4 * fVar13 - fVar11 * fVar5;
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      fVar4 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar9 * fVar9);
      if (fVar4 <= fVar8) {
        if (*(char *)(unaff_x24 + 0xbf5) == '\0') {
          FUN_02f07e70(PTR_DAT_06d02c10);
          *(undefined1 *)(unaff_x24 + 0xbf5) = 1;
        }
        pfVar2 = *(float **)(*unaff_x23 + 0xb8);
        fVar6 = *pfVar2;
        fVar9 = pfVar2[1];
        fVar5 = pfVar2[2];
      }
      else {
        fVar6 = fVar6 / fVar4;
        fVar9 = fVar9 / fVar4;
        fVar5 = fVar5 / fVar4;
      }
      fVar4 = *(float *)(unaff_x19 + 0x2f4);
      fVar13 = *(float *)(unaff_x19 + 0x2f8);
      fVar11 = *(float *)(unaff_x19 + 0x2fc);
      if (*(char *)(unaff_x22 + 0xbf8) == '\0') {
        FUN_02f07e70(PTR_DAT_06d03010);
        *(undefined1 *)(unaff_x22 + 0xbf8) = 1;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if (*(long *)(unaff_x19 + 0x200) != 0) {
        fVar12 = (float)UnityEngine_UIElements_MinMaxSlider__UnregisterEditingCallbacks
                                  (*(long *)(unaff_x19 + 0x200),0);
        if (*(long *)(unaff_x19 + 0x1c0) != 0) {
          lVar3 = *(long *)(unaff_x19 + 0x238);
          lVar1 = FUN_066c67b0(*(long *)(unaff_x19 + 0x1c0),0);
          if (lVar1 != 0) {
            fVar12 = SQRT(fVar4 * fVar4 + fVar13 * fVar13 + fVar11 * fVar11) / fVar12;
            fStack000000000000005c = fStack000000000000005c + fVar5 * fVar12;
            fStack0000000000000058 = fStack0000000000000058 + fVar9 * fVar12;
            fVar5 = (float)FUN_066d5d88(fStack000000000000000c + fVar6 * fVar12,lVar1,0);
            if (lVar3 != 0) {
              fStack000000000000005c = -fStack000000000000005c;
              fStack0000000000000058 = -fStack0000000000000058;
              FUN_06746630(-fVar5,lVar3,0);
              if (*(long *)(unaff_x19 + 0x238) != 0) {
                fVar5 = (float)FUN_06746590(*(long *)(unaff_x19 + 0x238),0);
                if (*(char *)(unaff_x22 + 0xbf8) == '\0') {
                  FUN_02f07e70(PTR_DAT_06d03010);
                  *(undefined1 *)(unaff_x22 + 0xbf8) = 1;
                }
                if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                *(float *)(unaff_x19 + 0x2c0) =
                     SQRT(fStack000000000000005c * fStack000000000000005c +
                          fVar5 * fVar5 + fStack0000000000000058 * fStack0000000000000058);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


