/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_SetClientVersion
ENTRY_POINT: 03698970
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_SetClientVersion
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

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
  ulong uVar14;
  float unaff_s12;
  float fVar15;
  ulong uVar16;
  float unaff_s13;
  float fVar17;
  float unaff_s14;
  float unaff_s15;
  undefined4 uVar18;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  
  if (param_4 != 0) {
    FUN_0407ec3c(param_4,0);
    fVar15 = DAT_00c926ac;
    if (0 < *(int *)(unaff_x19 + 0x50)) {
      fVar5 = SQRT(unaff_s10 * unaff_s10 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12);
      lVar3 = 0;
      uVar4 = 0;
      fVar12 = 0.0;
      uVar14 = (ulong)(uint)(fStack0000000000000034 - unaff_s15);
      uVar16 = (ulong)(uint)(fStack0000000000000030 - unaff_s9);
      fVar7 = fStack0000000000000038 - unaff_s14;
      do {
        uVar18 = *unaff_x21;
        uVar9 = (ulong)(uint)unaff_x21[1];
        uVar11 = (ulong)(uint)unaff_x21[2];
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar6 = (float)FUN_036990a8(uVar18,uVar9,uVar11,
                                    fStack000000000000001c +
                                    in_stack_00000040 * fVar5 * fStack000000000000003c,
                                    fStack0000000000000018 +
                                    in_stack_00000040 * fVar5 * fStack0000000000000024,
                                    in_stack_00000028 +
                                    in_stack_00000040 * fVar5 * fStack0000000000000020);
        if (*(char *)(unaff_x25 + 0x3e) == '\0') {
          thunk_FUN_01efb3a4();
          *(undefined1 *)(unaff_x25 + 0x3e) = 1;
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar1 = *unaff_x20;
        if (lVar1 == 0) goto LAB_03698ce4;
        if (*(uint *)(lVar1 + 0x18) <= uVar4) goto LAB_03698ce0;
        lVar1 = lVar1 + lVar3;
        *(float *)(lVar1 + 0x20) = (1.0 / unaff_s8) * fVar6;
        *(float *)(lVar1 + 0x24) = (1.0 / unaff_s13) * (float)uVar9;
        *(float *)(lVar1 + 0x28) = (1.0 / param_3) * (float)uVar11;
        lVar1 = *unaff_x20;
        if (lVar1 == 0) goto LAB_03698ce4;
        if (DAT_0482ee9b == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0482ee9b = '\x01';
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar7 = fVar6 - fVar7;
        fVar8 = (float)uVar9 - (float)uVar14;
        fVar10 = (float)uVar11 - (float)uVar16;
        fVar13 = SQRT(fVar10 * fVar10 + fVar7 * fVar7 + fVar8 * fVar8);
        fVar17 = fVar15;
        if (fVar13 <= fVar15) {
          if (DAT_0482ee12 == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
            DAT_0482ee12 = '\x01';
          }
          pfVar2 = *(float **)
                    (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8
                    );
          fVar7 = *pfVar2;
          fVar8 = pfVar2[1];
          fVar10 = pfVar2[2];
        }
        else {
          fVar7 = fVar7 / fVar13;
          fVar8 = fVar8 / fVar13;
          fVar10 = fVar10 / fVar13;
        }
        uVar18 = FUN_0406761c(fVar7,0);
        if (*(uint *)(lVar1 + 0x18) <= uVar4) goto LAB_03698ce0;
        lVar1 = lVar1 + lVar3;
        *(undefined4 *)(lVar1 + 0x2c) = uVar18;
        *(float *)(lVar1 + 0x30) = fVar8;
        *(float *)(lVar1 + 0x34) = fVar10;
        *(float *)(lVar1 + 0x38) = fVar17;
        uVar4 = uVar4 + 1;
        fVar12 = fVar12 + fVar13;
        lVar3 = lVar3 + 0x20;
        uVar14 = uVar9;
        uVar16 = uVar11;
        fVar7 = fVar6;
      } while ((long)uVar4 < (long)*(int *)(unaff_x19 + 0x50));
      if (1 < *(int *)(unaff_x19 + 0x50)) {
        lVar1 = *unaff_x20;
        lVar3 = 0x5c;
        uVar4 = 1;
        do {
          if (lVar1 == 0) goto LAB_03698ce4;
          if (((ulong)*(uint *)(lVar1 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar1 + 0x18) <= uVar4)) {
LAB_03698ce0:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar1 = lVar1 + lVar3;
          fVar7 = *(float *)(lVar1 + -0x38);
          fVar5 = *(float *)(lVar1 + -0x34);
          fVar15 = *(float *)(lVar1 + -0x3c);
          fVar8 = *(float *)(lVar1 + -0x1c);
          fVar17 = *(float *)(lVar1 + -0x18);
          fVar6 = *(float *)(lVar1 + -0x14);
          if (*(char *)(unaff_x25 + 0x3e) == '\0') {
            thunk_FUN_01efb3a4();
            *(undefined1 *)(unaff_x25 + 0x3e) = 1;
          }
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar1 = *unaff_x20;
          if (lVar1 == 0) goto LAB_03698ce4;
          if (((ulong)*(uint *)(lVar1 + 0x18) <= uVar4 - 1) || (*(uint *)(lVar1 + 0x18) <= uVar4))
          goto LAB_03698ce0;
          fVar15 = fVar15 - fVar8;
          fVar7 = fVar7 - fVar17;
          fVar5 = fVar5 - fVar6;
          *(float *)(lVar1 + lVar3) =
               SQRT(fVar15 * fVar15 + fVar7 * fVar7 + fVar5 * fVar5) / fVar12 +
               ((float *)(lVar1 + lVar3))[-8];
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x20;
        } while ((long)uVar4 < (long)*(int *)(unaff_x19 + 0x50));
      }
    }
    return;
  }
LAB_03698ce4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


