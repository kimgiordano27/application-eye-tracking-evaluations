/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemBatteryTemperature
ENTRY_POINT: 01db1324
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

void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryTemperature(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long unaff_x22;
  uint unaff_w23;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  char in_stack_00000008;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01dad12c();
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc52c();
  }
  iVar1 = *(int *)(unaff_x19 + 0x1c);
  thunk_FUN_00ffe618();
  iVar2 = *(int *)(unaff_x19 + 0x18);
  thunk_FUN_00ffe618();
  if ((int)unaff_w23 < iVar2 + iVar1) {
    lVar10 = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_00ffe618();
    uVar3 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_00ffe618();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar3 = uVar3 & unaff_w23;
    if (*(uint *)(lVar10 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    thunk_FUN_00ffe618();
    puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
    *puVar11 = unaff_x20;
    thunk_FUN_0106e12c(puVar11);
    thunk_FUN_00ffe618();
    *(uint *)(unaff_x19 + 0x20) = unaff_w23 + 1;
  }
  else {
    in_stack_00000008 = '\0';
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01dac6f8(unaff_x19 + 0x24,&stack0x00000008);
    iVar1 = *(int *)(unaff_x19 + 0x1c);
    thunk_FUN_00ffe618();
    iVar2 = *(int *)(unaff_x19 + 0x20);
    thunk_FUN_00ffe618();
    iVar4 = *(int *)(unaff_x19 + 0x1c);
    thunk_FUN_00ffe618();
    iVar5 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_00ffe618();
    uVar3 = iVar2 - iVar4;
    if (iVar5 <= (int)uVar3) {
      plVar12 = (long *)(unaff_x19 + 0x10);
      lVar10 = *plVar12;
      thunk_FUN_00ffe618();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      plVar7 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0235a448,*(int *)(lVar10 + 0x18) << 1);
      uVar14 = 0;
      plVar13 = plVar7 + 4;
      while( true ) {
        lVar10 = *plVar12;
        thunk_FUN_00ffe618();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar14) break;
        lVar10 = *plVar12;
        thunk_FUN_00ffe618();
        uVar6 = *(uint *)(unaff_x19 + 0x18);
        thunk_FUN_00ffe618();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar6 = uVar6 & iVar1 + (int)uVar14;
        if (*(uint *)(lVar10 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        lVar10 = *(long *)(lVar10 + (long)(int)uVar6 * 8 + 0x20);
        if ((lVar10 != 0) &&
           (lVar8 = thunk_FUN_0103ffe0(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
          uVar9 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
          FUN_00fdc400(uVar9,0);
        }
        if (*(uint *)(plVar7 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        *plVar13 = lVar10;
        thunk_FUN_0106e12c(plVar13,lVar10);
        uVar14 = uVar14 + 1;
        plVar13 = plVar13 + 1;
      }
      thunk_FUN_00ffe618();
      *plVar12 = (long)plVar7;
      thunk_FUN_0106e12c(plVar12,plVar7);
      thunk_FUN_00ffe618();
      *(undefined4 *)(unaff_x19 + 0x1c) = 0;
      thunk_FUN_00ffe618();
      iVar1 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x20) = uVar3;
      thunk_FUN_00ffe618();
      thunk_FUN_00ffe618();
      *(uint *)(unaff_x19 + 0x18) = iVar1 << 1 | 1;
      unaff_w23 = uVar3;
    }
    lVar10 = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_00ffe618();
    uVar3 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_00ffe618();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar3 = uVar3 & unaff_w23;
    if (*(uint *)(lVar10 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    thunk_FUN_00ffe618();
    *(undefined8 *)(lVar10 + (long)(int)uVar3 * 8 + 0x20) = unaff_x20;
    thunk_FUN_0106e12c();
    thunk_FUN_00ffe618();
    *(uint *)(unaff_x19 + 0x20) = unaff_w23 + 1;
    if (in_stack_00000008 != '\0') {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01dad12c(unaff_x19 + 0x24,0);
    }
  }
  return;
}


