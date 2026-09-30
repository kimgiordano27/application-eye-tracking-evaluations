/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$.cctor
ENTRY_POINT: 01dbed60
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01dbee04) */
/* WARNING: Removing unreachable block (ram,0x01dbee80) */
/* WARNING: Removing unreachable block (ram,0x01dbee1c) */
/* WARNING: Removing unreachable block (ram,0x01dbee20) */
/* WARNING: Removing unreachable block (ram,0x01dbeee0) */

void OVRPlugin_OVRP_1_99_0___cctor(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  
  do {
    lVar3 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01dbecdc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0103c348();
LAB_01dbecdc:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_01dbedfc;
      lVar3 = *unaff_x22;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_01dbeda8;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01dbed38;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0103c348();
LAB_01dbed38:
    uVar2 = (*(code *)*puVar1)();
    uVar2 = FUN_01cbc26c(uVar2,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534(uVar2,uVar2);
    }
    FUN_018986f0();
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0234bef0) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_01dbedf0;
    }
  }
LAB_01dbeda8:
  puVar1 = (undefined8 *)FUN_0103c348();
LAB_01dbedf0:
  (*(code *)*puVar1)();
LAB_01dbedfc:
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  if (*(int *)(unaff_x21 + 0x18) < 1) {
    return;
  }
  FUN_01dbf024();
  return;
}


