/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserEyeHeight
ENTRY_POINT: 01db1a84
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db1a68) */
/* WARNING: Removing unreachable block (ram,0x01db1a74) */
/* WARNING: Removing unreachable block (ram,0x01db1a78) */

uint OVRPlugin_OVRP_1_1_0__ovrp_SetUserEyeHeight(void)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  long lVar4;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  uint unaff_w26;
  
  while( true ) {
    if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc52c(unaff_x23);
    }
    if (unaff_w24 == 0) break;
    do {
      iVar3 = *(int *)(unaff_x19 + 0x1c);
      unaff_w26 = unaff_w26 - 1;
      thunk_FUN_00ffe618();
      if ((int)unaff_w26 < iVar3) {
        unaff_w22 = 0;
        goto LAB_01db18f4;
      }
      lVar4 = *(long *)(unaff_x19 + 0x10);
      thunk_FUN_00ffe618();
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      thunk_FUN_00ffe618();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      uVar2 = uVar2 & unaff_w26;
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
    } while (*(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20) != unaff_x20);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01dac6f8();
    lVar4 = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_00ffe618();
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_00ffe618();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar2 = uVar2 & unaff_w26;
    if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    if (*(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20) == 0) {
      unaff_w22 = 0;
    }
    else {
      lVar4 = *(long *)(unaff_x19 + 0x10);
      thunk_FUN_00ffe618();
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      thunk_FUN_00ffe618();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      uVar2 = uVar2 & unaff_w26;
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      thunk_FUN_00ffe618();
      puVar1 = (undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
      *puVar1 = 0;
      thunk_FUN_0106e12c(puVar1,0);
      uVar2 = *(uint *)(unaff_x19 + 0x20);
      thunk_FUN_00ffe618();
      if (unaff_w26 == uVar2) {
        iVar3 = *(int *)(unaff_x19 + 0x20);
        thunk_FUN_00ffe618();
        thunk_FUN_00ffe618();
        *(int *)(unaff_x19 + 0x20) = iVar3 + -1;
      }
      else {
        uVar2 = *(uint *)(unaff_x19 + 0x1c);
        thunk_FUN_00ffe618();
        if (unaff_w26 == uVar2) {
          iVar3 = *(int *)(unaff_x19 + 0x1c);
          thunk_FUN_00ffe618();
          thunk_FUN_00ffe618();
          *(int *)(unaff_x19 + 0x1c) = iVar3 + 1;
        }
      }
      unaff_w22 = 1;
    }
    unaff_w24 = 0;
    unaff_x23 = 0;
  }
LAB_01db18f4:
  return unaff_w22 & 1;
}


