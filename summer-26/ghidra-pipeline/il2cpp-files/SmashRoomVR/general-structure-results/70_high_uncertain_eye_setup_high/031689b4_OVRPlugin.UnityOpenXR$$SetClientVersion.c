/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$SetClientVersion
ENTRY_POINT: 031689b4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__SetClientVersion(long *param_1)

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
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  float unaff_s8;
  float fVar17;
  float unaff_s9;
  float fVar18;
  float unaff_s11;
  ulong uVar19;
  float fVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fStack0000000000000024;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  lVar3 = *(long *)(*param_1 + 0xb8);
  fVar25 = *(float *)(lVar3 + 0x18);
  fVar24 = *(float *)(lVar3 + 0x1c);
  fVar22 = *(float *)(lVar3 + 0x20);
  if (*(char *)(unaff_x22 + 0x45d) == '\0') {
                    /* try { // try from 031689cc to 032689d3 has its CatchHandler @ 031689d8 */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03168914 with catch @ 031689d4
                       try { // try from 031689d4 to 032689ef has its CatchHandler @ 0316886c */
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 0316896c with catch @ 031689d8
                       catch(type#1 @ 03b4f5b8) { ... } // from try @ 031689cc with catch @ 031689d8
                        */
    *(undefined1 *)(unaff_x22 + 0x45d) = 1;
  }
                    /* try { // try from 031689f0 to 032689f3 has its CatchHandler @ 03168a00 */
  fStack0000000000000044 = fStack0000000000000044 - unaff_s9;
                    /* catch() { ... } // from try @ 031689f0 with catch @ 03168a00 */
  fStack0000000000000048 = fStack0000000000000048 - unaff_s11;
                    /* try { // try from 03168a0c to 03268a17 has its CatchHandler @ 03168a2c */
  fVar14 = **(float **)
             (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8);
  fVar7 = fVar22 * fVar22 + fVar25 * fVar25 + fVar24 * fVar24;
                    /* try { // try from 03168a18 to 03268a23 has its CatchHandler @ 0316886c */
  fVar20 = fStack000000000000004c - unaff_s8;
                    /* try { // try from 03168a24 to 03268a2b has its CatchHandler @ 03168a2c */
  if (fVar14 <= fVar7) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03168a0c with catch @ 03168a2c
                       catch(type#2 @ 00000000) { ... } // from try @ 03168a24 with catch @ 03168a2c
                        */
                    /* try { // try from 03168a30 to 03268a87 has its CatchHandler @ 03168a30
                       catch() { ... } // from try @ 03168a30 with catch @ 03168a30
                       catch() { ... } // from try @ 03168b9c with catch @ 03168a30
                       catch() { ... } // from try @ 03168bf8 with catch @ 03168a30
                       catch() { ... } // from try @ 03168c0c with catch @ 03168a30
                       catch() { ... } // from try @ 03168c70 with catch @ 03168a30 */
    fVar11 = fVar20 * fVar22 + fStack0000000000000044 * fVar25 + fStack0000000000000048 * fVar24;
    fStack000000000000004c = fVar22 * fVar11;
    fVar14 = (fVar25 * fVar11) / fVar7;
    fStack0000000000000044 = fStack0000000000000044 - fVar14;
    fStack0000000000000048 = fStack0000000000000048 - (fVar24 * fVar11) / fVar7;
    fVar20 = fVar20 - fStack000000000000004c / fVar7;
  }
  if (DAT_03fed25c == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25c = '\x01';
  }
  puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
                    /* try { // try from 03168a88 to 03268a97 has its CatchHandler @ 03168c1c */
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar7 = unaff_x21[2];
  fVar17 = *unaff_x21;
  fVar23 = unaff_x21[1];
  fStack000000000000003c = (float)FUN_039274f8();
  fVar16 = *unaff_x21;
  fStack0000000000000034 = unaff_x21[1];
  fVar11 = unaff_x21[2];
  fVar25 = fVar14;
  fStack0000000000000024 = fStack000000000000004c;
  fVar8 = (float)FUN_039274f8();
  fVar22 = fStack000000000000004c;
  fVar24 = fVar25;
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
          fVar20 = SQRT(fStack0000000000000044 * fStack0000000000000044 +
                        fStack0000000000000048 * fStack0000000000000048 + fVar20 * fVar20);
          lVar3 = 0;
          fStack0000000000000034 = 1.0 / fVar22;
          uVar6 = 0;
          fVar18 = 0.0;
          fVar12 = fVar20 * fStack000000000000003c;
          fStack000000000000003c = fVar23 + fStack0000000000000040 * fVar20 * fStack0000000000000024
          ;
          uVar19 = (ulong)(uint)fStack000000000000004c;
          uVar21 = (ulong)(uint)(fVar11 - fVar25);
          fVar22 = fVar16 - fVar8;
          do {
            fVar25 = *unaff_x21;
            uVar13 = (ulong)(uint)unaff_x21[1];
            uVar15 = (ulong)(uint)unaff_x21[2];
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar25 = (float)FUN_0316925c(fVar25,uVar13,uVar15,
                                         fVar17 + fStack0000000000000040 * fVar12,
                                         fStack000000000000003c,
                                         fVar7 + fStack0000000000000040 * fVar20 * fVar14);
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
            *(float *)(lVar4 + 0x24) = fStack0000000000000034 * (float)uVar13;
            *(float *)(lVar4 + 0x28) = (1.0 / fVar24) * (float)uVar15;
            lVar4 = *unaff_x20;
            if (lVar4 == 0) goto LAB_03168ea0;
            if (DAT_03fed25d == '\0') {
              thunk_FUN_01ad9084(puVar2);
              DAT_03fed25d = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar22 = fVar25 - fVar22;
            fVar8 = (float)uVar13 - (float)uVar19;
            fVar16 = (float)uVar15 - (float)uVar21;
            fVar23 = SQRT(fVar16 * fVar16 + fVar22 * fVar22 + fVar8 * fVar8);
            fVar11 = fVar1;
            if (fVar23 <= fVar1) {
              if (DAT_03fed257 == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                DAT_03fed257 = '\x01';
              }
              pfVar5 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
              ;
              fVar22 = *pfVar5;
              fVar8 = pfVar5[1];
              fVar16 = pfVar5[2];
            }
            else {
              fVar22 = fVar22 / fVar23;
              fVar8 = fVar8 / fVar23;
              fVar16 = fVar16 / fVar23;
            }
            uVar10 = FUN_039148b4(fVar22,0);
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_03168e9c;
            lVar4 = lVar4 + lVar3;
            *(undefined4 *)(lVar4 + 0x2c) = uVar10;
            *(float *)(lVar4 + 0x30) = fVar8;
            *(float *)(lVar4 + 0x34) = fVar16;
            *(float *)(lVar4 + 0x38) = fVar11;
            uVar6 = uVar6 + 1;
            fVar18 = fVar18 + fVar23;
            lVar3 = lVar3 + 0x20;
            uVar19 = uVar13;
            uVar21 = uVar15;
            fVar22 = fVar25;
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
              fVar24 = *(float *)(lVar4 + -0x38);
              fVar25 = *(float *)(lVar4 + -0x34);
              fVar22 = *(float *)(lVar4 + -0x3c);
              fVar20 = *(float *)(lVar4 + -0x1c);
              fVar14 = *(float *)(lVar4 + -0x18);
              fVar7 = *(float *)(lVar4 + -0x14);
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
              fVar22 = fVar22 - fVar20;
              fVar24 = fVar24 - fVar14;
              fVar25 = fVar25 - fVar7;
              *(float *)(lVar4 + lVar3) =
                   SQRT(fVar22 * fVar22 + fVar24 * fVar24 + fVar25 * fVar25) / fVar18 +
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


