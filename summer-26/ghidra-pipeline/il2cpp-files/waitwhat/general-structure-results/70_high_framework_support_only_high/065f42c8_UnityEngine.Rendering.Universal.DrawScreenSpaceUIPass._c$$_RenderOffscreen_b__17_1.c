/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.DrawScreenSpaceUIPass.<>c$$<RenderOffscreen>b__17_1
ENTRY_POINT: 065f42c8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass_<>c__<RenderOffscreen>b__17_1
               (long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long in_x9;
  float *pfVar9;
  float *in_x10;
  long in_x11;
  uint uVar10;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 in_s3;
  float unaff_s8;
  float unaff_s9;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [12];
  long in_stack_00000018;
  int in_stack_00000020;
  undefined8 in_stack_00000028;
  float fStack0000000000000038;
  int iStack000000000000003c;
  int in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  int in_stack_00000068;
  undefined8 in_stack_00000070;
  int in_stack_00000078;
  undefined8 in_stack_00000080;
  int in_stack_00000088;
  int in_stack_00000090;
  int iStack0000000000000098;
  int iStack000000000000009c;
  int in_stack_000000a0;
  undefined8 in_stack_000000a8;
  int in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  int in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  long in_stack_000000f8;
  undefined8 in_stack_00000100;
  int in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  do {
    if (*(int *)(in_x11 + 0xa0) < 1) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)*(byte *)(*(long *)(in_x11 + 0x98) + in_x9);
    }
    if (unaff_x29 == 0) goto LAB_065f48a4;
    if (*(uint *)(unaff_x29 + 0x18) <= unaff_w20) goto LAB_065f48a8;
                    /* try { // try from 065f4308 to 066f4313 has its CatchHandler @ 065f4d80 */
    *(uint *)(unaff_x29 + param_1 * 4 + 0x20) = uVar10;
    if (unaff_x21 != 0) {
                    /* try { // try from 065f4314 to 066f431f has its CatchHandler @ 065f4d7c */
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_065f48a8;
      fVar11 = *(float *)(*(long *)(in_x11 + 0x68) + in_x9 * 4);
      *(float *)(unaff_x21 + param_1 * 4 + 0x20) = fVar11;
      if (*(uint *)(unaff_x28 + 0x18) <= unaff_w20) goto LAB_065f48a8;
      fVar17 = fVar11 + -1.0;
      if (fVar11 <= 1.0) {
        fVar17 = in_stack_00000120._4_4_;
      }
      *in_x10 = fVar17;
    }
    if (unaff_x22 != 0) {
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_w20) goto LAB_065f48a8;
      lVar7 = unaff_x22 + param_1 * 0x10;
      pfVar9 = (float *)(*(long *)(in_x11 + 0x78) + (long)(int)in_x9 * 0xc);
      fVar17 = *pfVar9;
      fVar18 = pfVar9[1];
                    /* try { // try from 065f4378 to 066f4383 has its CatchHandler @ 065f4d04 */
      fVar11 = pfVar9[2];
      *(undefined4 *)(lVar7 + 0x2c) = 0;
      *(float *)(lVar7 + 0x28) = fVar11;
                    /* try { // try from 065f4384 to 066f4393 has its CatchHandler @ 065f3e98 */
      *(float *)(lVar7 + 0x20) = fVar17;
      *(float *)(lVar7 + 0x24) = fVar18;
                    /* try { // try from 065f4394 to 066f43a7 has its CatchHandler @ 065f4d00 */
      if (in_stack_000000c0._4_4_ <= fVar17 * fVar17 + fVar18 * fVar18 + fVar11 * fVar11) {
        fVar12 = -fVar18;
        fVar13 = -fVar11;
        uVar14 = FUN_069c5558(-fVar17,fVar12,0);
        if (DAT_07546bbc == '\0') {
          FUN_03188a78(PTR_DAT_070c22f8);
          DAT_07546bbc = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_069c1c74(&stack0x00000140,(float)in_stack_00000110 + fVar17,unaff_s9 + fVar18,
                     unaff_s8 + fVar11,uVar14,fVar12,fVar13,in_s3,0);
        if (unaff_x24 == 0) goto LAB_065f48a4;
        iVar1 = *(int *)(unaff_x24 + 0x1c);
        lVar7 = *(long *)(unaff_x24 + 0x10);
        in_stack_00000188 = in_stack_00000148;
        in_stack_00000180 = in_stack_00000140;
        in_stack_00000198 = in_stack_00000158;
        in_stack_00000190 = in_stack_00000150;
        in_stack_000001a8 = in_stack_00000168;
        in_stack_000001a0 = in_stack_00000160;
        in_stack_000001b8 = in_stack_00000178;
        in_stack_000001b0 = in_stack_00000170;
      }
      else {
        if (DAT_07547007 == '\0') {
          FUN_03188a78(PTR_DAT_070d2c80);
                    /* try { // try from 065f43c0 to 066f43cb has its CatchHandler @ 065f4cf0 */
          DAT_07547007 = '\x01';
        }
                    /* try { // try from 065f43cc to 066f43db has its CatchHandler @ 065f3e98 */
        if (unaff_x24 == 0) goto LAB_065f48a4;
                    /* try { // try from 065f43dc to 066f43ef has its CatchHandler @ 065f4cec */
        iVar1 = *(int *)(unaff_x24 + 0x1c);
        lVar7 = *(long *)(*(long *)PTR_DAT_070d2c80 + 0xb8);
        in_stack_00000188 = *(undefined8 *)(lVar7 + 0x48);
        in_stack_00000180 = *(undefined8 *)(lVar7 + 0x40);
        in_stack_00000198 = *(undefined8 *)(lVar7 + 0x58);
        in_stack_00000190 = *(undefined8 *)(lVar7 + 0x50);
        in_stack_000001a8 = *(undefined8 *)(lVar7 + 0x68);
        in_stack_000001a0 = *(undefined8 *)(lVar7 + 0x60);
        in_stack_000001b8 = *(undefined8 *)(lVar7 + 0x78);
        in_stack_000001b0 = *(undefined8 *)(lVar7 + 0x70);
        lVar7 = *(long *)(unaff_x24 + 0x10);
      }
      *(int *)(unaff_x24 + 0x1c) = iVar1 + 1;
      if (lVar7 == 0) goto LAB_065f48a4;
      uVar10 = *(uint *)(unaff_x24 + 0x18);
      if (uVar10 < *(uint *)(lVar7 + 0x18)) {
        lVar7 = lVar7 + (long)(int)uVar10 * 0x40;
        *(uint *)(unaff_x24 + 0x18) = uVar10 + 1;
        *(undefined8 *)(lVar7 + 0x28) = in_stack_00000188;
        *(undefined8 *)(lVar7 + 0x20) = in_stack_00000180;
        *(undefined8 *)(lVar7 + 0x38) = in_stack_00000198;
        *(undefined8 *)(lVar7 + 0x30) = in_stack_00000190;
        *(undefined8 *)(lVar7 + 0x48) = in_stack_000001a8;
        *(undefined8 *)(lVar7 + 0x40) = in_stack_000001a0;
        *(undefined8 *)(lVar7 + 0x58) = in_stack_000001b8;
        *(undefined8 *)(lVar7 + 0x50) = in_stack_000001b0;
      }
      else {
        in_stack_000001c8 = in_stack_00000188;
        in_stack_000001c0 = in_stack_00000180;
        in_stack_000001d8 = in_stack_00000198;
        in_stack_000001d0 = in_stack_00000190;
        in_stack_000001e8 = in_stack_000001a8;
        in_stack_000001e0 = in_stack_000001a0;
        FUN_042bee90();
      }
    }
    if (*(int *)(unaff_x19 + 0x18) < 0x1ff) {
      if (*(long *)(unaff_x27 + 0x10) == 0) goto LAB_065f48a4;
      if (in_stack_000000b8 + (int)unaff_x25 == *(int *)(*(long *)(unaff_x27 + 0x10) + 0x20) + -1)
      goto LAB_065f4570;
      unaff_w20 = unaff_w20 + 1;
    }
    else {
LAB_065f4570:
      lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_070c2528);
      FUN_0699f8cc(lVar7,0);
      if (lVar7 == 0) {
LAB_065f48a4:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      FUN_0699fdc8(lVar7,*(undefined8 *)UnityEngine_UIElements_BaseVisualElementPanel_TypeInfo,
                   in_stack_00000138,0);
      FUN_0699fdc8(lVar7,*(undefined8 *)System_Net_BasicClient_TypeInfo,unaff_x29,0);
      FUN_0699fdc8(lVar7,*(undefined8 *)UnityEngine_UIElements_BaseVerticalCollectionView_TypeInfo);
      FUN_0699fdc8(lVar7,*(undefined8 *)UnityEngine_Rendering_BatchCullingViewType_TypeInfo,
                   unaff_x21,0);
      FUN_0699fdc8(lVar7,*(undefined8 *)
                          Mono_Security_X509_Extensions_BasicConstraintsExtension_TypeInfo,
                   in_stack_00000128,0);
      FUN_0699fe18(lVar7,*(undefined8 *)
                          Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Modes_Gcm_BasicGcmExponentiator_TypeInfo
                   ,in_stack_00000130,0);
      if (unaff_x22 != 0) {
        FUN_0699fe18(lVar7,*(undefined8 *)UnityEngine_Rendering_BatchBufferTarget_TypeInfo,unaff_x22
                     ,0);
      }
      if (unaff_x23 == 0) goto LAB_065f48a4;
      lVar8 = *(long *)(unaff_x23 + 0x10);
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_065f48a4;
      uVar10 = *(uint *)(unaff_x23 + 0x18);
      if (uVar10 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar10 + 1;
        *(long *)(lVar8 + (long)(int)uVar10 * 8 + 0x20) = lVar7;
      }
      else {
        FUN_042e4a64();
      }
      uVar4 = FUN_042c0c1c();
      if (in_stack_000000d0 == 0) goto LAB_065f48a4;
      lVar7 = *(long *)(in_stack_000000d0 + 0x10);
      lVar8 = *(long *)UnityEngine_Rendering_BaseCommandBuffer_TypeInfo;
      *(int *)(in_stack_000000d0 + 0x1c) = *(int *)(in_stack_000000d0 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_065f48a4;
      uVar10 = *(uint *)(in_stack_000000d0 + 0x18);
      if (uVar10 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(in_stack_000000d0 + 0x18) = uVar10 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar10 * 8 + 0x20) = uVar4;
      }
      else {
        FUN_042e4a64(in_stack_000000d0,uVar4,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      *(undefined4 *)(unaff_x19 + 0x18) = 0;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if ((unaff_x24 == 0) || (uVar4 = FUN_042c0c1c(), in_stack_000000c8 == 0)) goto LAB_065f48a4;
      lVar7 = *(long *)(in_stack_000000c8 + 0x10);
      lVar8 = *(long *)UnityEngine_Rendering_BaseCommandBuffer_TypeInfo;
      *(int *)(in_stack_000000c8 + 0x1c) = *(int *)(in_stack_000000c8 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_065f48a4;
      uVar10 = *(uint *)(in_stack_000000c8 + 0x18);
      if (uVar10 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(in_stack_000000c8 + 0x18) = uVar10 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar10 * 8 + 0x20) = uVar4;
      }
      else {
        FUN_042e4a64(in_stack_000000c8,uVar4,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      unaff_w20 = 0;
      *(undefined4 *)(unaff_x24 + 0x18) = 0;
      *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
    }
    unaff_x25 = unaff_x25 + 1;
    if (unaff_x25 == 4) {
      in_stack_000000a8._4_4_ = in_stack_000000a8._4_4_ + 1;
      in_stack_000000b8 = in_stack_000000b8 + 4;
      in_stack_00000108 = in_stack_00000108 + in_stack_000000a0;
      if (in_stack_000000a8._4_4_ == 4) {
        iStack0000000000000098 = iStack0000000000000098 + 1;
        in_stack_00000090 = in_stack_00000090 + in_stack_00000078;
        in_stack_000000b8 = in_stack_00000088 + 0x10;
        if (iStack0000000000000098 == 4) {
          in_stack_00000070._4_4_ = in_stack_00000070._4_4_ + 4;
          if (in_stack_000000a0 <= in_stack_00000070._4_4_) {
            in_stack_00000058._4_4_ = in_stack_00000058._4_4_ + 4;
            if (in_stack_00000058._4_4_ < in_stack_00000040) {
              in_stack_00000070._4_4_ = 0;
            }
            else {
              in_stack_00000058._4_4_ = 0;
              in_stack_00000070._4_4_ = 0;
              iStack000000000000003c = iStack000000000000003c + 4;
              if (in_stack_00000020 <= iStack000000000000003c) {
                iStack000000000000003c = 0;
              }
            }
          }
          in_stack_00000060 = in_stack_00000060 + 1;
          in_stack_000000b8 = in_stack_00000068 + 0x40;
          if (in_stack_00000060 == in_stack_00000018) {
            *(undefined8 *)(unaff_x27 + 0x150) = in_stack_00000028;
            return;
          }
          if (*(long *)(unaff_x27 + 0x18) == 0) goto LAB_065f48a4;
          iVar1 = *(int *)(*(long *)(*(long *)(unaff_x27 + 0x18) + 0x48) + in_stack_00000060 * 0x10
                          + 0xc);
          if (*(int *)(*(long *)System_Linq_Expressions_Interpreter_AddInstruction_TypeInfo + 0xe4)
              == 0) {
            thunk_FUN_031e5338();
          }
          iVar3 = FUN_065fca44(0);
          if (in_stack_00000050 == 0) goto LAB_065f48a4;
          iVar2 = 0;
          if (iVar3 != 0) {
            iVar2 = (int)in_stack_00000060 / iVar3;
          }
          auVar20 = System_Collections_Generic_ArraySortHelper<OVRPlugin_Qpl_Annotation_Builder_Entry>__DownHeap
                              (in_stack_00000050,iVar2,
                               *(undefined8 *)UnityEngine_UIElements_BaseTreeView_TypeInfo);
          in_stack_000000e8._4_4_ = (float)iVar1;
          iStack0000000000000098 = 0;
          in_stack_000000d8._4_4_ = in_stack_000000e8._4_4_ / fStack0000000000000038;
          in_stack_00000090 =
               in_stack_00000070._4_4_ + iVar2 * in_stack_00000048._4_4_ +
               in_stack_000000a0 *
               (in_stack_00000058._4_4_ + in_stack_00000040 * iStack000000000000003c);
          in_stack_000000e0 = in_stack_00000070._4_4_ + auVar20._0_4_;
          iStack000000000000009c = in_stack_00000058._4_4_ + auVar20._4_4_;
          in_stack_00000080._4_4_ = iStack000000000000003c + auVar20._8_4_;
          in_stack_00000068 = in_stack_000000b8;
        }
        in_stack_000000a8._4_4_ = 0;
        in_stack_000000f0._4_4_ = (float)(in_stack_00000080._4_4_ + iStack0000000000000098);
        in_stack_00000108 = in_stack_00000090;
        in_stack_00000088 = in_stack_000000b8;
      }
      unaff_x25 = 0;
      in_stack_00000100._4_4_ = (float)(iStack000000000000009c + in_stack_000000a8._4_4_);
    }
    if (*(long *)(unaff_x27 + 0x18) == 0) goto LAB_065f48a4;
    iVar1 = in_stack_00000108 + (int)unaff_x25;
    puVar5 = (undefined8 *)(*(long *)(*(long *)(unaff_x27 + 0x18) + 0x58) + (long)iVar1 * 0xc);
    fVar11 = *(float *)(puVar5 + 1);
    uVar4 = *puVar5;
    uVar19 = *(undefined8 *)(in_stack_000000f8 + 0x28);
    fVar17 = *(float *)(in_stack_000000f8 + 0x30);
    if (DAT_07546bbe == '\0') {
      FUN_03188a78(PTR_DAT_070ce558);
      DAT_07546bbe = '\x01';
    }
    puVar6 = *(undefined4 **)(*(long *)PTR_DAT_070ce558 + 0xb8);
    in_s3 = *puVar6;
    uVar14 = puVar6[1];
    uVar15 = puVar6[2];
    uVar16 = puVar6[3];
    if (DAT_075457b6 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_075457b6 = '\x01';
    }
    unaff_s9 = (float)((ulong)uVar4 >> 0x20) - (float)((ulong)uVar19 >> 0x20);
    in_stack_00000110 = CONCAT44(unaff_s9,(float)uVar4 - (float)uVar19);
    unaff_s8 = fVar11 - fVar17;
    FUN_069c1c74(&stack0x00000140,in_stack_00000110,unaff_s9,unaff_s8,in_s3,uVar14,uVar15,uVar16,0);
    if (unaff_x19 == 0) goto LAB_065f48a4;
    lVar7 = *(long *)(unaff_x19 + 0x10);
    in_stack_00000188 = in_stack_00000148;
    in_stack_00000180 = in_stack_00000140;
    in_stack_00000198 = in_stack_00000158;
    in_stack_00000190 = in_stack_00000150;
    in_stack_000001a8 = in_stack_00000168;
    in_stack_000001a0 = in_stack_00000160;
    in_stack_000001b8 = in_stack_00000178;
    in_stack_000001b0 = in_stack_00000170;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_065f48a4;
    uVar10 = *(uint *)(unaff_x19 + 0x18);
    if (uVar10 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar10 * 0x40;
      *(uint *)(unaff_x19 + 0x18) = uVar10 + 1;
      *(undefined8 *)(lVar7 + 0x28) = in_stack_00000148;
      *(undefined8 *)(lVar7 + 0x20) = in_stack_00000140;
      *(undefined8 *)(lVar7 + 0x38) = in_stack_00000158;
      *(undefined8 *)(lVar7 + 0x30) = in_stack_00000150;
      *(undefined8 *)(lVar7 + 0x48) = in_stack_00000168;
      *(undefined8 *)(lVar7 + 0x40) = in_stack_00000160;
      *(undefined8 *)(lVar7 + 0x58) = in_stack_00000178;
      *(undefined8 *)(lVar7 + 0x50) = in_stack_00000170;
    }
    else {
      in_stack_000001c8 = in_stack_00000148;
      in_stack_000001c0 = in_stack_00000140;
      in_stack_000001d8 = in_stack_00000158;
      in_stack_000001d0 = in_stack_00000150;
      in_stack_000001e8 = in_stack_00000168;
      in_stack_000001e0 = in_stack_00000160;
      FUN_042bee90();
    }
    if ((*(long *)(unaff_x27 + 0x18) == 0) || (in_stack_00000138 == 0)) goto LAB_065f48a4;
    if (*(uint *)(in_stack_00000138 + 0x18) <= unaff_w20) {
LAB_065f48a8:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    in_x9 = (long)iVar1;
    param_1 = (long)(int)unaff_w20;
    *(undefined4 *)(in_stack_00000138 + param_1 * 4 + 0x20) =
         *(undefined4 *)(*(long *)(*(long *)(unaff_x27 + 0x18) + 0x88) + in_x9 * 4);
    if (unaff_x28 == 0) goto LAB_065f48a4;
    if (*(uint *)(unaff_x28 + 0x18) <= unaff_w20) goto LAB_065f48a8;
    in_x10 = (float *)(unaff_x28 + param_1 * 4 + 0x20);
    *in_x10 = in_stack_00000120._4_4_;
    if (in_stack_00000130 == 0) goto LAB_065f48a4;
    if (*(uint *)(in_stack_00000130 + 0x18) <= unaff_w20) goto LAB_065f48a8;
    lVar7 = in_stack_00000130 + param_1 * 0x10;
    *(float *)(lVar7 + 0x20) = (float)(in_stack_000000e0 + (int)unaff_x25);
    *(float *)(lVar7 + 0x24) = in_stack_00000100._4_4_;
    *(float *)(lVar7 + 0x28) = in_stack_000000f0._4_4_;
    *(float *)(lVar7 + 0x2c) = in_stack_000000e8._4_4_;
    if (in_stack_00000128 == 0) goto LAB_065f48a4;
    if (*(uint *)(in_stack_00000128 + 0x18) <= unaff_w20) goto LAB_065f48a8;
    *(float *)(in_stack_00000128 + param_1 * 4 + 0x20) = in_stack_000000d8._4_4_;
    in_x11 = *(long *)(unaff_x27 + 0x18);
    if (in_x11 == 0) goto LAB_065f48a4;
  } while( true );
}


