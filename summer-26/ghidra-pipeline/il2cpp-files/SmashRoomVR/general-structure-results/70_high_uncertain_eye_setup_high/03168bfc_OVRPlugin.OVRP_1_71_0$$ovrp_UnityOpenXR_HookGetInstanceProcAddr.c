/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_HookGetInstanceProcAddr
ENTRY_POINT: 03168bfc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_HookGetInstanceProcAddr(long param_1)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  uint *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  ulong uVar4;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  char unaff_w28;
  long unaff_x29;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  ulong unaff_d8;
  float unaff_s9;
  float unaff_s10;
  float fVar10;
  float fVar11;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d14;
  ulong unaff_d15;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  
  while( true ) {
    uVar4 = unaff_d8;
                    /* try { // try from 03168c00 to 03268c03 has its CatchHandler @ 03168c18 */
    if (*(int *)(param_1 + 0xe0) == 0) {
                    /* try { // try from 03168c04 to 03268c0b has its CatchHandler @ 03168c20 */
      thunk_FUN_01ac7298();
    }
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168b18 with catch @ 03168c0c
                       try { // try from 03168c0c to 03268c43 has its CatchHandler @ 03168a30 */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168b04 with catch @ 03168c10
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168af8 with catch @ 03168c14
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168c00 with catch @ 03168c18
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168a88 with catch @ 03168c1c
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168c04 with catch @ 03168c20
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168be4 with catch @ 03168c24
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168b7c with catch @ 03168c28
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168be0 with catch @ 03168c2c
                        */
                    /* try { // try from 03168c44 to 03268c47 has its CatchHandler @ 03168c58 */
    fVar5 = (float)FUN_0316925c(unaff_d15,uVar4,unaff_d14,in_stack_00000040,uStack000000000000003c);
                    /* catch() { ... } // from try @ 03168c44 with catch @ 03168c58 */
    if (*(char *)(unaff_x25 + 0x25c) == '\0') {
                    /* try { // try from 03168c64 to 03268c6f has its CatchHandler @ 03168c84 */
      thunk_FUN_01ad9084();
      *(char *)(unaff_x25 + 0x25c) = unaff_w28;
    }
                    /* try { // try from 03168c70 to 03268c7b has its CatchHandler @ 03168a30 */
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar1 = *unaff_x20;
    if (lVar1 == 0) goto LAB_03168ea0;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x27) goto LAB_03168e9c;
    lVar1 = lVar1 + unaff_x26;
    *(float *)(lVar1 + 0x20) = fStack0000000000000038 * fVar5;
    *(float *)(lVar1 + 0x24) = fStack0000000000000034 * (float)uVar4;
    *(float *)(lVar1 + 0x28) = fStack0000000000000030 * (float)unaff_d14;
    lVar1 = *unaff_x20;
    if (lVar1 == 0) goto LAB_03168ea0;
    if (*(char *)(unaff_x29 + 0x25d) == '\0') {
      thunk_FUN_01ad9084();
      *(char *)(unaff_x29 + 0x25d) = unaff_w28;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar6 = fVar5 - unaff_s10;
    fVar8 = (float)uVar4 - (float)unaff_d11;
    fVar9 = (float)unaff_d14 - (float)unaff_d12;
    fVar10 = SQRT(fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8);
    fVar11 = in_stack_00000028._4_4_;
    if (fVar10 <= in_stack_00000028._4_4_) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = unaff_w28;
      }
      pfVar2 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar6 = *pfVar2;
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
    }
    else {
      fVar6 = fVar6 / fVar10;
      fVar8 = fVar8 / fVar10;
      fVar9 = fVar9 / fVar10;
    }
    uVar7 = FUN_039148b4(fVar6,0);
    if (*(uint *)(lVar1 + 0x18) <= unaff_x27) goto LAB_03168e9c;
    lVar1 = lVar1 + unaff_x26;
    *(undefined4 *)(lVar1 + 0x2c) = uVar7;
    *(float *)(lVar1 + 0x30) = fVar8;
    *(float *)(lVar1 + 0x34) = fVar9;
    *(float *)(lVar1 + 0x38) = fVar11;
    unaff_x27 = unaff_x27 + 1;
    unaff_s9 = unaff_s9 + fVar10;
    unaff_x26 = unaff_x26 + 0x20;
    if ((long)*(int *)(unaff_x19 + 0x50) <= (long)unaff_x27) break;
    param_1 = *unaff_x22;
    unaff_d15 = (ulong)*unaff_x21;
    unaff_d8 = (ulong)unaff_x21[1];
    unaff_d11 = uVar4;
    unaff_d12 = unaff_d14;
    unaff_d14 = (ulong)unaff_x21[2];
    unaff_s10 = fVar5;
  }
  if (1 < *(int *)(unaff_x19 + 0x50)) {
    lVar3 = *unaff_x20;
    lVar1 = 0x5c;
    uVar4 = 1;
    do {
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
      fVar11 = *(float *)(lVar3 + -0x38);
      fVar6 = *(float *)(lVar3 + -0x34);
      fVar5 = *(float *)(lVar3 + -0x3c);
      fVar10 = *(float *)(lVar3 + -0x1c);
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
      fVar5 = fVar5 - fVar10;
      fVar11 = fVar11 - fVar9;
      fVar6 = fVar6 - fVar8;
      *(float *)(lVar3 + lVar1) =
           SQRT(fVar5 * fVar5 + fVar11 * fVar11 + fVar6 * fVar6) / unaff_s9 +
           ((float *)(lVar3 + lVar1))[-8];
      uVar4 = uVar4 + 1;
      lVar1 = lVar1 + 0x20;
    } while ((long)uVar4 < (long)*(int *)(unaff_x19 + 0x50));
  }
  return;
}


