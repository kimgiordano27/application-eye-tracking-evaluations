/*
FUNCTION_NAME: UnityEngine.AndroidJavaObject$$GetRawClass
ENTRY_POINT: 0354df1c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_18;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_18
*/


void UnityEngine_AndroidJavaObject__GetRawClass(void)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  byte in_w8;
  char cVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  code *pcVar14;
  long lVar15;
  long *unaff_x19;
  long unaff_x20;
  uint uVar16;
  undefined8 uVar17;
  long unaff_x23;
  undefined8 uVar18;
  uint unaff_w24;
  long unaff_x25;
  long lVar19;
  int unaff_w26;
  uint unaff_w28;
  uint uVar20;
  long unaff_x29;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float unaff_s14;
  float unaff_s15;
  uint uStack0000000000000030;
  int iStack0000000000000034;
  float in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  float fStack0000000000000058;
  int iStack000000000000005c;
  long in_stack_00000060;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  int *in_stack_00000090;
  undefined4 uStack0000000000000098;
  float fStack000000000000009c;
  undefined4 in_stack_000000a0;
  float in_stack_000000a8;
  undefined8 in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  float fStack00000000000000c4;
  long in_stack_000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  int in_stack_000000d8;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  long in_stack_00000110;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  uint uStack0000000000000120;
  int iStack0000000000000124;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  long in_stack_00000138;
  float in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000168;
  uint in_stack_00000170;
  uint in_stack_00000178;
  uint in_stack_00000180;
  undefined8 in_stack_00000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float in_stack_000001b0;
  undefined8 in_stack_000017c0;
  undefined8 in_stack_000017c8;
  float in_stack_000017d0;
  undefined4 in_stack_000017d4;
  
code_r0x0354df1c:
  uVar13 = in_stack_00000170;
  if ((in_w8 & 1) != 0) {
    unaff_s14 = -unaff_s14;
  }
LAB_0354df28:
  in_stack_00000170 = uVar13;
  lVar19 = unaff_x25 + unaff_x29 * unaff_x23;
  fVar21 = *(float *)(lVar19 + 0x88);
  fVar24 = *(float *)(lVar19 + 0x84);
  fVar23 = -2.1474836e+09;
  if (fVar24 != INFINITY) {
    fVar23 = (float)(int)fVar24;
  }
  fVar27 = *(float *)(lVar19 + 0xd4);
  fVar28 = *(float *)(lVar19 + 0xd8);
  fVar25 = -2.1474836e+09;
  if (fVar21 != INFINITY) {
    fVar25 = (float)(int)fVar21;
  }
  uVar22 = FUN_03591d3c(fVar24 - fVar23,fVar21 - fVar25);
  *(undefined4 *)(lVar19 + 0x84) = uVar22;
  if (unaff_w24 < *(uint *)(unaff_x25 + 0x18)) {
    fVar28 = fVar28 - fVar25;
    *(float *)(lVar19 + 0x88) = unaff_s14;
    uVar22 = FUN_03591d3c(fVar24 - fVar23,fVar28);
    *(undefined4 *)(unaff_x25 + unaff_x29 * 0x178 + 0xac) = uVar22;
    if (unaff_w24 < *(uint *)(unaff_x25 + 0x18)) {
      fVar27 = fVar27 - fVar23;
      *(float *)(unaff_x25 + unaff_x29 * 0x178 + 0xb0) = unaff_s14;
      fVar23 = (float)FUN_03591d3c(fVar27,fVar28);
      *(float *)(lVar19 + 0xd4) = fVar23;
      if (unaff_w24 < *(uint *)(unaff_x25 + 0x18)) {
        *(float *)(lVar19 + 0xd8) = unaff_s14;
        uVar22 = FUN_03591d3c(fVar27,fVar21 - fVar25);
        *(undefined4 *)(unaff_x25 + unaff_x29 * 0x178 + 0xfc) = uVar22;
        uVar17 = *(undefined8 *)(unaff_x25 + 0x18);
        if (unaff_w24 < (uint)uVar17) {
          *(float *)(unaff_x25 + unaff_x29 * 0x178 + 0x100) = unaff_s14;
          uVar13 = in_stack_00000170;
LAB_0354e05c:
          in_stack_00000170 = uVar13;
          uVar13 = (uint)uVar17;
          if (((int)unaff_w24 < (int)unaff_x19[0x65]) &&
             (in_stack_000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
            if (((int)in_stack_00000180 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
              if (uVar13 <= unaff_w24)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
              lVar19 = unaff_x25 + unaff_x29 * 0x178;
              fVar23 = (float)in_stack_00000150;
              fVar21 = (float)((ulong)in_stack_00000150 >> 0x20);
              *(ulong *)(lVar19 + 0x70) =
                   CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar19 + 0x70) >> 0x20),
                            in_stack_00000140 + (float)*(undefined8 *)(lVar19 + 0x70));
              *(float *)(lVar19 + 0x78) = fVar21 + *(float *)(lVar19 + 0x78);
              *(ulong *)(lVar19 + 0x98) =
                   CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar19 + 0x98) >> 0x20),
                            in_stack_00000140 + (float)*(undefined8 *)(lVar19 + 0x98));
              *(float *)(lVar19 + 0xa0) = fVar21 + *(float *)(lVar19 + 0xa0);
              *(ulong *)(lVar19 + 0xc0) =
                   CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar19 + 0xc0) >> 0x20),
                            in_stack_00000140 + (float)*(undefined8 *)(lVar19 + 0xc0));
              *(float *)(lVar19 + 200) = fVar21 + *(float *)(lVar19 + 200);
              *(ulong *)(lVar19 + 0xe8) =
                   CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar19 + 0xe8) >> 0x20),
                            in_stack_00000140 + (float)*(undefined8 *)(lVar19 + 0xe8));
              *(float *)(lVar19 + 0xf0) = fVar21 + *(float *)(lVar19 + 0xf0);
              goto LAB_0354e184;
            }
            if (((int)in_stack_00000180 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
              if (unaff_w24 < uVar13) {
                if (*(int *)(unaff_x25 + unaff_x29 * 0x178 + 0x68) == iStack0000000000000034)
                goto LAB_0354f0d4;
                goto LAB_0354e0cc;
              }
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            }
          }
LAB_0354e0cc:
          if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (DAT_0411f172 == '\0') {
            FUN_01ab69ac();
            DAT_0411f172 = '\x01';
            uVar13 = *(uint *)(unaff_x25 + 0x18);
          }
          puVar4 = PTR_DAT_03cbded8;
          uVar22 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
          lVar19 = unaff_x25 + unaff_x29 * 0x178;
          *(undefined8 *)(lVar19 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
          *(undefined4 *)(lVar19 + 0x78) = uVar22;
          if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar22 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar4 + 0xb8) + 1);
          lVar19 = unaff_x25 + unaff_x29 * 0x178;
          *(undefined8 *)(lVar19 + 0x98) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
          *(undefined4 *)(lVar19 + 0xa0) = uVar22;
          uVar22 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar4 + 0xb8) + 1);
          *(undefined8 *)(lVar19 + 0xc0) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
          *(undefined4 *)(lVar19 + 200) = uVar22;
          uVar22 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar4 + 0xb8) + 1);
          *(undefined8 *)(lVar19 + 0xe8) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
          *(undefined4 *)(lVar19 + 0xf0) = uVar22;
          *(undefined1 *)(unaff_x20 + 0x194) = 0;
