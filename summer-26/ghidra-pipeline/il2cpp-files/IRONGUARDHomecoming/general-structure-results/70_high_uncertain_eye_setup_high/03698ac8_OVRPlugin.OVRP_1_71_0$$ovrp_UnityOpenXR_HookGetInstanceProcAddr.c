/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_HookGetInstanceProcAddr
ENTRY_POINT: 03698ac8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_HookGetInstanceProcAddr(long param_1)

{
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined4 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long lVar3;
  ulong uVar4;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  char unaff_w28;
  long unaff_x29;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  ulong unaff_d8;
  float unaff_s9;
  float unaff_s10;
  float fVar11;
  ulong unaff_d11;
  float fVar12;
  ulong unaff_d12;
  float unaff_s14;
  ulong unaff_d15;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  
  do {
    fVar12 = unaff_s14;
    uVar4 = unaff_d8;
    if (*(uint *)(param_1 + 0x18) <= unaff_x27) goto LAB_03698ce0;
    param_1 = param_1 + unaff_x26;
    fVar9 = (float)uVar4;
    *(float *)(param_1 + 0x20) = fStack0000000000000038 * fVar12;
    *(float *)(param_1 + 0x24) = fStack0000000000000034 * (float)unaff_d15;
    *(float *)(param_1 + 0x28) = fStack0000000000000030 * fVar9;
    lVar3 = *unaff_x20;
    if (lVar3 == 0) break;
    if (*(char *)(unaff_x29 + 0xe9b) == '\0') {
      thunk_FUN_01efb3a4();
      *(char *)(unaff_x29 + 0xe9b) = unaff_w28;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar5 = fVar12 - unaff_s10;
    fVar7 = (float)unaff_d15 - (float)unaff_d11;
    fVar9 = fVar9 - (float)unaff_d12;
    fVar11 = SQRT(fVar9 * fVar9 + fVar5 * fVar5 + fVar7 * fVar7);
    fVar10 = in_stack_00000028._4_4_;
    if (fVar11 <= in_stack_00000028._4_4_) {
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = unaff_w28;
      }
      pfVar1 = *(float **)
                (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
      fVar5 = *pfVar1;
      fVar7 = pfVar1[1];
      fVar9 = pfVar1[2];
    }
    else {
      fVar5 = fVar5 / fVar11;
      fVar7 = fVar7 / fVar11;
      fVar9 = fVar9 / fVar11;
    }
    uVar6 = FUN_0406761c(fVar5,0);
    if (*(uint *)(lVar3 + 0x18) <= unaff_x27) goto LAB_03698ce0;
    lVar3 = lVar3 + unaff_x26;
    *(undefined4 *)(lVar3 + 0x2c) = uVar6;
    *(float *)(lVar3 + 0x30) = fVar7;
    *(float *)(lVar3 + 0x34) = fVar9;
    *(float *)(lVar3 + 0x38) = fVar10;
    unaff_x27 = unaff_x27 + 1;
    unaff_s9 = unaff_s9 + fVar11;
    unaff_x26 = unaff_x26 + 0x20;
    if ((long)*(int *)(unaff_x19 + 0x50) <= (long)unaff_x27) {
      if (*(int *)(unaff_x19 + 0x50) < 2) {
        return;
      }
      lVar2 = *unaff_x20;
      lVar3 = 0x5c;
      uVar4 = 1;
      goto LAB_03698bf4;
    }
    uVar6 = *unaff_x21;
    uVar8 = (ulong)(uint)unaff_x21[1];
    unaff_d8 = (ulong)(uint)unaff_x21[2];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    unaff_s14 = (float)FUN_036990a8(uVar6,uVar8,unaff_d8,in_stack_00000040,uStack000000000000003c);
    if (*(char *)(unaff_x25 + 0x3e) == '\0') {
      thunk_FUN_01efb3a4();
      *(char *)(unaff_x25 + 0x3e) = unaff_w28;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    param_1 = *unaff_x20;
    unaff_d11 = unaff_d15;
    unaff_d12 = uVar4;
    unaff_d15 = uVar8;
    unaff_s10 = fVar12;
  } while (param_1 != 0);
LAB_03698ce4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_03698bf4:
  if (lVar2 == 0) goto LAB_03698ce4;
  if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar4)) {
LAB_03698ce0:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  lVar2 = lVar2 + lVar3;
  fVar9 = *(float *)(lVar2 + -0x38);
  fVar10 = *(float *)(lVar2 + -0x34);
  fVar12 = *(float *)(lVar2 + -0x3c);
  fVar11 = *(float *)(lVar2 + -0x1c);
  fVar7 = *(float *)(lVar2 + -0x18);
  fVar5 = *(float *)(lVar2 + -0x14);
  if (*(char *)(unaff_x25 + 0x3e) == '\0') {
    thunk_FUN_01efb3a4();
    *(undefined1 *)(unaff_x25 + 0x3e) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar2 = *unaff_x20;
  if (lVar2 == 0) goto LAB_03698ce4;
  if (((ulong)*(uint *)(lVar2 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar2 + 0x18) <= uVar4))
  goto LAB_03698ce0;
  fVar12 = fVar12 - fVar11;
  fVar9 = fVar9 - fVar7;
  fVar10 = fVar10 - fVar5;
  *(float *)(lVar2 + lVar3) =
       SQRT(fVar12 * fVar12 + fVar9 * fVar9 + fVar10 * fVar10) / unaff_s9 +
       ((float *)(lVar2 + lVar3))[-8];
  uVar4 = uVar4 + 1;
  lVar3 = lVar3 + 0x20;
  if ((long)*(int *)(unaff_x19 + 0x50) <= (long)uVar4) {
    return;
  }
  goto LAB_03698bf4;
}


