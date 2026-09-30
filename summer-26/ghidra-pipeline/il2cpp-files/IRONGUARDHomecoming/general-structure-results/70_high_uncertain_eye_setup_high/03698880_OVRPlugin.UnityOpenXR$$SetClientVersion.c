/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$SetClientVersion
ENTRY_POINT: 03698880
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__SetClientVersion(float param_1,float param_2)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x19;
  long *unaff_x20;
  float *unaff_x21;
  long *unaff_x26;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_s10;
  float fVar19;
  float unaff_s11;
  float fVar20;
  ulong uVar21;
  float unaff_s12;
  float fVar22;
  ulong uVar23;
  float unaff_s13;
  float fVar24;
  float unaff_s14;
  float fVar25;
  float unaff_s15;
  float fVar26;
  float fStack0000000000000024;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float in_stack_00000040;
  
  fVar12 = unaff_s13 * param_2;
  fVar14 = (unaff_s15 * param_2) / param_1;
  fVar19 = unaff_s10 - fVar14;
  fVar20 = unaff_s11 - (unaff_s14 * param_2) / param_1;
  fVar22 = unaff_s12 - fVar12 / param_1;
  if (DAT_0482f03e == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03e = '\x01';
  }
  puVar2 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar7 = unaff_x21[2];
  fVar18 = *unaff_x21;
  fVar24 = unaff_x21[1];
  fStack000000000000003c = (float)FUN_0407bb40();
  fVar16 = *unaff_x21;
  fStack0000000000000034 = unaff_x21[1];
  fVar8 = unaff_x21[2];
  fVar17 = fVar14;
  fStack0000000000000024 = fVar12;
  fVar9 = (float)FUN_0407bb40();
  fVar26 = fVar12;
  fVar25 = fVar17;
  lVar3 = FUN_04070398();
  if (lVar3 != 0) {
    fVar10 = (float)FUN_0407ec3c(lVar3,0);
    lVar3 = FUN_04070398();
    if (lVar3 != 0) {
      FUN_0407ec3c(lVar3,0);
      lVar3 = FUN_04070398();
      if (lVar3 != 0) {
        FUN_0407ec3c(lVar3,0);
        fVar1 = DAT_00c926ac;
        if (0 < *(int *)(unaff_x19 + 0x50)) {
          fVar12 = fStack0000000000000034 - fVar12;
          fVar19 = SQRT(fVar19 * fVar19 + fVar20 * fVar20 + fVar22 * fVar22);
          lVar3 = 0;
          fStack0000000000000034 = 1.0 / fVar26;
          uVar6 = 0;
          fVar22 = 0.0;
          fVar20 = fVar19 * fStack000000000000003c;
          fStack000000000000003c = fVar24 + in_stack_00000040 * fVar19 * fStack0000000000000024;
          uVar21 = (ulong)(uint)fVar12;
          uVar23 = (ulong)(uint)(fVar8 - fVar17);
          fVar12 = fVar16 - fVar9;
          do {
            fVar26 = *unaff_x21;
            uVar13 = (ulong)(uint)unaff_x21[1];
            uVar15 = (ulong)(uint)unaff_x21[2];
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar26 = (float)FUN_036990a8(fVar26,uVar13,uVar15,fVar18 + in_stack_00000040 * fVar20,
                                         fStack000000000000003c,
                                         fVar7 + in_stack_00000040 * fVar19 * fVar14);
            if (DAT_0482f03e == '\0') {
              thunk_FUN_01efb3a4(puVar2);
              DAT_0482f03e = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            lVar4 = *unaff_x20;
            if (lVar4 == 0) goto LAB_03698ce4;
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_03698ce0;
            lVar4 = lVar4 + lVar3;
            *(float *)(lVar4 + 0x20) = (1.0 / fVar10) * fVar26;
            *(float *)(lVar4 + 0x24) = fStack0000000000000034 * (float)uVar13;
            *(float *)(lVar4 + 0x28) = (1.0 / fVar25) * (float)uVar15;
            lVar4 = *unaff_x20;
            if (lVar4 == 0) goto LAB_03698ce4;
            if (DAT_0482ee9b == '\0') {
              thunk_FUN_01efb3a4(puVar2);
              DAT_0482ee9b = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar12 = fVar26 - fVar12;
            fVar8 = (float)uVar13 - (float)uVar21;
            fVar9 = (float)uVar15 - (float)uVar23;
            fVar16 = SQRT(fVar9 * fVar9 + fVar12 * fVar12 + fVar8 * fVar8);
            fVar17 = fVar1;
            if (fVar16 <= fVar1) {
              if (DAT_0482ee12 == '\0') {
                thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
                DAT_0482ee12 = '\x01';
              }
              pfVar5 = *(float **)
                        (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                        0xb8);
              fVar12 = *pfVar5;
              fVar8 = pfVar5[1];
              fVar9 = pfVar5[2];
            }
            else {
              fVar12 = fVar12 / fVar16;
              fVar8 = fVar8 / fVar16;
              fVar9 = fVar9 / fVar16;
            }
            uVar11 = FUN_0406761c(fVar12,0);
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_03698ce0;
            lVar4 = lVar4 + lVar3;
            *(undefined4 *)(lVar4 + 0x2c) = uVar11;
            *(float *)(lVar4 + 0x30) = fVar8;
            *(float *)(lVar4 + 0x34) = fVar9;
            *(float *)(lVar4 + 0x38) = fVar17;
            uVar6 = uVar6 + 1;
            fVar22 = fVar22 + fVar16;
            lVar3 = lVar3 + 0x20;
            uVar21 = uVar13;
            uVar23 = uVar15;
            fVar12 = fVar26;
          } while ((long)uVar6 < (long)*(int *)(unaff_x19 + 0x50));
          if (1 < *(int *)(unaff_x19 + 0x50)) {
            lVar4 = *unaff_x20;
            lVar3 = 0x5c;
            uVar6 = 1;
            do {
              if (lVar4 == 0) goto LAB_03698ce4;
              if (((ulong)*(uint *)(lVar4 + 0x18) <= uVar6 - 1) ||
                 (*(uint *)(lVar4 + 0x18) <= uVar6)) {
LAB_03698ce0:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar4 = lVar4 + lVar3;
              fVar14 = *(float *)(lVar4 + -0x38);
              fVar19 = *(float *)(lVar4 + -0x34);
              fVar12 = *(float *)(lVar4 + -0x3c);
              fVar25 = *(float *)(lVar4 + -0x1c);
              fVar26 = *(float *)(lVar4 + -0x18);
              fVar20 = *(float *)(lVar4 + -0x14);
              if (DAT_0482f03e == '\0') {
                thunk_FUN_01efb3a4(puVar2);
                DAT_0482f03e = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              lVar4 = *unaff_x20;
              if (lVar4 == 0) goto LAB_03698ce4;
              if (((ulong)*(uint *)(lVar4 + 0x18) <= uVar6 - 1) ||
                 (*(uint *)(lVar4 + 0x18) <= uVar6)) goto LAB_03698ce0;
              fVar12 = fVar12 - fVar25;
              fVar14 = fVar14 - fVar26;
              fVar19 = fVar19 - fVar20;
              *(float *)(lVar4 + lVar3) =
                   SQRT(fVar12 * fVar12 + fVar14 * fVar14 + fVar19 * fVar19) / fVar22 +
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
LAB_03698ce4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