LAB_0354e184:
          uVar20 = unaff_w28;
          uVar13 = in_stack_00000170;
          if (unaff_w26 == 0) {
            pcVar14 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
            (*pcVar14)();
          }
          else if (unaff_w26 == 1) {
            pcVar14 = *(code **)(*unaff_x19 + 0x8c8);
            goto LAB_0354e1b4;
          }
          do {
            unaff_w28 = in_stack_00000180;
            in_stack_00000170 = uVar13;
            if ((*in_stack_00000050 == 0) ||
               (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 == 0)) goto LAB_0354fbf4;
            if (*(uint *)(lVar19 + 0x18) <= unaff_w24)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar19 = lVar19 + unaff_x29 * 0x178;
            uVar17 = *(undefined8 *)(lVar19 + 0x11c);
            fVar23 = (float)in_stack_00000150;
            fVar21 = (float)((ulong)in_stack_00000150 >> 0x20);
            *(undefined8 *)(lVar19 + 0x11c) =
                 CONCAT44(fVar23 + (float)((ulong)uVar17 >> 0x20),in_stack_00000140 + (float)uVar17)
            ;
            *(float *)(lVar19 + 0x124) = fVar21 + *(float *)(lVar19 + 0x124);
            if ((*in_stack_00000050 == 0) ||
               (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 == 0)) goto LAB_0354fbf4;
            if (*(uint *)(lVar19 + 0x18) <= unaff_w24)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar19 = lVar19 + unaff_x29 * 0x178;
            *(ulong *)(lVar19 + 0x110) =
                 CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar19 + 0x110) >> 0x20),
                          in_stack_00000140 + (float)*(undefined8 *)(lVar19 + 0x110));
            *(float *)(lVar19 + 0x118) = fVar21 + *(float *)(lVar19 + 0x118);
            if ((*in_stack_00000050 == 0) ||
               (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 == 0)) goto LAB_0354fbf4;
            if (*(uint *)(lVar19 + 0x18) <= unaff_w24)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar19 = lVar19 + unaff_x29 * 0x178;
            *(ulong *)(lVar19 + 0x128) =
                 CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar19 + 0x128) >> 0x20),
                          in_stack_00000140 + (float)*(undefined8 *)(lVar19 + 0x128));
            *(float *)(lVar19 + 0x130) = fVar21 + *(float *)(lVar19 + 0x130);
            if ((*in_stack_00000050 == 0) ||
               (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 == 0)) goto LAB_0354fbf4;
            if (*(uint *)(lVar19 + 0x18) <= unaff_w24)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar19 = lVar19 + unaff_x29 * 0x178;
            *(float *)(lVar19 + 0x134) = in_stack_00000140 + *(float *)(lVar19 + 0x134);
            *(ulong *)(lVar19 + 0x138) =
                 CONCAT44(fVar21 + (float)((ulong)*(undefined8 *)(lVar19 + 0x138) >> 0x20),
                          fVar23 + (float)*(undefined8 *)(lVar19 + 0x138));
            lVar19 = *in_stack_00000050;
            if ((lVar19 == 0) || (lVar11 = *(long *)(lVar19 + 0x38), lVar11 == 0))
            goto LAB_0354fbf4;
            uVar13 = *(uint *)(lVar11 + 0x18);
            if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar15 = lVar11 + unaff_x29 * 0x178;
            *(float *)(lVar15 + 0x150) = fVar23 + *(float *)(lVar15 + 0x150);
            *(ulong *)(lVar15 + 0x140) =
                 CONCAT44(in_stack_00000140 +
                          (float)((ulong)*(undefined8 *)(lVar15 + 0x140) >> 0x20),
                          in_stack_00000140 + (float)*(undefined8 *)(lVar15 + 0x140));
            *(ulong *)(lVar15 + 0x148) =
                 CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar15 + 0x148) >> 0x20),
                          fVar23 + (float)*(undefined8 *)(lVar15 + 0x148));
            if (unaff_w28 == uVar20) {
              uVar13 = *in_stack_00000090 - 1;
              if (unaff_w24 == uVar13) goto LAB_0354e3ec;
            }
            else {
              lVar19 = *(long *)(lVar19 + 0x50);
              if (lVar19 == 0) goto LAB_0354fbf4;
              if (*(uint *)(lVar19 + 0x18) <= uVar20)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar15 = (long)(int)uVar20;
              lVar12 = lVar19 + lVar15 * 0x5c;
              fVar21 = fVar23 + *(float *)(lVar12 + 0x54);
              *(ulong *)(lVar12 + 0x4c) =
                   CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar12 + 0x4c) >> 0x20),
                            fVar23 + (float)*(undefined8 *)(lVar12 + 0x4c));
              *(float *)(lVar12 + 0x54) = fVar21;
              *(float *)(lVar12 + 0x58) = in_stack_00000140 + *(float *)(lVar12 + 0x58);
              if (uVar13 <= *(uint *)(lVar12 + 0x34))
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              uVar22 = *(undefined4 *)(lVar11 + (long)(int)*(uint *)(lVar12 + 0x34) * 0x178 + 0x11c)
              ;
              lVar19 = lVar19 + lVar15 * 0x5c;
              *(float *)(lVar19 + 0x70) = fVar21;
              *(undefined4 *)(lVar19 + 0x6c) = uVar22;
              lVar19 = *in_stack_00000050;
              if ((lVar19 == 0) || (lVar11 = *(long *)(lVar19 + 0x50), lVar11 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar11 + 0x18) <= uVar20)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar19 = *(long *)(lVar19 + 0x38);
              if (lVar19 == 0) goto LAB_0354fbf4;
              uVar13 = *(uint *)(lVar11 + lVar15 * 0x5c + 0x40);
              if (*(uint *)(lVar19 + 0x18) <= uVar13)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar11 = lVar11 + lVar15 * 0x5c;
              *(undefined4 *)(lVar11 + 0x74) =
                   *(undefined4 *)(lVar19 + (long)(int)uVar13 * 0x178 + 0x128);
              *(undefined4 *)(lVar11 + 0x78) = *(undefined4 *)(lVar11 + 0x4c);
              uVar13 = *in_stack_00000090 - 1;
