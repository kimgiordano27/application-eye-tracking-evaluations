/*
FUNCTION_NAME: OVRPlugin.OVRP_1_98_0$$.cctor
ENTRY_POINT: 01dbebe0
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

void OVRPlugin_OVRP_1_98_0___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool in_ZR;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x21;
  
  puVar1 = PTR_DAT_0235a988;
  if (in_ZR) {
    if (unaff_x21 == 0) goto LAB_01dbee7c;
    FUN_018986f0();
  }
  else {
    plVar3 = (long *)thunk_FUN_0103ffe0();
    if (plVar3 != (long *)0x0) {
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_01dbec64;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_0103c348(plVar3,*(long *)puVar1,0);
LAB_01dbec64:
      plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      puVar2 = PTR_DAT_0235a998;
      puVar1 = PTR_DAT_0234bef8;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      do {
        lVar8 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01dbecdc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_0103c348(plVar3,*(long *)puVar1,0);
LAB_01dbecdc:
        uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar3 == (long *)0x0) goto LAB_01dbedfc;
          lVar8 = *plVar3;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_01dbeda8;
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_01dbed90;
        }
        lVar8 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01dbed38;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_0103c348(plVar3,*(long *)puVar2,0);
LAB_01dbed38:
        uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        uVar5 = FUN_01cbc26c(uVar5,0);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534(uVar5,uVar5);
        }
        FUN_018986f0();
      } while( true );
    }
    lVar8 = thunk_FUN_0103ffe0();
    if (lVar8 == 0) {
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar5 = thunk_FUN_010400dc();
      uVar6 = thunk_FUN_010303a8(PTR_DAT_0235a9c8);
      uVar7 = thunk_FUN_010303a8(PTR_DAT_0235a9d0);
      FUN_01c5e198(uVar5,uVar6,uVar7,0);
      uVar6 = thunk_FUN_010303a8(PTR_DAT_0235a9d8);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar5,uVar6);
    }
    if (unaff_x21 == 0) {
LAB_01dbee7c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_018987d4();
  }
  goto LAB_01dbee40;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_01dbed90:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0234bef0) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_01dbedf0;
    }
  }
LAB_01dbeda8:
  puVar4 = (undefined8 *)FUN_0103c348(plVar3,*(long *)PTR_DAT_0234bef0,0);
LAB_01dbedf0:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_01dbedfc:
  if (unaff_x21 == 0) goto LAB_01dbee7c;
LAB_01dbee40:
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    FUN_01dbf024();
    return;
  }
  return;
}


