/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserIPD
ENTRY_POINT: 01db1860
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


/* WARNING: Removing unreachable block (ram,0x01db1b14) */

uint OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(ulong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  char cStack0000000000000004;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0235a210);
    *(undefined1 *)(unaff_x21 + 0x9e6) = 1;
  }
  in_stack_00000008 = 0;
  cStack0000000000000004 = 0;
  lVar7 = *(long *)(unaff_x19 + 0x10);
  thunk_FUN_00ffe618();
  iVar2 = *(int *)(unaff_x19 + 0x20);
  thunk_FUN_00ffe618();
  uVar6 = *(uint *)(unaff_x19 + 0x18);
  thunk_FUN_00ffe618();
  if (lVar7 == 0) {
LAB_01db1b10:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar6 = uVar6 & iVar2 - 1U;
                    /* try { // try from 01db18a8 to 01eb18af has its CatchHandler @ 01db18c4 */
  if (*(uint *)(lVar7 + 0x18) <= uVar6) {
LAB_01db1b0c:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
                    /* try { // try from 01db18b0 to 01eb18db has its CatchHandler @ 01db17f8 */
  if (*(long *)(lVar7 + (long)(int)uVar6 * 8 + 0x20) == unaff_x20) {
    uVar6 = FUN_01db1d38();
  }
  else {
    iVar2 = *(int *)(unaff_x19 + 0x20);
    thunk_FUN_00ffe618();
    iVar3 = *(int *)(unaff_x19 + 0x1c);
    uVar6 = iVar2 - 2;
    thunk_FUN_00ffe618();
    puVar5 = PTR_DAT_0235a210;
    if (iVar3 <= (int)uVar6) {
      do {
        lVar7 = *(long *)(unaff_x19 + 0x10);
        thunk_FUN_00ffe618();
        uVar4 = *(uint *)(unaff_x19 + 0x18);
        thunk_FUN_00ffe618();
        if (lVar7 == 0) goto LAB_01db1b10;
        uVar4 = uVar4 & uVar6;
        if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_01db1b0c;
        if (*(long *)(lVar7 + (long)(int)uVar4 * 8 + 0x20) == unaff_x20) {
          cStack0000000000000004 = '\0';
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          FUN_01dac6f8(unaff_x19 + 0x24,&stack0x00000004);
          lVar7 = *(long *)(unaff_x19 + 0x10);
          thunk_FUN_00ffe618();
          uVar4 = *(uint *)(unaff_x19 + 0x18);
          thunk_FUN_00ffe618();
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          uVar4 = uVar4 & uVar6;
          if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          if (*(long *)(lVar7 + (long)(int)uVar4 * 8 + 0x20) == 0) {
            uVar6 = 0;
          }
          else {
            lVar7 = *(long *)(unaff_x19 + 0x10);
            thunk_FUN_00ffe618();
            uVar4 = *(uint *)(unaff_x19 + 0x18);
            thunk_FUN_00ffe618();
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            uVar4 = uVar4 & uVar6;
            if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc53c();
            }
            thunk_FUN_00ffe618();
            puVar1 = (undefined8 *)(lVar7 + (long)(int)uVar4 * 8 + 0x20);
            *puVar1 = 0;
            thunk_FUN_0106e12c(puVar1,0);
            uVar4 = *(uint *)(unaff_x19 + 0x20);
            thunk_FUN_00ffe618();
            if (uVar6 == uVar4) {
              iVar2 = *(int *)(unaff_x19 + 0x20);
              thunk_FUN_00ffe618();
              thunk_FUN_00ffe618();
              *(int *)(unaff_x19 + 0x20) = iVar2 + -1;
            }
            else {
              uVar4 = *(uint *)(unaff_x19 + 0x1c);
              thunk_FUN_00ffe618();
              if (uVar6 == uVar4) {
                iVar2 = *(int *)(unaff_x19 + 0x1c);
                thunk_FUN_00ffe618();
                thunk_FUN_00ffe618();
                *(int *)(unaff_x19 + 0x1c) = iVar2 + 1;
              }
            }
            uVar6 = 1;
          }
          if (cStack0000000000000004 != '\0') {
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            FUN_01dad12c(unaff_x19 + 0x24,0);
          }
          goto LAB_01db18f4;
        }
        iVar2 = *(int *)(unaff_x19 + 0x1c);
        uVar6 = uVar6 - 1;
        thunk_FUN_00ffe618();
      } while (iVar2 <= (int)uVar6);
    }
    uVar6 = 0;
  }
LAB_01db18f4:
  return uVar6 & 1;
}