LAB_0354e3ec:
              if (unaff_w24 == uVar13) {
                lVar19 = *in_stack_00000050;
                if ((lVar19 == 0) || (lVar11 = *(long *)(lVar19 + 0x50), lVar11 == 0))
                goto LAB_0354fbf4;
                if (*(uint *)(lVar11 + 0x18) <= unaff_w28)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar15 = lVar11 + in_stack_00000060 * 0x5c;
                fVar21 = fVar23 + *(float *)(lVar15 + 0x54);
                *(ulong *)(lVar15 + 0x4c) =
                     CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar15 + 0x4c) >> 0x20),
                              fVar23 + (float)*(undefined8 *)(lVar15 + 0x4c));
                *(float *)(lVar15 + 0x54) = fVar21;
                *(float *)(lVar15 + 0x58) = in_stack_00000140 + *(float *)(lVar15 + 0x58);
                lVar19 = *(long *)(lVar19 + 0x38);
                if (lVar19 == 0) goto LAB_0354fbf4;
                if (*(uint *)(lVar19 + 0x18) <= *(uint *)(lVar15 + 0x34))
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                uVar22 = *(undefined4 *)
                          (lVar19 + (long)(int)*(uint *)(lVar15 + 0x34) * 0x178 + 0x11c);
                lVar11 = lVar11 + in_stack_00000060 * 0x5c;
                *(float *)(lVar11 + 0x70) = fVar21;
                *(undefined4 *)(lVar11 + 0x6c) = uVar22;
                lVar19 = *in_stack_00000050;
                if ((lVar19 == 0) || (lVar11 = *(long *)(lVar19 + 0x50), lVar11 == 0))
                goto LAB_0354fbf4;
                if (*(uint *)(lVar11 + 0x18) <= unaff_w28)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar19 = *(long *)(lVar19 + 0x38);
                if (lVar19 == 0) goto LAB_0354fbf4;
                uVar13 = *(uint *)(lVar11 + in_stack_00000060 * 0x5c + 0x40);
                if (*(uint *)(lVar19 + 0x18) <= uVar13)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar11 = lVar11 + in_stack_00000060 * 0x5c;
                *(undefined4 *)(lVar11 + 0x74) =
                     *(undefined4 *)(lVar19 + (long)(int)uVar13 * 0x178 + 0x128);
                *(undefined4 *)(lVar11 + 0x78) = *(undefined4 *)(lVar11 + 0x4c);
              }
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar8 = FUN_026b82c4(in_stack_00000178,0);
            if (((((uVar8 & 1) == 0) && (1 < in_stack_00000178 - 0x2010)) &&
                (in_stack_00000178 != 0xad)) && (in_stack_00000178 != 0x2d)) {
              if ((uStack000000000000011c & 1) == 0) {
                if (in_stack_00000170 != 1) {
LAB_0354f144:
                  uStack000000000000011c = 0;
                  goto LAB_0354e618;
                }
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar8 = FUN_026b81f8(in_stack_00000178,0);
                if ((uVar8 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar8 = FUN_026b63d8(in_stack_00000178,0);
                  if (((in_stack_00000178 != 0x200b) && ((uVar8 & 1) == 0)) &&
                     (*in_stack_00000090 != 1)) goto LAB_0354f144;
                }
              }
              else if (((in_stack_00000170 != 1) &&
                       ((int)unaff_w24 < (int)(*(uint *)(unaff_x25 + 0x18) - 1))) &&
                      (((int)unaff_w24 < *in_stack_00000090 &&
                       ((in_stack_00000178 == 0x2019 || (in_stack_00000178 == 0x27)))))) {
                if (*(uint *)(unaff_x25 + 0x18) <= in_stack_00000170 - 2)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                uVar3 = *(undefined2 *)(unaff_x25 + in_stack_00000138 + -0x438);
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar8 = FUN_026b82c4(uVar3,0);
                if ((uVar8 & 1) != 0) {
                  if (*(uint *)(unaff_x25 + 0x18) <= in_stack_00000170)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  uVar3 = *(undefined2 *)(unaff_x25 + in_stack_00000138 + -0x148);
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar8 = FUN_026b82c4(uVar3,0);
                  if ((uVar8 & 1) != 0) goto LAB_0354e610;
                }
              }
              if (unaff_w24 == *in_stack_00000090 - 1U) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar8 = FUN_026b82c4(in_stack_00000178,0);
                iVar6 = iStack0000000000000124;
                if ((uVar8 & 1) == 0) goto LAB_0354e93c;
              }
              else {
LAB_0354e93c:
                iVar6 = in_stack_00000170 - 2;
              }
              lVar19 = *in_stack_00000050;
              if (lVar19 == 0) goto LAB_0354fbf4;
              lVar11 = *(long *)(lVar19 + 0x40);
              if (lVar11 == 0) goto LAB_0354fbf4;
              uVar13 = *(uint *)(lVar19 + 0x24);
              iVar7 = *(int *)(lVar11 + 0x18);
              if (iVar7 < (int)(uVar13 + 1)) {
                if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_01ff025c((long *)(lVar19 + 0x40),iVar7 + 1,
                             *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
                lVar19 = *in_stack_00000050;
                if (lVar19 == 0) goto LAB_0354fbf4;
              }
              lVar19 = *(long *)(lVar19 + 0x40);
              if (lVar19 == 0) goto LAB_0354fbf4;
              if (*(uint *)(lVar19 + 0x18) <= uVar13)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar19 = lVar19 + (long)(int)uVar13 * 0x18;
              *(long **)(lVar19 + 0x20) = unaff_x19;
              *(uint *)(lVar19 + 0x28) = in_stack_00000168._4_4_;
              *(int *)(lVar19 + 0x2c) = iVar6;
              *(uint *)(lVar19 + 0x30) = (iVar6 - in_stack_00000168._4_4_) + 1;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar19 = unaff_x19[0x6d];
              if (lVar19 == 0) goto LAB_0354fbf4;
              lVar11 = *(long *)(lVar19 + 0x50);
              *(int *)(lVar19 + 0x24) = *(int *)(lVar19 + 0x24) + 1;
              if (lVar11 == 0) goto LAB_0354fbf4;
              if (*(uint *)(lVar11 + 0x18) <= unaff_w28)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              lVar11 = lVar11 + in_stack_00000060 * 0x5c;
              uStack000000000000011c = 0;
              in_stack_000000d8 = in_stack_000000d8 + 1;
              *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + 1;
              unaff_x25 = in_stack_000000c8;
            }
            else {
              if ((uStack000000000000011c & 1) == 0) {
                in_stack_00000168._4_4_ = unaff_w24;
              }
              if (unaff_w24 == *in_stack_00000090 - 1U) {
                lVar19 = *in_stack_00000050;
                if (lVar19 == 0) goto LAB_0354fbf4;
                lVar11 = *(long *)(lVar19 + 0x40);
                if (lVar11 == 0) goto LAB_0354fbf4;
                uVar13 = *(uint *)(lVar19 + 0x24);
                iVar6 = *(int *)(lVar11 + 0x18);
                if (iVar6 < (int)(uVar13 + 1)) {
                  if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_01ff025c((long *)(lVar19 + 0x40),iVar6 + 1,
                               *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
                  lVar19 = *in_stack_00000050;
                  if (lVar19 == 0) goto LAB_0354fbf4;
                }
                lVar19 = *(long *)(lVar19 + 0x40);
                if (lVar19 == 0) goto LAB_0354fbf4;
                if (*(uint *)(lVar19 + 0x18) <= uVar13)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar19 = lVar19 + (long)(int)uVar13 * 0x18;
                *(long **)(lVar19 + 0x20) = unaff_x19;
                *(uint *)(lVar19 + 0x28) = in_stack_00000168._4_4_;
                *(uint *)(lVar19 + 0x2c) = unaff_w24;
                *(uint *)(lVar19 + 0x30) = in_stack_00000170 - in_stack_00000168._4_4_;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                lVar19 = unaff_x19[0x6d];
                if (lVar19 == 0) goto LAB_0354fbf4;
                lVar11 = *(long *)(lVar19 + 0x50);
                *(int *)(lVar19 + 0x24) = *(int *)(lVar19 + 0x24) + 1;
                if (lVar11 == 0) goto LAB_0354fbf4;
                if (*(uint *)(lVar11 + 0x18) <= unaff_w28)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar11 = lVar11 + in_stack_00000060 * 0x5c;
                in_stack_000000d8 = in_stack_000000d8 + 1;
                *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + 1;
              }
LAB_0354e610:
              uStack000000000000011c = 1;
            }
LAB_0354e618:
            if ((*in_stack_00000050 == 0) ||
               (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 == 0)) goto LAB_0354fbf4;
            uVar13 = *(uint *)(lVar19 + 0x18);
            if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            uVar20 = (uint)in_stack_000000e8;
            uVar16 = (uint)in_stack_00000128;
            if ((*(byte *)(lVar19 + unaff_x29 * 0x178 + 400) >> 2 & 1) == 0) {
              if ((in_stack_00000130._4_4_ & 1) == 0) {
LAB_0354eb28:
                in_stack_00000130._4_4_ = 0;
              }
              else {
LAB_0354e660:
                if (uVar13 <= in_stack_00000170 - 2)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar11 = *unaff_x19;
                uVar22 = *(undefined4 *)(lVar19 + in_stack_00000138 + -0x330);
                uVar26 = *(undefined4 *)(lVar19 + in_stack_00000138 + -0x2f8);
LAB_0354ebc0:
                pcVar14 = *(code **)(lVar11 + 0x8d8);
LAB_0354ebc8:
                (*pcVar14)(in_stack_00000070,fStack0000000000000068,uStack000000000000006c,uVar22,
                           fStack0000000000000104,0,in_stack_00000080._4_4_,uVar26);
                puVar4 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar19 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar19 = *(long *)puVar4;
                }
LAB_0354ec1c:
                unaff_s15 = 0.0;
                in_stack_00000130._4_4_ = 0;
                fStack0000000000000104 = *(float *)(*(long *)(lVar19 + 0xb8) + 0x15a8);
                fStack0000000000000100 = 0.0;
              }
            }
            else {
              lVar19 = lVar19 + unaff_x29 * 0x178;
              iVar6 = *(int *)(lVar19 + 0x68);
              *(undefined4 *)(lVar19 + 0x16c) = in_stack_000017d4;
              if ((((int)unaff_x19[0x65] < (int)unaff_w24) ||
                  ((int)unaff_x19[0x66] < (int)unaff_w28)) ||
                 (((int)unaff_x19[0x5c] == 5 && (iVar6 + 1 != (int)unaff_x19[0x67])))) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar8 = FUN_026b63d8(in_stack_00000178,0);
              if ((in_stack_00000178 != 0x200b) && ((uVar8 & 1) == 0)) {
                lVar19 = *in_stack_00000050;
                if ((lVar19 == 0) || (lVar11 = *(long *)(lVar19 + 0x38), lVar11 == 0))
                goto LAB_0354fbf4;
                if (*(uint *)(lVar11 + 0x18) <= unaff_w24)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                fVar21 = *(float *)(lVar11 + unaff_x29 * 0x178 + 0x160);
                if (unaff_s15 <= fVar21) {
                  unaff_s15 = fVar21;
                }
                if (fStack0000000000000100 <= ABS(unaff_s14)) {
                  fStack0000000000000100 = ABS(unaff_s14);
                }
                if (iVar6 != iStack000000000000005c) {
                  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar19 = *in_stack_00000050;
                    if (lVar19 == 0) goto LAB_0354fbf4;
                    lVar11 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                  }
                  else {
                    lVar11 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                  }
                  fStack0000000000000104 = *(float *)(lVar11 + 0x15a8);
                }
                lVar19 = *(long *)(lVar19 + 0x38);
                if (lVar19 == 0) goto LAB_0354fbf4;
                if (*(uint *)(lVar19 + 0x18) <= unaff_w24)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
                fVar24 = *(float *)(lVar19 + unaff_x29 * 0x178 + 0x14c);
                fVar21 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
                fVar24 = fVar24 + unaff_s15 * fVar21;
                iStack000000000000005c = iVar6;
                if (fVar24 <= fStack0000000000000104) {
                  fStack0000000000000104 = fVar24;
                }
              }
              if ((in_stack_00000130._4_4_ & 1) == 0) {
                in_stack_00000130._4_4_ = 0;
                if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
                    ((int)uVar16 < (int)unaff_w24)) || ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
                if (unaff_w24 == uVar16) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar8 = FUN_026b97f8(in_stack_00000178,0);
                  if ((uVar8 & 1) != 0) goto LAB_0354eb28;
                }
                if ((*in_stack_00000050 == 0) ||
                   (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 == 0)) goto LAB_0354fbf4;
                if (*(uint *)(lVar19 + 0x18) <= unaff_w24)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar19 = lVar19 + unaff_x29 * 0x178;
                in_stack_00000080._4_4_ = *(float *)(lVar19 + 0x160);
                in_stack_00000070 = *(undefined4 *)(lVar19 + 0x11c);
                bVar5 = unaff_s15 != 0.0;
                fVar21 = in_stack_00000080._4_4_;
                if (bVar5) {
                  fVar21 = unaff_s15;
                }
                unaff_s15 = fVar21;
                in_stack_00000088 = *(undefined4 *)(lVar19 + 0x168);
                uStack000000000000006c = 0;
                fVar21 = unaff_s14;
                if (bVar5) {
                  fVar21 = fStack0000000000000100;
                }
                fStack0000000000000068 = fStack0000000000000104;
                fStack0000000000000100 = fVar21;
              }
              if (*in_stack_00000090 == 1) {
                if ((*in_stack_00000050 != 0) &&
                   (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 != 0)) {
                  if (unaff_w24 < *(uint *)(lVar19 + 0x18)) {
                    lVar19 = lVar19 + unaff_x29 * 0x178;
                    lVar11 = *unaff_x19;
                    uVar22 = *(undefined4 *)(lVar19 + 0x128);
                    uVar26 = *(undefined4 *)(lVar19 + 0x160);
                    goto LAB_0354ebc0;
                  }
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                }
                goto LAB_0354fbf4;
              }
              if ((unaff_w24 == uVar20) || ((int)uVar16 <= (int)unaff_w24)) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar8 = FUN_026b63d8(in_stack_00000178,0);
                if ((*in_stack_00000050 != 0) &&
                   (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 != 0)) {
                  lVar11 = unaff_x29;
                  uVar13 = unaff_w24;
                  if (in_stack_00000178 == 0x200b || (uVar8 & 1) != 0) {
                    lVar11 = in_stack_00000128;
                    uVar13 = uVar16;
                  }
                  if (uVar13 < *(uint *)(lVar19 + 0x18)) {
                    lVar19 = lVar19 + lVar11 * 0x178;
                    uVar22 = *(undefined4 *)(lVar19 + 0x128);
                    uVar26 = *(undefined4 *)(lVar19 + 0x160);
                    pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
                    goto LAB_0354ebc8;
                  }
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                }
                goto LAB_0354fbf4;
              }
              if (!bVar1) {
                if ((*in_stack_00000050 != 0) &&
                   (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 != 0)) {
                  uVar13 = *(uint *)(lVar19 + 0x18);
                  goto LAB_0354e660;
                }
                goto LAB_0354fbf4;
              }
              if ((int)unaff_w24 < *in_stack_00000090 + -1) {
                if ((*in_stack_00000050 == 0) ||
                   (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 == 0)) goto LAB_0354fbf4;
                if (*(uint *)(lVar19 + 0x18) <= in_stack_00000170)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                uVar8 = FUN_03567ad8(in_stack_00000088,*(undefined4 *)(lVar19 + in_stack_00000138),0
                                    );
                if ((uVar8 & 1) == 0) {
                  if ((*in_stack_00000050 != 0) &&
                     (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 != 0)) {
                    if (unaff_w24 < *(uint *)(lVar19 + 0x18)) {
                      lVar19 = lVar19 + unaff_x29 * 0x178;
                      (**(code **)(*unaff_x19 + 0x8d8))
                                (in_stack_00000070,fStack0000000000000068,uStack000000000000006c,
                                 *(undefined4 *)(lVar19 + 0x128),fStack0000000000000104,0,
                                 in_stack_00000080._4_4_,*(undefined4 *)(lVar19 + 0x160));
                      puVar4 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                      lVar19 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if (*(int *)(lVar19 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar19 = *(long *)puVar4;
                      }
                      goto LAB_0354ec1c;
                    }
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  }
                  goto LAB_0354fbf4;
                }
              }
              in_stack_00000130._4_4_ = 1;
            }
