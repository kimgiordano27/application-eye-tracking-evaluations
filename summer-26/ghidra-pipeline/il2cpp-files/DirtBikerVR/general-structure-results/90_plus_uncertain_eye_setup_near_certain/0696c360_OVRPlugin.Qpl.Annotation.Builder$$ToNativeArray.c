/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$ToNativeArray
ENTRY_POINT: 0696c360
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__ToNativeArray(float param_1,ulong param_2)

{
  long lVar1;
  int in_w8;
  float *pfVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  ulong unaff_x27;
  undefined8 *unaff_x28;
  float *unaff_x29;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  uint uStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000048;
  float fStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  while( true ) {
                    /* catch() { ... } // from try @ 0696bc88 with catch @ 0696c360 */
    if (in_w8 == 0) {
                    /* catch() { ... } // from try @ 0696c07c with catch @ 0696c364 */
                    /* catch() { ... } // from try @ 0696bf84 with catch @ 0696c368 */
      thunk_FUN_03ae8be4();
                    /* catch() { ... } // from try @ 0696b9ac with catch @ 0696c36c */
    }
                    /* catch() { ... } // from try @ 0696b86c with catch @ 0696c370 */
    fVar4 = (float)param_2;
                    /* catch() { ... } // from try @ 0696b72c with catch @ 0696c374 */
                    /* catch() { ... } // from try @ 0696bef4 with catch @ 0696c378 */
                    /* catch() { ... } // from try @ 0696b7d0 with catch @ 0696c37c */
                    /* catch() { ... } // from try @ 0696bd8c with catch @ 0696c380 */
                    /* catch() { ... } // from try @ 0696be44 with catch @ 0696c384 */
    fVar6 = SQRT(unaff_s11 * unaff_s11 + param_1 * param_1 + fVar4 * fVar4);
                    /* catch() { ... } // from try @ 0696c338 with catch @ 0696c388 */
                    /* catch() { ... } // from try @ 0696bc20 with catch @ 0696c38c */
    if (fVar6 <= unaff_s14) {
                    /* catch() { ... } // from try @ 0696c32c with catch @ 0696c3a4 */
                    /* catch() { ... } // from try @ 0696c328 with catch @ 0696c3a8 */
                    /* catch() { ... } // from try @ 0696c324 with catch @ 0696c3ac */
      if (DAT_08974d8f == '\0') {
                    /* catch() { ... } // from try @ 0696c2ac with catch @ 0696c3b0 */
                    /* catch() { ... } // from try @ 0696c114 with catch @ 0696c3b4 */
        FUN_03a8a718();
                    /* catch() { ... } // from try @ 0696c0f4 with catch @ 0696c3b8 */
                    /* catch() { ... } // from try @ 0696c320 with catch @ 0696c3bc */
                    /* catch() { ... } // from try @ 0696c31c with catch @ 0696c3c0 */
        DAT_08974d8f = '\x01';
      }
                    /* catch() { ... } // from try @ 0696c244 with catch @ 0696c3c4 */
                    /* catch() { ... } // from try @ 0696bd40 with catch @ 0696c3c8 */
                    /* catch() { ... } // from try @ 0696bfdc with catch @ 0696c3cc */
      uVar9 = **(undefined8 **)(*unaff_x25 + 0xb8);
                    /* catch() { ... } // from try @ 0696bd20 with catch @ 0696c3d0 */
      fVar10 = *(float *)(*(undefined8 **)(*unaff_x25 + 0xb8) + 1);
    }
    else {
                    /* catch() { ... } // from try @ 0696bb88 with catch @ 0696c390 */
                    /* catch() { ... } // from try @ 0696c334 with catch @ 0696c394 */
                    /* catch() { ... } // from try @ 0696c330 with catch @ 0696c398 */
      fVar10 = unaff_s11 / fVar6;
                    /* catch() { ... } // from try @ 0696c28c with catch @ 0696c39c */
      uVar9 = CONCAT44(fVar4 / fVar6,param_1 / fVar6);
                    /* catch() { ... } // from try @ 0696baac with catch @ 0696c3a0 */
    }
                    /* catch() { ... } // from try @ 0696c318 with catch @ 0696c3d4 */
                    /* catch() { ... } // from try @ 0696c314 with catch @ 0696c3d8 */
                    /* catch() { ... } // from try @ 0696c310 with catch @ 0696c3dc */
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x27) break;
                    /* catch() { ... } // from try @ 0696bbd8 with catch @ 0696c3e0 */
    fVar4 = *unaff_x29;
    fVar5 = unaff_x29[1];
                    /* catch() { ... } // from try @ 0696bcac with catch @ 0696c3e4 */
                    /* catch() { ... } // from try @ 0696c30c with catch @ 0696c3e8 */
                    /* catch() { ... } // from try @ 0696c0a0 with catch @ 0696c3ec */
                    /* catch() { ... } // from try @ 0696c308 with catch @ 0696c3f0 */
                    /* catch() { ... } // from try @ 0696bfa8 with catch @ 0696c3f4 */
    fVar7 = unaff_x29[2];
                    /* catch() { ... } // from try @ 0696bc8c with catch @ 0696c3f8 */
                    /* catch() { ... } // from try @ 0696c080 with catch @ 0696c3fc */
                    /* catch() { ... } // from try @ 0696c304 with catch @ 0696c400 */
                    /* catch() { ... } // from try @ 0696bf88 with catch @ 0696c404 */
                    /* catch() { ... } // from try @ 0696c184 with catch @ 0696c408 */
                    /* catch() { ... } // from try @ 0696c300 with catch @ 0696c40c */
                    /* catch() { ... } // from try @ 0696c218 with catch @ 0696c410 */
    fVar6 = (float)FUN_07c941e8(0);
                    /* catch() { ... } // from try @ 0696c164 with catch @ 0696c414 */
                    /* catch() { ... } // from try @ 0696c2fc with catch @ 0696c418 */
                    /* catch() { ... } // from try @ 0696c2f8 with catch @ 0696c41c */
                    /* catch() { ... } // from try @ 0696c2f4 with catch @ 0696c420 */
                    /* catch() { ... } // from try @ 0696c2f0 with catch @ 0696c424 */
                    /* catch() { ... } // from try @ 0696bf3c with catch @ 0696c428 */
                    /* catch() { ... } // from try @ 0696b870 with catch @ 0696c42c */
                    /* catch() { ... } // from try @ 0696c2ec with catch @ 0696c430 */
                    /* catch() { ... } // from try @ 0696c2e8 with catch @ 0696c434 */
    fVar4 = ((fVar4 - fStack000000000000004c) * (fVar4 - fStack000000000000004c) +
             (fVar5 - unaff_s9) * (fVar5 - unaff_s9) +
            (fVar7 - fStack0000000000000048) * (fVar7 - fStack0000000000000048)) *
            (*(float *)(unaff_x20 + 0x44) * (fVar6 + fVar6 + -1.0) + 1.0);
                    /* catch() { ... } // from try @ 0696c2e4 with catch @ 0696c438 */
                    /* catch() { ... } // from try @ 0696b890 with catch @ 0696c43c */
                    /* catch() { ... } // from try @ 0696b74c with catch @ 0696c440 */
    if (fVar4 < unaff_s10 * unaff_s10) {
                    /* catch() { ... } // from try @ 0696b730 with catch @ 0696c444 */
                    /* catch() { ... } // from try @ 0696b7f0 with catch @ 0696c448 */
                    /* catch() { ... } // from try @ 0696bdb0 with catch @ 0696c44c */
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_x27) break;
                    /* catch() { ... } // from try @ 0696b7d4 with catch @ 0696c450 */
                    /* catch() { ... } // from try @ 0696be64 with catch @ 0696c454 */
                    /* catch() { ... } // from try @ 0696bd90 with catch @ 0696c458 */
                    /* catch() { ... } // from try @ 0696be48 with catch @ 0696c45c */
                    /* catch() { ... } // from try @ 0696c2e0 with catch @ 0696c460 */
      uStack0000000000000018 = 1;
                    /* catch() { ... } // from try @ 0696c2dc with catch @ 0696c464 */
      fVar4 = unaff_s10 - SQRT(fVar4);
                    /* catch() { ... } // from try @ 0696c2d8 with catch @ 0696c468 */
                    /* catch() { ... } // from try @ 0696bff8 with catch @ 0696c46c */
                    /* catch() { ... } // from try @ 0696ba9c with catch @ 0696c470 */
                    /* catch() { ... } // from try @ 0696ba3c with catch @ 0696c474 */
                    /* catch() { ... } // from try @ 0696b924 with catch @ 0696c478 */
      *unaff_x28 = CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar4 +
                            (float)((ulong)*unaff_x28 >> 0x20),
                            (float)uVar9 * fVar4 + (float)*unaff_x28);
                    /* catch() { ... } // from try @ 0696c234 with catch @ 0696c47c */
      *(float *)(unaff_x28 + 1) = fVar10 * fVar4 + *(float *)(unaff_x28 + 1);
    }
    do {
                    /* catch() { ... } // from try @ 0696c208 with catch @ 0696c480 */
      unaff_w26 = unaff_w26 + 1;
                    /* catch() { ... } // from try @ 0696c1d8 with catch @ 0696c484 */
                    /* catch() { ... } // from try @ 0696c138 with catch @ 0696c488 */
      if (unaff_w23 == unaff_w26) {
        do {
                    /* catch() { ... } // from try @ 0696c0c8 with catch @ 0696c48c */
                    /* catch() { ... } // from try @ 0696c054 with catch @ 0696c490 */
          unaff_x27 = unaff_x27 + 1;
                    /* catch() { ... } // from try @ 0696c024 with catch @ 0696c494 */
                    /* catch() { ... } // from try @ 0696bf5c with catch @ 0696c498 */
          if ((long)*(int *)(unaff_x22 + 0x18) <= (long)unaff_x27) {
                    /* catch() { ... } // from try @ 0696bc60 with catch @ 0696c49c */
                    /* catch() { ... } // from try @ 0696b984 with catch @ 0696c4a0 */
                    /* catch() { ... } // from try @ 0696c260 with catch @ 0696c4a4 */
            if ((uStack0000000000000018 & 1) != 0) {
                    /* catch() { ... } // from try @ 0696bc0c with catch @ 0696c4a8 */
                    /* catch() { ... } // from try @ 0696bb0c with catch @ 0696c4ac */
                    /* catch() { ... } // from try @ 0696b8f8 with catch @ 0696c4b0 */
                    /* catch() { ... } // from try @ 0696bfcc with catch @ 0696c4b4 */
              FUN_07c72230(in_stack_00000008);
                    /* catch() { ... } // from try @ 0696bb5c with catch @ 0696c4b8 */
                    /* catch() { ... } // from try @ 0696c1ac with catch @ 0696c4bc */
                    /* catch() { ... } // from try @ 0696baf8 with catch @ 0696c4c0 */
              FUN_07c74ba0(in_stack_00000008,0);
                    /* catch() { ... } // from try @ 0696ba10 with catch @ 0696c4c4 */
                    /* catch() { ... } // from try @ 0696bcf4 with catch @ 0696c4c8 */
                    /* catch() { ... } // from try @ 0696b9b0 with catch @ 0696c4cc */
              FUN_07c74c60(in_stack_00000008,0);
                    /* catch() { ... } // from try @ 0696bbc8 with catch @ 0696c4d0 */
                    /* catch() { ... } // from try @ 0696bf28 with catch @ 0696c4d4 */
                    /* catch() { ... } // from try @ 0696be88 with catch @ 0696c4d8 */
              FUN_07c74d20(in_stack_00000008,0);
            }
                    /* catch() { ... } // from try @ 0696b704 with catch @ 0696c4dc */
                    /* catch() { ... } // from try @ 0696bef8 with catch @ 0696c4e0 */
                    /* catch() { ... } // from try @ 0696be9c with catch @ 0696c4e4 */
                    /* catch() { ... } // from try @ 0696bde8 with catch @ 0696c4e8 */
                    /* catch() { ... } // from try @ 0696bdd4 with catch @ 0696c4ec */
                    /* catch() { ... } // from try @ 0696b844 with catch @ 0696c4f0 */
                    /* catch() { ... } // from try @ 0696becc with catch @ 0696c4f4 */
                    /* catch() { ... } // from try @ 0696b7a8 with catch @ 0696c4f8 */
                    /* catch() { ... } // from try @ 0696bd64 with catch @ 0696c4fc */
                    /* catch() { ... } // from try @ 0696be1c with catch @ 0696c500 */
                    /* catch() { ... } // from try @ 0696c2d0 with catch @ 0696c504 */
                    /* catch() { ... } // from try @ 0696b6a8 with catch @ 0696c508 */
            return;
          }
        } while (unaff_w23 < 1);
        unaff_w26 = 0;
        unaff_x28 = (undefined8 *)(in_stack_00000010 + unaff_x27 * 0xc);
        unaff_x29 = (float *)(unaff_x22 + unaff_x27 * 0xc + 0x20);
      }
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0696c50c;
      FUN_07d23160(&stack0x00000050,*(long *)(unaff_x19 + 0x10),unaff_w26,0);
      in_stack_000000f8 = in_stack_00000078;
      in_stack_000000f0 = in_stack_00000070;
      fVar4 = *(float *)(unaff_x20 + 0x40);
      if (unaff_s12 <= *(float *)(unaff_x20 + 0x40)) {
        fVar4 = unaff_s12;
      }
      unaff_s10 = 0.0;
      if (0.0 <= unaff_s12) {
        unaff_s10 = fVar4;
      }
      in_stack_000000d8 = in_stack_00000058;
      in_stack_000000d0 = in_stack_00000050;
      in_stack_000000e8 = in_stack_00000068;
      in_stack_000000e0 = in_stack_00000060;
    } while (unaff_s10 <= unaff_s13);
    uVar9 = in_stack_00000060;
    uVar8 = in_stack_00000070;
    UnityEngine_UIElements_Length__Equals(&stack0x000000d0,0);
    fStack0000000000000048 = (float)uVar8;
    unaff_s9 = (float)uVar9;
    fStack000000000000004c = (float)FUN_07c888bc(&stack0x00000090,0);
    if ((*(long *)(unaff_x20 + 0x90) == 0) ||
       (lVar1 = *(long *)(*(long *)(unaff_x20 + 0x90) + 0x28), lVar1 == 0)) {
LAB_0696c50c:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0696c2cc with catch @ 0696c50c */
      FUN_03a8a9c0();
    }
    fVar10 = unaff_s9;
    fVar5 = fStack0000000000000048;
    fVar3 = (float)FUN_07cac280(lVar1,0);
    fVar4 = fVar10;
    fVar6 = fVar5;
    fVar7 = (float)UnityEngine_UIElements_Length__Equals(&stack0x000000d0,0);
    if (*(char *)(unaff_x21 + 0xd8c) == '\0') {
      FUN_03a8a718();
      *(undefined1 *)(unaff_x21 + 0xd8c) = 1;
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar10 = fVar10 - fVar4;
    fVar3 = fVar3 - fVar7;
    fVar5 = fVar5 - fVar6;
    fVar4 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar10 * fVar10);
    if (fVar4 <= unaff_s14) {
      if (DAT_08974d8f == '\0') {
        FUN_03a8a718();
        DAT_08974d8f = '\x01';
      }
      pfVar2 = *(float **)(*unaff_x25 + 0xb8);
      fVar3 = *pfVar2;
      fVar6 = pfVar2[1];
      fVar4 = pfVar2[2];
    }
    else {
      fVar3 = fVar3 / fVar4;
      fVar6 = fVar10 / fVar4;
      fVar4 = fVar5 / fVar4;
    }
    fVar7 = (float)FUN_07d22938(&stack0x000000d0,0);
    fVar4 = fVar4 * fVar5;
    fVar10 = fVar4 + fVar3 * fVar7 + fVar6 * fVar10;
    fVar6 = (float)FUN_07d22938(&stack0x000000d0,0);
    if (fVar10 <= 0.0) {
      fVar6 = -fVar6;
      fVar4 = -fVar4;
      fVar5 = -fVar5;
    }
    fVar10 = -fVar4;
    unaff_s11 = -fVar5;
    if (0.0 <= unaff_s9 || 0.0 <= fVar4) {
      fVar10 = fVar4;
      unaff_s11 = fVar5;
    }
    param_2 = (ulong)(uint)fVar10;
    fVar10 = -fVar6;
    if (0.0 <= unaff_s9 || 0.0 <= fVar4) {
      fVar10 = fVar6;
    }
    param_1 = (float)FUN_07c88914(fVar10,&stack0x00000090,0);
    if (*(char *)(unaff_x21 + 0xd8c) == '\0') {
      FUN_03a8a718();
      *(undefined1 *)(unaff_x21 + 0xd8c) = 1;
    }
    in_w8 = *(int *)(*unaff_x24 + 0xe4);
    unaff_s12 = fStack000000000000001c;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0696b680 with catch @ 0696c510 */
  FUN_03a8a9c8();
}


