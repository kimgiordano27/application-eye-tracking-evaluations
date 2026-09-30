/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnInstanceCreate
ENTRY_POINT: 03168c78
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


void OVRPlugin_UnityOpenXR__OnInstanceCreate(void)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined4 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
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
  ulong unaff_d8;
  float unaff_s9;
  float unaff_s10;
  float fVar9;
  float fVar10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong uVar11;
  float unaff_s14;
  float fVar12;
  ulong unaff_d15;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  
  do {
    thunk_FUN_01ac7298();
    uVar4 = unaff_d11;
    uVar11 = unaff_d12;
    fVar5 = unaff_s10;
    do {
      unaff_s10 = unaff_s14;
      unaff_d11 = unaff_d15;
      unaff_d12 = unaff_d8;
                    /* try { // try from 03168c7c to 03268c83 has its CatchHandler @ 03168c84 */
      lVar1 = *unaff_x20;
      if (lVar1 == 0) goto LAB_03168ea0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03168c64 with catch @ 03168c84
                       catch(type#2 @ 00000000) { ... } // from try @ 03168c7c with catch @ 03168c84
                        */
                    /* try { // try from 03168c88 to 03268cc7 has its CatchHandler @ 03168c88
                       catch() { ... } // from try @ 03168c88 with catch @ 03168c88
                       catch() { ... } // from try @ 03168d04 with catch @ 03168c88
                       catch() { ... } // from try @ 03168d40 with catch @ 03168c88
                       catch() { ... } // from try @ 03168d8c with catch @ 03168c88 */
      if (*(uint *)(lVar1 + 0x18) <= unaff_x27) goto LAB_03168e9c;
      lVar1 = lVar1 + unaff_x26;
      *(float *)(lVar1 + 0x20) = fStack0000000000000038 * unaff_s10;
      *(float *)(lVar1 + 0x24) = fStack0000000000000034 * (float)unaff_d11;
      *(float *)(lVar1 + 0x28) = fStack0000000000000030 * (float)unaff_d12;
      lVar1 = *unaff_x20;
      if (lVar1 == 0) goto LAB_03168ea0;
      if (*(char *)(unaff_x29 + 0x25d) == '\0') {
        thunk_FUN_01ad9084();
                    /* try { // try from 03168cc8 to 03268cd7 has its CatchHandler @ 03168d44 */
        *(char *)(unaff_x29 + 0x25d) = unaff_w28;
      }
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                    /* try { // try from 03168cd8 to 03268cdf has its CatchHandler @ 03168d40 */
        thunk_FUN_01ac7298();
      }
      fVar5 = unaff_s10 - fVar5;
      fVar7 = (float)unaff_d11 - (float)uVar4;
      fVar8 = (float)unaff_d12 - (float)uVar11;
                    /* try { // try from 03168cf8 to 03268d03 has its CatchHandler @ 03168d48 */
      fVar9 = SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar7 * fVar7);
                    /* try { // try from 03168d04 to 03268d3b has its CatchHandler @ 03168c88 */
      fVar10 = in_stack_00000028._4_4_;
      if (fVar9 <= in_stack_00000028._4_4_) {
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = unaff_w28;
        }
                    /* try { // try from 03168d3c to 03268d3f has its CatchHandler @ 03168d48 */
        pfVar2 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        fVar5 = *pfVar2;
        fVar7 = pfVar2[1];
        fVar8 = pfVar2[2];
      }
      else {
        fVar5 = fVar5 / fVar9;
        fVar7 = fVar7 / fVar9;
        fVar8 = fVar8 / fVar9;
      }
      uVar6 = FUN_039148b4(fVar5,0);
      if (*(uint *)(lVar1 + 0x18) <= unaff_x27) goto LAB_03168e9c;
      lVar1 = lVar1 + unaff_x26;
      *(undefined4 *)(lVar1 + 0x2c) = uVar6;
      *(float *)(lVar1 + 0x30) = fVar7;
      *(float *)(lVar1 + 0x34) = fVar8;
      *(float *)(lVar1 + 0x38) = fVar10;
      unaff_x27 = unaff_x27 + 1;
      unaff_s9 = unaff_s9 + fVar9;
      unaff_x26 = unaff_x26 + 0x20;
      if ((long)*(int *)(unaff_x19 + 0x50) <= (long)unaff_x27) {
        if (*(int *)(unaff_x19 + 0x50) < 2) {
          return;
        }
        lVar3 = *unaff_x20;
        lVar1 = 0x5c;
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
      uVar4 = unaff_d11;
      uVar11 = unaff_d12;
      fVar5 = unaff_s10;
    } while (*(int *)(*unaff_x23 + 0xe0) != 0);
  } while( true );
LAB_03168db0:
  if (lVar3 == 0) {
LAB_03168ea0:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar3 + 0x18) <= uVar4)) {
LAB_03168e9c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  lVar3 = lVar3 + lVar1;
  fVar10 = *(float *)(lVar3 + -0x38);
  fVar7 = *(float *)(lVar3 + -0x34);
  fVar5 = *(float *)(lVar3 + -0x3c);
  fVar12 = *(float *)(lVar3 + -0x1c);
  fVar9 = *(float *)(lVar3 + -0x18);
  fVar8 = *(float *)(lVar3 + -0x14);
  if (*(char *)(unaff_x25 + 0x25c) == '\0') {
    thunk_FUN_01ad9084();
    *(undefined1 *)(unaff_x25 + 0x25c) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar3 = *unaff_x20;
  if (lVar3 == 0) goto LAB_03168ea0;
  if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar3 + 0x18) <= uVar4))
  goto LAB_03168e9c;
  fVar5 = fVar5 - fVar12;
  fVar10 = fVar10 - fVar9;
  fVar7 = fVar7 - fVar8;
  *(float *)(lVar3 + lVar1) =
       SQRT(fVar5 * fVar5 + fVar10 * fVar10 + fVar7 * fVar7) / unaff_s9 +
       ((float *)(lVar3 + lVar1))[-8];
  uVar4 = uVar4 + 1;
  lVar1 = lVar1 + 0x20;
  if ((long)*(int *)(unaff_x19 + 0x50) <= (long)uVar4) {
    return;
  }
  goto LAB_03168db0;
}


