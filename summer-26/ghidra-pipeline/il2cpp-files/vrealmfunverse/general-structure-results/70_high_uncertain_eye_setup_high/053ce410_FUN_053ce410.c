/*
FUNCTION_NAME: FUN_053ce410
ENTRY_POINT: 053ce410
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x053ce730) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_053ce410(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 local_58;
  char local_4c [4];
  long local_48;
  
                    /* try { // try from 053ce424 to 054ce43b has its CatchHandler @ 053ce4bc */
  if ((DAT_066d09bb & 1) == 0) {
                    /* try { // try from 053ce43c to 054ce4db has its CatchHandler @ 053ce220 */
    FUN_02b3c81c(PTR_DAT_06322478);
    FUN_02b3c81c(OVRPlugin_OVRP_0_1_3_TypeInfo);
    DAT_066d09bb = 1;
  }
  local_48 = 0;
  local_4c[0] = '\0';
  local_58 = 0;
  if (*(char *)(param_1 + 0x92) == '\0') {
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_04d94540(uVar8,0,0);
    if ((uVar3 & 1) != 0) {
      local_4c[0] = '\0';
      local_48 = param_1;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053ce424 with catch @ 053ce4bc
                        */
      FUN_04ddecfc(param_1,local_4c,0);
      if (*(char *)(param_1 + 0x92) == '\0') {
        plVar4 = *(long **)(param_1 + 0x10);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
                    /* try { // try from 053ce4dc to 054ce4e7 has its CatchHandler @ 053ce5f0 */
        lVar5 = (**(code **)(*plVar4 + 0x798))(plVar4,0x36,*(undefined8 *)(*plVar4 + 0x7a0));
        puVar2 = OVRPlugin_OVRP_0_1_3_TypeInfo;
        puVar1 = PTR_DAT_06322478;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar7 = *(uint *)(lVar5 + 0x18);
        if (0 < (int)uVar7) {
          uVar9 = 0;
          do {
                    /* try { // try from 053ce514 to 054ce52b has its CatchHandler @ 053ce5e8 */
            if (uVar7 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            plVar4 = *(long **)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
            local_58 = 0;
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
                    /* try { // try from 053ce52c to 054ce537 has its CatchHandler @ 053ce5e4 */
                    /* try { // try from 053ce538 to 054ce603 has its CatchHandler @ 053ce220 */
            uVar8 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
            if ((*(char *)(param_1 + 0x93) != '\0') &&
               (uVar3 = FUN_053d0854(param_1,plVar4,uVar8), (uVar3 & 1) != 0)) {
              uVar6 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
              uVar3 = thunk_FUN_04c08854(uVar6,*(undefined8 *)puVar2,0);
              if (((uVar3 & 1) == 0) && (uVar3 = FUN_04cb9bec(plVar4,0), (uVar3 & 1) != 0)) {
                *(long **)(param_1 + 0x78) = plVar4;
                thunk_FUN_02bb0e9c(param_1 + 0x78,plVar4);
              }
              else {
                uVar6 = FUN_053fcab0(0);
                *(undefined8 *)(param_1 + 0x78) = uVar6;
                thunk_FUN_02bb0e9c(param_1 + 0x78);
              }
            }
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar6 = FUN_053eeffc(0);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053ce52c with catch @ 053ce5e4
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053ce514 with catch @ 053ce5e8
                        */
            uVar3 = FUN_053d0d34(plVar4,uVar8,uVar6,*(undefined8 *)(param_1 + 0x58),&local_58);
            if ((uVar3 & 1) != 0) {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053ce4dc with catch @ 053ce5f0
                        */
              *(long **)(param_1 + 0x58) = plVar4;
              thunk_FUN_02bb0e9c(param_1 + 0x58,plVar4);
            }
                    /* try { // try from 053ce604 to 054ce607 has its CatchHandler @ 053ce628 */
                    /* try { // try from 053ce608 to 054ce617 has its CatchHandler @ 053ce220 */
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar6 = FUN_053ef100(0);
                    /* try { // try from 053ce618 to 054ce627 has its CatchHandler @ 053ce62c */
                    /* catch() { ... } // from try @ 053ce604 with catch @ 053ce628 */
                    /* catch() { ... } // from try @ 053ce618 with catch @ 053ce62c */
            uVar3 = FUN_053d0d34(plVar4,uVar8,uVar6,*(undefined8 *)(param_1 + 0x60),&local_58);
                    /* try { // try from 053ce630 to 054ce633 has its CatchHandler @ 053ce63c */
            if ((uVar3 & 1) != 0) {
                    /* try { // try from 053ce634 to 054ce63f has its CatchHandler @ 053ce220 */
              *(long **)(param_1 + 0x60) = plVar4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 053ce630 with catch @ 053ce63c
                        */
              thunk_FUN_02bb0e9c(param_1 + 0x60,plVar4);
            }
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar6 = FUN_053ef204(0);
            uVar3 = FUN_053d0d34(plVar4,uVar8,uVar6,*(undefined8 *)(param_1 + 0x68),&local_58);
            if ((uVar3 & 1) != 0) {
              *(long **)(param_1 + 0x68) = plVar4;
              thunk_FUN_02bb0e9c(param_1 + 0x68,plVar4);
            }
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar6 = FUN_053ef308(0);
            uVar3 = FUN_053d0d34(plVar4,uVar8,uVar6,*(undefined8 *)(param_1 + 0x70),&local_58);
            if ((uVar3 & 1) != 0) {
              *(long **)(param_1 + 0x70) = plVar4;
              thunk_FUN_02bb0e9c(param_1 + 0x70,plVar4);
            }
            uVar7 = *(uint *)(lVar5 + 0x18);
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uVar7);
        }
        thunk_FUN_02b4aae0(0);
        *(undefined1 *)(param_1 + 0x92) = 1;
      }
      if (local_4c[0] != '\0') {
        thunk_FUN_02b4a54c(local_48,0);
      }
    }
  }
  return;
}


