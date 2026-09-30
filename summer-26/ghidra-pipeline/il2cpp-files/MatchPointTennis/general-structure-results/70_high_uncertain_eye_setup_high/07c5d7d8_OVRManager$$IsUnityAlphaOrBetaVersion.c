/*
FUNCTION_NAME: OVRManager$$IsUnityAlphaOrBetaVersion
ENTRY_POINT: 07c5d7d8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__IsUnityAlphaOrBetaVersion(undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  uint *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *plVar9;
  int iVar10;
  long *unaff_x24;
  long *plVar11;
  long *unaff_x25;
  long unaff_x26;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  plVar12 = *(long **)(unaff_x26 + 0xa8);
  plVar9 = *(long **)(unaff_x22 + 0x748);
  fVar21 = 0.0;
  iVar10 = 1;
  uVar22 = (ulong)*unaff_x19;
  uVar23 = (ulong)unaff_x19[1];
  uVar20 = (ulong)unaff_x19[2];
  do {
    lVar5 = *unaff_x24;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          uVar6 = param_2;
          uVar18 = param_3;
          goto LAB_07c5d850;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac(unaff_x24,*unaff_x25,0);
    uVar6 = param_2;
    uVar18 = param_3;
LAB_07c5d850:
    iVar1 = (*(code *)*puVar2)(unaff_x24,puVar2[1]);
    if ((iVar1 <= iVar10) || ((float)unaff_x19[3] < fVar21)) {
      return;
    }
    plVar11 = *(long **)(unaff_x19 + 4);
    if (plVar11 == (long *)0x0) break;
    lVar5 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto OVRManager__Reset;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac(plVar11,*unaff_x25,1);
OVRManager__Reset:
    uVar7 = (*(code *)*puVar2)(plVar11,iVar10,puVar2[1]);
    if (unaff_x20 == 0) break;
    uVar4 = uVar23;
    uVar19 = uVar20;
    uVar3 = FUN_07c5da5c(uVar22,uVar23,uVar20,uVar7,uVar6,uVar18);
    fVar16 = (float)uVar19;
    fVar14 = (float)uVar4;
    if ((uVar3 & 1) != 0) {
      fVar15 = (float)uVar23;
      fVar17 = (float)uVar20;
      if (*(int *)(*plVar12 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      fVar13 = (float)FUN_07c5dcf0(&stack0x00000040);
      if (DAT_0a51c00a == '\0') {
        FUN_04447ba8(plVar9);
        DAT_0a51c00a = '\x01';
      }
      if (*(int *)(*plVar9 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      fVar13 = (float)uVar22 - fVar13;
      uVar23 = uVar23 & 0xffffffff;
      uVar20 = uVar20 & 0xffffffff;
      fVar15 = fVar15 - fVar14;
      fVar17 = fVar17 - fVar16;
      uVar4 = FUN_07c5ddb8(fVar21 + SQRT(fVar17 * fVar17 + fVar13 * fVar13 + fVar15 * fVar15));
      if ((uVar4 & 1) != 0) {
        return;
      }
    }
    if (DAT_0a51c00a == '\0') {
      FUN_04447ba8(plVar9);
      DAT_0a51c00a = '\x01';
    }
    if (*(int *)(*plVar9 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar14 = (float)uVar22 - (float)uVar7;
    fVar16 = (float)uVar23 - (float)uVar6;
    fVar15 = (float)uVar20 - (float)uVar18;
    fVar16 = fVar16 * fVar16;
    param_2 = (ulong)(uint)fVar16;
    unaff_x24 = *(long **)(unaff_x19 + 4);
    fVar15 = fVar15 * fVar15;
    param_3 = (ulong)(uint)fVar15;
    fVar21 = fVar21 + SQRT(fVar15 + fVar14 * fVar14 + fVar16);
    iVar10 = iVar10 + 1;
    uVar22 = uVar7;
    uVar23 = uVar6;
    uVar20 = uVar18;
  } while (unaff_x24 != (long *)0x0);
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


