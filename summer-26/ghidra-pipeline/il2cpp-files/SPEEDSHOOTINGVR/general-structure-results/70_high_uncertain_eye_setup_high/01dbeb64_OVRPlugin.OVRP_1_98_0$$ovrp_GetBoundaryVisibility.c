/*
FUNCTION_NAME: OVRPlugin.OVRP_1_98_0$$ovrp_GetBoundaryVisibility
ENTRY_POINT: 01dbeb64
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01dbeee0) */

void OVRPlugin_OVRP_1_98_0__ovrp_GetBoundaryVisibility(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x20;
  long *unaff_x22;
  
  lVar5 = thunk_FUN_010400dc(*param_1);
  FUN_01897ff8(lVar5,1,*(undefined8 *)PTR_DAT_0235a9a0);
  thunk_FUN_00ffe618();
  *unaff_x22 = lVar5;
  thunk_FUN_0106e12c();
  puVar2 = PTR_DAT_0235a988;
  if (unaff_x20 == (long *)0x0) {
LAB_01dbebe4:
    plVar6 = (long *)thunk_FUN_0103ffe0();
    if (plVar6 != (long *)0x0) {
      lVar11 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_01dbec64;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_0103c348(plVar6,*(long *)puVar2,0);
LAB_01dbec64:
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      puVar4 = PTR_DAT_0235a9b8;
      puVar3 = PTR_DAT_0235a998;
      puVar2 = PTR_DAT_0234bef8;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      do {
        lVar11 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_01dbecdc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_0103c348(plVar6,*(long *)puVar2,0);
LAB_01dbecdc:
        uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar6 == (long *)0x0) goto LAB_01dbedfc;
          lVar11 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_01dbeda8;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_01dbed90;
        }
        lVar11 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_01dbed38;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_0103c348(plVar6,*(long *)puVar3,0);
LAB_01dbed38:
        uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        uVar8 = FUN_01cbc26c(uVar8,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534(uVar8,uVar8);
        }
        FUN_018986f0(lVar5,uVar8,*(undefined8 *)puVar4);
      } while( true );
    }
    lVar11 = thunk_FUN_0103ffe0();
    if (lVar11 == 0) {
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar8 = thunk_FUN_010400dc();
      uVar9 = thunk_FUN_010303a8(PTR_DAT_0235a9c8);
      uVar10 = thunk_FUN_010303a8(PTR_DAT_0235a9d0);
      FUN_01c5e198(uVar8,uVar9,uVar10,0);
      uVar9 = thunk_FUN_010303a8(PTR_DAT_0235a9d8);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar8,uVar9);
    }
    if (lVar5 == 0) {
LAB_01dbee7c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_018987d4(lVar5,lVar11,*(undefined8 *)PTR_DAT_0235a9b0);
  }
  else {
    lVar11 = *unaff_x20;
    bVar1 = *(byte *)(*(long *)PTR_DAT_0234bbd0 + 0x130);
    if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0234bbd0)) {
      if (lVar11 != *(long *)PTR_DAT_02353440) goto LAB_01dbebe4;
    }
    else {
      FUN_01cbc26c();
    }
    if (lVar5 == 0) goto LAB_01dbee7c;
    FUN_018986f0(lVar5);
  }
LAB_01dbee40:
  if (0 < *(int *)(lVar5 + 0x18)) {
    FUN_01dbf024();
    return;
  }
  return;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_01dbed90:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0234bef0) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_01dbedf0;
    }
  }
LAB_01dbeda8:
  puVar7 = (undefined8 *)FUN_0103c348(plVar6,*(long *)PTR_DAT_0234bef0,0);
LAB_01dbedf0:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_01dbedfc:
  if (lVar5 == 0) goto LAB_01dbee7c;
  goto LAB_01dbee40;
}


