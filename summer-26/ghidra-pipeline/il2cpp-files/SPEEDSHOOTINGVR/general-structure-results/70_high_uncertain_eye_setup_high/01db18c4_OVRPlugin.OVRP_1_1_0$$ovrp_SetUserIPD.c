/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserIPD
ENTRY_POINT: 01db18c4
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

undefined4 OVRPlugin_OVRP_1_1_0__ovrp_SetUserIPD(void)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  char cStack0000000000000004;
  
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01db18a8 with catch @ 01db18c4
                        */
  thunk_FUN_00ffe618();
  iVar2 = *(int *)(unaff_x19 + 0x1c);
  uVar7 = unaff_w21 - 2;
  thunk_FUN_00ffe618();
  puVar4 = PTR_DAT_0235a210;
  if (iVar2 <= (int)uVar7) {
                    /* try { // try from 01db1918 to 01eb1927 has its CatchHandler @ 01db1928 */
    do {
      lVar6 = *(long *)(unaff_x19 + 0x10);
                    /* catch() { ... } // from try @ 01db18dc with catch @ 01db1928
                       catch() { ... } // from try @ 01db1918 with catch @ 01db1928 */
      thunk_FUN_00ffe618();
                    /* try { // try from 01db192c to 01eb192f has its CatchHandler @ 01db1938 */
      uVar3 = *(uint *)(unaff_x19 + 0x18);
                    /* try { // try from 01db1930 to 01eb193b has its CatchHandler @ 01db17f8 */
      thunk_FUN_00ffe618();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01db192c with catch @ 01db1938
                        */
      uVar3 = uVar3 & uVar7;
      if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      if (*(long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20) == unaff_x20) {
        cStack0000000000000004 = '\0';
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        FUN_01dac6f8(unaff_x19 + 0x24,&stack0x00000004);
        lVar6 = *(long *)(unaff_x19 + 0x10);
        thunk_FUN_00ffe618();
        uVar3 = *(uint *)(unaff_x19 + 0x18);
        thunk_FUN_00ffe618();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar3 = uVar3 & uVar7;
        if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        if (*(long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20) == 0) {
          uVar5 = 0;
        }
        else {
          lVar6 = *(long *)(unaff_x19 + 0x10);
          thunk_FUN_00ffe618();
          uVar3 = *(uint *)(unaff_x19 + 0x18);
          thunk_FUN_00ffe618();
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          uVar3 = uVar3 & uVar7;
          if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          thunk_FUN_00ffe618();
          puVar1 = (undefined8 *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
          *puVar1 = 0;
          thunk_FUN_0106e12c(puVar1,0);
          uVar3 = *(uint *)(unaff_x19 + 0x20);
          thunk_FUN_00ffe618();
          if (uVar7 == uVar3) {
            iVar2 = *(int *)(unaff_x19 + 0x20);
            thunk_FUN_00ffe618();
            thunk_FUN_00ffe618();
            *(int *)(unaff_x19 + 0x20) = iVar2 + -1;
          }
          else {
            uVar3 = *(uint *)(unaff_x19 + 0x1c);
            thunk_FUN_00ffe618();
            if (uVar7 == uVar3) {
              iVar2 = *(int *)(unaff_x19 + 0x1c);
              thunk_FUN_00ffe618();
              thunk_FUN_00ffe618();
              *(int *)(unaff_x19 + 0x1c) = iVar2 + 1;
            }
          }
          uVar5 = 1;
        }
        if (cStack0000000000000004 == '\0') {
          return uVar5;
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        FUN_01dad12c(unaff_x19 + 0x24,0);
        return uVar5;
      }
      iVar2 = *(int *)(unaff_x19 + 0x1c);
      uVar7 = uVar7 - 1;
      thunk_FUN_00ffe618();
    } while (iVar2 <= (int)uVar7);
  }
                    /* try { // try from 01db18dc to 01eb18f3 has its CatchHandler @ 01db1928 */
                    /* try { // try from 01db18f4 to 01eb1917 has its CatchHandler @ 01db17f8 */
  return 0;
}


