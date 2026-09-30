/*
FUNCTION_NAME: FUN_033fda70
ENTRY_POINT: 033fda70
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033fde00) */
/* WARNING: Removing unreachable block (ram,0x033fddf4) */

void FUN_033fda70(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  char local_68 [4];
  char local_64 [4];
  
  if ((DAT_044a6c1f & 1) == 0) {
    FUN_01d7d918(StringLiteral_9534);
    FUN_01d7d918(StringLiteral_9463);
    DAT_044a6c1f = 1;
  }
  puVar7 = StringLiteral_9463;
  local_64[0] = '\0';
  local_68[0] = '\0';
  uVar14 = *(uint *)(param_1 + 0x20);
  thunk_FUN_01da0934();
  if (uVar14 == 0x7fffffff) {
    local_64[0] = '\0';
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f92dc(param_1 + 0x24,local_64);
    iVar1 = *(int *)(param_1 + 0x20);
    thunk_FUN_01da0934();
    uVar14 = 0x7fffffff;
    if (iVar1 == 0x7fffffff) {
      uVar14 = *(uint *)(param_1 + 0x1c);
      thunk_FUN_01da0934();
      uVar2 = *(uint *)(param_1 + 0x18);
      thunk_FUN_01da0934();
      thunk_FUN_01da0934();
      uVar3 = *(uint *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x1c) = uVar2 & uVar14;
      thunk_FUN_01da0934();
      uVar14 = *(uint *)(param_1 + 0x18);
      thunk_FUN_01da0934();
      uVar14 = uVar14 & uVar3;
      thunk_FUN_01da0934();
      *(uint *)(param_1 + 0x20) = uVar14;
    }
    if (local_64[0] != '\0') {
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled(param_1 + 0x24,1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  thunk_FUN_01da0934();
  iVar4 = *(int *)(param_1 + 0x18);
  thunk_FUN_01da0934();
  if ((int)uVar14 < iVar4 + iVar1) {
    lVar11 = *(long *)(param_1 + 0x10);
    thunk_FUN_01da0934();
    uVar2 = *(uint *)(param_1 + 0x18);
    thunk_FUN_01da0934();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar2 = uVar2 & uVar14;
    if (*(uint *)(lVar11 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    thunk_FUN_01da0934();
    puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
    *puVar12 = param_2;
    thunk_FUN_01e10808(puVar12,param_2);
    thunk_FUN_01da0934();
    *(uint *)(param_1 + 0x20) = uVar14 + 1;
  }
  else {
    local_68[0] = '\0';
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f92dc(param_1 + 0x24,local_68);
    iVar1 = *(int *)(param_1 + 0x1c);
    thunk_FUN_01da0934();
    iVar4 = *(int *)(param_1 + 0x20);
    thunk_FUN_01da0934();
    iVar5 = *(int *)(param_1 + 0x1c);
    thunk_FUN_01da0934();
    iVar6 = *(int *)(param_1 + 0x18);
    thunk_FUN_01da0934();
    uVar2 = iVar4 - iVar5;
    if (iVar6 <= (int)uVar2) {
      plVar13 = (long *)(param_1 + 0x10);
      lVar11 = *plVar13;
      thunk_FUN_01da0934();
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      plVar8 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_9534,*(int *)(lVar11 + 0x18) << 1);
      uVar16 = 0;
      plVar15 = plVar8 + 4;
      while( true ) {
        lVar11 = *plVar13;
        thunk_FUN_01da0934();
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar16) break;
        lVar11 = *plVar13;
        thunk_FUN_01da0934();
        uVar14 = *(uint *)(param_1 + 0x18);
        thunk_FUN_01da0934();
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar14 = uVar14 & iVar1 + (int)uVar16;
        if (*(uint *)(lVar11 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar11 = *(long *)(lVar11 + (long)(int)uVar14 * 8 + 0x20);
        if ((lVar11 != 0) &&
           (lVar9 = thunk_FUN_01de26bc(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
          uVar10 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar10,0);
        }
        if (*(uint *)(plVar8 + 3) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        *plVar15 = lVar11;
        thunk_FUN_01e10808(plVar15,lVar11);
        uVar16 = uVar16 + 1;
        plVar15 = plVar15 + 1;
      }
      thunk_FUN_01da0934();
      *plVar13 = (long)plVar8;
      thunk_FUN_01e10808(plVar13,plVar8);
      thunk_FUN_01da0934();
      *(undefined4 *)(param_1 + 0x1c) = 0;
      thunk_FUN_01da0934();
      iVar1 = *(int *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x20) = uVar2;
      thunk_FUN_01da0934();
      thunk_FUN_01da0934();
      *(uint *)(param_1 + 0x18) = iVar1 << 1 | 1;
      uVar14 = uVar2;
    }
    lVar11 = *(long *)(param_1 + 0x10);
    thunk_FUN_01da0934();
    uVar2 = *(uint *)(param_1 + 0x18);
    thunk_FUN_01da0934();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar2 = uVar2 & uVar14;
    if (*(uint *)(lVar11 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    thunk_FUN_01da0934();
    puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
    *puVar12 = param_2;
    thunk_FUN_01e10808(puVar12,param_2);
    thunk_FUN_01da0934();
    *(uint *)(param_1 + 0x20) = uVar14 + 1;
    if (local_68[0] != '\0') {
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled(param_1 + 0x24,0);
    }
  }
  return;
}


