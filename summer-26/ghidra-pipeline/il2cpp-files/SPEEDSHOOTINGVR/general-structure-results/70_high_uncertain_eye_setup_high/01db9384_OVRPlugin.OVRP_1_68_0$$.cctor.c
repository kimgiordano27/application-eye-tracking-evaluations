/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$.cctor
ENTRY_POINT: 01db9384
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db952c) */
/* WARNING: Removing unreachable block (ram,0x01db94cc) */
/* WARNING: Removing unreachable block (ram,0x01db9538) */
/* WARNING: Removing unreachable block (ram,0x01db94f0) */

void OVRPlugin_OVRP_1_68_0___cctor(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
code_r0x01db9384:
  uVar2 = (*(code *)*param_1)();
  if ((uVar2 & 1) != 0) {
    lVar4 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01db93e0;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0103c348();
LAB_01db93e0:
    lVar4 = (*(code *)*puVar3)();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar1 = *(uint *)(lVar4 + 0x38);
    thunk_FUN_00ffe618();
    if (((uVar1 >> 0x15 & 1) != 0) &&
       (uVar1 = *(uint *)(lVar4 + 0x38), thunk_FUN_00ffe618(), (uVar1 >> 0x13 & 1) == 0)) {
      lVar4 = *(long *)(lVar4 + 0x48);
      thunk_FUN_00ffe618();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      lVar4 = *(long *)(lVar4 + 0x20);
      thunk_FUN_00ffe618();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      FUN_01dbf094(lVar4,0,0,0);
      FUN_01db8bac();
    }
    lVar4 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          param_1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto code_r0x01db9384;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    param_1 = (undefined8 *)FUN_0103c348();
    goto code_r0x01db9384;
  }
  if (unaff_x21 != (long *)0x0) {
    lVar4 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0234bef0) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01db94b0;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0103c348();
LAB_01db94b0:
    (*(code *)*puVar3)();
  }
  if (in_stack_00000008._4_1_ != '\0') {
    FUN_0102a860();
  }
  thunk_FUN_00ffe618();
  *unaff_x19 = 0;
  thunk_FUN_0106e12c();
  return;
}


