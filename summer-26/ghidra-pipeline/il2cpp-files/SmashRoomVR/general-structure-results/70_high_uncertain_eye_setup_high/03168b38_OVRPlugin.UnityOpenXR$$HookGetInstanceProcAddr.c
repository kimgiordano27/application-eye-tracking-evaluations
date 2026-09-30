/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$HookGetInstanceProcAddr
ENTRY_POINT: 03168b38
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__HookGetInstanceProcAddr
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  long lVar1;
  float *pfVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined4 *unaff_x21;
  long *unaff_x23;
  long unaff_x25;
  long *unaff_x26;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  ulong uVar11;
  float unaff_s8;
  float unaff_s9;
  float fVar12;
  float unaff_s10;
  float fVar13;
  float unaff_s11;
  float fVar14;
  ulong uVar15;
  float unaff_s12;
  ulong uVar16;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined4 uVar17;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  
  if (0 < *(int *)(unaff_x19 + 0x50)) {
    fVar5 = SQRT(unaff_s10 * unaff_s10 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12);
    lVar3 = 0;
                    /* try { // try from 03168b7c to 03268b9b has its CatchHandler @ 03168c28 */
                    /* try { // try from 03168b9c to 03268bdf has its CatchHandler @ 03168a30 */
    uVar4 = 0;
    fVar12 = 0.0;
    fStack000000000000002c = DAT_00b55370;
                    /* try { // try from 03168be0 to 03268be3 has its CatchHandler @ 03168c2c */
                    /* try { // try from 03168be4 to 03268bf7 has its CatchHandler @ 03168c24 */
    uVar15 = (ulong)(uint)(fStack0000000000000034 - unaff_s15);
    uVar16 = (ulong)(uint)(fStack0000000000000030 - unaff_s9);
    fVar7 = fStack0000000000000038 - unaff_s14;
    do {
      uVar17 = *unaff_x21;
      uVar9 = (ulong)(uint)unaff_x21[1];
                    /* try { // try from 03168bf8 to 03268bff has its CatchHandler @ 03168a30 */
      uVar11 = (ulong)(uint)unaff_x21[2];
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar6 = (float)FUN_0316925c(uVar17,uVar9,uVar11,
                                  fStack000000000000001c +
                                  in_stack_00000040 * fVar5 * fStack000000000000003c,
                                  fStack0000000000000018 +
                                  in_stack_00000040 * fVar5 * fStack0000000000000024,
                                  in_stack_00000028 +
                                  in_stack_00000040 * fVar5 * fStack0000000000000020);
      if (*(char *)(unaff_x25 + 0x25c) == '\0') {
        thunk_FUN_01ad9084();
        *(undefined1 *)(unaff_x25 + 0x25c) = 1;
      }
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar1 = *unaff_x20;
      if (lVar1 == 0) goto LAB_03168ea0;
      if (*(uint *)(lVar1 + 0x18) <= uVar4) goto LAB_03168e9c;
      lVar1 = lVar1 + lVar3;
      *(float *)(lVar1 + 0x20) = (1.0 / unaff_s8) * fVar6;
      *(float *)(lVar1 + 0x24) = (1.0 / unaff_s13) * (float)uVar9;
      *(float *)(lVar1 + 0x28) = (1.0 / param_3) * (float)uVar11;
      lVar1 = *unaff_x20;
      if (lVar1 == 0) goto LAB_03168ea0;
      if (DAT_03fed25d == '\0') {
        thunk_FUN_01ad9084();
        DAT_03fed25d = '\x01';
      }
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar7 = fVar6 - fVar7;
      fVar8 = (float)uVar9 - (float)uVar15;
      fVar10 = (float)uVar11 - (float)uVar16;
      fVar13 = SQRT(fVar10 * fVar10 + fVar7 * fVar7 + fVar8 * fVar8);
      fVar14 = fStack000000000000002c;
      if (fVar13 <= fStack000000000000002c) {
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        pfVar2 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        fVar7 = *pfVar2;
        fVar8 = pfVar2[1];
        fVar10 = pfVar2[2];
      }
      else {
        fVar7 = fVar7 / fVar13;
        fVar8 = fVar8 / fVar13;
        fVar10 = fVar10 / fVar13;
      }
      uVar17 = FUN_039148b4(fVar7,0);
      if (*(uint *)(lVar1 + 0x18) <= uVar4) goto LAB_03168e9c;
      lVar1 = lVar1 + lVar3;
      *(undefined4 *)(lVar1 + 0x2c) = uVar17;
      *(float *)(lVar1 + 0x30) = fVar8;
      *(float *)(lVar1 + 0x34) = fVar10;
      *(float *)(lVar1 + 0x38) = fVar14;
      uVar4 = uVar4 + 1;
      fVar12 = fVar12 + fVar13;
      lVar3 = lVar3 + 0x20;
      uVar15 = uVar9;
      uVar16 = uVar11;
      fVar7 = fVar6;
    } while ((long)uVar4 < (long)*(int *)(unaff_x19 + 0x50));
    if (1 < *(int *)(unaff_x19 + 0x50)) {
      lVar1 = *unaff_x20;
      lVar3 = 0x5c;
      uVar4 = 1;
      do {
        if (lVar1 == 0) {
LAB_03168ea0:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (((ulong)*(uint *)(lVar1 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar1 + 0x18) <= uVar4)) {
LAB_03168e9c:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar1 = lVar1 + lVar3;
        fVar5 = *(float *)(lVar1 + -0x38);
        fVar6 = *(float *)(lVar1 + -0x34);
        fVar7 = *(float *)(lVar1 + -0x3c);
        fVar10 = *(float *)(lVar1 + -0x1c);
        fVar8 = *(float *)(lVar1 + -0x18);
        fVar14 = *(float *)(lVar1 + -0x14);
        if (*(char *)(unaff_x25 + 0x25c) == '\0') {
          thunk_FUN_01ad9084();
          *(undefined1 *)(unaff_x25 + 0x25c) = 1;
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar1 = *unaff_x20;
        if (lVar1 == 0) goto LAB_03168ea0;
        if (((ulong)*(uint *)(lVar1 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar1 + 0x18) <= uVar4))
        goto LAB_03168e9c;
        fVar7 = fVar7 - fVar10;
        fVar5 = fVar5 - fVar8;
        fVar6 = fVar6 - fVar14;
        *(float *)(lVar1 + lVar3) =
             SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6) / fVar12 +
             ((float *)(lVar1 + lVar3))[-8];
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x20;
      } while ((long)uVar4 < (long)*(int *)(unaff_x19 + 0x50));
    }
  }
  return;
}


