/*
FUNCTION_NAME: OVRPlugin.OVRP_1_98_0$$ovrp_RequestBoundaryVisibility
ENTRY_POINT: 01dbeae8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01dbeee0) */

void OVRPlugin_OVRP_1_98_0__ovrp_RequestBoundaryVisibility(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar13;
  long *plVar14;
  
  FUN_00fdc2e4(PTR_DAT_0235a998);
  FUN_00fdc2e4(PTR_DAT_0234bef8);
  FUN_00fdc2e4(PTR_DAT_0235a9a0);
  FUN_00fdc2e4(PTR_DAT_0235a9a8);
  FUN_00fdc2e4(PTR_DAT_0235a9b0);
  FUN_00fdc2e4(PTR_DAT_0235a9b8);
  FUN_00fdc2e4(PTR_DAT_0235a9c0);
  *(undefined1 *)(unaff_x21 + 0xa85) = 1;
  plVar14 = (long *)(unaff_x19 + 0x18);
  lVar13 = *plVar14;
  thunk_FUN_00ffe618();
  plVar6 = (long *)PTR_DAT_0235a988;
  if (lVar13 == 0) {
    lVar13 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a9a8);
    FUN_01897ff8(lVar13,1,*(undefined8 *)PTR_DAT_0235a9a0);
    thunk_FUN_00ffe618();
    *plVar14 = lVar13;
    thunk_FUN_0106e12c(plVar14,lVar13);
    plVar6 = (long *)PTR_DAT_0235a988;
  }
  PTR_DAT_0235a988 = (undefined *)plVar6;
  if (unaff_x20 == (long *)0x0) {
LAB_01dbebe4:
    plVar14 = (long *)thunk_FUN_0103ffe0();
    if (plVar14 != (long *)0x0) {
      lVar10 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *plVar6) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_01dbec64;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_0103c348(plVar14,*plVar6,0);
LAB_01dbec64:
      plVar6 = (long *)(*(code *)*puVar5)(plVar14,puVar5[1]);
      puVar4 = PTR_DAT_0235a9b8;
      puVar3 = PTR_DAT_0235a998;
      puVar2 = PTR_DAT_0234bef8;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      do {
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_01dbecdc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_0103c348(plVar6,*(long *)puVar2,0);
LAB_01dbecdc:
        uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar6 == (long *)0x0) goto LAB_01dbedfc;
          lVar10 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_01dbeda8;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_01dbed90;
        }
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_01dbed38;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_0103c348(plVar6,*(long *)puVar3,0);
LAB_01dbed38:
        uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        uVar7 = FUN_01cbc26c(uVar7,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534(uVar7,uVar7);
        }
        FUN_018986f0(lVar13,uVar7,*(undefined8 *)puVar4);
      } while( true );
    }
    lVar10 = thunk_FUN_0103ffe0();
    if (lVar10 == 0) {
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar7 = thunk_FUN_010400dc();
      uVar8 = thunk_FUN_010303a8(PTR_DAT_0235a9c8);
      uVar9 = thunk_FUN_010303a8(PTR_DAT_0235a9d0);
      FUN_01c5e198(uVar7,uVar8,uVar9,0);
      uVar8 = thunk_FUN_010303a8(PTR_DAT_0235a9d8);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar7,uVar8);
    }
    if (lVar13 == 0) {
LAB_01dbee7c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_018987d4(lVar13,lVar10,*(undefined8 *)PTR_DAT_0235a9b0);
  }
  else {
    lVar10 = *unaff_x20;
    bVar1 = *(byte *)(*(long *)PTR_DAT_0234bbd0 + 0x130);
    if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0234bbd0)) {
      if (lVar10 != *(long *)PTR_DAT_02353440) goto LAB_01dbebe4;
    }
    else {
      FUN_01cbc26c();
    }
    if (lVar13 == 0) goto LAB_01dbee7c;
    FUN_018986f0(lVar13);
  }
LAB_01dbee40:
  if (0 < *(int *)(lVar13 + 0x18)) {
    FUN_01dbf024();
    return;
  }
  return;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_01dbed90:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0234bef0) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_01dbedf0;
    }
  }
LAB_01dbeda8:
  puVar5 = (undefined8 *)FUN_0103c348(plVar6,*(long *)PTR_DAT_0234bef0,0);
LAB_01dbedf0:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_01dbedfc:
  if (lVar13 == 0) goto LAB_01dbee7c;
  goto LAB_01dbee40;
}


