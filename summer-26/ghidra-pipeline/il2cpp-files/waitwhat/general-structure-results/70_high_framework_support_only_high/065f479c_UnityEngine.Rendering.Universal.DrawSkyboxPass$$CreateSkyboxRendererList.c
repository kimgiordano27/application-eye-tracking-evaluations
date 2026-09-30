/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.DrawSkyboxPass$$CreateSkyboxRendererList
ENTRY_POINT: 065f479c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Rendering_Universal_DrawSkyboxPass__CreateSkyboxRendererList
               (long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  uint uVar10;
  long unaff_x19;
  uint uVar11;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  undefined1 auVar26 [12];
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
  
code_r0x065f479c:
  FUN_042e4a64(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
LAB_065f47a8:
                    /* try { // try from 065f47ac to 066f47b7 has its CatchHandler @ 065f4cc4 */
  uVar11 = 0;
  *(undefined4 *)(unaff_x24 + 0x18) = 0;
  *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
  do {
    unaff_x25 = unaff_x25 + 1;
                    /* try { // try from 065f47c8 to 066f47db has its CatchHandler @ 065f4ca8 */
    if (unaff_x25 == 4) {
      in_stack_000000a8._4_4_ = in_stack_000000a8._4_4_ + 1;
      in_stack_000000b8 = in_stack_000000b8 + 4;
      in_stack_00000108 = in_stack_00000108 + in_stack_000000a0;
      if (in_stack_000000a8._4_4_ == 4) {
        iStack0000000000000098 = iStack0000000000000098 + 1;
        in_stack_00000090 = in_stack_00000090 + in_stack_00000078;
        in_stack_000000b8 = in_stack_00000088 + 0x10;
        if (iStack0000000000000098 == 4) {
                    /* try { // try from 065f481c to 066f4823 has its CatchHandler @ 065f4d1c */
          in_stack_00000070._4_4_ = in_stack_00000070._4_4_ + 4;
          if (in_stack_000000a0 <= in_stack_00000070._4_4_) {
            in_stack_00000058._4_4_ = in_stack_00000058._4_4_ + 4;
            if (in_stack_00000058._4_4_ < in_stack_00000040) {
                    /* try { // try from 065f4854 to 066f485b has its CatchHandler @ 065f4d14 */
              in_stack_00000070._4_4_ = 0;
            }
            else {
              in_stack_00000058._4_4_ = 0;
              in_stack_00000070._4_4_ = 0;
                    /* try { // try from 065f486c to 066f487b has its CatchHandler @ 065f4d0c */
              iStack000000000000003c = iStack000000000000003c + 4;
              if (in_stack_00000020 <= iStack000000000000003c) {
                iStack000000000000003c = 0;
              }
            }
          }
                    /* try { // try from 065f487c to 066f488b has its CatchHandler @ 065f4d08 */
          in_stack_00000060 = in_stack_00000060 + 1;
          in_stack_000000b8 = in_stack_00000068 + 0x40;
          if (in_stack_00000060 == in_stack_00000018) {
            *(undefined8 *)(unaff_x26 + 0x150) = in_stack_00000028;
            return;
          }
          if (*(long *)(unaff_x26 + 0x18) == 0) goto LAB_065f48a4;
          iVar1 = *(int *)(*(long *)(*(long *)(unaff_x26 + 0x18) + 0x48) + in_stack_00000060 * 0x10
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
          auVar26 = System_Collections_Generic_ArraySortHelper<OVRPlugin_Qpl_Annotation_Builder_Entry>__DownHeap
                              (in_stack_00000050,iVar2,
                               *(undefined8 *)UnityEngine_UIElements_BaseTreeView_TypeInfo);
          in_stack_000000e8._4_4_ = (float)iVar1;
          iStack0000000000000098 = 0;
          in_stack_000000d8._4_4_ = in_stack_000000e8._4_4_ / fStack0000000000000038;
          in_stack_00000090 =
               in_stack_00000070._4_4_ + iVar2 * in_stack_00000048._4_4_ +
               in_stack_000000a0 *
               (in_stack_00000058._4_4_ + in_stack_00000040 * iStack000000000000003c);
          in_stack_000000e0 = in_stack_00000070._4_4_ + auVar26._0_4_;
          iStack000000000000009c = in_stack_00000058._4_4_ + auVar26._4_4_;
          in_stack_00000080._4_4_ = iStack000000000000003c + auVar26._8_4_;
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
    if (*(long *)(unaff_x26 + 0x18) == 0) goto LAB_065f48a4;
    iVar3 = (int)unaff_x25;
    iVar1 = in_stack_00000108 + iVar3;
    puVar4 = (undefined8 *)(*(long *)(*(long *)(unaff_x26 + 0x18) + 0x58) + (long)iVar1 * 0xc);
    fVar16 = *(float *)(puVar4 + 1);
    uVar23 = *puVar4;
    uVar25 = *(undefined8 *)(in_stack_000000f8 + 0x28);
    fVar17 = *(float *)(in_stack_000000f8 + 0x30);
    if (DAT_07546bbe == '\0') {
      FUN_03188a78(PTR_DAT_070ce558);
      DAT_07546bbe = '\x01';
    }
    puVar5 = *(undefined4 **)(*(long *)PTR_DAT_070ce558 + 0xb8);
    uVar18 = *puVar5;
    uVar19 = puVar5[1];
    uVar20 = puVar5[2];
    uVar21 = puVar5[3];
    if (DAT_075457b6 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_075457b6 = '\x01';
    }
    fVar12 = (float)uVar23 - (float)uVar25;
    fVar13 = (float)((ulong)uVar23 >> 0x20) - (float)((ulong)uVar25 >> 0x20);
    fVar16 = fVar16 - fVar17;
    FUN_069c1c74(&stack0x00000140,CONCAT44(fVar13,fVar12),fVar13,fVar16,uVar18,uVar19,uVar20,uVar21,
                 0);
    if (unaff_x19 == 0) goto LAB_065f48a4;
    lVar6 = *(long *)(unaff_x19 + 0x10);
    in_stack_00000188 = in_stack_00000148;
    in_stack_00000180 = in_stack_00000140;
    in_stack_00000198 = in_stack_00000158;
    in_stack_00000190 = in_stack_00000150;
    in_stack_000001a8 = in_stack_00000168;
    in_stack_000001a0 = in_stack_00000160;
    in_stack_000001b8 = in_stack_00000178;
    in_stack_000001b0 = in_stack_00000170;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_065f48a4;
    uVar10 = *(uint *)(unaff_x19 + 0x18);
    if (uVar10 < *(uint *)(lVar6 + 0x18)) {
      lVar6 = lVar6 + (long)(int)uVar10 * 0x40;
      *(uint *)(unaff_x19 + 0x18) = uVar10 + 1;
      *(undefined8 *)(lVar6 + 0x28) = in_stack_00000148;
      *(undefined8 *)(lVar6 + 0x20) = in_stack_00000140;
      *(undefined8 *)(lVar6 + 0x38) = in_stack_00000158;
      *(undefined8 *)(lVar6 + 0x30) = in_stack_00000150;
      *(undefined8 *)(lVar6 + 0x48) = in_stack_00000168;
      *(undefined8 *)(lVar6 + 0x40) = in_stack_00000160;
      *(undefined8 *)(lVar6 + 0x58) = in_stack_00000178;
      *(undefined8 *)(lVar6 + 0x50) = in_stack_00000170;
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
    if ((*(long *)(unaff_x26 + 0x18) == 0) || (in_stack_00000138 == 0)) goto LAB_065f48a4;
    if (*(uint *)(in_stack_00000138 + 0x18) <= uVar11) {
LAB_065f48a8:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar7 = (long)iVar1;
    lVar6 = (long)(int)uVar11;
    *(undefined4 *)(in_stack_00000138 + lVar6 * 4 + 0x20) =
         *(undefined4 *)(*(long *)(*(long *)(unaff_x26 + 0x18) + 0x88) + lVar7 * 4);
    if (unaff_x28 == 0) goto LAB_065f48a4;
    if (*(uint *)(unaff_x28 + 0x18) <= uVar11) goto LAB_065f48a8;
    pfVar8 = (float *)(unaff_x28 + lVar6 * 4 + 0x20);
    *pfVar8 = in_stack_00000120._4_4_;
    if (in_stack_00000130 == 0) goto LAB_065f48a4;
    if (*(uint *)(in_stack_00000130 + 0x18) <= uVar11) goto LAB_065f48a8;
    lVar9 = in_stack_00000130 + lVar6 * 0x10;
    *(float *)(lVar9 + 0x20) = (float)(in_stack_000000e0 + iVar3);
    *(float *)(lVar9 + 0x24) = in_stack_00000100._4_4_;
    *(float *)(lVar9 + 0x28) = in_stack_000000f0._4_4_;
    *(float *)(lVar9 + 0x2c) = in_stack_000000e8._4_4_;
    if (in_stack_00000128 == 0) goto LAB_065f48a4;
    if (*(uint *)(in_stack_00000128 + 0x18) <= uVar11) goto LAB_065f48a8;
    *(float *)(in_stack_00000128 + lVar6 * 4 + 0x20) = in_stack_000000d8._4_4_;
    lVar9 = *(long *)(unaff_x26 + 0x18);
    if (lVar9 == 0) goto LAB_065f48a4;
    if (*(int *)(lVar9 + 0xa0) < 1) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)*(byte *)(*(long *)(lVar9 + 0x98) + lVar7);
    }
    if (unaff_x27 == 0) goto LAB_065f48a4;
    if (*(uint *)(unaff_x27 + 0x18) <= uVar11) goto LAB_065f48a8;
    *(uint *)(unaff_x27 + lVar6 * 4 + 0x20) = uVar10;
    if (unaff_x29 != 0) {
      if (*(uint *)(unaff_x29 + 0x18) <= uVar11) goto LAB_065f48a8;
      fVar17 = *(float *)(*(long *)(lVar9 + 0x68) + lVar7 * 4);
      *(float *)(unaff_x29 + lVar6 * 4 + 0x20) = fVar17;
      if (*(uint *)(unaff_x28 + 0x18) <= uVar11) goto LAB_065f48a8;
      fVar22 = fVar17 + -1.0;
      if (fVar17 <= 1.0) {
        fVar22 = in_stack_00000120._4_4_;
      }
      *pfVar8 = fVar22;
    }
    if (unaff_x21 != 0) {
      if (*(uint *)(unaff_x21 + 0x18) <= uVar11) goto LAB_065f48a8;
      lVar6 = unaff_x21 + lVar6 * 0x10;
      pfVar8 = (float *)(*(long *)(lVar9 + 0x78) + (long)iVar1 * 0xc);
      fVar22 = *pfVar8;
      fVar24 = pfVar8[1];
      fVar17 = pfVar8[2];
      *(undefined4 *)(lVar6 + 0x2c) = 0;
      *(float *)(lVar6 + 0x28) = fVar17;
      *(float *)(lVar6 + 0x20) = fVar22;
      *(float *)(lVar6 + 0x24) = fVar24;
      if (in_stack_000000c0._4_4_ <= fVar22 * fVar22 + fVar24 * fVar24 + fVar17 * fVar17) {
        fVar14 = -fVar24;
        fVar15 = -fVar17;
        uVar19 = FUN_069c5558(-fVar22,fVar14,0);
        if (DAT_07546bbc == '\0') {
          FUN_03188a78(PTR_DAT_070c22f8);
          DAT_07546bbc = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_069c1c74(&stack0x00000140,fVar12 + fVar22,fVar13 + fVar24,fVar16 + fVar17,uVar19,fVar14,
                     fVar15,uVar18,0);
        if (unaff_x24 == 0) goto LAB_065f48a4;
        iVar1 = *(int *)(unaff_x24 + 0x1c);
        lVar6 = *(long *)(unaff_x24 + 0x10);
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
          DAT_07547007 = '\x01';
        }
        if (unaff_x24 == 0) goto LAB_065f48a4;
        iVar1 = *(int *)(unaff_x24 + 0x1c);
        lVar6 = *(long *)(*(long *)PTR_DAT_070d2c80 + 0xb8);
        in_stack_00000188 = *(undefined8 *)(lVar6 + 0x48);
        in_stack_00000180 = *(undefined8 *)(lVar6 + 0x40);
        in_stack_00000198 = *(undefined8 *)(lVar6 + 0x58);
        in_stack_00000190 = *(undefined8 *)(lVar6 + 0x50);
        in_stack_000001a8 = *(undefined8 *)(lVar6 + 0x68);
        in_stack_000001a0 = *(undefined8 *)(lVar6 + 0x60);
        in_stack_000001b8 = *(undefined8 *)(lVar6 + 0x78);
        in_stack_000001b0 = *(undefined8 *)(lVar6 + 0x70);
        lVar6 = *(long *)(unaff_x24 + 0x10);
      }
      *(int *)(unaff_x24 + 0x1c) = iVar1 + 1;
      if (lVar6 == 0) goto LAB_065f48a4;
      uVar10 = *(uint *)(unaff_x24 + 0x18);
      if (uVar10 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar10 * 0x40;
        *(uint *)(unaff_x24 + 0x18) = uVar10 + 1;
        *(undefined8 *)(lVar6 + 0x28) = in_stack_00000188;
        *(undefined8 *)(lVar6 + 0x20) = in_stack_00000180;
        *(undefined8 *)(lVar6 + 0x38) = in_stack_00000198;
        *(undefined8 *)(lVar6 + 0x30) = in_stack_00000190;
        *(undefined8 *)(lVar6 + 0x48) = in_stack_000001a8;
        *(undefined8 *)(lVar6 + 0x40) = in_stack_000001a0;
        *(undefined8 *)(lVar6 + 0x58) = in_stack_000001b8;
        *(undefined8 *)(lVar6 + 0x50) = in_stack_000001b0;
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
    if (0x1fe < *(int *)(unaff_x19 + 0x18)) goto LAB_065f4570;
    if (*(long *)(unaff_x26 + 0x10) == 0) goto LAB_065f48a4;
    if (in_stack_000000b8 + iVar3 == *(int *)(*(long *)(unaff_x26 + 0x10) + 0x20) + -1)
    goto LAB_065f4570;
    uVar11 = uVar11 + 1;
  } while( true );
LAB_065f4798:
  param_1 = *(long *)(lVar7 + 0x20);
  param_2 = in_stack_000000c8;
  goto code_r0x065f479c;
LAB_065f4570:
  lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)PTR_DAT_070c2528);
  FUN_0699f8cc(lVar6,0);
  if (lVar6 != 0) {
    FUN_0699fdc8(lVar6,*(undefined8 *)UnityEngine_UIElements_BaseVisualElementPanel_TypeInfo,
                 in_stack_00000138,0);
    FUN_0699fdc8(lVar6,*(undefined8 *)System_Net_BasicClient_TypeInfo,unaff_x27,0);
    FUN_0699fdc8(lVar6,*(undefined8 *)UnityEngine_UIElements_BaseVerticalCollectionView_TypeInfo);
    FUN_0699fdc8(lVar6,*(undefined8 *)UnityEngine_Rendering_BatchCullingViewType_TypeInfo,unaff_x29,
                 0);
    FUN_0699fdc8(lVar6,*(undefined8 *)
                        Mono_Security_X509_Extensions_BasicConstraintsExtension_TypeInfo,
                 in_stack_00000128,0);
    FUN_0699fe18(lVar6,*(undefined8 *)
                        Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Modes_Gcm_BasicGcmExponentiator_TypeInfo
                 ,in_stack_00000130,0);
    if (unaff_x21 != 0) {
      FUN_0699fe18(lVar6,*(undefined8 *)UnityEngine_Rendering_BatchBufferTarget_TypeInfo,unaff_x21,0
                  );
    }
    if (unaff_x23 != 0) {
      lVar7 = *(long *)(unaff_x23 + 0x10);
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar11 = *(uint *)(unaff_x23 + 0x18);
        if (uVar11 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(unaff_x23 + 0x18) = uVar11 + 1;
          *(long *)(lVar7 + (long)(int)uVar11 * 8 + 0x20) = lVar6;
        }
        else {
          FUN_042e4a64();
        }
        uVar23 = FUN_042c0c1c();
        if (in_stack_000000d0 != 0) {
          lVar6 = *(long *)(in_stack_000000d0 + 0x10);
          lVar7 = *(long *)UnityEngine_Rendering_BaseCommandBuffer_TypeInfo;
          *(int *)(in_stack_000000d0 + 0x1c) = *(int *)(in_stack_000000d0 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar11 = *(uint *)(in_stack_000000d0 + 0x18);
            if (uVar11 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(in_stack_000000d0 + 0x18) = uVar11 + 1;
              *(undefined8 *)(lVar6 + (long)(int)uVar11 * 8 + 0x20) = uVar23;
            }
            else {
              FUN_042e4a64(in_stack_000000d0,uVar23,
                           *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            *(undefined4 *)(unaff_x19 + 0x18) = 0;
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if ((unaff_x24 != 0) && (param_3 = FUN_042c0c1c(), in_stack_000000c8 != 0)) {
              lVar6 = *(long *)(in_stack_000000c8 + 0x10);
              lVar7 = *(long *)UnityEngine_Rendering_BaseCommandBuffer_TypeInfo;
              *(int *)(in_stack_000000c8 + 0x1c) = *(int *)(in_stack_000000c8 + 0x1c) + 1;
              if (lVar6 != 0) {
                uVar11 = *(uint *)(in_stack_000000c8 + 0x18);
                if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_065f4798;
                *(uint *)(in_stack_000000c8 + 0x18) = uVar11 + 1;
                *(undefined8 *)(lVar6 + (long)(int)uVar11 * 8 + 0x20) = param_3;
                goto LAB_065f47a8;
              }
            }
          }
        }
      }
    }
  }
LAB_065f48a4:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


