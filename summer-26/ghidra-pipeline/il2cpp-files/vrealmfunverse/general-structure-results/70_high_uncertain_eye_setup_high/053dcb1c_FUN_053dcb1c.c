/*
FUNCTION_NAME: FUN_053dcb1c
ENTRY_POINT: 053dcb1c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_053dcb1c(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  puVar2 = PTR_DAT_06316c60;
                    /* catch() { ... } // from try @ 053dca14 with catch @ 053dcb1c */
  puVar3 = PTR_DAT_06316c58;
                    /* catch() { ... } // from try @ 053dc9d4 with catch @ 053dcb20 */
                    /* catch() { ... } // from try @ 053dc9f8 with catch @ 053dcb24 */
                    /* catch() { ... } // from try @ 053dc9e4 with catch @ 053dcb28 */
                    /* catch() { ... } // from try @ 053dc9b0 with catch @ 053dcb2c */
                    /* catch() { ... } // from try @ 053dc9c0 with catch @ 053dcb30 */
                    /* catch() { ... } // from try @ 053dc98c with catch @ 053dcb34 */
                    /* catch() { ... } // from try @ 053dc99c with catch @ 053dcb38 */
                    /* catch() { ... } // from try @ 053dcb08 with catch @ 053dcb3c */
                    /* catch() { ... } // from try @ 053dc97c with catch @ 053dcb40 */
                    /* catch() { ... } // from try @ 053dcb04 with catch @ 053dcb44 */
                    /* catch() { ... } // from try @ 053dca3c with catch @ 053dcb48 */
                    /* catch() { ... } // from try @ 053dc918 with catch @ 053dcb4c */
  if ((DAT_066d0a06 & 1) == 0) {
                    /* catch() { ... } // from try @ 053dc8b4 with catch @ 053dcb50 */
                    /* catch() { ... } // from try @ 053dcafc with catch @ 053dcb54 */
    FUN_02b3c81c(PTR_DAT_06312a10);
    FUN_02b3c81c(PTR_DAT_06316c50);
                    /* try { // try from 053dcb70 to 054dcb73 has its CatchHandler @ 053dcb7c */
    FUN_02b3c81c(PTR_DAT_06316c58);
                    /* catch() { ... } // from try @ 053dcb70 with catch @ 053dcb7c */
    FUN_02b3c81c(PTR_DAT_06316c60);
                    /* try { // try from 053dcb80 to 054dcb87 has its CatchHandler @ 053dcb90 */
                    /* try { // try from 053dcb88 to 054dcb93 has its CatchHandler @ 053dc7d4 */
    FUN_02b3c81c(OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo);
                    /* catch() { ... } // from try @ 053dcb80 with catch @ 053dcb90 */
    DAT_066d0a06 = 1;
  }
                    /* try { // try from 053dcb94 to 054dcc67 has its CatchHandler @ 053dcb94
                       catch() { ... } // from try @ 053dcb94 with catch @ 053dcb94
                       catch() { ... } // from try @ 053dcd38 with catch @ 053dcb94
                       catch() { ... } // from try @ 053dcde0 with catch @ 053dcb94
                       catch() { ... } // from try @ 053dce34 with catch @ 053dcb94 */
  lVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_03752884(lVar7,*(undefined8 *)puVar3);
  puVar3 = PTR_DAT_06316c50;
  if (param_1 != 0) {
    uVar4 = FUN_04c0ecb4(param_1,0x60,0,0);
    puVar2 = PTR_DAT_06312a10;
    if ((int)uVar4 < 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        if (param_2 != 0) {
          uVar8 = FUN_04c0c288(param_1,uVar5,uVar4 - uVar5,0);
          FUN_04c1633c(param_2,uVar8,0);
        }
        uVar5 = FUN_04c0ecc0(param_1,0x2e,uVar5 + 1,uVar4 + ~uVar5,0);
        if (-1 < (int)uVar5) {
          if (lVar7 == 0) goto LAB_053dcec8;
          do {
            lVar10 = *(long *)(lVar7 + 0x10);
            lVar11 = *(long *)puVar3;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_053dcec8;
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0;
            }
            else {
                    /* try { // try from 053dcc68 to 054dcc8f has its CatchHandler @ 053dce00 */
              FUN_03753114(lVar7,0,*(undefined8 *)
                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            uVar5 = FUN_04c0ecc0(param_1,0x2e,uVar5 + 1,uVar4 + ~uVar5,0);
          } while (-1 < (int)uVar5);
        }
        uVar5 = FUN_04c0ecb4(param_1,0x2e,uVar4,0);
        if ((int)uVar5 < 0) {
          uVar8 = FUN_04c0e450(param_1,uVar4 + 1,0);
          lVar10 = *(long *)puVar2;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02b9ad44(lVar10);
          }
          uVar9 = FUN_04d046d8(0);
          uVar6 = FUN_04d790dc(uVar8,uVar9,0);
          if (lVar7 == 0) goto LAB_053dcec8;
          lVar10 = *(long *)(lVar7 + 0x10);
          lVar11 = *(long *)puVar3;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_053dcec8;
          uVar4 = *(uint *)(lVar7 + 0x18);
          if (*(uint *)(lVar10 + 0x18) <= uVar4) {
            lVar10 = *(long *)(lVar11 + 0x20);
            goto LAB_053dce88;
          }
          *(uint *)(lVar7 + 0x18) = uVar4 + 1;
          *(undefined4 *)(lVar10 + (long)(int)uVar4 * 4 + 0x20) = uVar6;
          goto LAB_053dce94;
        }
                    /* try { // try from 053dcccc to 054dccf7 has its CatchHandler @ 053dcdfc */
        uVar8 = FUN_04c0c288(param_1,uVar4 + 1,uVar5 + ~uVar4,0);
        lVar10 = *(long *)puVar2;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(lVar10);
        }
        uVar9 = FUN_04d046d8(0);
        uVar6 = FUN_04d790dc(uVar8,uVar9,0);
        if (lVar7 == 0) goto LAB_053dcec8;
        lVar10 = *(long *)(lVar7 + 0x10);
        lVar11 = *(long *)puVar3;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_053dcec8;
        uVar4 = *(uint *)(lVar7 + 0x18);
                    /* try { // try from 053dcd2c to 054dcd37 has its CatchHandler @ 053dcdec */
        if (uVar4 < *(uint *)(lVar10 + 0x18)) {
                    /* try { // try from 053dcd38 to 054dcdcf has its CatchHandler @ 053dcb94 */
          *(uint *)(lVar7 + 0x18) = uVar4 + 1;
          *(undefined4 *)(lVar10 + (long)(int)uVar4 * 4 + 0x20) = uVar6;
        }
        else {
          FUN_03753114(lVar7,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        uVar4 = FUN_04c0ecb4(param_1,0x60,uVar5,0);
      } while (-1 < (int)uVar4);
    }
    if (param_2 != 0) {
      uVar8 = FUN_04c0e450(param_1,uVar5,0);
      FUN_04c1633c(param_2,uVar8,0);
    }
    if (lVar7 != 0) {
      lVar10 = *(long *)(lVar7 + 0x10);
      lVar11 = *(long *)puVar3;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar4 = *(uint *)(lVar7 + 0x18);
        if (uVar4 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar4 + 1;
          *(undefined4 *)(lVar10 + (long)(int)uVar4 * 4 + 0x20) = 0;
        }
        else {
          lVar10 = *(long *)(lVar11 + 0x20);
          uVar6 = 0;
LAB_053dce88:
          FUN_03753114(lVar7,uVar6,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x70));
        }
LAB_053dce94:
        if (param_2 != 0) {
          FUN_04c1633c(param_2,*(undefined8 *)
                                OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo,
                       0);
        }
        return lVar7;
      }
    }
  }
LAB_053dcec8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


