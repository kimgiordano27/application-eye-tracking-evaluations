/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnInstanceCreate
ENTRY_POINT: 03168d40
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnInstanceCreate(undefined **param_1)

{
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined4 *unaff_x21;
  long *unaff_x22;
  long lVar3;
  long *unaff_x23;
  long unaff_x24;
  ulong uVar4;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  char unaff_w28;
  long unaff_x29;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float in_s3;
  ulong unaff_d8;
  float unaff_s9;
  float unaff_s10;
  float fVar9;
  float fVar10;
  float unaff_s14;
  float fVar11;
  ulong unaff_d15;
  ulong uVar12;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  
  do {
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168cd8 with catch @ 03168d40
                       try { // try from 03168d40 to 03268d5f has its CatchHandler @ 03168c88 */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168cc8 with catch @ 03168d44
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168cf8 with catch @ 03168d48
                       catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168d3c with catch @ 03168d48
                        */
    pfVar1 = *(float **)(*(long *)param_1[0x22] + 0xb8);
    fVar5 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar8 = pfVar1[2];
    uVar4 = unaff_d8;
    uVar12 = unaff_d15;
    fVar9 = unaff_s14;
    while( true ) {
      uVar6 = FUN_039148b4(fVar5,0);
                    /* try { // try from 03168d60 to 03268d63 has its CatchHandler @ 03168d74 */
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x27) goto LAB_03168e9c;
      lVar3 = unaff_x24 + unaff_x26;
      *(undefined4 *)(lVar3 + 0x2c) = uVar6;
      *(float *)(lVar3 + 0x30) = fVar7;
      *(float *)(lVar3 + 0x34) = fVar8;
      *(float *)(lVar3 + 0x38) = in_s3;
                    /* catch() { ... } // from try @ 03168d60 with catch @ 03168d74 */
      unaff_x27 = unaff_x27 + 1;
      unaff_s9 = unaff_s9 + unaff_s10;
                    /* try { // try from 03168d80 to 03268d8b has its CatchHandler @ 03168da0 */
      unaff_x26 = unaff_x26 + 0x20;
                    /* try { // try from 03168d8c to 03268d97 has its CatchHandler @ 03168c88 */
      if ((long)*(int *)(unaff_x19 + 0x50) <= (long)unaff_x27) {
                    /* try { // try from 03168d98 to 03268d9f has its CatchHandler @ 03168da0 */
        if (*(int *)(unaff_x19 + 0x50) < 2) {
          return;
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03168d80 with catch @ 03168da0
                       catch(type#2 @ 00000000) { ... } // from try @ 03168d98 with catch @ 03168da0
                        */
        lVar2 = *unaff_x20;
                    /* try { // try from 03168da4 to 03268de3 has its CatchHandler @ 03168da4
                       catch() { ... } // from try @ 03168da4 with catch @ 03168da4
                       catch() { ... } // from try @ 03168e20 with catch @ 03168da4
                       catch() { ... } // from try @ 03168ea8 with catch @ 03168da4 */
        lVar3 = 0x5c;
        uVar4 = 1;
        goto LAB_03168db0;
      }
      uVar6 = *unaff_x21;
      unaff_d15 = (ulong)(uint)unaff_x21[1];
      unaff_d8 = (ulong)(uint)unaff_x21[2];
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      unaff_s14 = (float)FUN_0316925c(uVar6,unaff_d15,unaff_d8,in_stack_00000040,
                                      uStack000000000000003c);
      if (*(char *)(unaff_x25 + 0x25c) == '\0') {
        thunk_FUN_01ad9084();
        *(char *)(unaff_x25 + 0x25c) = unaff_w28;
      }
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar3 = *unaff_x20;
      if (lVar3 == 0) goto LAB_03168ea0;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x27) goto LAB_03168e9c;
      lVar3 = lVar3 + unaff_x26;
      *(float *)(lVar3 + 0x20) = fStack0000000000000038 * unaff_s14;
      *(float *)(lVar3 + 0x24) = fStack0000000000000034 * (float)unaff_d15;
      *(float *)(lVar3 + 0x28) = fStack0000000000000030 * (float)unaff_d8;
      unaff_x24 = *unaff_x20;
      if (unaff_x24 == 0) goto LAB_03168ea0;
      if (*(char *)(unaff_x29 + 0x25d) == '\0') {
        thunk_FUN_01ad9084();
        *(char *)(unaff_x29 + 0x25d) = unaff_w28;
      }
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar9 = unaff_s14 - fVar9;
      fVar7 = (float)unaff_d15 - (float)uVar12;
      fVar8 = (float)unaff_d8 - (float)uVar4;
      unaff_s10 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7);
      in_s3 = in_stack_00000028._4_4_;
      if (unaff_s10 <= in_stack_00000028._4_4_) break;
      fVar5 = fVar9 / unaff_s10;
      fVar7 = fVar7 / unaff_s10;
      fVar8 = fVar8 / unaff_s10;
      uVar4 = unaff_d8;
      uVar12 = unaff_d15;
      fVar9 = unaff_s14;
    }
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = unaff_w28;
    }
    param_1 = &Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__;
  } while( true );
LAB_03168db0:
  if (lVar2 == 0) {
LAB_03168ea0:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar4)) {
LAB_03168e9c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  lVar2 = lVar2 + lVar3;
  fVar5 = *(float *)(lVar2 + -0x38);
  fVar7 = *(float *)(lVar2 + -0x34);
  fVar9 = *(float *)(lVar2 + -0x3c);
  fVar11 = *(float *)(lVar2 + -0x1c);
  fVar10 = *(float *)(lVar2 + -0x18);
  fVar8 = *(float *)(lVar2 + -0x14);
  if (*(char *)(unaff_x25 + 0x25c) == '\0') {
    thunk_FUN_01ad9084();
    *(undefined1 *)(unaff_x25 + 0x25c) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar2 = *unaff_x20;
  if (lVar2 == 0) goto LAB_03168ea0;
  if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar4))
  goto LAB_03168e9c;
  fVar9 = fVar9 - fVar11;
  fVar5 = fVar5 - fVar10;
  fVar7 = fVar7 - fVar8;
  *(float *)(lVar2 + lVar3) =
       SQRT(fVar9 * fVar9 + fVar5 * fVar5 + fVar7 * fVar7) / unaff_s9 +
       ((float *)(lVar2 + lVar3))[-8];
  uVar4 = uVar4 + 1;
  lVar3 = lVar3 + 0x20;
  if ((long)*(int *)(unaff_x19 + 0x50) <= (long)uVar4) {
    return;
  }
  goto LAB_03168db0;
}


