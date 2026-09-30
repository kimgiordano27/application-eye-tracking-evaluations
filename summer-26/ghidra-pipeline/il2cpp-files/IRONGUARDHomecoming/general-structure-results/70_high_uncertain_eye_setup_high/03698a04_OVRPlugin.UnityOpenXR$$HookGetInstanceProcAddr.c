/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$HookGetInstanceProcAddr
ENTRY_POINT: 03698a04
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__HookGetInstanceProcAddr
               (float param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined4 *unaff_x21;
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
  float fVar7;
  float fVar8;
  ulong uVar9;
  float unaff_s9;
  float unaff_s10;
  float fVar10;
  float fVar11;
  ulong unaff_d11;
  ulong unaff_d12;
  undefined4 uVar12;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  
  fStack000000000000003c = fStack0000000000000018 + in_stack_00000040 * param_3;
  do {
    uVar12 = *unaff_x21;
    uVar4 = (ulong)(uint)unaff_x21[1];
    uVar9 = (ulong)(uint)unaff_x21[2];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar5 = (float)FUN_036990a8(uVar12,uVar4,uVar9,
                                fStack000000000000001c + in_stack_00000040 * param_2,
                                fStack000000000000003c,
                                fStack0000000000000028 + in_stack_00000040 * param_1 * param_4);
    if (*(char *)(unaff_x25 + 0x3e) == '\0') {
      thunk_FUN_01efb3a4();
      *(char *)(unaff_x25 + 0x3e) = unaff_w28;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar1 = *unaff_x20;
    if (lVar1 == 0) goto LAB_03698ce4;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x27) goto LAB_03698ce0;
    lVar1 = lVar1 + unaff_x26;
    *(float *)(lVar1 + 0x20) = in_stack_00000038 * fVar5;
    *(float *)(lVar1 + 0x24) = fStack0000000000000034 * (float)uVar4;
    *(float *)(lVar1 + 0x28) = fStack0000000000000030 * (float)uVar9;
    lVar1 = *unaff_x20;
    if (lVar1 == 0) goto LAB_03698ce4;
    if (*(char *)(unaff_x29 + 0xe9b) == '\0') {
      thunk_FUN_01efb3a4();
      *(char *)(unaff_x29 + 0xe9b) = unaff_w28;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar6 = fVar5 - unaff_s10;
    fVar7 = (float)uVar4 - (float)unaff_d11;
    fVar8 = (float)uVar9 - (float)unaff_d12;
    fVar10 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7);
    fVar11 = fStack000000000000002c;
    if (fVar10 <= fStack000000000000002c) {
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = unaff_w28;
      }
      pfVar2 = *(float **)
                (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
      fVar6 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
    }
    else {
      fVar6 = fVar6 / fVar10;
      fVar7 = fVar7 / fVar10;
      fVar8 = fVar8 / fVar10;
    }
    uVar12 = FUN_0406761c(fVar6,0);
    if (*(uint *)(lVar1 + 0x18) <= unaff_x27) goto LAB_03698ce0;
    lVar1 = lVar1 + unaff_x26;
    *(undefined4 *)(lVar1 + 0x2c) = uVar12;
    *(float *)(lVar1 + 0x30) = fVar7;
    *(float *)(lVar1 + 0x34) = fVar8;
    *(float *)(lVar1 + 0x38) = fVar11;
    unaff_x27 = unaff_x27 + 1;
    unaff_s9 = unaff_s9 + fVar10;
    unaff_x26 = unaff_x26 + 0x20;
    unaff_d11 = uVar4;
    unaff_d12 = uVar9;
    unaff_s10 = fVar5;
  } while ((long)unaff_x27 < (long)*(int *)(unaff_x19 + 0x50));
  if (1 < *(int *)(unaff_x19 + 0x50)) {
    lVar3 = *unaff_x20;
    lVar1 = 0x5c;
    uVar4 = 1;
    do {
      if (lVar3 == 0) {
LAB_03698ce4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar3 + 0x18) <= uVar4)) {
LAB_03698ce0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar3 = lVar3 + lVar1;
      fVar11 = *(float *)(lVar3 + -0x38);
      fVar6 = *(float *)(lVar3 + -0x34);
      fVar5 = *(float *)(lVar3 + -0x3c);
      fVar10 = *(float *)(lVar3 + -0x1c);
      fVar8 = *(float *)(lVar3 + -0x18);
      fVar7 = *(float *)(lVar3 + -0x14);
      if (*(char *)(unaff_x25 + 0x3e) == '\0') {
        thunk_FUN_01efb3a4();
        *(undefined1 *)(unaff_x25 + 0x3e) = 1;
      }
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar3 = *unaff_x20;
      if (lVar3 == 0) goto LAB_03698ce4;
      if (((ulong)*(uint *)(lVar3 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar3 + 0x18) <= uVar4))
      goto LAB_03698ce0;
      fVar5 = fVar5 - fVar10;
      fVar11 = fVar11 - fVar8;
      fVar6 = fVar6 - fVar7;
      *(float *)(lVar3 + lVar1) =
           SQRT(fVar5 * fVar5 + fVar11 * fVar11 + fVar6 * fVar6) / unaff_s9 +
           ((float *)(lVar3 + lVar1))[-8];
      uVar4 = uVar4 + 1;
      lVar1 = lVar1 + 0x20;
    } while ((long)uVar4 < (long)*(int *)(unaff_x19 + 0x50));
  }
  return;
}


