/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserEyeDepth
ENTRY_POINT: 01db1940
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db1b14) */

undefined4 OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeDepth(void)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint in_w8;
  uint in_w9;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar4;
  long unaff_x23;
  long lVar5;
  long *unaff_x25;
  uint unaff_w26;
  char cStack0000000000000004;
  
  while( true ) {
    if (in_w9 <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    if (*(long *)(unaff_x23 + (long)(int)in_w8 * 8 + 0x20) == unaff_x20) {
      cStack0000000000000004 = '\0';
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01dac6f8();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      thunk_FUN_00ffe618();
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      thunk_FUN_00ffe618();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      uVar2 = uVar2 & unaff_w26;
      if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      if (*(long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) == 0) {
        uVar4 = 0;
      }
      else {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        thunk_FUN_00ffe618();
        uVar2 = *(uint *)(unaff_x19 + 0x18);
        thunk_FUN_00ffe618();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar2 = uVar2 & unaff_w26;
        if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        thunk_FUN_00ffe618();
        puVar1 = (undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
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
        uVar4 = 1;
      }
      if (cStack0000000000000004 != '\0') {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        FUN_01dad12c();
      }
      return uVar4;
    }
    iVar3 = *(int *)(unaff_x19 + 0x1c);
    unaff_w26 = unaff_w26 - 1;
    thunk_FUN_00ffe618();
    if ((int)unaff_w26 < iVar3) {
      return 0;
    }
    unaff_x23 = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_00ffe618();
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_00ffe618();
    if (unaff_x23 == 0) break;
    in_w9 = *(uint *)(unaff_x23 + 0x18);
    in_w8 = uVar2 & unaff_w26;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