LAB_0354ec38:
            if ((*in_stack_00000050 == 0) ||
               (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 == 0)) goto LAB_0354fbf4;
            if (*(uint *)(lVar19 + 0x18) <= unaff_w24)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (in_stack_00000110 == 0) goto LAB_0354fbf4;
            uVar13 = *(uint *)(lVar19 + unaff_x29 * 0x178 + 400);
            fVar21 = (float)FUN_03776a30(in_stack_00000110 + 0x50,0);
            if ((uVar13 >> 6 & 1) == 0) {
              if ((uStack0000000000000120 & 1) != 0) {
                if ((*in_stack_00000050 == 0) ||
                   (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 == 0)) goto LAB_0354fbf4;
                if (*(uint *)(lVar19 + 0x18) <= in_stack_00000170 - 2)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                uVar22 = *(undefined4 *)(lVar19 + in_stack_00000138 + -0x330);
                fVar23 = *(float *)(lVar19 + in_stack_00000138 + -0x30c);
                pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
                (*pcVar14)(in_stack_000000a0,fStack000000000000009c,uStack0000000000000098,uVar22,
                           in_stack_000000a8 * fVar21 + fVar23,0,in_stack_000000a8,in_stack_000000a8
                          );
              }
LAB_0354f250:
              uStack0000000000000120 = 0;
            }
            else {
              lVar19 = *in_stack_00000050;
              if ((lVar19 == 0) || (lVar11 = *(long *)(lVar19 + 0x38), lVar11 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar11 + 0x18) <= unaff_w24)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              *(undefined4 *)(lVar11 + unaff_x29 * 0x178 + 0x174) = in_stack_000017d4;
              if ((((int)unaff_x19[0x65] < (int)unaff_w24) ||
                  ((int)unaff_x19[0x66] < (int)unaff_w28)) ||
                 (((int)unaff_x19[0x5c] == 5 &&
                  (*(int *)(lVar11 + unaff_x29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
                  ((int)uVar16 < (int)unaff_w24)) || ((uStack0000000000000120 & 1) != 0 || !bVar1))
              {
LAB_0354ed84:
                if ((uStack0000000000000120 & 1) == 0) goto LAB_0354f250;
              }
              else {
                if (unaff_w24 == uVar16) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar8 = FUN_026b97f8(in_stack_00000178,0);
                  if ((uVar8 & 1) != 0) goto LAB_0354ed84;
                  lVar19 = *in_stack_00000050;
                  if (lVar19 == 0) goto LAB_0354fbf4;
                }
                lVar19 = *(long *)(lVar19 + 0x38);
                if (lVar19 == 0) goto LAB_0354fbf4;
                if (*(uint *)(lVar19 + 0x18) <= unaff_w24)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar19 = lVar19 + unaff_x29 * 0x178;
                in_stack_00000048._4_4_ = *(float *)(lVar19 + 0x60);
                in_stack_00000040 = *(float *)(lVar19 + 0x14c);
                in_stack_000000a0 = *(undefined4 *)(lVar19 + 0x11c);
                in_stack_000000a8 = *(float *)(lVar19 + 0x160);
                fStack000000000000009c = fVar21 * in_stack_000000a8 + in_stack_00000040;
                uStack0000000000000098 = 0;
              }
              iVar6 = *in_stack_00000090;
              if (iVar6 == 1) {
                if ((*in_stack_00000050 != 0) &&
                   (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 != 0)) {
                  uVar13 = *(uint *)(lVar19 + 0x18);
LAB_0354ef0c:
                  if (unaff_w24 < uVar13) {
                    lVar19 = lVar19 + unaff_x29 * 0x178;
                    lVar11 = *unaff_x19;
                    uVar22 = *(undefined4 *)(lVar19 + 0x128);
                    fVar23 = *(float *)(lVar19 + 0x14c);
LAB_0354ef24:
                    pcVar14 = *(code **)(lVar11 + 0x8d8);
                    goto LAB_0354f21c;
                  }
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                }
                goto LAB_0354fbf4;
              }
              if (unaff_w24 == uVar20) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar8 = FUN_026b63d8(in_stack_00000178,0);
                if ((*in_stack_00000050 != 0) &&
                   (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 != 0)) {
                  uVar13 = *(uint *)(lVar19 + 0x18);
                  if (in_stack_00000178 == 0x200b || (uVar8 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
                  in_stack_00000128 = unaff_x29;
                  if (unaff_w24 < uVar13) {
LAB_0354f1f8:
                    lVar19 = lVar19 + in_stack_00000128 * 0x178;
                    fVar23 = *(float *)(lVar19 + 0x14c);
                    uVar22 = *(undefined4 *)(lVar19 + 0x128);
                    pcVar14 = *(code **)(*unaff_x19 + 0x8d8);
                    goto LAB_0354f21c;
                  }
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                }
                goto LAB_0354fbf4;
              }
              if ((int)unaff_w24 < iVar6) {
                lVar19 = *in_stack_00000050;
                if ((lVar19 != 0) && (lVar11 = *(long *)(lVar19 + 0x38), lVar11 != 0)) {
                  if (in_stack_00000170 < *(uint *)(lVar11 + 0x18)) {
                    if (*(float *)(lVar11 + in_stack_00000138 + -0x108) == in_stack_00000048._4_4_)
                    {
                      fVar24 = *(float *)(lVar11 + in_stack_00000138 + -0x1c);
                      if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar8 = FUN_03567bac(fVar23 + fVar24,in_stack_00000040,0);
                      if ((uVar8 & 1) != 0) {
                        iVar6 = *in_stack_00000090;
                        goto LAB_0354f010;
                      }
                      lVar19 = *in_stack_00000050;
                      if (lVar19 == 0) goto LAB_0354fbf4;
                    }
                    lVar19 = *(long *)(lVar19 + 0x38);
                    if (lVar19 != 0) {
                      uVar13 = *(uint *)(lVar19 + 0x18);
                      if ((int)unaff_w24 <= (int)uVar16) goto LAB_0354f1f0;
LAB_0354f1e0:
                      if (uVar16 < uVar13) goto LAB_0354f1f8;
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    }
                    goto LAB_0354fbf4;
                  }
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                }
                goto LAB_0354fbf4;
              }
LAB_0354f010:
              if ((int)unaff_w24 < iVar6) {
                iVar6 = FUN_036d3364(in_stack_00000110,0);
                if (*(uint *)(unaff_x25 + 0x18) <= in_stack_00000170)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar19 = *(long *)(unaff_x25 + in_stack_00000138 + -0x130);
                if (lVar19 == 0) goto LAB_0354fbf4;
                iVar7 = FUN_036d3364(lVar19,0);
                if (iVar6 != iVar7) {
                  if ((*in_stack_00000050 != 0) &&
                     (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 != 0)) {
                    uVar13 = *(uint *)(lVar19 + 0x18);
                    goto LAB_0354ef0c;
                  }
                  goto LAB_0354fbf4;
                }
              }
              if (!bVar1) {
                if ((*in_stack_00000050 != 0) &&
                   (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 != 0)) {
                  if (in_stack_00000170 - 2 < *(uint *)(lVar19 + 0x18)) {
                    lVar11 = *unaff_x19;
                    uVar22 = *(undefined4 *)(lVar19 + in_stack_00000138 + -0x330);
                    fVar23 = *(float *)(lVar19 + in_stack_00000138 + -0x30c);
                    goto LAB_0354ef24;
                  }
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                }
                goto LAB_0354fbf4;
              }
              uStack0000000000000120 = 1;
            }
            if ((*in_stack_00000050 == 0) ||
               (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 == 0)) goto LAB_0354fbf4;
            uVar13 = (uint)*(undefined8 *)(lVar19 + 0x18);
            if (uVar13 <= unaff_w24) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if ((*(byte *)(lVar19 + unaff_x29 * 0x178 + 0x191) >> 1 & 1) == 0) {
              if ((uStack0000000000000118 & 1) != 0) {
                (**(code **)(*unaff_x19 + 0x8e8))
                          (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                           fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
              }
LAB_0354f604:
              uStack0000000000000118 = 0;
            }
            else {
              if ((((int)unaff_x19[0x65] < (int)unaff_w24) ||
                  ((int)unaff_x19[0x66] < (int)unaff_w28)) ||
                 (((int)unaff_x19[0x5c] == 5 &&
                  (*(int *)(lVar19 + unaff_x29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if ((uStack0000000000000118 & 1) == 0) {
                if ((((in_stack_00000178 != 0xd) && ((in_stack_00000178 & 0xfffe) != 10)) &&
                    ((int)unaff_w24 <= (int)uVar16)) && (bVar1)) {
                  if (unaff_w24 == uVar16) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar8 = FUN_026b97f8(in_stack_00000178,0);
                    if ((uVar8 & 1) != 0) goto LAB_0354f374;
                  }
                  puVar4 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                  lVar11 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar11 = *(long *)puVar4;
                  }
                  if ((*in_stack_00000050 != 0) &&
                     (lVar19 = *(long *)(*in_stack_00000050 + 0x38), lVar19 != 0)) {
                    uVar13 = (uint)*(undefined8 *)(lVar19 + 0x18);
                    if (unaff_w24 < uVar13) {
                      lVar11 = *(long *)(lVar11 + 0xb8);
                      lVar15 = lVar19 + unaff_x29 * 0x178;
                      in_stack_000017c8 = *(undefined8 *)(lVar15 + 0x184);
                      in_stack_000017c0 = *(undefined8 *)(lVar15 + 0x17c);
                      fStack00000000000000e0 = *(float *)(lVar11 + 0x1598);
                      fStack00000000000000e4 = *(float *)(lVar11 + 0x159c);
                      in_stack_000017d0 = *(float *)(lVar15 + 0x18c);
                      fStack00000000000000d0 = *(float *)(lVar11 + 0x15a0);
                      fStack00000000000000d4 = *(float *)(lVar11 + 0x15a4);
                      uStack00000000000000c0 = 0;
                      goto LAB_0354f400;
                    }
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  }
                  goto LAB_0354fbf4;
                }
LAB_0354f374:
                uStack0000000000000118 = 0;
              }
              else {
LAB_0354f400:
                if (uVar13 <= unaff_w24)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                lVar19 = lVar19 + unaff_x29 * 0x178;
                fVar21 = *(float *)(lVar19 + 0x128);
                fVar27 = *(float *)(lVar19 + 0x188);
                uVar18 = *(undefined8 *)(lVar19 + 0x17c);
                fVar29 = *(float *)(lVar19 + 0x184);
                uVar17 = *(undefined8 *)(lVar19 + 0x184);
                fVar28 = *(float *)(lVar19 + 0x18c);
                fVar23 = *(float *)(lVar19 + 0x11c);
                fVar24 = *(float *)(lVar19 + 0x148);
                fVar25 = *(float *)(lVar19 + 0x150);
                in_stack_00000188 = uVar18;
                fStack0000000000000190 = fVar29;
                fStack0000000000000194 = fVar27;
                in_stack_00000198 = fVar28;
                in_stack_000001a0 = in_stack_000017c0;
                in_stack_000001a8 = in_stack_000017c8;
                in_stack_000001b0 = in_stack_000017d0;
                uVar8 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
                lVar19 = *(long *)OVRPlugin_Mesh_TypeInfo;
                if ((uVar8 & 1) == 0) {
                  if (*(int *)(lVar19 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(lVar19);
                  }
                  fVar21 = fVar21 + (float)in_stack_000017c8;
                  fVar23 = fVar23 - (float)((ulong)in_stack_000017c0 >> 0x20);
                  fVar24 = fVar24 + (float)((ulong)in_stack_000017c8 >> 0x20);
                  if (fVar23 <= fStack00000000000000e0) {
                    fStack00000000000000e0 = fVar23;
                  }
                  if (fVar25 - in_stack_000017d0 <= fStack00000000000000e4) {
                    fStack00000000000000e4 = fVar25 - in_stack_000017d0;
                  }
                  if (fStack00000000000000d0 <= fVar21) {
                    fStack00000000000000d0 = fVar21;
                  }
                  if (fStack00000000000000d4 <= fVar24) {
                    fStack00000000000000d4 = fVar24;
                  }
                }
                else {
                  if (*(int *)(lVar19 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(lVar19);
                  }
                  fVar23 = (fVar23 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
                  if (fVar25 <= fStack00000000000000e4) {
                    fStack00000000000000e4 = fVar25;
                  }
                  if (fStack00000000000000d4 <= fVar24) {
                    fStack00000000000000d4 = fVar24;
                  }
                  (**(code **)(*unaff_x19 + 0x8e8))
                            (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                             fVar23,fStack00000000000000d4,uStack00000000000000c0);
                  fStack00000000000000e4 = fVar25 - fVar28;
                  fStack00000000000000d0 = fVar21 + fVar29;
                  uStack00000000000000c0 = 0;
                  fStack00000000000000d4 = fVar24 + fVar27;
                  fStack00000000000000e0 = fVar23;
                  in_stack_000017c0 = uVar18;
                  in_stack_000017c8 = uVar17;
                  in_stack_000017d0 = fVar28;
                }
                if (((*in_stack_00000090 == 1) || (unaff_w24 == uVar20)) ||
                   (((int)uVar16 <= (int)unaff_w24 || (!bVar1)))) {
                  (**(code **)(*unaff_x19 + 0x8e8))
                            (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                             fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
                  goto LAB_0354f604;
                }
                uStack0000000000000118 = 1;
              }
            }
            puVar4 = OVRPlugin_Media_TypeInfo;
            iVar6 = *in_stack_00000090;
            iStack0000000000000124 = iStack0000000000000124 + 1;
            uVar13 = in_stack_00000170 + 1;
            in_stack_00000138 = in_stack_00000138 + 0x178;
            if (iVar6 <= (int)in_stack_00000170) {
              lVar19 = *in_stack_00000050;
              if (lVar19 == 0) goto LAB_0354fbf4;
              *(int *)(lVar19 + 0x18) = iVar6;
              lVar11 = unaff_x19[0xd4];
              *(uint *)(lVar19 + 0x2c) = unaff_w28 + 1;
              if (iVar6 < 1 || in_stack_000000d8 == 0) {
                in_stack_000000d8 = 1;
              }
              *(int *)(lVar19 + 0x1c) = (int)lVar11;
              *(int *)(lVar19 + 0x24) = in_stack_000000d8;
              *(int *)(lVar19 + 0x30) = (int)unaff_x19[0x96] + 1;
              if (((int)unaff_x19[99] != 0xff) ||
                 (uVar8 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar8 & 1) == 0)) goto LAB_0354d0cc;
              lVar19 = unaff_x19[0xdb];
              if (lVar19 != 0) {
                (**(code **)(lVar19 + 0x18))
                          (*(undefined8 *)(lVar19 + 0x40),*in_stack_00000050,
                           *(undefined8 *)(lVar19 + 0x28));
              }
              if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                if ((*in_stack_00000050 == 0) ||
                   (lVar19 = *(long *)(*in_stack_00000050 + 0x60), lVar19 == 0)) goto LAB_0354fbf4;
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                if (*(int *)(lVar19 + 0x18) == 0)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                FUN_03596b20(lVar19 + 0x20,1,0);
              }
              if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
              FUN_036aa790(unaff_x19[0x74],0);
              if ((unaff_x19[0x6d] == 0) ||
                 (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 == 0)) goto LAB_0354fbf4;
              if (*(int *)(lVar19 + 0x18) == 0)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
              FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x30),0);
              if ((unaff_x19[0x6d] == 0) ||
                 (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 == 0)) goto LAB_0354fbf4;
              if (*(int *)(lVar19 + 0x18) == 0)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x48),0);
              if ((unaff_x19[0x6d] == 0) ||
                 (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 == 0)) goto LAB_0354fbf4;
              if (*(int *)(lVar19 + 0x18) == 0)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
              FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x50),0);
              if ((unaff_x19[0x6d] == 0) ||
                 (lVar19 = *(long *)(unaff_x19[0x6d] + 0x60), lVar19 == 0)) goto LAB_0354fbf4;
              if (*(int *)(lVar19 + 0x18) == 0)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
              FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar19 + 0x58),0);
              if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
              FUN_036aa280(unaff_x19[0x74],0);
              lVar19 = *in_stack_00000050;
              if (lVar19 == 0) goto LAB_0354fbf4;
              lVar15 = 0;
              lVar11 = 0;
              goto LAB_0354f97c;
            }
            if (*(uint *)(unaff_x25 + 0x18) <= in_stack_00000170)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if ((*in_stack_00000050 == 0) ||
               (lVar19 = *(long *)(*in_stack_00000050 + 0x50), lVar19 == 0)) goto LAB_0354fbf4;
            unaff_x29 = (long)(int)in_stack_00000170;
            lVar11 = unaff_x25 + unaff_x29 * 0x178;
            in_stack_00000180 = *(uint *)(lVar11 + 100);
            if (*(uint *)(lVar19 + 0x18) <= in_stack_00000180)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            in_stack_00000110 = *(long *)(lVar11 + 0x38);
            in_stack_00000060 = (long)(int)in_stack_00000180;
            lVar19 = lVar19 + in_stack_00000060 * 0x5c;
            uVar20 = *(uint *)(lVar19 + 0x68);
            in_stack_00000178 = (uint)*(ushort *)(lVar11 + 0x20);
            uVar16 = *(uint *)(lVar19 + 0x3c);
            in_stack_000000e8 = (long)(int)uVar16;
            iVar2 = *(int *)(lVar19 + 0x20);
            iVar6 = *(int *)(lVar19 + 0x28);
            iVar7 = *(int *)(lVar19 + 0x2c);
            fVar24 = *(float *)(lVar19 + 0x4c);
            in_stack_00000128 = (long)*(int *)(lVar19 + 0x40);
            fVar27 = *(float *)(lVar19 + 0x54);
            fVar23 = *(float *)(lVar19 + 0x58);
            fVar29 = *(float *)(lVar19 + 0x5c);
            fVar30 = *(float *)(lVar19 + 0x60);
            fVar28 = *(float *)(lVar19 + 0x6c);
            fVar31 = *(float *)(lVar19 + 0x70);
            fVar21 = *(float *)(lVar19 + 0x74);
            fVar25 = *(float *)(lVar19 + 0x78);
            if ((int)uVar20 < 9) {
              switch(uVar20) {
              case 1:
                if ((char)unaff_x19[0x1e] == '\0') {
                  in_stack_000000f8._4_4_ = fVar30 + 0.0;
                }
                else {
                  in_stack_000000f8._4_4_ = 0.0 - fVar23;
                }
                break;
              case 2:
LAB_0354d968:
                in_stack_000000f8._4_4_ = (fVar30 + fVar29 * 0.5) - fVar23 * 0.5;
                break;
              default:
                goto switchD_0354d8a4_caseD_3;
              case 4:
                in_stack_000000f8._4_4_ = (fVar29 + fVar30) - fVar23;
                if ((char)unaff_x19[0x1e] != '\0') {
                  in_stack_000000f8._4_4_ = fVar29 + fVar30;
                }
                break;
              case 8:
                goto switchD_0354d8a4_caseD_8;
              }
LAB_0354d9d8:
              in_stack_000000f0 = 0;
            }
            else if (uVar20 == 0x10) {
switchD_0354d8a4_caseD_8:
              if (in_stack_00000178 < 0xad) {
                if ((in_stack_00000178 != 3) && (in_stack_00000178 != 10)) goto FUN_0354d8fc;
              }
              else if ((in_stack_00000178 != 0xad) &&
                      ((in_stack_00000178 != 0x200b && (in_stack_00000178 != 0x2060)))) {
FUN_0354d8fc:
                if (*(uint *)(unaff_x25 + 0x18) <= uVar16)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                uVar3 = *(undefined2 *)(in_stack_000000c8 + in_stack_000000e8 * 0x178 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar8 = FUN_026b8cc4(uVar3,0);
                if ((uVar8 & 1) == 0) {
                  bVar1 = (int)in_stack_00000180 < (int)unaff_x19[0x95];
                }
                else {
                  bVar1 = false;
                }
                if ((fVar23 <= fVar29) && (!bVar1 && uVar20 >> 4 == 0)) {
                  in_stack_000000f8._4_4_ = fVar30;
                  if ((char)unaff_x19[0x1e] != '\0') {
                    in_stack_000000f8._4_4_ = fVar29 + fVar30;
                  }
                  goto LAB_0354d9d8;
                }
                if (((uVar13 == 1) || (in_stack_00000180 != unaff_w28)) ||
                   (in_stack_00000170 == *(uint *)((long)unaff_x19 + 0x324))) {
                  in_stack_000000f8._4_4_ = fVar30;
                  if ((char)unaff_x19[0x1e] != '\0') {
                    in_stack_000000f8._4_4_ = fVar29 + fVar30;
                  }
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uStack0000000000000030 = FUN_026b97f8(in_stack_00000178,0);
                  in_stack_000000f0 = 0;
                }
                else {
                  cVar10 = (char)unaff_x19[0x1e];
                  fVar30 = -fVar23;
                  if (cVar10 != '\0') {
                    fVar30 = fVar23;
                  }
                  if (*(uint *)(in_stack_000000c8 + 0x18) <= uVar16)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  iVar7 = (int)*(char *)(in_stack_000000c8 + in_stack_000000e8 * 0x178 + 0x194) +
                          (-iVar2 - (uStack0000000000000030 & 1)) + iVar7 + -1;
                  if (iVar7 < 1) {
                    fVar23 = 1.0;
                    iVar7 = 1;
                  }
                  else {
                    fVar23 = *(float *)((long)unaff_x19 + 0x2dc);
                  }
                  if (in_stack_00000178 == 9) {
LAB_0354f76c:
                    fVar23 = 1.0 - fVar23;
                  }
                  else {
                    if (in_stack_00000178 != 0xa0) {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar8 = FUN_026b97f8(in_stack_00000178,0);
                      cVar10 = (char)unaff_x19[0x1e];
                      if ((uVar8 & 1) != 0) goto LAB_0354f76c;
                    }
                    iVar7 = (iVar2 - (~uStack0000000000000030 & 1)) + iVar6;
                  }
                  fVar23 = ((fVar29 + fVar30) * fVar23) / (float)iVar7;
                  if (cVar10 == '\0') {
                    in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar23;
                    in_stack_000000f0 =
                         CONCAT44((float)((ulong)in_stack_000000f0 >> 0x20) + 0.0,
                                  (float)in_stack_000000f0 + 0.0);
                  }
                  else {
                    in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar23;
                  }
                }
              }
            }
            else if (uVar20 == 0x20) {
              fVar23 = fVar28 + fVar21;
              goto LAB_0354d968;
            }
switchD_0354d8a4_caseD_3:
            uVar17 = *(undefined8 *)(in_stack_000000c8 + 0x18);
            uVar16 = (uint)uVar17;
            if (uVar16 <= in_stack_00000170)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            unaff_x23 = 0x178;
            unaff_x20 = in_stack_000000c8 + unaff_x29 * 0x178;
            in_stack_00000140 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
            in_stack_00000150 =
                 CONCAT44((float)((ulong)in_stack_000000b8 >> 0x20) +
                          (float)((ulong)in_stack_000000f0 >> 0x20),
                          (float)in_stack_000000b8 + (float)in_stack_000000f0);
            unaff_x25 = in_stack_000000c8;
            unaff_w24 = in_stack_00000170;
            uVar20 = unaff_w28;
          } while (*(char *)(unaff_x20 + 0x194) == '\0');
          unaff_w26 = *(int *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x2c);
          if (unaff_w26 == 0) goto code_r0x0354da38;
          goto LAB_0354e05c;
        }
      }
    }
  }
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
code_r0x0354da38:
  fVar23 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000180,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
    *(undefined4 *)(lVar19 + 0x84) = 0;
    *(undefined4 *)(lVar19 + 0xac) = 0;
    *(undefined4 *)(lVar19 + 0xd4) = 0x3f800000;
    fVar23 = 1.0;
    break;
  case 1:
    fVar25 = *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar21 = (in_stack_000000f8._4_4_ + fVar25) - *(float *)(in_stack_00000078 + 0x230);
      fVar25 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
      goto LAB_0354db24;
    }
    lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar21 = fVar21 - fVar28;
    *(float *)(lVar19 + 0x84) = fVar23 + (fVar25 - fVar28) / fVar21;
    *(float *)(lVar19 + 0xac) = fVar23 + (*(float *)(lVar19 + 0x98) - fVar28) / fVar21;
    *(float *)(lVar19 + 0xd4) = fVar23 + (*(float *)(lVar19 + 0xc0) - fVar28) / fVar21;
    fVar23 = fVar23 + (*(float *)(lVar19 + 0xe8) - fVar28) / fVar21;
    break;
  case 2:
    lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar25 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
    fVar21 = (in_stack_000000f8._4_4_ + *(float *)(lVar19 + 0x70)) -
             *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
    *(float *)(lVar19 + 0x84) = fVar23 + fVar21 / fVar25;
    *(float *)(lVar19 + 0xac) =
         fVar23 + ((in_stack_000000f8._4_4_ + *(float *)(lVar19 + 0x98)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    *(float *)(lVar19 + 0xd4) =
         fVar23 + ((in_stack_000000f8._4_4_ + *(float *)(lVar19 + 0xc0)) -
                  *(float *)(in_stack_00000078 + 0x230)) /
                  (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230));
    fVar23 = fVar23 + ((in_stack_000000f8._4_4_ + *(float *)(lVar19 + 0xe8)) -
                      *(float *)(in_stack_00000078 + 0x230)) /
                      (*(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
      *(undefined4 *)(lVar19 + 0x88) = 0;
      *(undefined4 *)(lVar19 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar19 + 0xd8) = 0;
      *(undefined4 *)(lVar19 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar25 = fVar25 - fVar31;
      fVar21 = fVar23 + (*(float *)(lVar19 + 0x74) - fVar31) / fVar25;
      fVar25 = fVar23 + (*(float *)(lVar19 + 0x9c) - fVar31) / fVar25;
      *(float *)(lVar19 + 0x88) = fVar21;
      *(float *)(lVar19 + 0xb0) = fVar25;
      *(float *)(lVar19 + 0xd8) = fVar21;
      *(float *)(lVar19 + 0x100) = fVar25;
      break;
    case 2:
      lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
      fVar21 = fVar23 + (*(float *)(lVar19 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar19 + 0x88) = fVar21;
      fVar25 = *(float *)(unaff_x19 + 0x9c);
      fVar28 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar19 + 0xd8) = fVar21;
      fVar21 = fVar23 + (*(float *)(lVar19 + 0x9c) - fVar25) / (fVar28 - fVar25);
      *(float *)(lVar19 + 0xb0) = fVar21;
      *(float *)(lVar19 + 0x100) = fVar21;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar16 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
    }
    if (uVar16 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar21 = *(float *)(lVar19 + 0x15c);
    fVar25 = (1.0 - (*(float *)(lVar19 + 0x88) + *(float *)(lVar19 + 0xb0)) * fVar21) * 0.5;
    fVar28 = fVar23 + *(float *)(lVar19 + 0x88) * fVar21 + fVar25;
    fVar23 = fVar23 + fVar25 + *(float *)(lVar19 + 0xb0) * fVar21;
    *(float *)(lVar19 + 0x84) = fVar28;
    *(float *)(lVar19 + 0xac) = fVar28;
    *(float *)(lVar19 + 0xd4) = fVar23;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xfc) = fVar23;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar16 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
    *(undefined4 *)(lVar19 + 0x88) = 0;
    *(undefined4 *)(lVar19 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar19 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar19 + 0x100) = 0;
    break;
  case 1:
    if (uVar16 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar24 = fVar24 - fVar27;
    fVar23 = (*(float *)(lVar19 + 0x74) - fVar27) / fVar24;
    fVar24 = (*(float *)(lVar19 + 0x9c) - fVar27) / fVar24;
    *(float *)(lVar19 + 0x88) = fVar23;
    goto LAB_0354de84;
  case 2:
    if (uVar16 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar23 = (*(float *)(lVar19 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar19 + 0x88) = fVar23;
    fVar24 = (*(float *)(lVar19 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar19 + 0xb0) = fVar24;
    *(float *)(lVar19 + 0xd8) = fVar24;
    *(float *)(lVar19 + 0x100) = fVar23;
    break;
  case 3:
    if (uVar16 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
    fVar24 = *(float *)(lVar19 + 0x15c);
    fVar21 = (1.0 - (*(float *)(lVar19 + 0x84) + *(float *)(lVar19 + 0xd4)) / fVar24) * 0.5;
    fVar23 = *(float *)(lVar19 + 0x84) / fVar24 + fVar21;
    fVar21 = fVar21 + *(float *)(lVar19 + 0xd4) / fVar24;
    *(float *)(lVar19 + 0x88) = fVar23;
    *(float *)(lVar19 + 0xb0) = fVar21;
    *(float *)(lVar19 + 0x100) = fVar23;
    *(float *)(lVar19 + 0xd8) = fVar21;
  }
  if (uVar16 <= in_stack_00000170) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar19 = in_stack_000000c8 + unaff_x29 * 0x178;
  unaff_s14 = fStack0000000000000058 * *(float *)(lVar19 + 0x160) *
              (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if (*(char *)(lVar19 + 0x5c) == '\0') goto code_r0x0354df14;
  goto LAB_0354df28;
code_r0x0354df14:
  in_w8 = *(byte *)(in_stack_000000c8 + unaff_x29 * 0x178 + 400);
  in_stack_00000170 = uVar13;
  goto code_r0x0354df1c;
  while( true ) {
    lVar19 = *in_stack_00000050;
    lVar11 = lVar11 + 1;
    lVar15 = lVar15 + 0x50;
    if (lVar19 == 0) break;
LAB_0354f97c:
    uVar8 = lVar11 + 1;
    if ((long)*(int *)(lVar19 + 0x34) <= (long)uVar8) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar19 = *(long *)(lVar19 + 0x60);
    if (lVar19 == 0) break;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar19 + 0x18) <= uVar8)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_03596a20(lVar19 + lVar15 + 0x70,0);
    lVar19 = unaff_x19[0xe1];
    if (lVar19 == 0) break;
    if (*(uint *)(lVar19 + 0x18) <= uVar8)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar17 = *(undefined8 *)(lVar19 + lVar11 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar9 = FUN_036d35a8(uVar17,0,0);
    if ((uVar9 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*in_stack_00000050 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000050 + 0x60), lVar19 == 0)) break;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar19 + 0x18) <= uVar8) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar19 + lVar15 + 0x70,1,0);
      }
      lVar19 = unaff_x19[0xe1];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar19 = *(long *)(lVar19 + lVar11 * 8 + 0x28);
      if (lVar19 == 0) break;
      lVar19 = FUN_0359d5ac(lVar19,0);
      if ((*in_stack_00000050 == 0) || (lVar12 = *(long *)(*in_stack_00000050 + 0x60), lVar12 == 0))
      break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar19 == 0) break;
      FUN_036a460c(lVar19,*(undefined8 *)(lVar12 + lVar15 + 0x80),0);
      lVar19 = unaff_x19[0xe1];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar19 = *(long *)(lVar19 + lVar11 * 8 + 0x28);
      if (lVar19 == 0) break;
      lVar19 = FUN_0359d5ac(lVar19,0);
      if ((*in_stack_00000050 == 0) || (lVar12 = *(long *)(*in_stack_00000050 + 0x60), lVar12 == 0))
      break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar19 == 0) break;
      FUN_036a4810(lVar19,*(undefined8 *)(lVar12 + lVar15 + 0x98),0);
      lVar19 = unaff_x19[0xe1];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar19 = *(long *)(lVar19 + lVar11 * 8 + 0x28);
      if (lVar19 == 0) break;
      lVar19 = FUN_0359d5ac(lVar19,0);
      if ((*in_stack_00000050 == 0) || (lVar12 = *(long *)(*in_stack_00000050 + 0x60), lVar12 == 0))
      break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar19 == 0) break;
      FUN_036a48bc(lVar19,*(undefined8 *)(lVar12 + lVar15 + 0xa0),0);
      lVar19 = unaff_x19[0xe1];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar19 = *(long *)(lVar19 + lVar11 * 8 + 0x28);
      if (lVar19 == 0) break;
      lVar19 = FUN_0359d5ac(lVar19,0);
      if ((*in_stack_00000050 == 0) || (lVar12 = *(long *)(*in_stack_00000050 + 0x60), lVar12 == 0))
      break;
      if (*(uint *)(lVar12 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar19 == 0) break;
      FUN_036a4e24(lVar19,*(undefined8 *)(lVar12 + lVar15 + 0xa8),0);
      lVar19 = unaff_x19[0xe1];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar8)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar19 = *(long *)(lVar19 + lVar11 * 8 + 0x28);
      if ((lVar19 == 0) || (lVar19 = FUN_0359d5ac(lVar19,0), lVar19 == 0)) break;
      FUN_036aa280(lVar19,0);
    }
  }
LAB_0354fbf4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


