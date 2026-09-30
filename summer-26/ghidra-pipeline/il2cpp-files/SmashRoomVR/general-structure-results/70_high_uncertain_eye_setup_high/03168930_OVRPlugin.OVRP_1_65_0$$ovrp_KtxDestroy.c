/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxDestroy
ENTRY_POINT: 03168930
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxDestroy(void)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x19;
  long *unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  long *unaff_x26;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  float unaff_s8;
  float fVar18;
  float fVar19;
  float unaff_s11;
  float fVar20;
  ulong uVar21;
  float unaff_s12;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fStack0000000000000024;
  float fStack0000000000000034;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  thunk_FUN_01ad9084();
  *(undefined1 *)(unaff_x22 + 0x25b) = 1;
  lVar3 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  fVar7 = *(float *)(lVar3 + 0x18);
  fVar12 = *(float *)(lVar3 + 0x1c);
  fVar15 = *(float *)(lVar3 + 0x20);
                    /* try { // try from 0316896c to 0326898f has its CatchHandler @ 031689d8 */
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar7 = (float)FUN_0316904c(unaff_s12 * fVar15 + unaff_s8 * fVar7 + unaff_s11 * fVar12);
  fVar15 = *unaff_x21;
  fVar20 = unaff_x21[1];
  fVar12 = unaff_x21[2];
                    /* try { // try from 03168990 to 032689cb has its CatchHandler @ 0316886c */
  if (*(char *)(unaff_x22 + 0x25b) == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    *(undefined1 *)(unaff_x22 + 0x25b) = 1;
  }
  lVar3 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  fVar26 = *(float *)(lVar3 + 0x18);
  fVar25 = *(float *)(lVar3 + 0x1c);
  fVar23 = *(float *)(lVar3 + 0x20);
  if (DAT_03fed45d == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03fed45d = '\x01';
  }
  in_stack_00000040._4_4_ = in_stack_00000040._4_4_ - fVar15;
  fStack0000000000000048 = fStack0000000000000048 - fVar20;
  fVar20 = **(float **)
             (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8);
  fVar15 = fVar23 * fVar23 + fVar26 * fVar26 + fVar25 * fVar25;
  fVar12 = fStack000000000000004c - fVar12;
  if (fVar20 <= fVar15) {
    fVar13 = fVar12 * fVar23 + in_stack_00000040._4_4_ * fVar26 + fStack0000000000000048 * fVar25;
    fStack000000000000004c = fVar23 * fVar13;
    fVar20 = (fVar26 * fVar13) / fVar15;
    in_stack_00000040._4_4_ = in_stack_00000040._4_4_ - fVar20;
    fStack0000000000000048 = fStack0000000000000048 - (fVar25 * fVar13) / fVar15;
    fVar12 = fVar12 - fStack000000000000004c / fVar15;
  }
  if (DAT_03fed25c == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25c = '\x01';
  }
  puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar26 = unaff_x21[2];
  fVar18 = *unaff_x21;
  fVar24 = unaff_x21[1];
  fStack000000000000003c = (float)FUN_039274f8();
  fVar17 = *unaff_x21;
  fStack0000000000000034 = unaff_x21[1];
  fVar13 = unaff_x21[2];
  fVar25 = fVar20;
  fStack0000000000000024 = fStack000000000000004c;
  fVar8 = (float)FUN_039274f8();
  fVar15 = fStack000000000000004c;
  fVar23 = fVar25;
  lVar3 = FUN_0391c27c();
  if (lVar3 != 0) {
    fVar9 = (float)FUN_0392a7f0(lVar3,0);
    lVar3 = FUN_0391c27c();
    if (lVar3 != 0) {
      FUN_0392a7f0(lVar3,0);
      lVar3 = FUN_0391c27c();
      if (lVar3 != 0) {
        FUN_0392a7f0(lVar3,0);
        fVar1 = DAT_00b55370;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fStack000000000000004c = fStack0000000000000034 - fStack000000000000004c;
          fVar10 = SQRT(in_stack_00000040._4_4_ * in_stack_00000040._4_4_ +
                        fStack0000000000000048 * fStack0000000000000048 + fVar12 * fVar12);
          lVar3 = 0;
          fStack0000000000000034 = 1.0 / fVar15;
          uVar6 = 0;
          fVar19 = 0.0;
          fVar15 = fVar10 * fStack000000000000003c;
          fStack000000000000003c = fVar24 + fVar7 * fVar10 * fStack0000000000000024;
          uVar21 = (ulong)(uint)fStack000000000000004c;
          uVar22 = (ulong)(uint)(fVar13 - fVar25);
          fVar12 = fVar17 - fVar8;
          do {
            fVar25 = *unaff_x21;
            uVar14 = (ulong)(uint)unaff_x21[1];
            uVar16 = (ulong)(uint)unaff_x21[2];
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar25 = (float)FUN_0316925c(fVar25,uVar14,uVar16,fVar18 + fVar7 * fVar15,
                                         fStack000000000000003c,fVar26 + fVar7 * fVar10 * fVar20);
            if (DAT_03fed25c == '\0') {
              thunk_FUN_01ad9084(puVar2);
              DAT_03fed25c = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            lVar4 = *unaff_x20;
            if (lVar4 == 0) goto LAB_03168ea0;
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_03168e9c;
            lVar4 = lVar4 + lVar3;
            *(float *)(lVar4 + 0x20) = (1.0 / fVar9) * fVar25;
            *(float *)(lVar4 + 0x24) = fStack0000000000000034 * (float)uVar14;
            *(float *)(lVar4 + 0x28) = (1.0 / fVar23) * (float)uVar16;
            lVar4 = *unaff_x20;
            if (lVar4 == 0) goto LAB_03168ea0;
            if (DAT_03fed25d == '\0') {
              thunk_FUN_01ad9084(puVar2);
              DAT_03fed25d = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar12 = fVar25 - fVar12;
            fVar8 = (float)uVar14 - (float)uVar21;
            fVar17 = (float)uVar16 - (float)uVar22;
            fVar24 = SQRT(fVar17 * fVar17 + fVar12 * fVar12 + fVar8 * fVar8);
            fVar13 = fVar1;
            if (fVar24 <= fVar1) {
              if (DAT_03fed257 == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                DAT_03fed257 = '\x01';
              }
              pfVar5 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
              ;
              fVar12 = *pfVar5;
              fVar8 = pfVar5[1];
              fVar17 = pfVar5[2];
            }
            else {
              fVar12 = fVar12 / fVar24;
              fVar8 = fVar8 / fVar24;
              fVar17 = fVar17 / fVar24;
            }
            uVar11 = FUN_039148b4(fVar12,0);
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_03168e9c;
            lVar4 = lVar4 + lVar3;
            *(undefined4 *)(lVar4 + 0x2c) = uVar11;
            *(float *)(lVar4 + 0x30) = fVar8;
            *(float *)(lVar4 + 0x34) = fVar17;
            *(float *)(lVar4 + 0x38) = fVar13;
            uVar6 = uVar6 + 1;
            fVar19 = fVar19 + fVar24;
            lVar3 = lVar3 + 0x20;
            uVar21 = uVar14;
            uVar22 = uVar16;
            fVar12 = fVar25;
          } while ((long)uVar6 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar4 = *unaff_x20;
            lVar3 = 0x5c;
            uVar6 = 1;
            do {
              if (lVar4 == 0) goto LAB_03168ea0;
              if (((ulong)*(uint *)(lVar4 + 0x18) <= uVar6 - 1) ||
                 (*(uint *)(lVar4 + 0x18) <= uVar6)) {
LAB_03168e9c:
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              lVar4 = lVar4 + lVar3;
              fVar12 = *(float *)(lVar4 + -0x38);
              fVar15 = *(float *)(lVar4 + -0x34);
              fVar7 = *(float *)(lVar4 + -0x3c);
              fVar25 = *(float *)(lVar4 + -0x1c);
              fVar23 = *(float *)(lVar4 + -0x18);
              fVar20 = *(float *)(lVar4 + -0x14);
              if (DAT_03fed25c == '\0') {
                thunk_FUN_01ad9084(puVar2);
                DAT_03fed25c = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              lVar4 = *unaff_x20;
              if (lVar4 == 0) goto LAB_03168ea0;
              if (((ulong)*(uint *)(lVar4 + 0x18) <= uVar6 - 1) ||
                 (*(uint *)(lVar4 + 0x18) <= uVar6)) goto LAB_03168e9c;
              fVar7 = fVar7 - fVar25;
              fVar12 = fVar12 - fVar23;
              fVar15 = fVar15 - fVar20;
              *(float *)(lVar4 + lVar3) =
                   SQRT(fVar7 * fVar7 + fVar12 * fVar12 + fVar15 * fVar15) / fVar19 +
                   ((float *)(lVar4 + lVar3))[-8];
              uVar6 = uVar6 + 1;
              lVar3 = lVar3 + 0x20;
            } while ((long)uVar6 < (long)*(int *)(unaff_x19 + 0x50));
          }
        }
        return;
      }
    }
  }
LAB_03168ea0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


