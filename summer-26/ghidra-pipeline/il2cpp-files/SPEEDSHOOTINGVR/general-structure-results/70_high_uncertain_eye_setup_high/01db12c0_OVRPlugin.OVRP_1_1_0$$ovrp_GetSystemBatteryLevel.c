/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemBatteryLevel
ENTRY_POINT: 01db12c0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db15b8) */
/* WARNING: Removing unreachable block (ram,0x01db15ac) */

void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryLevel(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w21;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint uVar13;
  long *plVar14;
  long *unaff_x25;
  ulong uVar15;
  char cStack0000000000000008;
  char cStack000000000000000c;
  
  thunk_FUN_00ffe618();
  uVar13 = 0x7fffffff;
  if (unaff_w21 == 0x7fffffff) {
    uVar13 = *(uint *)(unaff_x19 + 0x1c);
    thunk_FUN_00ffe618();
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_00ffe618();
    thunk_FUN_00ffe618();
    uVar2 = *(uint *)(unaff_x19 + 0x20);
    *(uint *)(unaff_x19 + 0x1c) = uVar1 & uVar13;
    thunk_FUN_00ffe618();
    uVar13 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_00ffe618();
    uVar13 = uVar13 & uVar2;
    thunk_FUN_00ffe618();
    *(uint *)(unaff_x19 + 0x20) = uVar13;
  }
  if (cStack000000000000000c != '\0') {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01dad12c(unaff_x19 + 0x24,1);
  }
  iVar3 = *(int *)(unaff_x19 + 0x1c);
  thunk_FUN_00ffe618();
  iVar4 = *(int *)(unaff_x19 + 0x18);
  thunk_FUN_00ffe618();
  if ((int)uVar13 < iVar4 + iVar3) {
    lVar10 = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_00ffe618();
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_00ffe618();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar1 = uVar1 & uVar13;
    if (*(uint *)(lVar10 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    thunk_FUN_00ffe618();
    puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
    *puVar11 = unaff_x20;
    thunk_FUN_0106e12c(puVar11);
    thunk_FUN_00ffe618();
    *(uint *)(unaff_x19 + 0x20) = uVar13 + 1;
  }
  else {
    cStack0000000000000008 = '\0';
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01dac6f8(unaff_x19 + 0x24,&stack0x00000008);
    iVar3 = *(int *)(unaff_x19 + 0x1c);
    thunk_FUN_00ffe618();
    iVar4 = *(int *)(unaff_x19 + 0x20);
    thunk_FUN_00ffe618();
    iVar5 = *(int *)(unaff_x19 + 0x1c);
    thunk_FUN_00ffe618();
    iVar6 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_00ffe618();
    uVar1 = iVar4 - iVar5;
    if (iVar6 <= (int)uVar1) {
      plVar12 = (long *)(unaff_x19 + 0x10);
      lVar10 = *plVar12;
      thunk_FUN_00ffe618();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      plVar7 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0235a448,*(int *)(lVar10 + 0x18) << 1);
      uVar15 = 0;
      plVar14 = plVar7 + 4;
      while( true ) {
        lVar10 = *plVar12;
        thunk_FUN_00ffe618();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar15) break;
        lVar10 = *plVar12;
        thunk_FUN_00ffe618();
        uVar13 = *(uint *)(unaff_x19 + 0x18);
        thunk_FUN_00ffe618();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar13 = uVar13 & iVar3 + (int)uVar15;
        if (*(uint *)(lVar10 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        lVar10 = *(long *)(lVar10 + (long)(int)uVar13 * 8 + 0x20);
        if ((lVar10 != 0) &&
           (lVar8 = thunk_FUN_0103ffe0(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
          uVar9 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
          FUN_00fdc400(uVar9,0);
        }
        if (*(uint *)(plVar7 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        *plVar14 = lVar10;
        thunk_FUN_0106e12c(plVar14,lVar10);
        uVar15 = uVar15 + 1;
        plVar14 = plVar14 + 1;
      }
      thunk_FUN_00ffe618();
      *plVar12 = (long)plVar7;
      thunk_FUN_0106e12c(plVar12,plVar7);
      thunk_FUN_00ffe618();
      *(undefined4 *)(unaff_x19 + 0x1c) = 0;
      thunk_FUN_00ffe618();
      iVar3 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x20) = uVar1;
      thunk_FUN_00ffe618();
      thunk_FUN_00ffe618();
      *(uint *)(unaff_x19 + 0x18) = iVar3 << 1 | 1;
      uVar13 = uVar1;
    }
    lVar10 = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_00ffe618();
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_00ffe618();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar1 = uVar1 & uVar13;
    if (*(uint *)(lVar10 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    thunk_FUN_00ffe618();
    *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
    thunk_FUN_0106e12c();
    thunk_FUN_00ffe618();
    *(uint *)(unaff_x19 + 0x20) = uVar13 + 1;
    if (cStack0000000000000008 != '\0') {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01dad12c(unaff_x19 + 0x24,0);
    }
  }
  return;
}


