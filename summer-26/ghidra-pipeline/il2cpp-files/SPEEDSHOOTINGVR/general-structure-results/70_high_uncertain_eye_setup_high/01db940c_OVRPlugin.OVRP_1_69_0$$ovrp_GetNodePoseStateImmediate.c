/*
FUNCTION_NAME: OVRPlugin.OVRP_1_69_0$$ovrp_GetNodePoseStateImmediate
ENTRY_POINT: 01db940c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01db952c) */
/* WARNING: Removing unreachable block (ram,0x01db94cc) */
/* WARNING: Removing unreachable block (ram,0x01db9538) */
/* WARNING: Removing unreachable block (ram,0x01db94f0) */

void OVRPlugin_OVRP_1_69_0__ovrp_GetNodePoseStateImmediate(void)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 *unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  long lVar5;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  do {
    lVar5 = *(long *)(unaff_x23 + 0x48);
    thunk_FUN_00ffe618();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar5 = *(long *)(lVar5 + 0x20);
    thunk_FUN_00ffe618();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01dbf094(lVar5,0,0,0);
    FUN_01db8bac();
    do {
      lVar5 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
            goto OVRPlugin_OVRP_1_68_0___cctor;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_0103c348();
OVRPlugin_OVRP_1_68_0___cctor:
      uVar3 = (*(code *)*puVar2)();
      if ((uVar3 & 1) == 0) {
        if (unaff_x21 == (long *)0x0) goto LAB_01db94bc;
        lVar5 = *unaff_x21;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 == 0) goto LAB_01db9494;
        piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_01db947c;
      }
      lVar5 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_01db93e0;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_0103c348();
LAB_01db93e0:
      unaff_x23 = (*(code *)*puVar2)();
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      uVar1 = *(uint *)(unaff_x23 + 0x38);
      thunk_FUN_00ffe618();
    } while (((uVar1 >> 0x15 & 1) == 0) ||
            (uVar1 = *(uint *)(unaff_x23 + 0x38), thunk_FUN_00ffe618(), (uVar1 >> 0x13 & 1) != 0));
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_01db947c:
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0234bef0) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_01db94b0;
    }
  }
LAB_01db9494:
  puVar2 = (undefined8 *)FUN_0103c348();
LAB_01db94b0:
  (*(code *)*puVar2)();
LAB_01db94bc:
  if (in_stack_00000008._4_1_ != '\0') {
    FUN_0102a860();
  }
  thunk_FUN_00ffe618();
  *unaff_x19 = 0;
  thunk_FUN_0106e12c();
  return;
}


