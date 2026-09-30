/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$Invoke
ENTRY_POINT: 05d06864
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate__Invoke
               (long param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               undefined1 param_7 [16],undefined1 param_8 [16],float param_9)

{
  long lVar1;
  float *pfVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined4 *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s9;
  float fVar11;
  float unaff_s10;
  float fVar12;
  float unaff_s11;
  undefined4 uStack0000000000000004;
  float fStack0000000000000010;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  undefined4 in_stack_00000048;
  
  fStack000000000000003c = param_9 + param_4;
  uVar3 = 0;
  lVar4 = 0x38;
  do {
    fStack0000000000000010 = (float)(int)uVar3 / ((float)(int)param_1 + -1.0);
    fVar7 = (float)unaff_x21[1];
    fVar9 = (float)unaff_x21[2];
    uStack0000000000000004 = in_stack_00000048;
    fVar5 = (float)FUN_05d06cdc(*unaff_x21,fVar7,fVar9,fStack000000000000003c,
                                fStack0000000000000028 + param_2 * param_5,
                                in_stack_00000020._4_4_ + param_2 * param_3 * param_6);
    lVar1 = *unaff_x20;
    if (lVar1 == 0) goto LAB_05d06b40;
    if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_05d06b3c;
    lVar1 = lVar1 + lVar4;
    *(float *)(lVar1 + -0x10) = fStack0000000000000030 * fVar9;
    *(float *)(lVar1 + -0x18) = in_stack_00000038 * fVar5;
    *(float *)(lVar1 + -0x14) = fStack0000000000000034 * fVar7;
    lVar1 = *unaff_x20;
    if (lVar1 == 0) goto LAB_05d06b40;
    if (DAT_0738e668 == '\0') {
      FUN_02fe925c();
      DAT_0738e668 = '\x01';
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    fVar6 = fVar5 - unaff_s9;
    fVar8 = fVar7 - unaff_s10;
    fVar10 = fVar9 - unaff_s11;
    fVar11 = SQRT(fVar10 * fVar10 + fVar6 * fVar6 + fVar8 * fVar8);
    fVar12 = fStack000000000000002c;
    if (fVar11 <= fStack000000000000002c) {
      if (DAT_0738e669 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d5d8);
        DAT_0738e669 = '\x01';
      }
      pfVar2 = *(float **)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
      fVar6 = *pfVar2;
      fVar8 = pfVar2[1];
      fVar10 = pfVar2[2];
    }
    else {
      fVar6 = fVar6 / fVar11;
      fVar8 = fVar8 / fVar11;
      fVar10 = fVar10 / fVar11;
    }
    fVar6 = (float)FUN_068ed124(fVar6,0);
    if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_05d06b3c;
    pfVar2 = (float *)(lVar1 + lVar4);
    pfVar2[-3] = fVar6;
    pfVar2[-2] = fVar8;
    pfVar2[-1] = fVar10;
    *pfVar2 = fVar12;
    if (lVar4 != 0x38) {
      if (*(char *)(unaff_x24 + 0x6c8) == '\0') {
        FUN_02fe925c();
        *(undefined1 *)(unaff_x24 + 0x6c8) = 1;
      }
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      in_stack_00000040 = in_stack_00000040 + fVar11;
    }
    param_1 = (long)*(int *)(unaff_x19 + 0x50);
    uVar3 = uVar3 + 1;
    lVar4 = lVar4 + 0x20;
    unaff_s9 = fVar5;
    unaff_s10 = fVar7;
    unaff_s11 = fVar9;
  } while ((long)uVar3 < param_1);
  if (1 < *(int *)(unaff_x19 + 0x50)) {
    lVar1 = *unaff_x20;
    lVar4 = 0x5c;
    uVar3 = 1;
    do {
      if (lVar1 == 0) {
LAB_05d06b40:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if (((ulong)*(uint *)(lVar1 + 0x18) <= uVar3 - 1) || (*(uint *)(lVar1 + 0x18) <= uVar3)) {
LAB_05d06b3c:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar1 = lVar1 + lVar4;
      fVar7 = *(float *)(lVar1 + -0x38);
      fVar9 = *(float *)(lVar1 + -0x34);
      fVar5 = *(float *)(lVar1 + -0x3c);
      fVar8 = *(float *)(lVar1 + -0x1c);
      fVar6 = *(float *)(lVar1 + -0x18);
      fVar12 = *(float *)(lVar1 + -0x14);
      if (*(char *)(unaff_x24 + 0x6c8) == '\0') {
        FUN_02fe925c();
        *(undefined1 *)(unaff_x24 + 0x6c8) = 1;
      }
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar1 = *unaff_x20;
      if (lVar1 == 0) goto LAB_05d06b40;
      if (((ulong)*(uint *)(lVar1 + 0x18) <= uVar3 - 1) || (*(uint *)(lVar1 + 0x18) <= uVar3))
      goto LAB_05d06b3c;
      fVar5 = fVar5 - fVar8;
      fVar7 = fVar7 - fVar6;
      fVar9 = fVar9 - fVar12;
      *(float *)(lVar1 + lVar4) =
           SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar9 * fVar9) / in_stack_00000040 +
           ((float *)(lVar1 + lVar4))[-8];
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while ((long)uVar3 < (long)*(int *)(unaff_x19 + 0x50));
  }
  return;
}


