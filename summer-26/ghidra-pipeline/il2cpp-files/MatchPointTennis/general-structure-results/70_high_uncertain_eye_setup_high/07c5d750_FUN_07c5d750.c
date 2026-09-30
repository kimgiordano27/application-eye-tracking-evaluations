/*
FUNCTION_NAME: FUN_07c5d750
ENTRY_POINT: 07c5d750
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07c5d750(undefined1 param_1 [16],ulong param_2,ulong param_3,undefined8 param_4,
                 long param_5,uint *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  if ((DAT_0a526641 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f50098);
    FUN_04447ba8(PTR_DAT_09f500a8);
    DAT_0a526641 = 1;
  }
  puVar3 = PTR_DAT_09f500a8;
  puVar2 = PTR_DAT_09f50098;
  puVar1 = PTR_DAT_09f1e748;
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  plVar14 = *(long **)(param_6 + 4);
  if (plVar14 != (long *)0x0) {
    fVar23 = 0.0;
    iVar13 = 1;
    uVar24 = (ulong)*param_6;
    uVar25 = (ulong)param_6[1];
    uVar22 = (ulong)param_6[2];
    do {
      lVar9 = *plVar14;
      lVar8 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            uVar10 = param_2;
            uVar20 = param_3;
            goto LAB_07c5d850;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_044822ac(plVar14,lVar8,0);
      uVar10 = param_2;
      uVar20 = param_3;
LAB_07c5d850:
      iVar4 = (*(code *)*puVar5)(plVar14,puVar5[1]);
      if ((iVar4 <= iVar13) || ((float)param_6[3] < fVar23)) {
        return;
      }
      plVar14 = *(long **)(param_6 + 4);
      if (plVar14 == (long *)0x0) break;
      lVar9 = *plVar14;
      lVar8 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto OVRManager__Reset;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_044822ac(plVar14,lVar8,1);
OVRManager__Reset:
      uVar11 = (*(code *)*puVar5)(plVar14,iVar13,puVar5[1]);
      if (param_5 == 0) break;
      uVar7 = uVar25;
      uVar21 = uVar22;
      uVar6 = FUN_07c5da5c(uVar24,uVar25,uVar22,uVar11,uVar10,uVar20,param_5,&local_d0);
      fVar18 = (float)uVar21;
      fVar16 = (float)uVar7;
      if ((uVar6 & 1) != 0) {
        fVar17 = (float)uVar25;
        fVar19 = (float)uVar22;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        fVar15 = (float)FUN_07c5dcf0(&local_d0);
        if (DAT_0a51c00a == '\0') {
          FUN_04447ba8(puVar1);
          DAT_0a51c00a = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        fVar15 = (float)uVar24 - fVar15;
        uVar25 = uVar25 & 0xffffffff;
        uVar22 = uVar22 & 0xffffffff;
        fVar17 = fVar17 - fVar16;
        fVar19 = fVar19 - fVar18;
        uStack_f8 = uStack_c8;
        local_100 = local_d0;
        uStack_e8 = uStack_b8;
        uStack_f0 = uStack_c0;
        local_e0 = local_b0;
        uVar7 = FUN_07c5ddb8(fVar23 + SQRT(fVar19 * fVar19 + fVar15 * fVar15 + fVar17 * fVar17),
                             param_4,param_5,&local_100,param_6);
        if ((uVar7 & 1) != 0) {
          return;
        }
      }
      if (DAT_0a51c00a == '\0') {
        FUN_04447ba8(puVar1);
        DAT_0a51c00a = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      fVar16 = (float)uVar24 - (float)uVar11;
      fVar18 = (float)uVar25 - (float)uVar10;
      fVar17 = (float)uVar22 - (float)uVar20;
      fVar18 = fVar18 * fVar18;
      param_2 = (ulong)(uint)fVar18;
      plVar14 = *(long **)(param_6 + 4);
      fVar17 = fVar17 * fVar17;
      param_3 = (ulong)(uint)fVar17;
      fVar23 = fVar23 + SQRT(fVar17 + fVar16 * fVar16 + fVar18);
      iVar13 = iVar13 + 1;
      uVar24 = uVar11;
      uVar25 = uVar10;
      uVar22 = uVar20;
    } while (plVar14 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


